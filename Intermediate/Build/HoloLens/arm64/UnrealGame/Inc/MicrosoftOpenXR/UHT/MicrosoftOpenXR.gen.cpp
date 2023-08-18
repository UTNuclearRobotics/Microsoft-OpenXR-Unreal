// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MicrosoftOpenXR/Public/MicrosoftOpenXR.h"
#include "AugmentedReality/Public/ARTraceResult.h"
#include "MicrosoftOpenXR/Public/AzureObjectAnchorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMicrosoftOpenXR() {}
// Cross Module References
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARTraceResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature();
	MICROSOFTOPENXR_API UClass* Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary();
	MICROSOFTOPENXR_API UClass* Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_NoRegister();
	MICROSOFTOPENXR_API UEnum* Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus();
	MICROSOFTOPENXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration();
	MICROSOFTOPENXR_API UScriptStruct* Z_Construct_UScriptStruct_FKeywordInput();
	UPackage* Z_Construct_UPackage__Script_MicrosoftOpenXR();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeywordInput;
class UScriptStruct* FKeywordInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeywordInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeywordInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeywordInput, Z_Construct_UPackage__Script_MicrosoftOpenXR(), TEXT("KeywordInput"));
	}
	return Z_Registration_Info_UScriptStruct_KeywordInput.OuterSingleton;
}
template<> MICROSOFTOPENXR_API UScriptStruct* StaticStruct<FKeywordInput>()
{
	return FKeywordInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKeywordInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keyword_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Keyword;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeywordInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeywordInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeywordInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Keyword_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Keyword = { "Keyword", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeywordInput, Keyword), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Keyword_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Keyword_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Callback_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeywordInput, Callback), Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Callback_MetaData)) }; // 1633035954
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeywordInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Keyword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Callback,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeywordInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MicrosoftOpenXR,
		nullptr,
		&NewStructOps,
		"KeywordInput",
		sizeof(FKeywordInput),
		alignof(FKeywordInput),
		Z_Construct_UScriptStruct_FKeywordInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeywordInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeywordInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeywordInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeywordInput()
	{
		if (!Z_Registration_Info_UScriptStruct_KeywordInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeywordInput.InnerSingleton, Z_Construct_UScriptStruct_FKeywordInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KeywordInput.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandMeshStatus;
	static UEnum* EHandMeshStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHandMeshStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHandMeshStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus, Z_Construct_UPackage__Script_MicrosoftOpenXR(), TEXT("EHandMeshStatus"));
		}
		return Z_Registration_Info_UEnum_EHandMeshStatus.OuterSingleton;
	}
	template<> MICROSOFTOPENXR_API UEnum* StaticEnum<EHandMeshStatus>()
	{
		return EHandMeshStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus_Statics::Enumerators[] = {
		{ "EHandMeshStatus::NotInitialised", (int64)EHandMeshStatus::NotInitialised },
		{ "EHandMeshStatus::Disabled", (int64)EHandMeshStatus::Disabled },
		{ "EHandMeshStatus::EnabledTrackingGeometry", (int64)EHandMeshStatus::EnabledTrackingGeometry },
		{ "EHandMeshStatus::EnabledXRVisualization", (int64)EHandMeshStatus::EnabledXRVisualization },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Disabled.Name", "EHandMeshStatus::Disabled" },
		{ "EnabledTrackingGeometry.Name", "EHandMeshStatus::EnabledTrackingGeometry" },
		{ "EnabledXRVisualization.Name", "EHandMeshStatus::EnabledXRVisualization" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "NotInitialised.Hidden", "" },
		{ "NotInitialised.Name", "EHandMeshStatus::NotInitialised" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MicrosoftOpenXR,
		nullptr,
		"EHandMeshStatus",
		"EHandMeshStatus",
		Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus()
	{
		if (!Z_Registration_Info_UEnum_EHandMeshStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandMeshStatus.InnerSingleton, Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHandMeshStatus.InnerSingleton;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execLineTraceTrackedAzureObjectAnchors)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FARTraceResult>*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::LineTraceTrackedAzureObjectAnchors(Z_Param_Start,Z_Param_End);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execResetObjectSearchAreaAroundPoint)
	{
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_ClearExistingSearchAreas);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMicrosoftOpenXRFunctionLibrary::ResetObjectSearchAreaAroundPoint(Z_Param_Point,Z_Param_Radius,Z_Param_ClearExistingSearchAreas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execResetObjectSearchAreaAroundHead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UMicrosoftOpenXRFunctionLibrary::ResetObjectSearchAreaAroundHead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execInitAzureObjectAnchors)
	{
		P_GET_STRUCT(FAzureObjectAnchorSessionConfiguration,Z_Param_AOAConfiguration);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMicrosoftOpenXRFunctionLibrary::InitAzureObjectAnchors(Z_Param_AOAConfiguration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execToggleAzureObjectAnchors)
	{
		P_GET_UBOOL(Z_Param_bOnOff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::ToggleAzureObjectAnchors(Z_Param_bOnOff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execCanDetectPlanes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::CanDetectPlanes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execIsRemoting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::IsRemoting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execRemoveKeywords)
	{
		P_GET_TARRAY(FString,Z_Param_Keywords);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMicrosoftOpenXRFunctionLibrary::RemoveKeywords(Z_Param_Keywords);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execAddKeywords)
	{
		P_GET_TARRAY(FKeywordInput,Z_Param_Keywords);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMicrosoftOpenXRFunctionLibrary::AddKeywords(Z_Param_Keywords);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execIsSpeechRecognitionAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::IsSpeechRecognitionAvailable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execGetWorldSpaceRayFromCameraPoint)
	{
		P_GET_STRUCT(FVector2D,Z_Param_pixelCoordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::GetWorldSpaceRayFromCameraPoint(Z_Param_pixelCoordinate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execGetPVCameraIntrinsics)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_focalLength);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_width);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_height);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_principalPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_radialDistortion);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_tangentialDistortion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::GetPVCameraIntrinsics(Z_Param_Out_focalLength,Z_Param_Out_width,Z_Param_Out_height,Z_Param_Out_principalPoint,Z_Param_Out_radialDistortion,Z_Param_Out_tangentialDistortion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execGetPVCameraToWorldTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::GetPVCameraToWorldTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execIsQREnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::IsQREnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execSetUseHandMesh)
	{
		P_GET_ENUM(EHandMeshStatus,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::SetUseHandMesh(EHandMeshStatus(Z_Param_Mode));
		P_NATIVE_END;
	}
	void UMicrosoftOpenXRFunctionLibrary::StaticRegisterNativesUMicrosoftOpenXRFunctionLibrary()
	{
		UClass* Class = UMicrosoftOpenXRFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddKeywords", &UMicrosoftOpenXRFunctionLibrary::execAddKeywords },
			{ "CanDetectPlanes", &UMicrosoftOpenXRFunctionLibrary::execCanDetectPlanes },
			{ "GetPVCameraIntrinsics", &UMicrosoftOpenXRFunctionLibrary::execGetPVCameraIntrinsics },
			{ "GetPVCameraToWorldTransform", &UMicrosoftOpenXRFunctionLibrary::execGetPVCameraToWorldTransform },
			{ "GetWorldSpaceRayFromCameraPoint", &UMicrosoftOpenXRFunctionLibrary::execGetWorldSpaceRayFromCameraPoint },
			{ "InitAzureObjectAnchors", &UMicrosoftOpenXRFunctionLibrary::execInitAzureObjectAnchors },
			{ "IsQREnabled", &UMicrosoftOpenXRFunctionLibrary::execIsQREnabled },
			{ "IsRemoting", &UMicrosoftOpenXRFunctionLibrary::execIsRemoting },
			{ "IsSpeechRecognitionAvailable", &UMicrosoftOpenXRFunctionLibrary::execIsSpeechRecognitionAvailable },
			{ "LineTraceTrackedAzureObjectAnchors", &UMicrosoftOpenXRFunctionLibrary::execLineTraceTrackedAzureObjectAnchors },
			{ "RemoveKeywords", &UMicrosoftOpenXRFunctionLibrary::execRemoveKeywords },
			{ "ResetObjectSearchAreaAroundHead", &UMicrosoftOpenXRFunctionLibrary::execResetObjectSearchAreaAroundHead },
			{ "ResetObjectSearchAreaAroundPoint", &UMicrosoftOpenXRFunctionLibrary::execResetObjectSearchAreaAroundPoint },
			{ "SetUseHandMesh", &UMicrosoftOpenXRFunctionLibrary::execSetUseHandMesh },
			{ "ToggleAzureObjectAnchors", &UMicrosoftOpenXRFunctionLibrary::execToggleAzureObjectAnchors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventAddKeywords_Parms
		{
			TArray<FKeywordInput> Keywords;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keywords_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keywords;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::NewProp_Keywords_Inner = { "Keywords", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKeywordInput, METADATA_PARAMS(nullptr, 0) }; // 1876022756
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventAddKeywords_Parms, Keywords), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1876022756
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::NewProp_Keywords_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::NewProp_Keywords,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09""Add new speech keywords with associated callbacks.\n\n\x09@param Keywords list of keyword and callbacks to add.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Add new speech keywords with associated callbacks.\n\n@param Keywords list of keyword and callbacks to add." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "AddKeywords", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::MicrosoftOpenXRFunctionLibrary_eventAddKeywords_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventCanDetectPlanes_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MicrosoftOpenXRFunctionLibrary_eventCanDetectPlanes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MicrosoftOpenXRFunctionLibrary_eventCanDetectPlanes_Parms), &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "CanDetectPlanes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes_Statics::MicrosoftOpenXRFunctionLibrary_eventCanDetectPlanes_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms
		{
			FVector2D focalLength;
			int32 width;
			int32 height;
			FVector2D principalPoint;
			FVector radialDistortion;
			FVector2D tangentialDistortion;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_focalLength;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_width;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_height;
		static const UECodeGen_Private::FStructPropertyParams NewProp_principalPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_radialDistortion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_tangentialDistortion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_focalLength = { "focalLength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms, focalLength), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms, width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_principalPoint = { "principalPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms, principalPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_radialDistortion = { "radialDistortion", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms, radialDistortion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_tangentialDistortion = { "tangentialDistortion", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms, tangentialDistortion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms), &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_focalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_principalPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_radialDistortion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_tangentialDistortion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09 * Get the PV Camera intrinsics.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Get the PV Camera intrinsics." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "GetPVCameraIntrinsics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventGetPVCameraToWorldTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraToWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09 * Get the transform from PV camera space to Unreal world space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Get the transform from PV camera space to Unreal world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "GetPVCameraToWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::MicrosoftOpenXRFunctionLibrary_eventGetPVCameraToWorldTransform_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventGetWorldSpaceRayFromCameraPoint_Parms
		{
			FVector2D pixelCoordinate;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_pixelCoordinate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::NewProp_pixelCoordinate = { "pixelCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetWorldSpaceRayFromCameraPoint_Parms, pixelCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetWorldSpaceRayFromCameraPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::NewProp_pixelCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09 * Get a ray into the scene from a camera point.\n\x09 * X is left/right\n\x09 * Y is up/down\n\x09 */" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Get a ray into the scene from a camera point.\nX is left/right\nY is up/down" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "GetWorldSpaceRayFromCameraPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::MicrosoftOpenXRFunctionLibrary_eventGetWorldSpaceRayFromCameraPoint_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_InitAzureObjectAnchors_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventInitAzureObjectAnchors_Parms
		{
			FAzureObjectAnchorSessionConfiguration AOAConfiguration;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AOAConfiguration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_InitAzureObjectAnchors_Statics::NewProp_AOAConfiguration = { "AOAConfiguration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventInitAzureObjectAnchors_Parms, AOAConfiguration), Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration, METADATA_PARAMS(nullptr, 0) }; // 3268073299
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_InitAzureObjectAnchors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_InitAzureObjectAnchors_Statics::NewProp_AOAConfiguration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_InitAzureObjectAnchors_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*Initialize Azure Object Anchors with the input session config.  This will start the Azure Object detection.*/" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Initialize Azure Object Anchors with the input session config.  This will start the Azure Object detection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_InitAzureObjectAnchors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "InitAzureObjectAnchors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_InitAzureObjectAnchors_Statics::MicrosoftOpenXRFunctionLibrary_eventInitAzureObjectAnchors_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_InitAzureObjectAnchors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_InitAzureObjectAnchors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_InitAzureObjectAnchors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_InitAzureObjectAnchors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_InitAzureObjectAnchors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_InitAzureObjectAnchors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventIsQREnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MicrosoftOpenXRFunctionLibrary_eventIsQREnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MicrosoftOpenXRFunctionLibrary_eventIsQREnabled_Parms), &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09Is QR Tracking enabled\n\n\x09@return true if the command successes\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Is QR Tracking enabled\n\n@return true if the command successes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "IsQREnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::MicrosoftOpenXRFunctionLibrary_eventIsQREnabled_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventIsRemoting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MicrosoftOpenXRFunctionLibrary_eventIsRemoting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MicrosoftOpenXRFunctionLibrary_eventIsRemoting_Parms), &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "IsRemoting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting_Statics::MicrosoftOpenXRFunctionLibrary_eventIsRemoting_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventIsSpeechRecognitionAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MicrosoftOpenXRFunctionLibrary_eventIsSpeechRecognitionAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MicrosoftOpenXRFunctionLibrary_eventIsSpeechRecognitionAvailable_Parms), &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09""Check if the current platform supports speech recognition.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Check if the current platform supports speech recognition." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "IsSpeechRecognitionAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::MicrosoftOpenXRFunctionLibrary_eventIsSpeechRecognitionAvailable_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventLineTraceTrackedAzureObjectAnchors_Parms
		{
			FVector Start;
			FVector End;
			TArray<FARTraceResult> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventLineTraceTrackedAzureObjectAnchors_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventLineTraceTrackedAzureObjectAnchors_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::NewProp_End_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(nullptr, 0) }; // 3108337464
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventLineTraceTrackedAzureObjectAnchors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3108337464
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*Check for collisions against any tracked Azure Object Anchors along the input ray. */" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Check for collisions against any tracked Azure Object Anchors along the input ray." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "LineTraceTrackedAzureObjectAnchors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::MicrosoftOpenXRFunctionLibrary_eventLineTraceTrackedAzureObjectAnchors_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventRemoveKeywords_Parms
		{
			TArray<FString> Keywords;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Keywords_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keywords;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::NewProp_Keywords_Inner = { "Keywords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventRemoveKeywords_Parms, Keywords), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::NewProp_Keywords_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::NewProp_Keywords,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09Remove speech keywords.\n\n\x09@param Keywords list of keyword to remove.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Remove speech keywords.\n\n@param Keywords list of keyword to remove." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "RemoveKeywords", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::MicrosoftOpenXRFunctionLibrary_eventRemoveKeywords_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundHead_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundHead_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*Clear any existing search areas and look for objects around the current pose, using the search radius from the initial session config.*/" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Clear any existing search areas and look for objects around the current pose, using the search radius from the initial session config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundHead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "ResetObjectSearchAreaAroundHead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundHead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundHead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundHead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundHead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventResetObjectSearchAreaAroundPoint_Parms
		{
			FVector Point;
			float Radius;
			bool ClearExistingSearchAreas;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_ClearExistingSearchAreas_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearExistingSearchAreas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventResetObjectSearchAreaAroundPoint_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventResetObjectSearchAreaAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::NewProp_ClearExistingSearchAreas_SetBit(void* Obj)
	{
		((MicrosoftOpenXRFunctionLibrary_eventResetObjectSearchAreaAroundPoint_Parms*)Obj)->ClearExistingSearchAreas = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::NewProp_ClearExistingSearchAreas = { "ClearExistingSearchAreas", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MicrosoftOpenXRFunctionLibrary_eventResetObjectSearchAreaAroundPoint_Parms), &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::NewProp_ClearExistingSearchAreas_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::NewProp_ClearExistingSearchAreas,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*Add a search area around a point in space and trigger new object detection.\n\x09@param Point Point in space to search around.\n\x09@param Radius Distance around point to search for objects.\n\x09@param ClearExistingSearchAreas If true, clear any existing search areas and only search around this point.\n\x09*/" },
		{ "CPP_Default_ClearExistingSearchAreas", "false" },
		{ "CPP_Default_Radius", "100.000000" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Add a search area around a point in space and trigger new object detection.\n       @param Point Point in space to search around.\n       @param Radius Distance around point to search for objects.\n       @param ClearExistingSearchAreas If true, clear any existing search areas and only search around this point." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "ResetObjectSearchAreaAroundPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::MicrosoftOpenXRFunctionLibrary_eventResetObjectSearchAreaAroundPoint_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventSetUseHandMesh_Parms
		{
			EHandMeshStatus Mode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventSetUseHandMesh_Parms, Mode), Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus, METADATA_PARAMS(nullptr, 0) }; // 2230835668
	void Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MicrosoftOpenXRFunctionLibrary_eventSetUseHandMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MicrosoftOpenXRFunctionLibrary_eventSetUseHandMesh_Parms), &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09Turn Hand Mesh\n\n\x09@param On true if enable\n\x09@return true if the command successes\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Turn Hand Mesh\n\n@param On true if enable\n@return true if the command successes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "SetUseHandMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::MicrosoftOpenXRFunctionLibrary_eventSetUseHandMesh_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventToggleAzureObjectAnchors_Parms
		{
			bool bOnOff;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnOff_MetaData[];
#endif
		static void NewProp_bOnOff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnOff;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::NewProp_bOnOff_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::NewProp_bOnOff_SetBit(void* Obj)
	{
		((MicrosoftOpenXRFunctionLibrary_eventToggleAzureObjectAnchors_Parms*)Obj)->bOnOff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::NewProp_bOnOff = { "bOnOff", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MicrosoftOpenXRFunctionLibrary_eventToggleAzureObjectAnchors_Parms), &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::NewProp_bOnOff_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::NewProp_bOnOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::NewProp_bOnOff_MetaData)) };
	void Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MicrosoftOpenXRFunctionLibrary_eventToggleAzureObjectAnchors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MicrosoftOpenXRFunctionLibrary_eventToggleAzureObjectAnchors_Parms), &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::NewProp_bOnOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*Toggle Azure Object Anchor detection on or off.\n\x09@note After toggling on, InitAzureObjectAnchors must be called with a valid session configuration.\n\x09@param bOnOff Whether to turn on or off.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Toggle Azure Object Anchor detection on or off.\n       @note After toggling on, InitAzureObjectAnchors must be called with a valid session configuration.\n       @param bOnOff Whether to turn on or off." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "ToggleAzureObjectAnchors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::MicrosoftOpenXRFunctionLibrary_eventToggleAzureObjectAnchors_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMicrosoftOpenXRFunctionLibrary);
	UClass* Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_NoRegister()
	{
		return UMicrosoftOpenXRFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MicrosoftOpenXR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords, "AddKeywords" }, // 3902109480
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_CanDetectPlanes, "CanDetectPlanes" }, // 1191616054
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics, "GetPVCameraIntrinsics" }, // 3675777031
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform, "GetPVCameraToWorldTransform" }, // 3277260907
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint, "GetWorldSpaceRayFromCameraPoint" }, // 2648999015
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_InitAzureObjectAnchors, "InitAzureObjectAnchors" }, // 1269410136
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled, "IsQREnabled" }, // 3839530946
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsRemoting, "IsRemoting" }, // 2997000166
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable, "IsSpeechRecognitionAvailable" }, // 4099374879
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_LineTraceTrackedAzureObjectAnchors, "LineTraceTrackedAzureObjectAnchors" }, // 4221626588
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords, "RemoveKeywords" }, // 2727301130
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundHead, "ResetObjectSearchAreaAroundHead" }, // 3199348259
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ResetObjectSearchAreaAroundPoint, "ResetObjectSearchAreaAroundPoint" }, // 1387083095
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh, "SetUseHandMesh" }, // 1968540221
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_ToggleAzureObjectAnchors, "ToggleAzureObjectAnchors" }, // 3795245452
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "OpenXR" },
		{ "IncludePath", "MicrosoftOpenXR.h" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMicrosoftOpenXRFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::ClassParams = {
		&UMicrosoftOpenXRFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UMicrosoftOpenXRFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMicrosoftOpenXRFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMicrosoftOpenXRFunctionLibrary.OuterSingleton;
	}
	template<> MICROSOFTOPENXR_API UClass* StaticClass<UMicrosoftOpenXRFunctionLibrary>()
	{
		return UMicrosoftOpenXRFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMicrosoftOpenXRFunctionLibrary);
	UMicrosoftOpenXRFunctionLibrary::~UMicrosoftOpenXRFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_Statics::EnumInfo[] = {
		{ EHandMeshStatus_StaticEnum, TEXT("EHandMeshStatus"), &Z_Registration_Info_UEnum_EHandMeshStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2230835668U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_Statics::ScriptStructInfo[] = {
		{ FKeywordInput::StaticStruct, Z_Construct_UScriptStruct_FKeywordInput_Statics::NewStructOps, TEXT("KeywordInput"), &Z_Registration_Info_UScriptStruct_KeywordInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeywordInput), 1876022756U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, UMicrosoftOpenXRFunctionLibrary::StaticClass, TEXT("UMicrosoftOpenXRFunctionLibrary"), &Z_Registration_Info_UClass_UMicrosoftOpenXRFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMicrosoftOpenXRFunctionLibrary), 3613734003U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_1382687041(TEXT("/Script/MicrosoftOpenXR"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
