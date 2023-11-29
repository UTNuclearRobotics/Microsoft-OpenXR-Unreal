// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#if PLATFORM_WINDOWS || PLATFORM_HOLOLENS

#include <chrono>

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

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/AllowWindowsPlatformAtomics.h"
#include "Windows/PreWindowsApi.h"

#include <unknwn.h>
#include <winrt/Windows.Media.SpeechRecognition.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Devices.Enumeration.h>
#include <winrt/Windows.Media.Capture.h>
#include <winrt/Windows.Media.Audio.h>
#include <winrt/Windows.Media.Devices.h>
#include <winrt/Windows.Media.MediaProperties.h>
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

using namespace winrt::Windows;

/**
 * 
 */
namespace MicrosoftOpenXR
{
	// this is used to create audio
	struct __declspec(uuid("5B0D3235-4DBA-4D44-865E-8F1D0E4FD04D")) __declspec(novtable) IMemoryBufferByteAccess : ::IUnknown
	{
		virtual HRESULT __stdcall GetBuffer(std::uint8_t** value, std::uint32_t* capacity) = 0;
	};

	class FAudioPlugin : public IOpenXRExtensionPlugin
	{
	public:
		FAudioPlugin();
		~FAudioPlugin();

		void Register();
		void Unregister();
		void OnEndPlay();

		//
		void GetAllIntegratedDevices();
		void DeviceAdded(Devices::Enumeration::DeviceWatcher const& , Devices::Enumeration::DeviceInformation const& addedDevice);
		void GetIntegratedAudioDevices();

		//
		void InitRawAudioCapture();
		void StartRawAudioCapture();
		void GetRawAudioCaptureData();
		void StopRawAudioCapture();

		void GetAudioGraphEncodingProperties();

	private:

		// integrated device objects
		Devices::Enumeration::DeviceWatcher HoloLensDeviceWatcher{ nullptr };
		
		// async processes
		Foundation::IAsyncOperation<Media::Audio::CreateAudioGraphResult> CreateAudioGraphAsyncOperation{ nullptr };
		Foundation::IAsyncOperation<Media::Audio::CreateAudioDeviceInputNodeResult> CreateAudioDeviceInputNodeOperation{ nullptr };
		
		Media::Audio::CreateAudioGraphResult CreateAudioGraphAsyncResult{ nullptr };
		Media::Audio::CreateAudioDeviceInputNodeResult CreateAudioDeviceInputNodeAsyncResult{ nullptr };

		// init audio graph variables
		Media::Audio::AudioGraph MicrophoneAudioGraph{ nullptr };
		Media::Audio::AudioDeviceInputNode AudioInputNode{ nullptr };
		Media::Audio::AudioFrameOutputNode AudioOutputNode{ nullptr };

		// DEBUG: profiling audio capture
		std::chrono::high_resolution_clock::time_point start_time;
		std::chrono::high_resolution_clock::time_point stop_time;
		std::chrono::milliseconds duration{ 0 };
		bool StartAudioCapture = false;
		int NumCaptures{ 0 };

		// publish to robofleet
		AudioData audio_data_;
		URobofleetBase* robofleet_instance_;
		AudioDataStamped audio_data_stamped_;

	};

}

#endif //PLATFORM_WINDOWS || PLATFORM_HOLOLENS