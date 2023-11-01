// Fill out your copyright notice in the Description page of Project Settings.


#include "AudioPlugin.h"

#if PLATFORM_WINDOWS || PLATFORM_HOLOLENS

#include "Engine\Engine.h"
#include "GameDelegates.h"

namespace MicrosoftOpenXR
{
	void FAudioPlugin::Register()
	{
		UE_LOG(LogHMD, Warning, TEXT("Audio Plugin Register called."));
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

	void FAudioPlugin::StartAudioCapture()
	{
		MediaCapture = winrt::Windows::Media::Capture::MediaCapture();
	}

	void FAudioPlugin::GetAudioDevices()
	{

	}

} // namespace MicrosoftOpenXR

#endif //PLATFORM_WINDOWS || PLATFORM_HOLOLENS



