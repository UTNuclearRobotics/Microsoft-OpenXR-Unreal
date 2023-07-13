// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SpeechPlugin.h"
#include "MicrosoftOpenXR.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpeechPluginBPFunctionLibrary.generated.h"


/**
 * 
 */
UCLASS(ClassGroup = OpenXR)
class MICROSOFTOPENXR_API USpeechPluginBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "MicrosoftOpenXR|OpenXR")
	static void GetSpeech(FString& Dictation);
};
