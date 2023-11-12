// Copyright (c) 2020 Microsoft Corporation.
// Licensed under the MIT License.

#pragma once

#if PLATFORM_WINDOWS || PLATFORM_HOLOLENS

#include "OpenXRCommon.h"
#include "OpenXRCore.h"
#include "MicrosoftOpenXR.h"
#include "HeadMountedDisplayTypes.h"

#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/InputSettings.h"

#include "UObject/NameTypes.h"
#include "UObject/UObjectGlobals.h"
#include "Async/Async.h"

#include <string>
#include <sstream>
#include <mutex>
#include <memory>
#include <cstdint>
#include <chrono>

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/AllowWindowsPlatformAtomics.h"
#include "Windows/PreWindowsApi.h"

#include <unknwn.h>
#include <winrt/Windows.Media.SpeechRecognition.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Media.Capture.h>
#include <winrt/Windows.Media.Audio.h>
#include <winrt/Windows.Devices.Enumeration.h>
#include <winrt/Windows.Media.Devices.h>
#include <winrt/Windows.Media.MediaProperties.h>
#include <winrt/Windows.Media.Capture.Frames.h>
#include <winrt/Windows.Storage.Streams.h>

#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformAtomics.h"
#include "Windows/HideWindowsPlatformTypes.h"

#include "RobofleetBPFunctionLibrary.h"
#include "RobofleetUnrealClientModule.h"
#include "RobofleetClientBase.h"
#include "message_structs.h"

#if SUPPORTS_REMOTING
#include "openxr_msft_holographic_remoting.h "
#include "openxr_msft_remoting_speech.h"
#endif

class URobofleetBase;

namespace MicrosoftOpenXR
{

	// this is used to create audio
	struct __declspec(uuid("5B0D3235-4DBA-4D44-865E-8F1D0E4FD04D")) __declspec(novtable) IMemoryBufferByteAccess : ::IUnknown
	{
		virtual HRESULT __stdcall GetBuffer(std::uint8_t** value, std::uint32_t* capacity) = 0;
	};

	class FSpeechPlugin : public IOpenXRExtensionPlugin
	{
	public:
		void Register();
		void Unregister();

		bool GetOptionalExtensions(TArray<const ANSICHAR*>& OutExtensions) override;
		const void* OnCreateSession(XrInstance InInstance, XrSystemId InSystem, const void* InNext) override;
		const void* OnBeginSession(XrSession InSession, const void* InNext) override;
		void OnEvent(XrSession InSession, const XrEventDataBaseHeader* InHeader) override;
		void OnEndPlay();

		void AddKeywords(TArray<FKeywordInput> KeywordsToAdd);
		void RemoveKeywords(TArray<FString> KeywordsToRemove);

		/*
		 * Added Public Functions for Continuous Speech Dictation & Raw Audio Capture 
		 */
		void GetSpeechDictation(FString& Dictation); // exposed to MicrosoftOpenXR as a (Blueprintable function)
		void GetAllIntegratedDevices();              // gets name and id of all integrated devices
		void GetIntegratedAudioDevices();            // gets all connected audio based devices like a microphone (Blueprintable function)
		void InitRawAudioCaptureMCa();               // raw audio capture using MediaCapture approach (not currently used)
		void InitRawAudioCaptureMCb();               // raw audio capture using MediaCapture approach (not currently used)
		void InitRawAudioCaptureAG();				 // raw audio capture using AudioGraph approach 
		void StartRawAudioCapture();
		void StopRawAudioCapture();
		void GetRawAudioData();
		void GetAudioGraphEncodingProperties();
		
	private:
		winrt::Windows::Media::SpeechRecognition::SpeechRecognizer SpeechRecognizer = nullptr;
		winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult> CompileConstraintsAsyncOperation;
		winrt::Windows::Foundation::IAsyncAction SessionStartAction;
		winrt::event_token ResultsGeneratedToken;
		std::vector<winrt::hstring> Keywords;
		TMap<FString, FKey> KeywordMap;

		APlayerController* GetPlayerController();

		void RegisterKeyword(FKey Key, FString Keyword);
		void CallSpeechCallback(FKey InKey);
		void StartSpeechRecognizer();
		void StopSpeechRecognizer();

		XrSession Session;

		/*
		 * Added Private Functions for Continuous Speech Dictation & Raw Audio Capture
		 */
		FString dictation_;

		// audio graph implementation
		winrt::Windows::Media::Audio::AudioGraph MicrophoneAudioGraph{ nullptr };
		winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Audio::CreateAudioGraphResult> CreateAudioGraphAsyncOperation{ nullptr };
		winrt::Windows::Media::Audio::CreateAudioGraphResult CreateAudioGraphAsyncResult{ nullptr };
		winrt::Windows::Media::Audio::AudioFrameOutputNode AudioOutputNode{ nullptr };

		winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Audio::CreateAudioDeviceInputNodeResult> CreateAudioDeviceInputNodeOperation{ nullptr };
		winrt::Windows::Media::Audio::CreateAudioDeviceInputNodeResult CreateAudioDeviceInputNodeAsyncResult{ nullptr };
		winrt::Windows::Media::Audio::AudioDeviceInputNode AudioInputNode{ nullptr };


		// Define a member variable for the audio capture.
		winrt::Windows::Media::Capture::MediaCapture audio_mediaCapture{ nullptr };
		winrt::Windows::Media::Capture::MediaCaptureInitializationSettings audio_initSettings{ nullptr };
		winrt::Windows::Foundation::IAsyncInfo AsyncInfo;
		// May need to start an Async: winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Capture::MediaCapture::

		// callback used for GetAllDevices(). Called when an integrated device is identified.
		void DeviceAdded(winrt::Windows::Devices::Enumeration::DeviceWatcher const&,
			winrt::Windows::Devices::Enumeration::DeviceInformation const& addedDevice);

		/** Controls access to our references */
		mutable std::recursive_mutex RefsLock;
		/** The objects we need in order to receive frames of camera data */
		winrt::agile_ref<winrt::Windows::Media::Capture::MediaCapture> MicrophoneAudioCapture = nullptr;
		winrt::Windows::Media::Capture::Frames::MediaFrameReader MicrophoneAudioReader = nullptr;
		winrt::Windows::Media::Capture::Frames::MediaFrameSource MicrophoneAudioSource = nullptr;
		winrt::Windows::Media::Devices::Core::CameraIntrinsics CameraIntrinsics = nullptr;

		winrt::Windows::Media::Capture::MediaCapture MediaCapture = nullptr;
		//winrt::Windows::Media::Audio::AudioDeviceInputNode AudioInputDevice = nullptr;
		//winrt::Windows::Devices::Enumeration::DeviceInformation device_info_ = nullptr;
		winrt::Windows::Devices::Enumeration::DeviceWatcher HoloLensDeviceWatcher = nullptr;

		std::uint64_t outputSampleCount = 0U;

		void frameInputQuantumStarted(
			const winrt::Windows::Media::Audio::AudioFrameInputNode&, 
			const winrt::Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs&);

		// robofleet base instance
		URobofleetBase* robofleet_instance_;
		AudioDataStamped audio_data_stamped_;
		AudioData audio_data_;

		std::chrono::high_resolution_clock::time_point start_time;
		std::chrono::high_resolution_clock::time_point stop_time;
		std::chrono::milliseconds duration{ 0 };
		bool StartAudioCapture = false;
		int NumCaptures{ 0 };

		// Remoting
#if SUPPORTS_REMOTING
		PFN_xrInitializeRemotingSpeechMSFT xrInitializeRemotingSpeechMSFT;
		PFN_xrRetrieveRemotingSpeechRecognizedTextMSFT xrRetrieveRemotingSpeechRecognizedTextMSFT;
#endif
		bool bIsRemotingSpeechExtensionEnabled = false;

		void RegisterSpeechCommandsWithRemoting();
	};
}	 // namespace MicrosoftOpenXR

#endif //PLATFORM_WINDOWS || PLATFORM_HOLOLENS
