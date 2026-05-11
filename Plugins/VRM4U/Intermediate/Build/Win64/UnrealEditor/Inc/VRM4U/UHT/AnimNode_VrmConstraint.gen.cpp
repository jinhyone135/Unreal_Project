// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmConstraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmConstraint() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmConstraint();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_VrmConstraint>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmConstraint cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_VrmConstraint;
class UScriptStruct* FAnimNode_VrmConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_VrmConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmConstraint, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmConstraint.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmConstraint>()
{
	return FAnimNode_VrmConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableAutoSearchMetaData_MetaData[];
#endif
		static void NewProp_EnableAutoSearchMetaData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableAutoSearchMetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VrmMetaObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmMetaObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmConstraint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_EnableAutoSearchMetaData_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmConstraint.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_EnableAutoSearchMetaData_SetBit(void* Obj)
	{
		((FAnimNode_VrmConstraint*)Obj)->EnableAutoSearchMetaData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_EnableAutoSearchMetaData = { "EnableAutoSearchMetaData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_VrmConstraint), &Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_EnableAutoSearchMetaData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_EnableAutoSearchMetaData_MetaData), Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_EnableAutoSearchMetaData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_VrmMetaObject_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmConstraint.h" },
		{ "NativeConst", "" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_VrmMetaObject = { "VrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmConstraint, VrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_VrmMetaObject_MetaData), Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_VrmMetaObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_EnableAutoSearchMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_VrmMetaObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_VrmConstraint",
		Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::PropPointers),
		sizeof(FAnimNode_VrmConstraint),
		alignof(FAnimNode_VrmConstraint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_VrmConstraint.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_VrmConstraint.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmConstraint_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmConstraint_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_VrmConstraint::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewStructOps, TEXT("AnimNode_VrmConstraint"), &Z_Registration_Info_UScriptStruct_AnimNode_VrmConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_VrmConstraint), 2178852811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmConstraint_h_4174878615(TEXT("/Script/VRM4U"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmConstraint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmConstraint_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
