// Copyright (c) 2020 Microsoft Corporation.
// Licensed under the MIT License.

// Known bug with speech over remoting as of the 2.6.2 remoting NuGet package:
// Adding and removing keywords at runtime is not currently supported.  
// All keywords the app uses when remoting must be declared in the input system.

#include "SpeechPlugin.h"

#if PLATFORM_WINDOWS || PLATFORM_HOLOLENS

#include "Engine\Engine.h"
#include "GameDelegates.h"

using namespace winrt::Windows::Media::SpeechRecognition;
using namespace winrt::Windows::Devices::Enumeration;
using namespace winrt::Windows::Media::Capture;
using namespace winrt::Windows::Media::Capture::Frames;
using namespace winrt::Windows::Media::Audio;
using namespace winrt::Windows::Media::Render;
//using namespace winrt::Windows::Storage::Streams;

namespace MicrosoftOpenXR
{
	void FSpeechPlugin::Register()
	{
		UE_LOG(LogHMD, Warning, TEXT("Register called."));
		IModularFeatures::Get().RegisterModularFeature(GetModularFeatureName(), this);

		FGameDelegates::Get().GetEndPlayMapDelegate().AddRaw(this, &FSpeechPlugin::OnEndPlay);
	}

	void FSpeechPlugin::Unregister()
	{
		FGameDelegates::Get().GetEndPlayMapDelegate().RemoveAll(this);
		IModularFeatures::Get().UnregisterModularFeature(GetModularFeatureName(), this);
	}

	void FSpeechPlugin::OnEndPlay()
	{
		//remove keys from "speech" namespace
		EKeys::RemoveKeysWithCategory(FInputActionSpeechMapping::GetKeyCategory());

		StopSpeechRecognizer();

		Keywords.clear();
		KeywordMap.Empty();
	}

	/*
	* FIND ALL INTEGRATED DEVICES ON HARDWARE
	*/
	void FSpeechPlugin::GetAllIntegratedDevices()
	{
		HoloLensDeviceWatcher = DeviceInformation::CreateWatcher();
		HoloLensDeviceWatcher.Added({ this, &FSpeechPlugin::DeviceAdded });
		HoloLensDeviceWatcher.Start();
		UE_LOG(LogTemp, Warning, TEXT("Started to listen for devices"));
	}

	void FSpeechPlugin::DeviceAdded(DeviceWatcher const&, DeviceInformation const& addedDevice)
	{
		// Get and print device information
		UE_LOG(LogTemp, Warning, TEXT("Integrated Device Found:"));
		UE_LOG(LogTemp, Warning, TEXT("Device ID: %s"), addedDevice.Id().c_str());
		UE_LOG(LogTemp, Warning, TEXT("Device Name: %s"), addedDevice.Name().c_str());
	}

	/*
	 * FIND ONLY INTEGRATED AUDIO INPUT DEVICES (MICROPHONES)
	 * REF: https://learn.microsoft.com/en-us/azure/ai-services/speech-service/how-to-select-audio-input-devices
	 */
	void FSpeechPlugin::GetIntegratedAudioDevices()
	{
		// start async
		auto promise = DeviceInformation::FindAllAsync(DeviceClass::AudioCapture);

		// callback on async completed
		promise.Completed([](winrt::Windows::Foundation::IAsyncOperation<DeviceInformationCollection> const& sender,
				winrt::Windows::Foundation::AsyncStatus /* asyncStatus */) {
					auto devices = sender.GetResults();
					UE_LOG(LogTemp, Warning, TEXT("Integratred Audio Devices Found:"));
					for (const auto& device : devices){	
						UE_LOG(LogTemp, Warning, TEXT("Device Name: %s; ID: %s"), device.Name().c_str(), device.Id().c_str());
					}
			});
	}

	/*
	 * CAPTURE RAW AUDIO
	 * ABOUT: AudioGraph approach. Works using editor.
	 * TODO: get this working on HoloLens.
	 * REF: https://github.com/xris1658/cppwinrt-notes/blob/main/AudioGraph-20210617.md
	 */
	void FSpeechPlugin::InitRawAudioCaptureAG()
	{
		// AudioGraph creation.
		AudioGraphSettings settings(winrt::Windows::Media::Render::AudioRenderCategory::Media);
		settings.EncodingProperties().CreateMp3(44100, 2, 12288000); // <- this is not sticking :(
		CreateAudioGraphAsyncOperation = AudioGraph::CreateAsync(settings);
		CreateAudioGraphAsyncResult = CreateAudioGraphAsyncOperation.get();

		// Check
		if (CreateAudioGraphAsyncResult.Status() != decltype(CreateAudioGraphAsyncResult.Status())::Success)  
		{
			UE_LOG(LogTemp, Warning, TEXT("Creating an audio graph "));
			return;
		}

		// Declare AudioGraph object
		MicrophoneAudioGraph = CreateAudioGraphAsyncResult.Graph();

		// OutputNode creation. Create an object that outputs an audio signal to an audio device.
		AudioOutputNode = MicrophoneAudioGraph.CreateFrameOutputNode();

		// InputNode creation. Create an object that reads an audio signal from an audio device.
		// TODO: Potentially use other Field: 
		// ref:  https://learn.microsoft.com/en-us/uwp/api/windows.media.capture.mediacategory?view=winrt-22621
		CreateAudioDeviceInputNodeOperation = MicrophoneAudioGraph.CreateDeviceInputNodeAsync(
			winrt::Windows::Media::Capture::MediaCategory::Media);
		
		// CallBack when AudioDevice is found from async operation
		CreateAudioDeviceInputNodeOperation.Completed([this](
			winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Audio::CreateAudioDeviceInputNodeResult> const& results, 
			auto&& async_status)
			{
				// check
				if (results.get().Status() != winrt::Windows::Media::Audio::AudioDeviceNodeCreationStatus::Success)
				{
					UE_LOG(LogTemp, Warning, TEXT("failure attempting to access audio input device"));
					return;
				}

				// Create audio input node for graph and start capturing the audio
				AudioInputNode = results.get().DeviceInputNode();
				AudioInputNode.AddOutgoingConnection(AudioOutputNode);
				StartRawAudioCapture();

				// Print out audio device that is being used for node.
				//winrt::Windows::Devices::Enumeration::DeviceInformation device_info = input.Device(); // <- Cant get this to work.
			});
	}

	void FSpeechPlugin::StartRawAudioCapture()
	{
		MicrophoneAudioGraph.Start(); // first start graph
		AudioInputNode.Start();       // next start input node
		GetAudioGraphEncodingProperties();
		// std::this_thread::sleep_for(std::chrono::seconds(1));
		// Audio Graph CallBack
		// 
		//MicrophoneAudioGraph.QuantumStarted([this](auto&& sender, auto&& args)
		//	{
		//		//UE_LOG(LogTemp, Warning, TEXT("Working"));
		//		GetRawAudioData();
		//	});
	}

	void FSpeechPlugin::GetRawAudioData()
	{
		// init
		winrt::Windows::Media::AudioFrame audio_frame = AudioOutputNode.GetFrame();
		winrt::Windows::Media::AudioBuffer buffer = audio_frame.LockBuffer(
			winrt::Windows::Media::AudioBufferAccessMode::Read);
		winrt::Windows::Foundation::IMemoryBufferReference reference = buffer.CreateReference(); // ref: https://learn.microsoft.com/en-us/uwp/api/windows.media.audiobuffer.createreference?view=winrt-22621#windows-media-audiobuffer-createreference
		std::uint8_t* dataInBytes = nullptr; 
		std::uint32_t capacityInBytes = 0U;

		winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan> dur = audio_frame.Duration();
		winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan> sys_timestamp = audio_frame.SystemRelativeTime();

		auto byteAccess = reference.as<IMemoryBufferByteAccess>();
		winrt::check_hresult(byteAccess->GetBuffer(&dataInBytes, &capacityInBytes)); // fill data

		// Print
		for (std::uint32_t i = 0; i < 1000; i++) 
		{
			UE_LOG(LogTemp, Warning, TEXT("dataInBytes = %d"), dataInBytes[i]);
		}
		//UE_LOG(LogTemp, Warning, TEXT("Buffer Length: %d"), buffer.Length());
		UE_LOG(LogTemp, Warning, TEXT("Size of dataInBytes: %d bytes"), capacityInBytes);
		//float* dataInFloat = reinterpret_cast<float*>(dataInBytes); // needed?
	}

	void FSpeechPlugin::GetAudioGraphEncodingProperties()
	{
		winrt::Windows::Media::MediaProperties::AudioEncodingProperties encoding_properties = AudioOutputNode.EncodingProperties();
		UE_LOG(LogTemp, Warning, TEXT("channels: %d"), encoding_properties.ChannelCount());
		UE_LOG(LogTemp, Warning, TEXT("sample_rate: %d Hz"), encoding_properties.SampleRate());
		UE_LOG(LogTemp, Warning, TEXT("sample_format: %s"), encoding_properties.Type().c_str());
		UE_LOG(LogTemp, Warning, TEXT("bitrate: %d bits/s"), encoding_properties.Bitrate());
		UE_LOG(LogTemp, Warning, TEXT("bit depth / bits per sample: %d bits per sample"), encoding_properties.BitsPerSample());
	}

	void FSpeechPlugin::StopRawAudioCapture()
	{
		AudioInputNode.Stop();       // stop audio input node
		MicrophoneAudioGraph.Stop(); // stop AudioGraph object
		UE_LOG(LogTemp, Warning, TEXT("Stopped"));
	}

	/*
	 * CAPTURE RAW AUDIO
	 * ABOUT: MediaCapture approach.
	 * REF: File in MicrosoftOpenXR Plugin. See -> MicrosoftOpenXR::FLocatableCamPlugin::StartCameraCapture(...);
	 */
	void FSpeechPlugin::InitRawAudioCaptureMCa()
	{
		// lock thread
		std::lock_guard<std::recursive_mutex> lock(RefsLock);

		/*
		Should definitely check game thread here and if the microphones are ready to capture.
		*/

		// find all media devices
		auto FindAllAsyncOp = MediaFrameSourceGroup::FindAllAsync();
		AsyncInfo = FindAllAsyncOp;
		FindAllAsyncOp.Completed([=](auto&& asyncInfo, auto&& asyncStatus)
			{
				std::lock_guard<std::recursive_mutex> lock(RefsLock);
				if (asyncStatus == winrt::Windows::Foundation::AsyncStatus::Canceled)
				{
					// Do not reset AsyncInfo reference here since the function that cancelled this already reassigned it.
					return;
				}
				else if (asyncStatus != winrt::Windows::Foundation::AsyncStatus::Completed)
				{
					AsyncInfo = nullptr;
					return;
				}
				AsyncInfo = nullptr;


				// get results of discovered media frame source groups
				auto DiscoveredGroups = asyncInfo.GetResults();
				MediaFrameSourceGroup ChosenSourceGroup = nullptr;
				MediaFrameSourceInfo ChosenSourceInfo = nullptr;

				// specify the media capture init settings.
				MediaCaptureInitializationSettings CaptureSettings = MediaCaptureInitializationSettings();
				CaptureSettings.StreamingCaptureMode(StreamingCaptureMode::Audio);
				CaptureSettings.MemoryPreference(MediaCaptureMemoryPreference::Auto); // For GPU
				CaptureSettings.VideoProfile(nullptr);

				// loop through discovered groups
				for (auto&& Group : DiscoveredGroups)
				{
					UE_LOG(LogTemp, Warning, TEXT("Discovered Group Info: %s; ID: %s"), Group.DisplayName().c_str(), Group.Id().c_str());

					// For HoloLens, use the video conferencing video profile - this will give the best power consumption.
					auto profileList = MediaCapture::FindKnownVideoProfiles(Group.Id(), KnownVideoProfile::VideoConferencing);

					if (profileList.Size() == 0)
					{
						// No video conferencing profiles in this group, move to the next one.
						continue;
					}

					// Cache the first valid group and profile in case we do not find a profile that matches the input description.
					if (ChosenSourceGroup == nullptr)
					{
						ChosenSourceGroup = Group;

						CaptureSettings.SourceGroup(ChosenSourceGroup);
						CaptureSettings.VideoProfile(profileList.GetAt(0));
					}

					/*
					* Do something here with an if statement to see if we got a microphone.
					*/
				}
			});
	}

	/*
	 * CAPTURE RAW AUDIO
	 * ABOUT: This is an attempt using the MediaCapture approach. Sounds promising, but have some hang ups.
	 * TODO: Continue with is. It builds, but stuck on the final InitializeAsync(initSetting) on line 66 in the following reference code
	 * REF: https://github.com/microsoft/Windows-universal-samples/blob/main/Samples/HolographicMixedRealityCapture/cpp/MediaCaptureManager.cpp
	 */
	void FSpeechPlugin::InitRawAudioCaptureMCb()
	{
		// create a media capture object for audio
		audio_mediaCapture = winrt::Windows::Media::Capture::MediaCapture();

		DeviceInformation::FindAllAsync(DeviceClass::AudioCapture).Completed(
			[this](winrt::Windows::Foundation::IAsyncOperation<DeviceInformationCollection> const& devices,
				winrt::Windows::Foundation::AsyncStatus asyncStatus) {

					// print audio devices found
					auto devices_info = devices.GetResults();
					UE_LOG(LogTemp, Warning, TEXT("Found Connected Audio Devices:"));
					for (const auto& device : devices_info) {
						UE_LOG(LogTemp, Warning, TEXT("Device Name: %s; ID: %s"), device.Name().c_str(), device.Id().c_str());
					}

					// create audio device capture settings
					audio_initSettings = winrt::Windows::Media::Capture::MediaCaptureInitializationSettings();
					audio_initSettings.StreamingCaptureMode(winrt::Windows::Media::Capture::StreamingCaptureMode::Audio);
					audio_initSettings.MediaCategory(winrt::Windows::Media::Capture::MediaCategory::Media);
					//audio_initSettings.AudioDeviceId(devices_info.GetAt(3).Id());
					audio_initSettings.AudioDeviceId(
						winrt::Windows::Media::Devices::MediaDevice::GetDefaultAudioCaptureId(
							winrt::Windows::Media::Devices::AudioDeviceRole::Default));

					//UE_LOG(LogTemp, Warning, TEXT("\nAudio Device Being Used: %s; ID: %s"), devices_info.GetAt(3).Name().c_str(), devices_info.GetAt(0).Id().c_str());
					UE_LOG(LogTemp, Warning, TEXT("\nAudio Device Being Used: %s"), winrt::Windows::Media::Devices::MediaDevice::GetDefaultAudioCaptureId(
						winrt::Windows::Media::Devices::AudioDeviceRole::Default).c_str());

					// select profile for media capture with found devices
					for (const auto& device : devices_info)
					{
						auto profiles = audio_mediaCapture.FindKnownVideoProfiles(device.Id(), KnownVideoProfile::VideoConferencing);
						if (profiles.Size() > 0)
						{
							audio_initSettings.VideoProfile(profiles.GetAt(0));
							UE_LOG(LogTemp, Warning, TEXT("\nI Got a profile."));
						}
					}


					UE_LOG(LogTemp, Warning, TEXT("\nMOVING ON\n"));
					// Create our capture object with our settings
					auto InitializeAsyncOp = audio_mediaCapture.InitializeAsync(audio_initSettings);
					AsyncInfo = InitializeAsyncOp;
					InitializeAsyncOp.Completed([this](auto&& asyncInfo, auto&& asyncStatus)
						{
							std::lock_guard<std::recursive_mutex> lock(RefsLock);
							if (asyncStatus == winrt::Windows::Foundation::AsyncStatus::Canceled)
							{
								// Do not reset AsyncInfo reference here since the function that cancelled this already reassigned it.
								UE_LOG(LogTemp, Warning, TEXT("No Bueno"));
								return;
							}
							else if (asyncStatus != winrt::Windows::Foundation::AsyncStatus::Completed)
							{
								AsyncInfo = nullptr;
								UE_LOG(LogHMD, Log, TEXT("Failed to open camera, please check microphone capability"));
								return;
							}
							UE_LOG(LogTemp, Warning, TEXT("I MADE IT HERE"));
							AsyncInfo = nullptr;

						});

			});
	}

	bool FSpeechPlugin::GetOptionalExtensions(TArray<const ANSICHAR*>& OutExtensions)
	{
#if SUPPORTS_REMOTING
		OutExtensions.Add(XR_MSFT_HOLOGRAPHIC_REMOTING_SPEECH_EXTENSION_NAME);
#endif
		return true;
	}

	const void* FSpeechPlugin::OnCreateSession(XrInstance InInstance, XrSystemId InSystem, const void* InNext)
	{
		
#if SUPPORTS_REMOTING
		bIsRemotingSpeechExtensionEnabled =
			IOpenXRHMDModule::Get().IsExtensionEnabled(XR_MSFT_HOLOGRAPHIC_REMOTING_SPEECH_EXTENSION_NAME);

		if (bIsRemotingSpeechExtensionEnabled)
		{
			XR_ENSURE_MSFT(xrGetInstanceProcAddr(InInstance, "xrInitializeRemotingSpeechMSFT", (PFN_xrVoidFunction*)&xrInitializeRemotingSpeechMSFT));
			XR_ENSURE_MSFT(xrGetInstanceProcAddr(InInstance, "xrRetrieveRemotingSpeechRecognizedTextMSFT", (PFN_xrVoidFunction*)&xrRetrieveRemotingSpeechRecognizedTextMSFT));
		}
#endif

		return InNext;
	}

	const void* FSpeechPlugin::OnBeginSession(XrSession InSession, const void* InNext)
	{
		UE_LOG(LogHMD, Warning, TEXT("Killing On Begin Session"));
		return InNext;
		UE_LOG(LogHMD, Warning, TEXT("OnBeginSession called."));
		Session = InSession;
		dictation_ = FString("Say Something!");
		// Add all speech keywords from the input system
		const TArray <FInputActionSpeechMapping>& SpeechMappings = GetDefault<UInputSettings>()->GetSpeechMappings();
		for (const FInputActionSpeechMapping& SpeechMapping : SpeechMappings)
		{
			FKey Key(SpeechMapping.GetKeyName());
			FString Keyword = SpeechMapping.GetSpeechKeyword().ToString();

			RegisterKeyword(Key, Keyword);
		}

		if (SpeechMappings.Num() > 0)
		{
			StartSpeechRecognizer();
		}

		return InNext;
	}

	void FSpeechPlugin::OnEvent(XrSession InSession, const XrEventDataBaseHeader* InHeader)
	{
		UE_LOG(LogHMD, Warning, TEXT("OnEvent called."));
#if SUPPORTS_REMOTING
		switch ((XrRemotingSpeechStructureType)InHeader->type)
		{
		case XR_TYPE_EVENT_DATA_REMOTING_SPEECH_RECOGNIZED_MSFT:
		{
			auto speechEventData = reinterpret_cast<const XrEventDataRemotingSpeechRecognizedMSFT*>(InHeader);
			std::string text;
			uint32_t dataBytesCount = 0;

			XR_ENSURE_MSFT(xrRetrieveRemotingSpeechRecognizedTextMSFT(InSession, speechEventData->packetId, 0, &dataBytesCount, nullptr));
			text.resize(dataBytesCount);
			XR_ENSURE_MSFT(xrRetrieveRemotingSpeechRecognizedTextMSFT(InSession, speechEventData->packetId, text.size(), &dataBytesCount, text.data()));

			CallSpeechCallback(KeywordMap.FindRef(FString(text.c_str())));
			break;
		}
		case XR_TYPE_EVENT_DATA_REMOTING_SPEECH_RECOGNIZER_STATE_CHANGED_MSFT:
			auto recognizerStateEventData = reinterpret_cast<const XrEventDataRemotingSpeechRecognizerStateChangedMSFT*>(InHeader);
			auto state = recognizerStateEventData->speechRecognizerState;

			if (state == XR_REMOTING_SPEECH_RECOGNIZER_STATE_INITIALIZATION_FAILED_MSFT)
			{
				UE_LOG(LogHMD, Warning, TEXT("Remoting speech recognizer initialization failed."));
				if (strlen(recognizerStateEventData->stateMessage) > 0)
				{
					UE_LOG(LogHMD, Warning, TEXT("Speech recognizer initialization error: %s"), recognizerStateEventData->stateMessage);
				}
			}

			break;
		}
#endif
	}

	void FSpeechPlugin::AddKeywords(TArray<FKeywordInput> KeywordsToAdd)
	{
		UE_LOG(LogHMD, Warning, TEXT("AddKeywords called."));
		if (bIsRemotingSpeechExtensionEnabled)
		{
			UE_LOG(LogHMD, Warning, TEXT("Remoting speech does not currently support adding keywords at runtime."));
			return;
		}

		APlayerController* PlayerController = nullptr;
		UInputSettings* InputSettings = nullptr;
		UInputComponent* InputComponent = nullptr;

		if (KeywordsToAdd.Num() == 0
			|| (PlayerController = GetPlayerController()) == nullptr
			|| (InputSettings = GetMutableDefault<UInputSettings>()) == nullptr
			|| (InputComponent = PlayerController->InputComponent) == nullptr)
		{
			FString WarningText;
			KeywordsToAdd.Num() == 0 ?
				WarningText = FString("FSpeechPlugin::AddKeywords failed: No keywords to register.") :
				WarningText = FString("FSpeechPlugin::AddKeywords failed: Required engine components are null.");

			UE_LOG(LogHMD, Warning, TEXT("%s"), *WarningText);
			return;
		}

		StopSpeechRecognizer();

		for (FKeywordInput InputKeyword : KeywordsToAdd)
		{
			if (InputKeyword.Keyword.IsEmpty() || !InputKeyword.Callback.GetFunctionName().IsValid())
			{
				UE_LOG(LogHMD, Warning, TEXT("Attempting to add an invalid Keyword: %s or Function: %s"), *InputKeyword.Keyword, *InputKeyword.Callback.GetFunctionName().ToString());
				continue;
			}

			FString Keyword = InputKeyword.Keyword;
			// Key name must match FInputActionSpeechMapping::GetKeyName to cleanup correctly.
			FKey Key(FName(*FString::Printf(TEXT("%s_%s"), *FInputActionSpeechMapping::GetKeyCategory().ToString(), *Keyword)));

			// Bind speech delegate to the player's UInputComponent to use the same key events as the input system.
			FInputActionUnifiedDelegate KeywordHandler;
			KeywordHandler.BindDelegate(InputKeyword.Callback.GetUObject(), InputKeyword.Callback.GetFunctionName());

			// Trigger keywords on pressed events.
			FInputActionBinding ActionBinding(Key.GetFName(), IE_Pressed);
			ActionBinding.ActionDelegate = (FInputActionUnifiedDelegate)KeywordHandler;
			
			// Update input system with new binding.
			InputComponent->AddActionBinding(ActionBinding);
			InputSettings->AddActionMapping(FInputActionKeyMapping(Key.GetFName(), Key));

			RegisterKeyword(Key, Keyword);
		}

		StartSpeechRecognizer();
	}

	void FSpeechPlugin::RemoveKeywords(TArray<FString> KeywordsToRemove)
	{
		UE_LOG(LogHMD, Warning, TEXT("RemoveKeywords called."));
		if (bIsRemotingSpeechExtensionEnabled)
		{
			UE_LOG(LogHMD, Warning, TEXT("Remoting speech does not currently support removing keywords at runtime."));
			return;
		}

		if (KeywordsToRemove.Num() == 0)
		{
			UE_LOG(LogHMD, Warning, TEXT("FSpeechPlugin::RemoveKeywords failed: No keywords to remove."));
			return;
		}

		StopSpeechRecognizer();

		for (FString InputKeyword : KeywordsToRemove)
		{
			InputKeyword = InputKeyword.ToLower();

			// Remove local keyword so it is not included in the next recognizer.
			bool KeywordRemoved = false;
			for (int i = 0; i < Keywords.size(); i++)
			{
				if (Keywords.at(i) == winrt::hstring(*InputKeyword))
				{
					Keywords.erase(Keywords.begin() + i);
					KeywordRemoved = true;
					break;
				}
			}
			if (!KeywordRemoved)
			{
				UE_LOG(LogHMD, Warning, TEXT("FSpeechPlugin::RemoveKeywords failed to remove Keyword: %s"), *InputKeyword);
			}

			// Remove from the keyword map.
			if (KeywordMap.Contains(InputKeyword))
			{
				KeywordMap.Remove(InputKeyword);
			}
			else
			{
				UE_LOG(LogHMD, Warning, TEXT("FSpeechPlugin::RemoveKeywords failed to remove Keyword from Key Map: %s"), *InputKeyword);
			}
		}

		StartSpeechRecognizer();
	}

	APlayerController* FSpeechPlugin::GetPlayerController()
	{
		UE_LOG(LogHMD, Warning, TEXT("GetPlayerController Called"));
		for (const FWorldContext& Context : GEngine->GetWorldContexts())
		{
			if (Context.WorldType == EWorldType::Game || Context.WorldType == EWorldType::PIE)
			{
				UWorld* World = Context.World();
				if (World && World->GetGameInstance())
				{
					return World->GetGameInstance()->GetFirstLocalPlayerController();
				}
			}
		}

		return nullptr;
	}

	void FSpeechPlugin::RegisterKeyword(FKey Key, FString Keyword)
	{
		TArray<FKey> Keys;
		EKeys::GetAllKeys(Keys);

		// Only add key if it doesn't already exist.
		if (!Keys.Contains(Key))
		{
			EKeys::AddKey(FKeyDetails(Key, FText(), FKeyDetails::NotBlueprintBindableKey, FInputActionSpeechMapping::GetKeyCategory()));
		}

		Keyword = Keyword.ToLower();
		if (KeywordMap.Contains(Keyword))
		{
			UE_LOG(LogHMD, Warning, TEXT("Adding duplicate keyword: %s. Multiple events may be called for this keyword."), *Keyword);
		}

		Keywords.push_back(winrt::hstring(*Keyword));
		KeywordMap.Add(Keyword, Key);
	}

	void FSpeechPlugin::CallSpeechCallback(FKey InKey)
	{
		UE_LOG(LogHMD, Warning, TEXT("Call Speech callback"));
		APlayerController* PlayerController = GetPlayerController();
		if (PlayerController == nullptr)
		{
			UE_LOG(LogHMD, Warning, TEXT("Attempting to call speech keyword, but PlayerController is not valid"));
			return;
		}

		AsyncTask(ENamedThreads::GameThread, [InKey, PlayerController]()
		{ 
			FInputKeyParams key(InKey, IE_Pressed, 1.0, false);
			PlayerController->InputKey(key);
		});
	}


	void FSpeechPlugin::RegisterSpeechCommandsWithRemoting()
	{
		if (!bIsRemotingSpeechExtensionEnabled)
		{
			// Only use the remoting OpenXR extension when remoting.
			return;
		}

#if SUPPORTS_REMOTING
		const TArray <FInputActionSpeechMapping>& SpeechMappings = GetDefault<UInputSettings>()->GetSpeechMappings();

		XrRemotingSpeechInitInfoMSFT remotingSpeechInfo{ (XrStructureType)XR_TYPE_REMOTING_SPEECH_INIT_INFO_MSFT };
		
		// A language string is required for remoting speech to work.
		// Default to "en-US", but allow for additional languages in the game config.
		FString RemotingSpeechLanguage = "en-US";
		GConfig->GetString(TEXT("/Script/MicrosoftOpenXRRemotingSettings"), TEXT("SpeechLanguage"),
			RemotingSpeechLanguage, GGameIni);
		if (RemotingSpeechLanguage.TrimStartAndEnd().IsEmpty())
		{
			// A SpeechLanguage entry exists, but is empty.  Default back to "en-US"
			RemotingSpeechLanguage = "en-US";
		}

		UE_LOG(LogHMD, Log, TEXT("Remoting initializing with language: %s."), *RemotingSpeechLanguage);

		strcpy_s(remotingSpeechInfo.language, TCHAR_TO_UTF8(*RemotingSpeechLanguage));

		std::vector<const char*> keywords;
		for (const FInputActionSpeechMapping& SpeechMapping : SpeechMappings)
		{
			FString key = SpeechMapping.GetSpeechKeyword().ToString();
			int keywordLength = key.Len() + 1;
			char* keyword = new char[keywordLength];
			strcpy_s(keyword, keywordLength * sizeof(char), (const char*)TCHAR_TO_UTF8(*key));

			keywords.push_back(keyword);
		}

		remotingSpeechInfo.dictionaryEntries = keywords.data();
		remotingSpeechInfo.dictionaryEntriesCount = keywords.size();

		XrResult initializationResult = xrInitializeRemotingSpeechMSFT(Session, &remotingSpeechInfo);
		if (XR_FAILED(initializationResult))
		{
			UE_LOG(LogHMD, Warning, TEXT("Remoting speech failed to initialize with XrResult: %d."), initializationResult);
		}

		for (const char* keyword : keywords)
		{
			delete[] keyword;
		}
#endif
	}

	void FSpeechPlugin::StartSpeechRecognizer()
	{
		
		UE_LOG(LogHMD, Warning, TEXT("Start Speech Recognizer Called"));
		if (bIsRemotingSpeechExtensionEnabled)
		{
			UE_LOG(LogHMD, Warning, TEXT("Start Speech Recognizer Called for remoting"));
			RegisterSpeechCommandsWithRemoting();
			return;
		}

		// removed -> //SpeechRecognitionListConstraint constraint = SpeechRecognitionListConstraint(Keywords);
		SpeechRecognitionTopicConstraint dictationConstraint = SpeechRecognitionTopicConstraint(winrt::Windows::Media::SpeechRecognition::SpeechRecognitionScenario::Dictation, winrt::hstring(*FString("dictation"))); // <- added
		SpeechRecognizer = winrt::Windows::Media::SpeechRecognition::SpeechRecognizer();
		SpeechRecognizer.Constraints().Clear();
		// removed -> //SpeechRecognizer.Constraints().Append(constraint);
		SpeechRecognizer.Constraints().Append(dictationConstraint); // <- added
		

		CompileConstraintsAsyncOperation = SpeechRecognizer.CompileConstraintsAsync();

		CompileConstraintsAsyncOperation.Completed([this](winrt::Windows::Foundation::IAsyncOperation<SpeechRecognitionCompilationResult> asyncOperation, winrt::Windows::Foundation::AsyncStatus status)
		{
			if (asyncOperation.Status() == winrt::Windows::Foundation::AsyncStatus::Completed)
			{
				SpeechRecognitionCompilationResult result = asyncOperation.GetResults();
				if (result.Status() == SpeechRecognitionResultStatus::Success)
				{
					try
					{
						SpeechContinuousRecognitionSession session = SpeechRecognizer.ContinuousRecognitionSession();
						SessionStartAction = session.StartAsync();
					}
					catch (winrt::hresult_error e)
					{
						// We may see an exception if the microphone capability is not enabled.
						UE_LOG(LogHMD, Warning, TEXT("SpeechRecognizer failed to start with error: %s"), e.message().c_str());
						StopSpeechRecognizer();
					}
				}
				else
				{
					UE_LOG(LogHMD, Warning, TEXT("SpeechRecognizer access request returns error: %d"), result.Status());
					StopSpeechRecognizer();
				}
			}
			else if (asyncOperation.Status() != winrt::Windows::Foundation::AsyncStatus::Canceled)
			{
				UE_LOG(LogHMD, Warning, TEXT("SpeechRecognizer.CompileConstraintsAsync returns error: %d"), asyncOperation.Status());
				StopSpeechRecognizer();
			}
		});

		/* removed */
		/*
		ResultsGeneratedToken = SpeechRecognizer.ContinuousRecognitionSession().ResultGenerated(
			[&](SpeechContinuousRecognitionSession sender, SpeechContinuousRecognitionResultGeneratedEventArgs args)
		{
			if (args.Result().Status() == SpeechRecognitionResultStatus::Success &&
				args.Result().Confidence() != SpeechRecognitionConfidence::Rejected)
			{
				FString keyword = FString(args.Result().Text().c_str());
				UE_LOG(LogHMD, Warning, TEXT("Hello World!!!!!!!!!!!!!!!!!"));
				UE_LOG(LogHMD, Warning, TEXT("ResultsGenerated args results: %s"), *keyword);
				CallSpeechCallback(KeywordMap.FindRef(keyword));
			}
		});*/

		/* added */
		ResultsGeneratedToken = SpeechRecognizer.ContinuousRecognitionSession().ResultGenerated(
			[&](SpeechContinuousRecognitionSession sender, SpeechContinuousRecognitionResultGeneratedEventArgs args)
			{
				UE_LOG(LogHMD, Warning, TEXT("Recognized Something"));
				if (args.Result().Confidence() == SpeechRecognitionConfidence::Medium ||
					args.Result().Confidence() == SpeechRecognitionConfidence::High)
				{	
					dictation_ = FString(args.Result().Text().c_str());
					UE_LOG(LogHMD, Warning, TEXT("Speech Recognized Results Generated: %s"), *dictation_);
				}
			});

	}

	void FSpeechPlugin::StopSpeechRecognizer()
	{
		if (bIsRemotingSpeechExtensionEnabled)
		{
			// Remoting does not use the winrt SpeechRecognizer
			return;
		}

		if (CompileConstraintsAsyncOperation && CompileConstraintsAsyncOperation.Status() != winrt::Windows::Foundation::AsyncStatus::Completed)
		{
			CompileConstraintsAsyncOperation.Cancel();
		}

		if (SpeechRecognizer != nullptr &&
			ResultsGeneratedToken.value != 0)
		{
			SpeechRecognizer.ContinuousRecognitionSession().ResultGenerated(ResultsGeneratedToken);
			ResultsGeneratedToken.value = 0;
		}

		if (SpeechRecognizer != nullptr &&
			CompileConstraintsAsyncOperation.Status() == winrt::Windows::Foundation::AsyncStatus::Completed)
		{
			// If the SpeechRecognizer is idle, it is not capturing.  Stopping while idle will throw an exception.
			if ((SessionStartAction != nullptr && SessionStartAction.Status() == winrt::Windows::Foundation::AsyncStatus::Completed) &&
				SpeechRecognizer.State() != winrt::Windows::Media::SpeechRecognition::SpeechRecognizerState::Idle)
			{
				try
				{
					SpeechRecognizer.ContinuousRecognitionSession().StopAsync().Completed([this](
						winrt::Windows::Foundation::IAsyncAction action, winrt::Windows::Foundation::AsyncStatus status)
					{
						// close the speech recognizer after the recognition session stops.
						// Otherwise closing the speech recognizer can cause a hang.
						this->SpeechRecognizer.Constraints().Clear();
						this->SpeechRecognizer.Close();
						this->SpeechRecognizer = nullptr;
					});
				}
				catch (winrt::hresult_error e)
				{
					// We may see an exception if no microphone was attached.
					UE_LOG(LogHMD, Warning, TEXT("ContinuousRecognitionSession failed to stop with error: %d"), e.code().value);
				}
			}
			else
			{
				try
				{
					SpeechRecognizer.Constraints().Clear();
					SpeechRecognizer.Close();
					SpeechRecognizer = nullptr;
				}
				catch (winrt::hresult_error e)
				{
					UE_LOG(LogHMD, Warning, TEXT("SpeechRecognizer failed to close with error: %d"), e.code().value);
				}
			}
		}
	}

	void FSpeechPlugin::GetSpeechDictation(FString& Dictation)
	{
		Dictation = dictation_;
		
	}
}	 // namespace MicrosoftOpenXR

#endif //PLATFORM_WINDOWS || PLATFORM_HOLOLENS
