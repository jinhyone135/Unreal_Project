// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UCapture/Public/AnimNode_VrmVMC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmVMC() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_VRM4UCapture();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4UCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmVMC();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_VrmVMC>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmVMC cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_VrmVMC;
class UScriptStruct* FAnimNode_VrmVMC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmVMC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_VrmVMC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmVMC, (UObject*)Z_Construct_UPackage__Script_VRM4UCapture(), TEXT("AnimNode_VrmVMC"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmVMC.OuterSingleton;
}
template<> VRM4UCAPTURE_API UScriptStruct* StaticStruct<FAnimNode_VrmVMC>()
{
	return FAnimNode_VrmVMC::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRemoteCenterPos_MetaData[];
#endif
		static void NewProp_bUseRemoteCenterPos_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRemoteCenterPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelRelativeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ModelRelativeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreLocalRotation_MetaData[];
#endif
		static void NewProp_bIgnoreLocalRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreLocalRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyPerfectSync_MetaData[];
#endif
		static void NewProp_bApplyPerfectSync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyPerfectSync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceUpdate_MetaData[];
#endif
		static void NewProp_bForceUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmVMC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmVMC>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_EnableAutoSearchMetaData_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmVMC.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_EnableAutoSearchMetaData_SetBit(void* Obj)
	{
		((FAnimNode_VrmVMC*)Obj)->EnableAutoSearchMetaData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_EnableAutoSearchMetaData = { "EnableAutoSearchMetaData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_VrmVMC), &Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_EnableAutoSearchMetaData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_EnableAutoSearchMetaData_MetaData), Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_EnableAutoSearchMetaData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_VrmMetaObject_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmVMC.h" },
		{ "NativeConst", "" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_VrmMetaObject = { "VrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmVMC, VrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_VrmMetaObject_MetaData), Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_VrmMetaObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bUseRemoteCenterPos_MetaData[] = {
		{ "Category", "Skeleton" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Skeleton, meta = (PinShownByDefault))\n//TMap<FString, FTransform> BoneTrans;\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmVMC.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Skeleton, meta = (PinShownByDefault))\nTMap<FString, FTransform> BoneTrans;" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bUseRemoteCenterPos_SetBit(void* Obj)
	{
		((FAnimNode_VrmVMC*)Obj)->bUseRemoteCenterPos = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bUseRemoteCenterPos = { "bUseRemoteCenterPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_VrmVMC), &Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bUseRemoteCenterPos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bUseRemoteCenterPos_MetaData), Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bUseRemoteCenterPos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_ModelRelativeScale_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmVMC.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_ModelRelativeScale = { "ModelRelativeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmVMC, ModelRelativeScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_ModelRelativeScale_MetaData), Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_ModelRelativeScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bIgnoreLocalRotation_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmVMC.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bIgnoreLocalRotation_SetBit(void* Obj)
	{
		((FAnimNode_VrmVMC*)Obj)->bIgnoreLocalRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bIgnoreLocalRotation = { "bIgnoreLocalRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_VrmVMC), &Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bIgnoreLocalRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bIgnoreLocalRotation_MetaData), Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bIgnoreLocalRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_ServerAddress_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmVMC.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_ServerAddress = { "ServerAddress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmVMC, ServerAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_ServerAddress_MetaData), Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_ServerAddress_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmVMC.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmVMC, Port), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_Port_MetaData), Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_Port_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bApplyPerfectSync_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmVMC.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bApplyPerfectSync_SetBit(void* Obj)
	{
		((FAnimNode_VrmVMC*)Obj)->bApplyPerfectSync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bApplyPerfectSync = { "bApplyPerfectSync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_VrmVMC), &Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bApplyPerfectSync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bApplyPerfectSync_MetaData), Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bApplyPerfectSync_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bForceUpdate_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmVMC.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bForceUpdate_SetBit(void* Obj)
	{
		((FAnimNode_VrmVMC*)Obj)->bForceUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bForceUpdate = { "bForceUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_VrmVMC), &Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bForceUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bForceUpdate_MetaData), Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bForceUpdate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_EnableAutoSearchMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_VrmMetaObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bUseRemoteCenterPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_ModelRelativeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bIgnoreLocalRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_ServerAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bApplyPerfectSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewProp_bForceUpdate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UCapture,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_VrmVMC",
		Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::PropPointers),
		sizeof(FAnimNode_VrmVMC),
		alignof(FAnimNode_VrmVMC),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmVMC()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmVMC.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_VrmVMC.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_VrmVMC.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UCapture_Public_AnimNode_VrmVMC_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UCapture_Public_AnimNode_VrmVMC_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_VrmVMC::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_VrmVMC_Statics::NewStructOps, TEXT("AnimNode_VrmVMC"), &Z_Registration_Info_UScriptStruct_AnimNode_VrmVMC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_VrmVMC), 3659429734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UCapture_Public_AnimNode_VrmVMC_h_2758326785(TEXT("/Script/VRM4UCapture"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UCapture_Public_AnimNode_VrmVMC_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UCapture_Public_AnimNode_VrmVMC_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
