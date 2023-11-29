// Fill out your copyright notice in the Description page of Project Settings.


#include "AudioPlugin.h"

#if PLATFORM_WINDOWS || PLATFORM_HOLOLENS

#include "Engine\Engine.h"
#include "GameDelegates.h"

using namespace winrt::Windows;

namespace MicrosoftOpenXR
{
	FAudioPlugin::FAudioPlugin()
	{

	}

	FAudioPlugin::~FAudioPlugin()
	{

	}

	void FAudioPlugin::Register()
	{
		//UE_LOG(LogHMD, Warning, TEXT("Audio Plugin Register called."));
		IModularFeatures::Get().RegisterModularFeature(GetModularFeatureName(), this);
		FGameDelegates::Get().GetEndPlayMapDelegate().AddRaw(this, &FAudioPlugin::OnEndPlay);
	}

	void FAudioPlugin::Unregister()
	{
		FGameDelegates::Get().GetEndPlayMapDelegate().RemoveAll(this);
		IModularFeatures::Get().UnregisterModularFeature(GetModularFeatureName(), this);
	}

	void FAudioPlugin::OnEndPlay()
	{

	}

	/*
	* FIND ALL INTEGRATED DEVICES ON HARDWARE
	*/
	void FAudioPlugin::GetAllIntegratedDevices()
	{
		HoloLensDeviceWatcher = Devices::Enumeration::DeviceInformation::CreateWatcher();
		HoloLensDeviceWatcher.Added({ this, &FAudioPlugin::DeviceAdded });
		HoloLensDeviceWatcher.Start();
		UE_LOG(LogTemp, Warning, TEXT("Started to listen for devices"));
	}

	void FAudioPlugin::DeviceAdded(Devices::Enumeration::DeviceWatcher const&, Devices::Enumeration::DeviceInformation const& addedDevice)
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
	void FAudioPlugin::GetIntegratedAudioDevices()
	{
		// start async
		auto promise = Devices::Enumeration::DeviceInformation::FindAllAsync(Devices::Enumeration::DeviceClass::AudioCapture);

		// callback on async completed
		promise.Completed([](Foundation::IAsyncOperation<Devices::Enumeration::DeviceInformationCollection> const& sender,
			Foundation::AsyncStatus /* asyncStatus */) {
				auto devices = sender.GetResults();
				UE_LOG(LogTemp, Warning, TEXT("Integratred Audio Devices Found:"));
				for (const auto& device : devices) {
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
	void FAudioPlugin::InitRawAudioCapture()
	{
		// AudioGraph creation.
		Media::Audio::AudioGraphSettings settings(Media::Render::AudioRenderCategory::Speech);
		CreateAudioGraphAsyncOperation = Media::Audio::AudioGraph::CreateAsync(settings);
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
		//winrt::Windows::Media::MediaProperties::AudioEncodingProperties output_properties;
		//output_properties.SampleRate(16000);
		AudioOutputNode = MicrophoneAudioGraph.CreateFrameOutputNode();

		// InputNode creation. Create an object that reads an audio signal from an audio device.
		// TODO: Potentially use other Field: 
		// ref:  https://learn.microsoft.com/en-us/uwp/api/windows.media.capture.mediacategory?view=winrt-22621
		//winrt::Windows::Media::MediaProperties::AudioEncodingProperties input_properties;
		//input_properties.SampleRate(48000);
		CreateAudioDeviceInputNodeOperation = MicrophoneAudioGraph.CreateDeviceInputNodeAsync(
			Media::Capture::MediaCategory::Speech);

		// CallBack when AudioDevice is found from async operation
		CreateAudioDeviceInputNodeOperation.Completed([this](
			Foundation::IAsyncOperation<Media::Audio::CreateAudioDeviceInputNodeResult> const& results,
			auto&& async_status)
			{
				// check
				if (results.get().Status() != Media::Audio::AudioDeviceNodeCreationStatus::Success)
				{
					UE_LOG(LogTemp, Warning, TEXT("failure attempting to access audio input device"));
					return;
				}

				// Create audio input node for graph and start capturing the audio
				AudioInputNode = results.get().DeviceInputNode();
				AudioInputNode.AddOutgoingConnection(AudioOutputNode);
				StartRawAudioCapture();
			});

		robofleet_instance_ = FRobofleetUnrealClientModule::Get()->RobofleetClient;
	}

	// called initially from audio graph init function
	void FAudioPlugin::StartRawAudioCapture()
	{
		MicrophoneAudioGraph.Start();      // first start graph
		AudioInputNode.Start();            // then start input node
		GetAudioGraphEncodingProperties(); // print/send encoding properties

		// audio graph capture callback
		MicrophoneAudioGraph.QuantumStarted([this](auto&& sender, auto&& args)
			{
				// DEBUG: REMOVE
				/*if (!StartAudioCapture) {
					start_time = std::chrono::high_resolution_clock::now();
					StartAudioCapture = true;
				}*/

				GetRawAudioCaptureData();
			});
	}

	void FAudioPlugin::GetAudioGraphEncodingProperties()
	{
		Media::MediaProperties::AudioEncodingProperties encoding_properties = AudioInputNode.EncodingProperties();
		
		// print out
		UE_LOG(LogTemp, Warning, TEXT("channels: %d"), encoding_properties.ChannelCount());
		UE_LOG(LogTemp, Warning, TEXT("sample_rate: %d Hz"), encoding_properties.SampleRate());
		UE_LOG(LogTemp, Warning, TEXT("sample_format: %s"), encoding_properties.Type().c_str());
		UE_LOG(LogTemp, Warning, TEXT("bitrate: %d bits/s"), encoding_properties.Bitrate());
		UE_LOG(LogTemp, Warning, TEXT("bit depth / bits per sample: %d bits per sample"), encoding_properties.BitsPerSample());

		// create struct
		/*AudioInfo audio_info;
		audio_info.channels = encoding_properties.ChannelCount();
		audio_info.sample_rate = encoding_properties.SampleRate();
		audio_info.sample_format = "S32LE";
		audio_info.bitrate = encoding_properties.Bitrate();
		audio_info.coding_format = "wave";*/

		// Publish
		//FRobofleetUnrealClientModule::Get()->RobofleetClient->PublishAudioInfo("microphone/info", "hololens", audio_info);
	}

	void FAudioPlugin::GetRawAudioCaptureData()
	{
		// init
		uint8_t* dataInBytes{ nullptr };
		uint32_t capacityInBytes{ 0U };

		Media::AudioFrame audio_frame = AudioOutputNode.GetFrame();
		Media::AudioBuffer buffer = audio_frame.LockBuffer(
			Media::AudioBufferAccessMode::Read);
		Foundation::IMemoryBufferReference reference = buffer.CreateReference(); // ref: https://learn.microsoft.com/en-us/uwp/api/windows.media.audiobuffer.createreference?view=winrt-22621#windows-media-audiobuffer-createreference
		
		// fill data
		auto byteAccess = reference.as<IMemoryBufferByteAccess>();
		winrt::check_hresult(byteAccess->GetBuffer(&dataInBytes, &capacityInBytes));

		// fill data
		audio_data_.data.clear();
		audio_data_.data.resize(capacityInBytes);
		memcpy(audio_data_.data.data(), dataInBytes, capacityInBytes);

		// publish over robofleet
		FRobofleetUnrealClientModule::Get()->RobofleetClient->PublishAudioData("microphone/data", "hololens", audio_data_);

		// DEBUG: to remove
		// NumCaptures++;
	}

	void FAudioPlugin::StopRawAudioCapture()
	{
		AudioInputNode.Stop();       // stop audio input node

		//// DEBUG: remove
		//stop_time = std::chrono::high_resolution_clock::now();

		MicrophoneAudioGraph.Stop(); // stop AudioGraph object

		//// DEBUG: remove
		//duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop_time - start_time);
		//float DurationInSeconds = static_cast<float>(duration.count()) / 1000.0f;
		//UE_LOG(LogTemp, Warning, TEXT("Audio Capture Stopped"));
		//UE_LOG(LogTemp, Warning, TEXT("Time elapsed: %f s"), DurationInSeconds);
		//UE_LOG(LogTemp, Warning, TEXT("Num Audio Messages: %d"), NumCaptures);
	}




} // namespace MicrosoftOpenXR

#endif //PLATFORM_WINDOWS || PLATFORM_HOLOLENS



