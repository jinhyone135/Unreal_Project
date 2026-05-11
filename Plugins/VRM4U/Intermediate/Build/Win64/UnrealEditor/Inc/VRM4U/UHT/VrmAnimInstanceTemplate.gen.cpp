// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmAnimInstanceTemplate.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmAnimInstanceTemplate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	IKRIG_API UClass* Z_Construct_UClass_UIKRetargeter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAnimInstanceTemplate();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAnimInstanceTemplate_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmAnimInstanceTemplateProxy();
// End Cross Module References

static_assert(std::is_polymorphic<FVrmAnimInstanceTemplateProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FVrmAnimInstanceTemplateProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VrmAnimInstanceTemplateProxy;
class UScriptStruct* FVrmAnimInstanceTemplateProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VrmAnimInstanceTemplateProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VrmAnimInstanceTemplateProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmAnimInstanceTemplateProxy, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmAnimInstanceTemplateProxy"));
	}
	return Z_Registration_Info_UScriptStruct_VrmAnimInstanceTemplateProxy.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmAnimInstanceTemplateProxy>()
{
	return FVrmAnimInstanceTemplateProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVrmAnimInstanceTemplateProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmAnimInstanceTemplateProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VrmAnimInstanceTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVrmAnimInstanceTemplateProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmAnimInstanceTemplateProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmAnimInstanceTemplateProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"VrmAnimInstanceTemplateProxy",
		nullptr,
		0,
		sizeof(FVrmAnimInstanceTemplateProxy),
		alignof(FVrmAnimInstanceTemplateProxy),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmAnimInstanceTemplateProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVrmAnimInstanceTemplateProxy_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVrmAnimInstanceTemplateProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_VrmAnimInstanceTemplateProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VrmAnimInstanceTemplateProxy.InnerSingleton, Z_Construct_UScriptStruct_FVrmAnimInstanceTemplateProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VrmAnimInstanceTemplateProxy.InnerSingleton;
	}
	void UVrmAnimInstanceTemplate::StaticRegisterNativesUVrmAnimInstanceTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmAnimInstanceTemplate);
	UClass* Z_Construct_UClass_UVrmAnimInstanceTemplate_NoRegister()
	{
		return UVrmAnimInstanceTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VrmRetargeter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmRetargeter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VrmMetaObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmMetaObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "VrmAnimInstanceTemplate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::NewProp_VrmRetargeter_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::NewProp_VrmRetargeter = { "VrmRetargeter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAnimInstanceTemplate, VrmRetargeter), Z_Construct_UClass_UIKRetargeter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::NewProp_VrmRetargeter_MetaData), Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::NewProp_VrmRetargeter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::NewProp_VrmMetaObject_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::NewProp_VrmMetaObject = { "VrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmAnimInstanceTemplate, VrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::NewProp_VrmMetaObject_MetaData), Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::NewProp_VrmMetaObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::NewProp_VrmRetargeter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::NewProp_VrmMetaObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmAnimInstanceTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::ClassParams = {
		&UVrmAnimInstanceTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVrmAnimInstanceTemplate()
	{
		if (!Z_Registration_Info_UClass_UVrmAnimInstanceTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmAnimInstanceTemplate.OuterSingleton, Z_Construct_UClass_UVrmAnimInstanceTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmAnimInstanceTemplate.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<UVrmAnimInstanceTemplate>()
	{
		return UVrmAnimInstanceTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmAnimInstanceTemplate);
	UVrmAnimInstanceTemplate::~UVrmAnimInstanceTemplate() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceTemplate_h_Statics::ScriptStructInfo[] = {
		{ FVrmAnimInstanceTemplateProxy::StaticStruct, Z_Construct_UScriptStruct_FVrmAnimInstanceTemplateProxy_Statics::NewStructOps, TEXT("VrmAnimInstanceTemplateProxy"), &Z_Registration_Info_UScriptStruct_VrmAnimInstanceTemplateProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVrmAnimInstanceTemplateProxy), 1929401173U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmAnimInstanceTemplate, UVrmAnimInstanceTemplate::StaticClass, TEXT("UVrmAnimInstanceTemplate"), &Z_Registration_Info_UClass_UVrmAnimInstanceTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmAnimInstanceTemplate), 2415008358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceTemplate_h_1072506847(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceTemplate_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
