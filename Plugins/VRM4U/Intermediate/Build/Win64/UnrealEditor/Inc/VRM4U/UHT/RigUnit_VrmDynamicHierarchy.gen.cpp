// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/RigUnit_VrmDynamicHierarchy.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_VrmDynamicHierarchy() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VRMInitControllerTransform();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_VRMGetCurveNameFromMesh>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_VRMGetCurveNameFromMesh cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VRMGetCurveNameFromMesh;
class UScriptStruct* FRigUnit_VRMGetCurveNameFromMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VRMGetCurveNameFromMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VRMGetCurveNameFromMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("RigUnit_VRMGetCurveNameFromMesh"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_VRMGetCurveNameFromMesh_Execute;
		Arguments_FRigUnit_VRMGetCurveNameFromMesh_Execute.Emplace(TEXT("Items_Morph"), TEXT("TArray<FName>"));
		Arguments_FRigUnit_VRMGetCurveNameFromMesh_Execute.Emplace(TEXT("Items_Curve"), TEXT("TArray<FName>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VRMGetCurveNameFromMesh::Execute"), &FRigUnit_VRMGetCurveNameFromMesh::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VRMGetCurveNameFromMesh.OuterSingleton, Arguments_FRigUnit_VRMGetCurveNameFromMesh_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VRMGetCurveNameFromMesh.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FRigUnit_VRMGetCurveNameFromMesh>()
{
	return FRigUnit_VRMGetCurveNameFromMesh::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_Items_Morph_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_Morph_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items_Morph;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Items_Curve_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items_Curve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * get curve list\n */" },
#endif
		{ "DisplayName", "VRM4U GetCurveNameFromMesh" },
		{ "Keywords", "VRM4U" },
		{ "ModuleRelativePath", "Public/RigUnit_VrmDynamicHierarchy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "get curve list" },
#endif
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VRMGetCurveNameFromMesh>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewProp_Items_Morph_Inner = { "Items_Morph", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewProp_Items_Morph_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigUnit_VrmDynamicHierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewProp_Items_Morph = { "Items_Morph", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VRMGetCurveNameFromMesh, Items_Morph), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewProp_Items_Morph_MetaData), Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewProp_Items_Morph_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewProp_Items_Curve_Inner = { "Items_Curve", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewProp_Items_Curve_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigUnit_VrmDynamicHierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewProp_Items_Curve = { "Items_Curve", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VRMGetCurveNameFromMesh, Items_Curve), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewProp_Items_Curve_MetaData), Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewProp_Items_Curve_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewProp_Items_Morph_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewProp_Items_Morph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewProp_Items_Curve_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewProp_Items_Curve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_VRMGetCurveNameFromMesh",
		Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::PropPointers),
		sizeof(FRigUnit_VRMGetCurveNameFromMesh),
		alignof(FRigUnit_VRMGetCurveNameFromMesh),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_VRMGetCurveNameFromMesh.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VRMGetCurveNameFromMesh.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_VRMGetCurveNameFromMesh.InnerSingleton;
	}

void FRigUnit_VRMGetCurveNameFromMesh::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_VRMGetCurveNameFromMesh::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Items_Morph,
		Items_Curve
	);
}


static_assert(std::is_polymorphic<FRigUnit_VRMAddCurveFromMesh>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_VRMAddCurveFromMesh cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VRMAddCurveFromMesh;
class UScriptStruct* FRigUnit_VRMAddCurveFromMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VRMAddCurveFromMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VRMAddCurveFromMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("RigUnit_VRMAddCurveFromMesh"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_VRMAddCurveFromMesh_Execute;
		Arguments_FRigUnit_VRMAddCurveFromMesh_Execute.Emplace(TEXT("Prefix"), TEXT("FString"));
		Arguments_FRigUnit_VRMAddCurveFromMesh_Execute.Emplace(TEXT("Suffix"), TEXT("FString"));
		Arguments_FRigUnit_VRMAddCurveFromMesh_Execute.Emplace(TEXT("bIncludeMorphs"), TEXT("bool"));
		Arguments_FRigUnit_VRMAddCurveFromMesh_Execute.Emplace(TEXT("bIncludeCurves"), TEXT("bool"));
		Arguments_FRigUnit_VRMAddCurveFromMesh_Execute.Emplace(TEXT("Items_Morph"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_VRMAddCurveFromMesh_Execute.Emplace(TEXT("Items_Curve"), TEXT("TArray<FRigElementKey>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VRMAddCurveFromMesh::Execute"), &FRigUnit_VRMAddCurveFromMesh::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VRMAddCurveFromMesh.OuterSingleton, Arguments_FRigUnit_VRMAddCurveFromMesh_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VRMAddCurveFromMesh.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FRigUnit_VRMAddCurveFromMesh>()
{
	return FRigUnit_VRMAddCurveFromMesh::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeMorphs_MetaData[];
#endif
		static void NewProp_bIncludeMorphs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeMorphs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeCurves_MetaData[];
#endif
		static void NewProp_bIncludeCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeCurves;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Morph_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_Morph_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items_Morph;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Curve_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items_Curve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * add morph and curve\n */" },
#endif
		{ "DisplayName", "VRM4U AddCurveFromMesh" },
		{ "Keywords", "AddCurve,Spawn" },
		{ "ModuleRelativePath", "Public/RigUnit_VrmDynamicHierarchy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "add morph and curve" },
#endif
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VRMAddCurveFromMesh>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Prefix_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_VrmDynamicHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VRMAddCurveFromMesh, Prefix), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Prefix_MetaData), Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Prefix_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Suffix_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_VrmDynamicHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VRMAddCurveFromMesh, Suffix), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Suffix_MetaData), Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Suffix_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_bIncludeMorphs_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_VrmDynamicHierarchy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_bIncludeMorphs_SetBit(void* Obj)
	{
		((FRigUnit_VRMAddCurveFromMesh*)Obj)->bIncludeMorphs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_bIncludeMorphs = { "bIncludeMorphs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_VRMAddCurveFromMesh), &Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_bIncludeMorphs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_bIncludeMorphs_MetaData), Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_bIncludeMorphs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_bIncludeCurves_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_VrmDynamicHierarchy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_bIncludeCurves_SetBit(void* Obj)
	{
		((FRigUnit_VRMAddCurveFromMesh*)Obj)->bIncludeCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_bIncludeCurves = { "bIncludeCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_VRMAddCurveFromMesh), &Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_bIncludeCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_bIncludeCurves_MetaData), Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_bIncludeCurves_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Items_Morph_Inner = { "Items_Morph", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Items_Morph_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigUnit_VrmDynamicHierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Items_Morph = { "Items_Morph", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VRMAddCurveFromMesh, Items_Morph), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Items_Morph_MetaData), Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Items_Morph_MetaData) }; // 422817336
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Items_Curve_Inner = { "Items_Curve", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Items_Curve_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigUnit_VrmDynamicHierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Items_Curve = { "Items_Curve", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VRMAddCurveFromMesh, Items_Curve), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Items_Curve_MetaData), Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Items_Curve_MetaData) }; // 422817336
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Prefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Suffix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_bIncludeMorphs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_bIncludeCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Items_Morph_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Items_Morph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Items_Curve_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewProp_Items_Curve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_VRMAddCurveFromMesh",
		Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::PropPointers),
		sizeof(FRigUnit_VRMAddCurveFromMesh),
		alignof(FRigUnit_VRMAddCurveFromMesh),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_VRMAddCurveFromMesh.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VRMAddCurveFromMesh.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_VRMAddCurveFromMesh.InnerSingleton;
	}

void FRigUnit_VRMAddCurveFromMesh::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_VRMAddCurveFromMesh::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Prefix,
		Suffix,
		bIncludeMorphs,
		bIncludeCurves,
		Items_Morph,
		Items_Curve
	);
}


static_assert(std::is_polymorphic<FRigUnit_VRMGenerateBoneToControlTable>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_VRMGenerateBoneToControlTable cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VRMGenerateBoneToControlTable;
class UScriptStruct* FRigUnit_VRMGenerateBoneToControlTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VRMGenerateBoneToControlTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VRMGenerateBoneToControlTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("RigUnit_VRMGenerateBoneToControlTable"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_VRMGenerateBoneToControlTable_Execute;
		Arguments_FRigUnit_VRMGenerateBoneToControlTable_Execute.Emplace(TEXT("Items_MannequinBone"), TEXT("TArray<FName>"));
		Arguments_FRigUnit_VRMGenerateBoneToControlTable_Execute.Emplace(TEXT("Items_VRMBone"), TEXT("TArray<FName>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VRMGenerateBoneToControlTable::Execute"), &FRigUnit_VRMGenerateBoneToControlTable::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VRMGenerateBoneToControlTable.OuterSingleton, Arguments_FRigUnit_VRMGenerateBoneToControlTable_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VRMGenerateBoneToControlTable.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FRigUnit_VRMGenerateBoneToControlTable>()
{
	return FRigUnit_VRMGenerateBoneToControlTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_Items_MannequinBone_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MannequinBone_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items_MannequinBone;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Items_VRMBone_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_VRMBone_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items_VRMBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * generate contorl to bone table\n */" },
#endif
		{ "DisplayName", "VRM4U GenerateTable" },
		{ "Keywords", "Table" },
		{ "ModuleRelativePath", "Public/RigUnit_VrmDynamicHierarchy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "generate contorl to bone table" },
#endif
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VRMGenerateBoneToControlTable>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewProp_Items_MannequinBone_Inner = { "Items_MannequinBone", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewProp_Items_MannequinBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigUnit_VrmDynamicHierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewProp_Items_MannequinBone = { "Items_MannequinBone", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VRMGenerateBoneToControlTable, Items_MannequinBone), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewProp_Items_MannequinBone_MetaData), Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewProp_Items_MannequinBone_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewProp_Items_VRMBone_Inner = { "Items_VRMBone", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewProp_Items_VRMBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigUnit_VrmDynamicHierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewProp_Items_VRMBone = { "Items_VRMBone", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VRMGenerateBoneToControlTable, Items_VRMBone), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewProp_Items_VRMBone_MetaData), Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewProp_Items_VRMBone_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewProp_Items_MannequinBone_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewProp_Items_MannequinBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewProp_Items_VRMBone_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewProp_Items_VRMBone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_VRMGenerateBoneToControlTable",
		Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::PropPointers),
		sizeof(FRigUnit_VRMGenerateBoneToControlTable),
		alignof(FRigUnit_VRMGenerateBoneToControlTable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_VRMGenerateBoneToControlTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VRMGenerateBoneToControlTable.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_VRMGenerateBoneToControlTable.InnerSingleton;
	}

void FRigUnit_VRMGenerateBoneToControlTable::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_VRMGenerateBoneToControlTable::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Items_MannequinBone,
		Items_VRMBone
	);
}


static_assert(std::is_polymorphic<FRigUnit_VRMInitControllerTransform>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_VRMInitControllerTransform cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VRMInitControllerTransform;
class UScriptStruct* FRigUnit_VRMInitControllerTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VRMInitControllerTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VRMInitControllerTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VRMInitControllerTransform, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("RigUnit_VRMInitControllerTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_VRMInitControllerTransform_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VRMInitControllerTransform::Execute"), &FRigUnit_VRMInitControllerTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VRMInitControllerTransform.OuterSingleton, Arguments_FRigUnit_VRMInitControllerTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VRMInitControllerTransform.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FRigUnit_VRMInitControllerTransform>()
{
	return FRigUnit_VRMInitControllerTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_VRMInitControllerTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VRMInitControllerTransform_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * init controller transform\n */" },
#endif
		{ "DisplayName", "VRM4U InitController Transform" },
		{ "Keywords", "Table" },
		{ "ModuleRelativePath", "Public/RigUnit_VrmDynamicHierarchy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "init controller transform" },
#endif
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_VRMInitControllerTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VRMInitControllerTransform>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VRMInitControllerTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_VRMInitControllerTransform",
		nullptr,
		0,
		sizeof(FRigUnit_VRMInitControllerTransform),
		alignof(FRigUnit_VRMInitControllerTransform),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VRMInitControllerTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_VRMInitControllerTransform_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VRMInitControllerTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_VRMInitControllerTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VRMInitControllerTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VRMInitControllerTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_VRMInitControllerTransform.InnerSingleton;
	}

void FRigUnit_VRMInitControllerTransform::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_VRMInitControllerTransform::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}

	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_RigUnit_VrmDynamicHierarchy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_RigUnit_VrmDynamicHierarchy_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_VRMGetCurveNameFromMesh::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics::NewStructOps, TEXT("RigUnit_VRMGetCurveNameFromMesh"), &Z_Registration_Info_UScriptStruct_RigUnit_VRMGetCurveNameFromMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VRMGetCurveNameFromMesh), 2053895747U) },
		{ FRigUnit_VRMAddCurveFromMesh::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics::NewStructOps, TEXT("RigUnit_VRMAddCurveFromMesh"), &Z_Registration_Info_UScriptStruct_RigUnit_VRMAddCurveFromMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VRMAddCurveFromMesh), 876615886U) },
		{ FRigUnit_VRMGenerateBoneToControlTable::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics::NewStructOps, TEXT("RigUnit_VRMGenerateBoneToControlTable"), &Z_Registration_Info_UScriptStruct_RigUnit_VRMGenerateBoneToControlTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VRMGenerateBoneToControlTable), 311279423U) },
		{ FRigUnit_VRMInitControllerTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VRMInitControllerTransform_Statics::NewStructOps, TEXT("RigUnit_VRMInitControllerTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_VRMInitControllerTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VRMInitControllerTransform), 3259958443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_RigUnit_VrmDynamicHierarchy_h_1330053320(TEXT("/Script/VRM4U"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_RigUnit_VrmDynamicHierarchy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_RigUnit_VrmDynamicHierarchy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
