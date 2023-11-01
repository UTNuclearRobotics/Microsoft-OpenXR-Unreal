// Fill out your copyright notice in the Description page of Project Settings.

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
#include <winrt/Windows.Media.Capture.h>
#include <winrt/Windows.Media.Audio.h>
#include <winrt/Windows.Devices.Enumeration.h>
#include <winrt/Windows.Media.Devices.h>

#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformAtomics.h"
#include "Windows/HideWindowsPlatformTypes.h"

#if SUPPORTS_REMOTING
#include "openxr_msft_holographic_remoting.h "
#include "openxr_msft_remoting_speech.h"
#endif


/**
 * 
 */
namespace MicrosoftOpenXR
{
	class FAudioPlugin : public IOpenXRExtensionPlugin
	{
	public:
		FAudioPlugin();
		~FAudioPlugin();

		void Register();
		void Unregister();
		void OnEndPlay();

		void StartAudioCapture();

		void GetAudioDevices();

	private:
		winrt::Windows::Media::Capture::MediaCapture MediaCapture = nullptr;
		//winrt::Windows::Media::Audio::
	};

}

#endif //PLATFORM_WINDOWS || PLATFORM_HOLOLENS