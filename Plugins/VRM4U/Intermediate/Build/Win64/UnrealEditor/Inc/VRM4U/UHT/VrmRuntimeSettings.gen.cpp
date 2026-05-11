// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmRuntimeSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmRuntimeSettings();
	VRM4U_API UClass* Z_Construct_UClass_UVrmRuntimeSettings_NoRegister();
// End Cross Module References
	void UVrmRuntimeSettings::StaticRegisterNativesUVrmRuntimeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmRuntimeSettings);
	UClass* Z_Construct_UClass_UVrmRuntimeSettings_NoRegister()
	{
		return UVrmRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVrmRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDropVRMFileEnable_MetaData[];
#endif
		static void NewProp_bDropVRMFileEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDropVRMFileEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowAllAssimpFormat_MetaData[];
#endif
		static void NewProp_bAllowAllAssimpFormat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAllAssimpFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetListObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetListObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImportPriority;
		static const UECodeGen_Private::FStrPropertyParams NewProp_extList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_extList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_extList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmRuntimeSettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "VrmRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/VrmRuntimeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bDropVRMFileEnable_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** For runtime load sample map */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/VrmRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For runtime load sample map" },
#endif
	};
#endif
	void Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bDropVRMFileEnable_SetBit(void* Obj)
	{
		((UVrmRuntimeSettings*)Obj)->bDropVRMFileEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bDropVRMFileEnable = { "bDropVRMFileEnable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UVrmRuntimeSettings), &Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bDropVRMFileEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bDropVRMFileEnable_MetaData), Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bDropVRMFileEnable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bAllowAllAssimpFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/VrmRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bAllowAllAssimpFormat_SetBit(void* Obj)
	{
		((UVrmRuntimeSettings*)Obj)->bAllowAllAssimpFormat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bAllowAllAssimpFormat = { "bAllowAllAssimpFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmRuntimeSettings), &Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bAllowAllAssimpFormat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bAllowAllAssimpFormat_MetaData), Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bAllowAllAssimpFormat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_AssetListObject_MetaData[] = {
		{ "AllowedClasses", "/Script/CoreUObject.Object" },
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default material set for runtimeload */" },
#endif
		{ "ExactClass", "FALSE" },
		{ "ModuleRelativePath", "Public/VrmRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default material set for runtimeload" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_AssetListObject = { "AssetListObject", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmRuntimeSettings, AssetListObject), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_AssetListObject_MetaData), Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_AssetListObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_ImportPriority_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** priority<100 for VRM4U. Default plugins priority=100 */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/VrmRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "priority<100 for VRM4U. Default plugins priority=100" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_ImportPriority = { "ImportPriority", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmRuntimeSettings, ImportPriority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_ImportPriority_MetaData), Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_ImportPriority_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_extList_Inner = { "extList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_extList_MetaData[] = {
		{ "Category", "Settings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/VrmRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_extList = { "extList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmRuntimeSettings, extList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_extList_MetaData), Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_extList_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bDropVRMFileEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bAllowAllAssimpFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_AssetListObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_ImportPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_extList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_extList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmRuntimeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmRuntimeSettings_Statics::ClassParams = {
		&UVrmRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVrmRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmRuntimeSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVrmRuntimeSettings()
	{
		if (!Z_Registration_Info_UClass_UVrmRuntimeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmRuntimeSettings.OuterSingleton, Z_Construct_UClass_UVrmRuntimeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmRuntimeSettings.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<UVrmRuntimeSettings>()
	{
		return UVrmRuntimeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmRuntimeSettings);
	UVrmRuntimeSettings::~UVrmRuntimeSettings() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmRuntimeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmRuntimeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmRuntimeSettings, UVrmRuntimeSettings::StaticClass, TEXT("UVrmRuntimeSettings"), &Z_Registration_Info_UClass_UVrmRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmRuntimeSettings), 2442682283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmRuntimeSettings_h_1401065085(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmRuntimeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
