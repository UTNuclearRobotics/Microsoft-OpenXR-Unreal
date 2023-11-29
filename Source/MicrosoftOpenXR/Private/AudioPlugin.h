// BSD 3-Clause License
//
// Copyright (c) 2023, The University of Texas at Austin
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// * Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
///////////////////////////////////////////////////////////////////////////////

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

namespace MicrosoftOpenXR
{
	/**
	* @brief Used to access audio buffer
	*/ 
	struct __declspec(uuid("5B0D3235-4DBA-4D44-865E-8F1D0E4FD04D")) __declspec(novtable) IMemoryBufferByteAccess : ::IUnknown
	{
		virtual HRESULT __stdcall GetBuffer(std::uint8_t** value, std::uint32_t* capacity) = 0;
	};

	/**
	* @brief Plugin class used to access raw audio (microphone) data on HoloLens 2 
	*        or any other windows based device from Unreal Engine application.
	*/
	class FAudioPlugin : public IOpenXRExtensionPlugin
	{
	public:

		// audio plugin setup methods
		FAudioPlugin();
		~FAudioPlugin();
		void Register();
		void Unregister();
		void OnEndPlay();

		// access integrated devices on HoloLens 2
		void GetAllIntegratedDevices();
		void DeviceAdded(Devices::Enumeration::DeviceWatcher const& , Devices::Enumeration::DeviceInformation const& addedDevice);
		void GetIntegratedAudioDevices();

		// methods required to access raw audio data from HoloLens 2 microphone
		void InitRawAudioCapture();
		void StartRawAudioCapture();
		void GetRawAudioCaptureData();
		void StopRawAudioCapture();

		// log function for audio encoding properties
		void GetAudioGraphEncodingProperties();

	private:

		// integrated device watcher
		Devices::Enumeration::DeviceWatcher HoloLensDeviceWatcher{ nullptr };
		
		// async process objects
		Foundation::IAsyncOperation<Media::Audio::CreateAudioGraphResult> CreateAudioGraphAsyncOperation{ nullptr };
		Foundation::IAsyncOperation<Media::Audio::CreateAudioDeviceInputNodeResult> CreateAudioDeviceInputNodeOperation{ nullptr };
		Media::Audio::CreateAudioGraphResult CreateAudioGraphAsyncResult{ nullptr };
		Media::Audio::CreateAudioDeviceInputNodeResult CreateAudioDeviceInputNodeAsyncResult{ nullptr };

		// init audio graph variables
		Media::Audio::AudioGraph MicrophoneAudioGraph{ nullptr };
		Media::Audio::AudioDeviceInputNode AudioInputNode{ nullptr };
		Media::Audio::AudioFrameOutputNode AudioOutputNode{ nullptr };

		// objects required to publish on robofleet
		AudioData audio_data_;
		URobofleetBase* robofleet_instance_;
		AudioDataStamped audio_data_stamped_;
	};

}

#endif //PLATFORM_WINDOWS || PLATFORM_HOLOLENS