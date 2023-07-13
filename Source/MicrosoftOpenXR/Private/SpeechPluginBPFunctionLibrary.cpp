// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeechPluginBPFunctionLibrary.h"

void USpeechPluginBPFunctionLibrary::GetSpeech(FString& Dictation)
{
	//MicrosoftOpenXR::FSpeechPlugin::GetSpeechDictation(Dictation);
	Dictation = "Hello My Name is Frank";
}