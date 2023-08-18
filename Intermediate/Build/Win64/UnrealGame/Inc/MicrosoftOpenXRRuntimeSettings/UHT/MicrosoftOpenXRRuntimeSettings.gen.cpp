// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MicrosoftOpenXRRuntimeSettings/Public/MicrosoftOpenXRRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMicrosoftOpenXRRuntimeSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MICROSOFTOPENXRRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings();
	MICROSOFTOPENXRRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_NoRegister();
	MICROSOFTOPENXRRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec();
	MICROSOFTOPENXRRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType();
	UPackage* Z_Construct_UPackage__Script_MicrosoftOpenXRRuntimeSettings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_RemotingConnectionType;
	static UEnum* RemotingConnectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_RemotingConnectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_RemotingConnectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType, Z_Construct_UPackage__Script_MicrosoftOpenXRRuntimeSettings(), TEXT("RemotingConnectionType"));
		}
		return Z_Registration_Info_UEnum_RemotingConnectionType.OuterSingleton;
	}
	template<> MICROSOFTOPENXRRUNTIMESETTINGS_API UEnum* StaticEnum<RemotingConnectionType>()
	{
		return RemotingConnectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType_Statics::Enumerators[] = {
		{ "RemotingConnectionType::Connect", (int64)RemotingConnectionType::Connect },
		{ "RemotingConnectionType::Listen", (int64)RemotingConnectionType::Listen },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType_Statics::Enum_MetaDataParams[] = {
		{ "Connect.Name", "RemotingConnectionType::Connect" },
		{ "Listen.Name", "RemotingConnectionType::Listen" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MicrosoftOpenXRRuntimeSettings,
		nullptr,
		"RemotingConnectionType",
		"RemotingConnectionType",
		Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType()
	{
		if (!Z_Registration_Info_UEnum_RemotingConnectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_RemotingConnectionType.InnerSingleton, Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_RemotingConnectionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_RemotingCodec;
	static UEnum* RemotingCodec_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_RemotingCodec.OuterSingleton)
		{
			Z_Registration_Info_UEnum_RemotingCodec.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec, Z_Construct_UPackage__Script_MicrosoftOpenXRRuntimeSettings(), TEXT("RemotingCodec"));
		}
		return Z_Registration_Info_UEnum_RemotingCodec.OuterSingleton;
	}
	template<> MICROSOFTOPENXRRUNTIMESETTINGS_API UEnum* StaticEnum<RemotingCodec>()
	{
		return RemotingCodec_StaticEnum();
	}
	struct Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec_Statics::Enumerators[] = {
		{ "RemotingCodec::Any", (int64)RemotingCodec::Any },
		{ "RemotingCodec::H264", (int64)RemotingCodec::H264 },
		{ "RemotingCodec::H265", (int64)RemotingCodec::H265 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec_Statics::Enum_MetaDataParams[] = {
		{ "Any.Name", "RemotingCodec::Any" },
		{ "Comment", "// This will be cast to XrRemotingVideoCodecMSFT, IDs must match\n" },
		{ "H264.Name", "RemotingCodec::H264" },
		{ "H265.Name", "RemotingCodec::H265" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
		{ "ToolTip", "This will be cast to XrRemotingVideoCodecMSFT, IDs must match" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MicrosoftOpenXRRuntimeSettings,
		nullptr,
		"RemotingCodec",
		"RemotingCodec",
		Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec()
	{
		if (!Z_Registration_Info_UEnum_RemotingCodec.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_RemotingCodec.InnerSingleton, Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_RemotingCodec.InnerSingleton;
	}
	void UMicrosoftOpenXRRuntimeSettings::StaticRegisterNativesUMicrosoftOpenXRRuntimeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMicrosoftOpenXRRuntimeSettings);
	UClass* Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_NoRegister()
	{
		return UMicrosoftOpenXRRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRemotingForEditor_MetaData[];
#endif
		static void NewProp_bEnableRemotingForEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRemotingForEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteHoloLensIP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RemoteHoloLensIP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoConnectRemoting_MetaData[];
#endif
		static void NewProp_bAutoConnectRemoting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoConnectRemoting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBitrate_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedFIntPropertyParams NewProp_MaxBitrate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableAudio_MetaData[];
#endif
		static void NewProp_EnableAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableAudio;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ConnectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectionType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ConnectionCodec_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionCodec_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectionCodec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MicrosoftOpenXRRuntimeSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for Microsoft OpenXR runtime platforms.\n */" },
		{ "IncludePath", "MicrosoftOpenXRRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for Microsoft OpenXR runtime platforms." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor_MetaData[] = {
		{ "Category", "OpenXR Holographic Remoting" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable Remoting For Editor (Requires Restart)" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
		{ "Tooltip", "If true, start with a valid HMD to enable connecting via remoting.  Editor restart required." },
	};
#endif
	void Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor_SetBit(void* Obj)
	{
		((UMicrosoftOpenXRRuntimeSettings*)Obj)->bEnableRemotingForEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor = { "bEnableRemotingForEditor", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMicrosoftOpenXRRuntimeSettings), &Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_RemoteHoloLensIP_MetaData[] = {
		{ "Category", "OpenXR Holographic Remoting" },
		{ "Comment", "/** The IP of the HoloLens or WMR HMD to remote to. */" },
		{ "DisplayName", "Remote Device IP." },
		{ "EditCondition", "bEnableRemotingForEditor" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
		{ "ToolTip", "The IP of the HoloLens or WMR HMD to remote to." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_RemoteHoloLensIP = { "RemoteHoloLensIP", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMicrosoftOpenXRRuntimeSettings, RemoteHoloLensIP), METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_RemoteHoloLensIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_RemoteHoloLensIP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bAutoConnectRemoting_MetaData[] = {
		{ "Category", "OpenXR Holographic Remoting" },
		{ "DisplayName", "Automatically connect to remote device." },
		{ "EditCondition", "bEnableRemotingForEditor" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bAutoConnectRemoting_SetBit(void* Obj)
	{
		((UMicrosoftOpenXRRuntimeSettings*)Obj)->bAutoConnectRemoting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bAutoConnectRemoting = { "bAutoConnectRemoting", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMicrosoftOpenXRRuntimeSettings), &Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bAutoConnectRemoting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bAutoConnectRemoting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bAutoConnectRemoting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_MaxBitrate_MetaData[] = {
		{ "Category", "OpenXR Holographic Remoting" },
		{ "DisplayName", "Max network transfer rate (kb/s)." },
		{ "EditCondition", "bEnableRemotingForEditor" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedFIntPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_MaxBitrate = { "MaxBitrate", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMicrosoftOpenXRRuntimeSettings, MaxBitrate), METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_MaxBitrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_MaxBitrate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_EnableAudio_MetaData[] = {
		{ "Category", "OpenXR Holographic Remoting" },
		{ "DisplayName", "Use audio from PC when remoting." },
		{ "EditCondition", "bEnableRemotingForEditor" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_EnableAudio_SetBit(void* Obj)
	{
		((UMicrosoftOpenXRRuntimeSettings*)Obj)->EnableAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_EnableAudio = { "EnableAudio", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMicrosoftOpenXRRuntimeSettings), &Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_EnableAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_EnableAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_EnableAudio_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionType_MetaData[] = {
		{ "Category", "OpenXR Holographic Remoting" },
		{ "DisplayName", "Connection Type." },
		{ "EditCondition", "bEnableRemotingForEditor" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionType = { "ConnectionType", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMicrosoftOpenXRRuntimeSettings, ConnectionType), Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType, METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionType_MetaData)) }; // 1064372557
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionCodec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionCodec_MetaData[] = {
		{ "Category", "OpenXR Holographic Remoting" },
		{ "DisplayName", "Connection Codec." },
		{ "EditCondition", "bEnableRemotingForEditor" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionCodec = { "ConnectionCodec", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMicrosoftOpenXRRuntimeSettings, ConnectionCodec), Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec, METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionCodec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionCodec_MetaData)) }; // 974594909
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_RemoteHoloLensIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bAutoConnectRemoting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_MaxBitrate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_EnableAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionCodec_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionCodec,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMicrosoftOpenXRRuntimeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::ClassParams = {
		&UMicrosoftOpenXRRuntimeSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings()
	{
		if (!Z_Registration_Info_UClass_UMicrosoftOpenXRRuntimeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMicrosoftOpenXRRuntimeSettings.OuterSingleton, Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMicrosoftOpenXRRuntimeSettings.OuterSingleton;
	}
	template<> MICROSOFTOPENXRRUNTIMESETTINGS_API UClass* StaticClass<UMicrosoftOpenXRRuntimeSettings>()
	{
		return UMicrosoftOpenXRRuntimeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMicrosoftOpenXRRuntimeSettings);
	UMicrosoftOpenXRRuntimeSettings::~UMicrosoftOpenXRRuntimeSettings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXRRuntimeSettings_Public_MicrosoftOpenXRRuntimeSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXRRuntimeSettings_Public_MicrosoftOpenXRRuntimeSettings_h_Statics::EnumInfo[] = {
		{ RemotingConnectionType_StaticEnum, TEXT("RemotingConnectionType"), &Z_Registration_Info_UEnum_RemotingConnectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1064372557U) },
		{ RemotingCodec_StaticEnum, TEXT("RemotingCodec"), &Z_Registration_Info_UEnum_RemotingCodec, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 974594909U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXRRuntimeSettings_Public_MicrosoftOpenXRRuntimeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings, UMicrosoftOpenXRRuntimeSettings::StaticClass, TEXT("UMicrosoftOpenXRRuntimeSettings"), &Z_Registration_Info_UClass_UMicrosoftOpenXRRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMicrosoftOpenXRRuntimeSettings), 3462643402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXRRuntimeSettings_Public_MicrosoftOpenXRRuntimeSettings_h_4154867508(TEXT("/Script/MicrosoftOpenXRRuntimeSettings"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXRRuntimeSettings_Public_MicrosoftOpenXRRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXRRuntimeSettings_Public_MicrosoftOpenXRRuntimeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXRRuntimeSettings_Public_MicrosoftOpenXRRuntimeSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MicrosoftOpenXR_Source_MicrosoftOpenXRRuntimeSettings_Public_MicrosoftOpenXRRuntimeSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
