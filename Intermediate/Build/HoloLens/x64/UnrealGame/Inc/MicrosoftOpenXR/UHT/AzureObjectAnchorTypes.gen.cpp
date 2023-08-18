// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MicrosoftOpenXR/Public/AzureObjectAnchorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzureObjectAnchorTypes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	MICROSOFTOPENXR_API UClass* Z_Construct_UClass_UAzureObjectAnchorQueryModifiers();
	MICROSOFTOPENXR_API UClass* Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_NoRegister();
	MICROSOFTOPENXR_API UEnum* Z_Construct_UEnum_MicrosoftOpenXR_EObjectInstanceTrackingMode();
	MICROSOFTOPENXR_API UEnum* Z_Construct_UEnum_MicrosoftOpenXR_EObjectRenderMode();
	MICROSOFTOPENXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration();
	UPackage* Z_Construct_UPackage__Script_MicrosoftOpenXR();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectInstanceTrackingMode;
	static UEnum* EObjectInstanceTrackingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EObjectInstanceTrackingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EObjectInstanceTrackingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MicrosoftOpenXR_EObjectInstanceTrackingMode, Z_Construct_UPackage__Script_MicrosoftOpenXR(), TEXT("EObjectInstanceTrackingMode"));
		}
		return Z_Registration_Info_UEnum_EObjectInstanceTrackingMode.OuterSingleton;
	}
	template<> MICROSOFTOPENXR_API UEnum* StaticEnum<EObjectInstanceTrackingMode>()
	{
		return EObjectInstanceTrackingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MicrosoftOpenXR_EObjectInstanceTrackingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MicrosoftOpenXR_EObjectInstanceTrackingMode_Statics::Enumerators[] = {
		{ "EObjectInstanceTrackingMode::LowLatencyCoarsePosition", (int64)EObjectInstanceTrackingMode::LowLatencyCoarsePosition },
		{ "EObjectInstanceTrackingMode::HighLatencyAccuratePosition", (int64)EObjectInstanceTrackingMode::HighLatencyAccuratePosition },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MicrosoftOpenXR_EObjectInstanceTrackingMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "HighLatencyAccuratePosition.Name", "EObjectInstanceTrackingMode::HighLatencyAccuratePosition" },
		{ "LowLatencyCoarsePosition.Name", "EObjectInstanceTrackingMode::LowLatencyCoarsePosition" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MicrosoftOpenXR_EObjectInstanceTrackingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MicrosoftOpenXR,
		nullptr,
		"EObjectInstanceTrackingMode",
		"EObjectInstanceTrackingMode",
		Z_Construct_UEnum_MicrosoftOpenXR_EObjectInstanceTrackingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MicrosoftOpenXR_EObjectInstanceTrackingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MicrosoftOpenXR_EObjectInstanceTrackingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MicrosoftOpenXR_EObjectInstanceTrackingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MicrosoftOpenXR_EObjectInstanceTrackingMode()
	{
		if (!Z_Registration_Info_UEnum_EObjectInstanceTrackingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectInstanceTrackingMode.InnerSingleton, Z_Construct_UEnum_MicrosoftOpenXR_EObjectInstanceTrackingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EObjectInstanceTrackingMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectRenderMode;
	static UEnum* EObjectRenderMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EObjectRenderMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EObjectRenderMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MicrosoftOpenXR_EObjectRenderMode, Z_Construct_UPackage__Script_MicrosoftOpenXR(), TEXT("EObjectRenderMode"));
		}
		return Z_Registration_Info_UEnum_EObjectRenderMode.OuterSingleton;
	}
	template<> MICROSOFTOPENXR_API UEnum* StaticEnum<EObjectRenderMode>()
	{
		return EObjectRenderMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MicrosoftOpenXR_EObjectRenderMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MicrosoftOpenXR_EObjectRenderMode_Statics::Enumerators[] = {
		{ "EObjectRenderMode::None", (int64)EObjectRenderMode::None },
		{ "EObjectRenderMode::Mesh", (int64)EObjectRenderMode::Mesh },
		{ "EObjectRenderMode::BoundingBox", (int64)EObjectRenderMode::BoundingBox },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MicrosoftOpenXR_EObjectRenderMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoundingBox.Comment", "/*Render just the bounding box*/" },
		{ "BoundingBox.Name", "EObjectRenderMode::BoundingBox" },
		{ "BoundingBox.ToolTip", "Render just the bounding box" },
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*How to render the tracked object with the MRMesh*/" },
		{ "Mesh.Comment", "/*Use the full model mesh data*/" },
		{ "Mesh.Name", "EObjectRenderMode::Mesh" },
		{ "Mesh.ToolTip", "Use the full model mesh data" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
		{ "None.Comment", "/*Do not render the mesh*/" },
		{ "None.Name", "EObjectRenderMode::None" },
		{ "None.ToolTip", "Do not render the mesh" },
		{ "ToolTip", "How to render the tracked object with the MRMesh" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MicrosoftOpenXR_EObjectRenderMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MicrosoftOpenXR,
		nullptr,
		"EObjectRenderMode",
		"EObjectRenderMode",
		Z_Construct_UEnum_MicrosoftOpenXR_EObjectRenderMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MicrosoftOpenXR_EObjectRenderMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MicrosoftOpenXR_EObjectRenderMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MicrosoftOpenXR_EObjectRenderMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MicrosoftOpenXR_EObjectRenderMode()
	{
		if (!Z_Registration_Info_UEnum_EObjectRenderMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectRenderMode.InnerSingleton, Z_Construct_UEnum_MicrosoftOpenXR_EObjectRenderMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EObjectRenderMode.InnerSingleton;
	}
	void UAzureObjectAnchorQueryModifiers::StaticRegisterNativesUAzureObjectAnchorQueryModifiers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzureObjectAnchorQueryModifiers);
	UClass* Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_NoRegister()
	{
		return UAzureObjectAnchorQueryModifiers::StaticClass();
	}
	struct Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseExpectedMaxVerticalOrientationInDegrees_MetaData[];
#endif
		static void NewProp_bUseExpectedMaxVerticalOrientationInDegrees_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExpectedMaxVerticalOrientationInDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedMaxVerticalOrientationInDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedMaxVerticalOrientationInDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseExpectedToBeStandingOnGroundPlane_MetaData[];
#endif
		static void NewProp_bUseExpectedToBeStandingOnGroundPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExpectedToBeStandingOnGroundPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedToBeStandingOnGroundPlane_MetaData[];
#endif
		static void NewProp_ExpectedToBeStandingOnGroundPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ExpectedToBeStandingOnGroundPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxScaleChange_MetaData[];
#endif
		static void NewProp_bUseMaxScaleChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxScaleChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxScaleChange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScaleChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMinSurfaceCoverage_MetaData[];
#endif
		static void NewProp_bUseMinSurfaceCoverage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMinSurfaceCoverage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSurfaceCoverage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSurfaceCoverage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MicrosoftOpenXR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "ClassGroupNames", "AzureObjectAnchors" },
		{ "IncludePath", "AzureObjectAnchorTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseExpectedMaxVerticalOrientationInDegrees_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
	};
#endif
	void Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseExpectedMaxVerticalOrientationInDegrees_SetBit(void* Obj)
	{
		((UAzureObjectAnchorQueryModifiers*)Obj)->bUseExpectedMaxVerticalOrientationInDegrees = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseExpectedMaxVerticalOrientationInDegrees = { "bUseExpectedMaxVerticalOrientationInDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAzureObjectAnchorQueryModifiers), &Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseExpectedMaxVerticalOrientationInDegrees_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseExpectedMaxVerticalOrientationInDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseExpectedMaxVerticalOrientationInDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_ExpectedMaxVerticalOrientationInDegrees_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/*Expected maximum angle in degrees between up direction of an object instance and gravity, from 0 to 180.\n\x09Small value indicates object is expected to be up-right, while large value allows more variation on the layout.*/" },
		{ "EditCondition", "bUseExpectedMaxVerticalOrientationInDegrees" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
		{ "ToolTip", "Expected maximum angle in degrees between up direction of an object instance and gravity, from 0 to 180.\n       Small value indicates object is expected to be up-right, while large value allows more variation on the layout." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_ExpectedMaxVerticalOrientationInDegrees = { "ExpectedMaxVerticalOrientationInDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzureObjectAnchorQueryModifiers, ExpectedMaxVerticalOrientationInDegrees), METADATA_PARAMS(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_ExpectedMaxVerticalOrientationInDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_ExpectedMaxVerticalOrientationInDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseExpectedToBeStandingOnGroundPlane_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
	};
#endif
	void Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseExpectedToBeStandingOnGroundPlane_SetBit(void* Obj)
	{
		((UAzureObjectAnchorQueryModifiers*)Obj)->bUseExpectedToBeStandingOnGroundPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseExpectedToBeStandingOnGroundPlane = { "bUseExpectedToBeStandingOnGroundPlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAzureObjectAnchorQueryModifiers), &Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseExpectedToBeStandingOnGroundPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseExpectedToBeStandingOnGroundPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseExpectedToBeStandingOnGroundPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_ExpectedToBeStandingOnGroundPlane_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*If true, only look for objects on the ground.*/" },
		{ "EditCondition", "bUseExpectedToBeStandingOnGroundPlane" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
		{ "ToolTip", "If true, only look for objects on the ground." },
	};
#endif
	void Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_ExpectedToBeStandingOnGroundPlane_SetBit(void* Obj)
	{
		((UAzureObjectAnchorQueryModifiers*)Obj)->ExpectedToBeStandingOnGroundPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_ExpectedToBeStandingOnGroundPlane = { "ExpectedToBeStandingOnGroundPlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAzureObjectAnchorQueryModifiers), &Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_ExpectedToBeStandingOnGroundPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_ExpectedToBeStandingOnGroundPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_ExpectedToBeStandingOnGroundPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseMaxScaleChange_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
	};
#endif
	void Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseMaxScaleChange_SetBit(void* Obj)
	{
		((UAzureObjectAnchorQueryModifiers*)Obj)->bUseMaxScaleChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseMaxScaleChange = { "bUseMaxScaleChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAzureObjectAnchorQueryModifiers), &Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseMaxScaleChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseMaxScaleChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseMaxScaleChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_MaxScaleChange_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*Maximum scale change from 1*/" },
		{ "EditCondition", "bUseMaxScaleChange" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
		{ "ToolTip", "Maximum scale change from 1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_MaxScaleChange = { "MaxScaleChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzureObjectAnchorQueryModifiers, MaxScaleChange), METADATA_PARAMS(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_MaxScaleChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_MaxScaleChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseMinSurfaceCoverage_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
	};
#endif
	void Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseMinSurfaceCoverage_SetBit(void* Obj)
	{
		((UAzureObjectAnchorQueryModifiers*)Obj)->bUseMinSurfaceCoverage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseMinSurfaceCoverage = { "bUseMinSurfaceCoverage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAzureObjectAnchorQueryModifiers), &Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseMinSurfaceCoverage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseMinSurfaceCoverage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseMinSurfaceCoverage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_MinSurfaceCoverage_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/*Minimum required surface coverage ratio to consider an object instance as true positive, from 0 to 1.*/" },
		{ "EditCondition", "bUseMinSurfaceCoverage" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
		{ "ToolTip", "Minimum required surface coverage ratio to consider an object instance as true positive, from 0 to 1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_MinSurfaceCoverage = { "MinSurfaceCoverage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzureObjectAnchorQueryModifiers, MinSurfaceCoverage), METADATA_PARAMS(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_MinSurfaceCoverage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_MinSurfaceCoverage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseExpectedMaxVerticalOrientationInDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_ExpectedMaxVerticalOrientationInDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseExpectedToBeStandingOnGroundPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_ExpectedToBeStandingOnGroundPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseMaxScaleChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_MaxScaleChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_bUseMinSurfaceCoverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::NewProp_MinSurfaceCoverage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzureObjectAnchorQueryModifiers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::ClassParams = {
		&UAzureObjectAnchorQueryModifiers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzureObjectAnchorQueryModifiers()
	{
		if (!Z_Registration_Info_UClass_UAzureObjectAnchorQueryModifiers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzureObjectAnchorQueryModifiers.OuterSingleton, Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAzureObjectAnchorQueryModifiers.OuterSingleton;
	}
	template<> MICROSOFTOPENXR_API UClass* StaticClass<UAzureObjectAnchorQueryModifiers>()
	{
		return UAzureObjectAnchorQueryModifiers::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzureObjectAnchorQueryModifiers);
	UAzureObjectAnchorQueryModifiers::~UAzureObjectAnchorQueryModifiers() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzureObjectAnchorSessionConfiguration;
class UScriptStruct* FAzureObjectAnchorSessionConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzureObjectAnchorSessionConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzureObjectAnchorSessionConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration, Z_Construct_UPackage__Script_MicrosoftOpenXR(), TEXT("AzureObjectAnchorSessionConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_AzureObjectAnchorSessionConfiguration.OuterSingleton;
}
template<> MICROSOFTOPENXR_API UScriptStruct* StaticStruct<FAzureObjectAnchorSessionConfiguration>()
{
	return FAzureObjectAnchorSessionConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccountID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccountID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccountKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccountKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccountDomain_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccountDomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectRenderMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectRenderMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ObjectRenderMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryModifiers_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_QueryModifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*Configuration for Azure Object Anchors session.*/" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
		{ "ToolTip", "Configuration for Azure Object Anchors session." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzureObjectAnchorSessionConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_AccountID_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*Object Anchors Account ID.*/" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
		{ "ToolTip", "Object Anchors Account ID." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_AccountID = { "AccountID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureObjectAnchorSessionConfiguration, AccountID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_AccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_AccountID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_AccountKey_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*Object Anchors Account Key.*/" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
		{ "ToolTip", "Object Anchors Account Key." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_AccountKey = { "AccountKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureObjectAnchorSessionConfiguration, AccountKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_AccountKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_AccountKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_AccountDomain_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*Object Anchors Account Domain.*/" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
		{ "ToolTip", "Object Anchors Account Domain." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_AccountDomain = { "AccountDomain", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureObjectAnchorSessionConfiguration, AccountDomain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_AccountDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_AccountDomain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_SearchRadius_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*Radius around head to search for models.*/" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
		{ "ToolTip", "Radius around head to search for models." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0010040000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureObjectAnchorSessionConfiguration, SearchRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_SearchRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_SearchRadius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_TrackingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_TrackingMode_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*Tracking mode for tracked objects.*/" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
		{ "ToolTip", "Tracking mode for tracked objects." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_TrackingMode = { "TrackingMode", nullptr, (EPropertyFlags)0x0010040000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureObjectAnchorSessionConfiguration, TrackingMode), Z_Construct_UEnum_MicrosoftOpenXR_EObjectInstanceTrackingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_TrackingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_TrackingMode_MetaData)) }; // 1608923965
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_ObjectRenderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_ObjectRenderMode_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*How to render the model with the MRMesh. BoundingBox or None can improve performance if the mesh is large.*/" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
		{ "ToolTip", "How to render the model with the MRMesh. BoundingBox or None can improve performance if the mesh is large." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_ObjectRenderMode = { "ObjectRenderMode", nullptr, (EPropertyFlags)0x0010040000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureObjectAnchorSessionConfiguration, ObjectRenderMode), Z_Construct_UEnum_MicrosoftOpenXR_EObjectRenderMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_ObjectRenderMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_ObjectRenderMode_MetaData)) }; // 1254332712
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_QueryModifiers_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|Azure Object Anchors" },
		{ "Comment", "/*Optional query modifiers to use when locating objects.*/" },
		{ "ModuleRelativePath", "Public/AzureObjectAnchorTypes.h" },
		{ "ToolTip", "Optional query modifiers to use when locating objects." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_QueryModifiers = { "QueryModifiers", nullptr, (EPropertyFlags)0x0014040000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureObjectAnchorSessionConfiguration, QueryModifiers), Z_Construct_UClass_UAzureObjectAnchorQueryModifiers_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_QueryModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_QueryModifiers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_AccountID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_AccountKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_AccountDomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_SearchRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_TrackingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_TrackingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_ObjectRenderMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_ObjectRenderMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewProp_QueryModifiers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MicrosoftOpenXR,
		nullptr,
		&NewStructOps,
		"AzureObjectAnchorSessionConfiguration",
		sizeof(FAzureObjectAnchorSessionConfiguration),
		alignof(FAzureObjectAnchorSessionConfiguration),
		Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_AzureObjectAnchorSessionConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzureObjectAnchorSessionConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzureObjectAnchorSessionConfiguration.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_AzureObjectAnchorTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_AzureObjectAnchorTypes_h_Statics::EnumInfo[] = {
		{ EObjectInstanceTrackingMode_StaticEnum, TEXT("EObjectInstanceTrackingMode"), &Z_Registration_Info_UEnum_EObjectInstanceTrackingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1608923965U) },
		{ EObjectRenderMode_StaticEnum, TEXT("EObjectRenderMode"), &Z_Registration_Info_UEnum_EObjectRenderMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1254332712U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_AzureObjectAnchorTypes_h_Statics::ScriptStructInfo[] = {
		{ FAzureObjectAnchorSessionConfiguration::StaticStruct, Z_Construct_UScriptStruct_FAzureObjectAnchorSessionConfiguration_Statics::NewStructOps, TEXT("AzureObjectAnchorSessionConfiguration"), &Z_Registration_Info_UScriptStruct_AzureObjectAnchorSessionConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzureObjectAnchorSessionConfiguration), 3268073299U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_AzureObjectAnchorTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAzureObjectAnchorQueryModifiers, UAzureObjectAnchorQueryModifiers::StaticClass, TEXT("UAzureObjectAnchorQueryModifiers"), &Z_Registration_Info_UClass_UAzureObjectAnchorQueryModifiers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzureObjectAnchorQueryModifiers), 1005695846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_AzureObjectAnchorTypes_h_2836513950(TEXT("/Script/MicrosoftOpenXR"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_AzureObjectAnchorTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_AzureObjectAnchorTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_AzureObjectAnchorTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_AzureObjectAnchorTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_AzureObjectAnchorTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_AzureObjectAnchorTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
