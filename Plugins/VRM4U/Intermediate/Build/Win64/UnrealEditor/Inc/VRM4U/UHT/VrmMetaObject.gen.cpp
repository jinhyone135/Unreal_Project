// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmMetaObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmMetaObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMConstraintType();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringBoneMeta();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringCollider();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringColliderGroups();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringJointMeta();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringMeta();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMAnimationLookAt();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMAnimationMeta();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShape();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeGroup();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderGroupMeta();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderMeta();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraint();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintAim();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRoll();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRotation();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringColliderData();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringMeta();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMSpringMeta;
class UScriptStruct* FVRMSpringMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMSpringMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMSpringMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMSpringMeta, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMSpringMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRMSpringMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMSpringMeta>()
{
	return FVRMSpringMeta::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMSpringMeta_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gravityPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gravityPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gravityDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_gravityDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dragForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dragForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hitRadius;
		static const UECodeGen_Private::FIntPropertyParams NewProp_bones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bones;
		static const UECodeGen_Private::FStrPropertyParams NewProp_boneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_boneNames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ColliderIndexArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColliderIndexArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColliderIndexArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ColliderGroupArrayVRM10_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColliderGroupArrayVRM10_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColliderGroupArrayVRM10;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMSpringMeta>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness = { "stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness_MetaData), Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower = { "gravityPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, gravityPower), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower_MetaData), Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir = { "gravityDir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, gravityDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir_MetaData), Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce = { "dragForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, dragForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce_MetaData), Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius = { "hitRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, hitRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius_MetaData), Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_Inner = { "bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_MetaData[] = {
		{ "Category", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)\n//int boneNum = 0;\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)\nint boneNum = 0;" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones = { "bones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, bones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_MetaData), Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_Inner = { "boneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames = { "boneNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, boneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_MetaData), Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_Inner = { "ColliderIndexArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray = { "ColliderIndexArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, ColliderIndexArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_MetaData), Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_Inner = { "ColliderGroupArrayVRM10", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10 = { "ColliderGroupArrayVRM10", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringMeta, ColliderGroupArrayVRM10), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_MetaData), Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMSpringMeta",
		Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::PropPointers),
		sizeof(FVRMSpringMeta),
		alignof(FVRMSpringMeta),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringMeta()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMSpringMeta.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMSpringMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMSpringMeta.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMSpringColliderData;
class UScriptStruct* FVRMSpringColliderData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMSpringColliderData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMSpringColliderData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMSpringColliderData, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMSpringColliderData"));
	}
	return Z_Registration_Info_UScriptStruct_VRMSpringColliderData.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMSpringColliderData>()
{
	return FVRMSpringColliderData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMSpringColliderData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringColliderData, offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset_MetaData), Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMSpringColliderData, radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius_MetaData), Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMSpringColliderData",
		Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::PropPointers),
		sizeof(FVRMSpringColliderData),
		alignof(FVRMSpringColliderData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringColliderData()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMSpringColliderData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMSpringColliderData.InnerSingleton, Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMSpringColliderData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta;
class UScriptStruct* FVRMColliderGroupMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMColliderGroupMeta, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMColliderGroupMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMColliderGroupMeta>()
{
	return FVRMColliderGroupMeta::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_groupName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_colliderGroup_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colliderGroup_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_colliderGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMColliderGroupMeta>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName = { "groupName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMColliderGroupMeta, groupName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName_MetaData), Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_Inner = { "colliderGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup = { "colliderGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMColliderGroupMeta, colliderGroup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_MetaData), Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMColliderGroupMeta",
		Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::PropPointers),
		sizeof(FVRMColliderGroupMeta),
		alignof(FVRMColliderGroupMeta),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderGroupMeta()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMColliderMeta;
class UScriptStruct* FVRMColliderMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMColliderMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMColliderMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMColliderMeta, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMColliderMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRMColliderMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMColliderMeta>()
{
	return FVRMColliderMeta::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMColliderMeta_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bone_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_bone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_boneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_collider_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collider_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_collider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMColliderMeta>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone = { "bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMColliderMeta, bone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone_MetaData), Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMColliderMeta, boneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName_MetaData), Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_Inner = { "collider", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRMSpringColliderData, METADATA_PARAMS(0, nullptr) }; // 3337611133
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider = { "collider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMColliderMeta, collider), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_MetaData), Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_MetaData) }; // 3337611133
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMColliderMeta",
		Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::PropPointers),
		sizeof(FVRMColliderMeta),
		alignof(FVRMColliderMeta),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderMeta()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMColliderMeta.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMColliderMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMColliderMeta.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta;
class UScriptStruct* FVRM1SpringJointMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRM1SpringJointMeta, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRM1SpringJointMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRM1SpringJointMeta>()
{
	return FVRM1SpringJointMeta::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneNo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_boneNo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_boneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hitRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gravityPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gravityPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gravityDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_gravityDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dragForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dragForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRM1SpringJointMeta>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_boneNo_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_boneNo = { "boneNo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringJointMeta, boneNo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_boneNo_MetaData), Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_boneNo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_boneName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringJointMeta, boneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_boneName_MetaData), Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_boneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_hitRadius_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_hitRadius = { "hitRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringJointMeta, hitRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_hitRadius_MetaData), Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_hitRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_stiffness_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_stiffness = { "stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringJointMeta, stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_stiffness_MetaData), Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_stiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_gravityPower_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_gravityPower = { "gravityPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringJointMeta, gravityPower), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_gravityPower_MetaData), Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_gravityPower_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_gravityDir_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_gravityDir = { "gravityDir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringJointMeta, gravityDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_gravityDir_MetaData), Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_gravityDir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_dragForce_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_dragForce = { "dragForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringJointMeta, dragForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_dragForce_MetaData), Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_dragForce_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_boneNo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_boneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_hitRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_gravityPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_gravityDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewProp_dragForce,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRM1SpringJointMeta",
		Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::PropPointers),
		sizeof(FVRM1SpringJointMeta),
		alignof(FVRM1SpringJointMeta),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringJointMeta()
	{
		if (!Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRM1SpringMeta;
class UScriptStruct* FVRM1SpringMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRM1SpringMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRM1SpringMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRM1SpringMeta, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRM1SpringMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRM1SpringMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRM1SpringMeta>()
{
	return FVRM1SpringMeta::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_joints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_joints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_joints;
		static const UECodeGen_Private::FIntPropertyParams NewProp_colliderGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colliderGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_colliderGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_center_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_center;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRM1SpringMeta>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_joints_Inner = { "joints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRM1SpringJointMeta, METADATA_PARAMS(0, nullptr) }; // 801606751
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_joints_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_joints = { "joints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringMeta, joints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_joints_MetaData), Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_joints_MetaData) }; // 801606751
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_colliderGroups_Inner = { "colliderGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_colliderGroups_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_colliderGroups = { "colliderGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringMeta, colliderGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_colliderGroups_MetaData), Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_colliderGroups_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_center_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_center = { "center", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringMeta, center), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_center_MetaData), Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_center_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_joints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_joints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_colliderGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_colliderGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewProp_center,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRM1SpringMeta",
		Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::PropPointers),
		sizeof(FVRM1SpringMeta),
		alignof(FVRM1SpringMeta),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringMeta()
	{
		if (!Z_Registration_Info_UScriptStruct_VRM1SpringMeta.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRM1SpringMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRM1SpringMeta.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRM1SpringCollider;
class UScriptStruct* FVRM1SpringCollider::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRM1SpringCollider.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRM1SpringCollider.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRM1SpringCollider, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRM1SpringCollider"));
	}
	return Z_Registration_Info_UScriptStruct_VRM1SpringCollider.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRM1SpringCollider>()
{
	return FVRM1SpringCollider::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneNo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_boneNo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_boneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shapeType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_shapeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tail_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRM1SpringCollider>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_boneNo_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_boneNo = { "boneNo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringCollider, boneNo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_boneNo_MetaData), Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_boneNo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_boneName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringCollider, boneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_boneName_MetaData), Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_boneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_shapeType_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_shapeType = { "shapeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringCollider, shapeType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_shapeType_MetaData), Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_shapeType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_offset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringCollider, offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_offset_MetaData), Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_radius_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringCollider, radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_radius_MetaData), Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_radius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_tail_MetaData[] = {
		{ "Category", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// for capsule. offset-tail cylinder\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for capsule. offset-tail cylinder" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_tail = { "tail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringCollider, tail), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_tail_MetaData), Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_tail_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_boneNo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_boneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_shapeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewProp_tail,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRM1SpringCollider",
		Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::PropPointers),
		sizeof(FVRM1SpringCollider),
		alignof(FVRM1SpringCollider),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringCollider()
	{
		if (!Z_Registration_Info_UScriptStruct_VRM1SpringCollider.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRM1SpringCollider.InnerSingleton, Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRM1SpringCollider.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups;
class UScriptStruct* FVRM1SpringColliderGroups::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRM1SpringColliderGroups, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRM1SpringColliderGroups"));
	}
	return Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRM1SpringColliderGroups>()
{
	return FVRM1SpringColliderGroups::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_colliders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colliders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_colliders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRM1SpringColliderGroups>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringColliderGroups, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_name_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_colliders_Inner = { "colliders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_colliders_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_colliders = { "colliders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringColliderGroups, colliders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_colliders_MetaData), Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_colliders_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_colliders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewProp_colliders,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRM1SpringColliderGroups",
		Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::PropPointers),
		sizeof(FVRM1SpringColliderGroups),
		alignof(FVRM1SpringColliderGroups),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringColliderGroups()
	{
		if (!Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups.InnerSingleton, Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta;
class UScriptStruct* FVRM1SpringBoneMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRM1SpringBoneMeta, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRM1SpringBoneMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRM1SpringBoneMeta>()
{
	return FVRM1SpringBoneMeta::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Springs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Springs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Springs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Colliders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Colliders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Colliders;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColliderGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColliderGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColliderGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRM1SpringBoneMeta>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Springs_Inner = { "Springs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRM1SpringMeta, METADATA_PARAMS(0, nullptr) }; // 1838822325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Springs_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Springs = { "Springs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringBoneMeta, Springs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Springs_MetaData), Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Springs_MetaData) }; // 1838822325
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Colliders_Inner = { "Colliders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRM1SpringCollider, METADATA_PARAMS(0, nullptr) }; // 1414706804
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Colliders_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Colliders = { "Colliders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringBoneMeta, Colliders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Colliders_MetaData), Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Colliders_MetaData) }; // 1414706804
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_ColliderGroups_Inner = { "ColliderGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRM1SpringColliderGroups, METADATA_PARAMS(0, nullptr) }; // 3832148419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_ColliderGroups_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_ColliderGroups = { "ColliderGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRM1SpringBoneMeta, ColliderGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_ColliderGroups_MetaData), Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_ColliderGroups_MetaData) }; // 3832148419
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Springs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Springs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Colliders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_Colliders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_ColliderGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewProp_ColliderGroups,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRM1SpringBoneMeta",
		Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::PropPointers),
		sizeof(FVRM1SpringBoneMeta),
		alignof(FVRM1SpringBoneMeta),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRM1SpringBoneMeta()
	{
		if (!Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VrmBlendShape;
class UScriptStruct* FVrmBlendShape::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VrmBlendShape.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VrmBlendShape.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmBlendShape, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmBlendShape"));
	}
	return Z_Registration_Info_UScriptStruct_VrmBlendShape.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmBlendShape>()
{
	return FVrmBlendShape::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVrmBlendShape_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_morphTargetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_morphTargetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_nodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_meshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_meshID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shapeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_shapeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BlendShape\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlendShape" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmBlendShape>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName = { "morphTargetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShape, morphTargetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName_MetaData), Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName = { "nodeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShape, nodeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName_MetaData), Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName = { "meshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShape, meshName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName_MetaData), Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID = { "meshID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShape, meshID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID_MetaData), Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex = { "shapeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShape, shapeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex_MetaData), Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShape, weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight_MetaData), Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrmBlendShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VrmBlendShape",
		Z_Construct_UScriptStruct_FVrmBlendShape_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::PropPointers),
		sizeof(FVrmBlendShape),
		alignof(FVrmBlendShape),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVrmBlendShape_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShape()
	{
		if (!Z_Registration_Info_UScriptStruct_VrmBlendShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VrmBlendShape.InnerSingleton, Z_Construct_UScriptStruct_FVrmBlendShape_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VrmBlendShape.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList;
class UScriptStruct* FVrmBlendShapeMaterialList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmBlendShapeMaterialList"));
	}
	return Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmBlendShapeMaterialList>()
{
	return FVrmBlendShapeMaterialList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_materialName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_propertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_propertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BlendShape Material\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlendShape Material" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmBlendShapeMaterialList>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName = { "materialName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeMaterialList, materialName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName_MetaData), Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName = { "propertyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeMaterialList, propertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName_MetaData), Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeMaterialList, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color_MetaData), Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VrmBlendShapeMaterialList",
		Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::PropPointers),
		sizeof(FVrmBlendShapeMaterialList),
		alignof(FVrmBlendShapeMaterialList),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList()
	{
		if (!Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.InnerSingleton, Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup;
class UScriptStruct* FVrmBlendShapeGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmBlendShapeGroup, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmBlendShapeGroup"));
	}
	return Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmBlendShapeGroup>()
{
	return FVrmBlendShapeGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendShape_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendShape_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendShape;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isBinary_MetaData[];
#endif
		static void NewProp_isBinary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isBinary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overrideBlink_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_overrideBlink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overrideLookAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_overrideLookAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overrideMouth_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_overrideMouth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmBlendShapeGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeGroup, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_Inner = { "BlendShape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVrmBlendShape, METADATA_PARAMS(0, nullptr) }; // 1740797354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape = { "BlendShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeGroup, BlendShape), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_MetaData), Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_MetaData) }; // 1740797354
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_Inner = { "MaterialList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList, METADATA_PARAMS(0, nullptr) }; // 2861748015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList = { "MaterialList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeGroup, MaterialList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_MetaData), Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_MetaData) }; // 2861748015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_isBinary_MetaData[] = {
		{ "Category", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// vrm10\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "vrm10" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_isBinary_SetBit(void* Obj)
	{
		((FVrmBlendShapeGroup*)Obj)->isBinary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_isBinary = { "isBinary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVrmBlendShapeGroup), &Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_isBinary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_isBinary_MetaData), Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_isBinary_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideBlink_MetaData[] = {
		{ "Category", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// none, block, blend\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "none, block, blend" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideBlink = { "overrideBlink", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeGroup, overrideBlink), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideBlink_MetaData), Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideBlink_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideLookAt_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideLookAt = { "overrideLookAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeGroup, overrideLookAt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideLookAt_MetaData), Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideLookAt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideMouth_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideMouth = { "overrideMouth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmBlendShapeGroup, overrideMouth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideMouth_MetaData), Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideMouth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_isBinary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideBlink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideLookAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_overrideMouth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VrmBlendShapeGroup",
		Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::PropPointers),
		sizeof(FVrmBlendShapeGroup),
		alignof(FVrmBlendShapeGroup),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.InnerSingleton, Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMConstraintType;
	static UEnum* EVRMConstraintType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRMConstraintType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRMConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRM4U_EVRMConstraintType, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("EVRMConstraintType"));
		}
		return Z_Registration_Info_UEnum_EVRMConstraintType.OuterSingleton;
	}
	template<> VRM4U_API UEnum* StaticEnum<EVRMConstraintType>()
	{
		return EVRMConstraintType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enumerators[] = {
		{ "EVRMConstraintType::None", (int64)EVRMConstraintType::None },
		{ "EVRMConstraintType::Roll", (int64)EVRMConstraintType::Roll },
		{ "EVRMConstraintType::Aim", (int64)EVRMConstraintType::Aim },
		{ "EVRMConstraintType::Rotation", (int64)EVRMConstraintType::Rotation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enum_MetaDataParams[] = {
		{ "Aim.Name", "EVRMConstraintType::Aim" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//struct VRM4U_API FBVrmlendShapeGroup {\n//\x09TArray<FVrmBlendShape> \n//};\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
		{ "None.Name", "EVRMConstraintType::None" },
		{ "Roll.Name", "EVRMConstraintType::Roll" },
		{ "Rotation.Name", "EVRMConstraintType::Rotation" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "struct VRM4U_API FBVrmlendShapeGroup {\n       TArray<FVrmBlendShape>\n};" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		"EVRMConstraintType",
		"EVRMConstraintType",
		Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VRM4U_EVRMConstraintType()
	{
		if (!Z_Registration_Info_UEnum_EVRMConstraintType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMConstraintType.InnerSingleton, Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRMConstraintType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMConstraintRoll;
class UScriptStruct* FVRMConstraintRoll::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraintRoll.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMConstraintRoll.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraintRoll, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraintRoll"));
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraintRoll.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraintRoll>()
{
	return FVRMConstraintRoll::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rollAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_rollAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraintRoll>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName = { "sourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintRoll, sourceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName_MetaData), Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintRoll, source), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source_MetaData), Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis = { "rollAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintRoll, rollAxis), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis_MetaData), Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintRoll, weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight_MetaData), Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMConstraintRoll",
		Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::PropPointers),
		sizeof(FVRMConstraintRoll),
		alignof(FVRMConstraintRoll),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRoll()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMConstraintRoll.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMConstraintRoll.InnerSingleton, Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMConstraintRoll.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMConstraintAim;
class UScriptStruct* FVRMConstraintAim::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraintAim.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMConstraintAim.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraintAim, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraintAim"));
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraintAim.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraintAim>()
{
	return FVRMConstraintAim::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMConstraintAim_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aimAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_aimAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraintAim>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName = { "sourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintAim, sourceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName_MetaData), Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintAim, source), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source_MetaData), Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis = { "aimAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintAim, aimAxis), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis_MetaData), Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintAim, weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight_MetaData), Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMConstraintAim",
		Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::PropPointers),
		sizeof(FVRMConstraintAim),
		alignof(FVRMConstraintAim),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintAim()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMConstraintAim.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMConstraintAim.InnerSingleton, Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMConstraintAim.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMConstraintRotation;
class UScriptStruct* FVRMConstraintRotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraintRotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMConstraintRotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraintRotation, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraintRotation"));
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraintRotation.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraintRotation>()
{
	return FVRMConstraintRotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraintRotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName = { "sourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintRotation, sourceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName_MetaData), Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintRotation, source), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source_MetaData), Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraintRotation, weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight_MetaData), Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMConstraintRotation",
		Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::PropPointers),
		sizeof(FVRMConstraintRotation),
		alignof(FVRMConstraintRotation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRotation()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMConstraintRotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMConstraintRotation.InnerSingleton, Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMConstraintRotation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMAnimationLookAt;
class UScriptStruct* FVRMAnimationLookAt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMAnimationLookAt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMAnimationLookAt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMAnimationLookAt, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMAnimationLookAt"));
	}
	return Z_Registration_Info_UScriptStruct_VRMAnimationLookAt.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMAnimationLookAt>()
{
	return FVRMAnimationLookAt::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lookAtNode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_lookAtNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lookAtNodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_lookAtNodeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMAnimationLookAt>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewProp_lookAtNode_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewProp_lookAtNode = { "lookAtNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMAnimationLookAt, lookAtNode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewProp_lookAtNode_MetaData), Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewProp_lookAtNode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewProp_lookAtNodeName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewProp_lookAtNodeName = { "lookAtNodeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMAnimationLookAt, lookAtNodeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewProp_lookAtNodeName_MetaData), Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewProp_lookAtNodeName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewProp_lookAtNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewProp_lookAtNodeName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMAnimationLookAt",
		Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::PropPointers),
		sizeof(FVRMAnimationLookAt),
		alignof(FVRMAnimationLookAt),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRMAnimationLookAt()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMAnimationLookAt.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMAnimationLookAt.InnerSingleton, Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMAnimationLookAt.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset;
class UScriptStruct* FVRMAnimationExpressionPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMAnimationExpressionPreset"));
	}
	return Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMAnimationExpressionPreset>()
{
	return FVRMAnimationExpressionPreset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_expressionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_expressionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_expressionNode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_expressionNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_expressionNodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_expressionNodeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMAnimationExpressionPreset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionName = { "expressionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMAnimationExpressionPreset, expressionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionName_MetaData), Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionNode_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionNode = { "expressionNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMAnimationExpressionPreset, expressionNode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionNode_MetaData), Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionNode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionNodeName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionNodeName = { "expressionNodeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMAnimationExpressionPreset, expressionNodeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionNodeName_MetaData), Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionNodeName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewProp_expressionNodeName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMAnimationExpressionPreset",
		Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::PropPointers),
		sizeof(FVRMAnimationExpressionPreset),
		alignof(FVRMAnimationExpressionPreset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset.InnerSingleton, Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMAnimationMeta;
class UScriptStruct* FVRMAnimationMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMAnimationMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMAnimationMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMAnimationMeta, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMAnimationMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRMAnimationMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMAnimationMeta>()
{
	return FVRMAnimationMeta::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lookAt_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lookAt;
		static const UECodeGen_Private::FStructPropertyParams NewProp_expressionPreset_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_expressionPreset_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_expressionPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMAnimationMeta>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_lookAt_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_lookAt = { "lookAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMAnimationMeta, lookAt), Z_Construct_UScriptStruct_FVRMAnimationLookAt, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_lookAt_MetaData), Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_lookAt_MetaData) }; // 637428290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_expressionPreset_Inner = { "expressionPreset", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset, METADATA_PARAMS(0, nullptr) }; // 1921493504
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_expressionPreset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_expressionPreset = { "expressionPreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMAnimationMeta, expressionPreset), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_expressionPreset_MetaData), Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_expressionPreset_MetaData) }; // 1921493504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_lookAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_expressionPreset_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewProp_expressionPreset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMAnimationMeta",
		Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::PropPointers),
		sizeof(FVRMAnimationMeta),
		alignof(FVRMAnimationMeta),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRMAnimationMeta()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMAnimationMeta.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMAnimationMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMAnimationMeta.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMConstraint;
class UScriptStruct* FVRMConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraint, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraint.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraint>()
{
	return FVRMConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_constraintRoll_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_constraintRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_constraintAim_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_constraintAim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_constraintRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_constraintRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraint>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraint, type), Z_Construct_UEnum_VRM4U_EVRMConstraintType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_MetaData) }; // 2100349702
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll = { "constraintRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraint, constraintRoll), Z_Construct_UScriptStruct_FVRMConstraintRoll, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll_MetaData), Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll_MetaData) }; // 324557758
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim = { "constraintAim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraint, constraintAim), Z_Construct_UScriptStruct_FVRMConstraintAim, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim_MetaData), Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim_MetaData) }; // 4207519650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation = { "constraintRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMConstraint, constraintRotation), Z_Construct_UScriptStruct_FVRMConstraintRotation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation_MetaData), Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation_MetaData) }; // 3126783074
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMConstraint",
		Z_Construct_UScriptStruct_FVRMConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::PropPointers),
		sizeof(FVRMConstraint),
		alignof(FVRMConstraint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMConstraint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMConstraint.InnerSingleton, Z_Construct_UScriptStruct_FVRMConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMConstraint.InnerSingleton;
	}
	DEFINE_FUNCTION(UVrmMetaObject::execGetVRMVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetVRMVersion();
		P_NATIVE_END;
	}
	void UVrmMetaObject::StaticRegisterNativesUVrmMetaObject()
	{
		UClass* Class = UVrmMetaObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVRMVersion", &UVrmMetaObject::execGetVRMVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics
	{
		struct VrmMetaObject_eventGetVRMVersion_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmMetaObject_eventGetVRMVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMetaObject, nullptr, "GetVRMVersion", nullptr, nullptr, Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::VrmMetaObject_eventGetVRMVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::VrmMetaObject_eventGetVRMVersion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmMetaObject);
	UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister()
	{
		return UVrmMetaObject::StaticClass();
	}
	struct Z_Construct_UClass_UVrmMetaObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UECodeGen_Private::FStrPropertyParams NewProp_humanoidBoneTable_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_humanoidBoneTable_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_humanoidBoneTable_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_humanoidBoneTable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendShapeGroup_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendShapeGroup_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendShapeGroup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VRMSpringMeta_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMSpringMeta_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VRMSpringMeta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRM1SpringBoneMeta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VRM1SpringBoneMeta;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VRMColliderMeta_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMColliderMeta_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VRMColliderMeta;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VRMColliderGroupMeta_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMColliderGroupMeta_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VRMColliderGroupMeta;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VRMConstraintMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VRMConstraintMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMConstraintMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VRMConstraintMeta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMAnimationMeta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VRMAnimationMeta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VrmAssetListObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmAssetListObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmMetaObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmMetaObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmMetaObject_GetVRMVersion, "GetVRMVersion" }, // 1983537234
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VrmMetaObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, Version), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_Version_MetaData), Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_Version_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_ValueProp = { "humanoidBoneTable", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_Key_KeyProp = { "humanoidBoneTable_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_MetaData[] = {
		{ "Category", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// humanoid name -> model name\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "humanoid name -> model name" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable = { "humanoidBoneTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, humanoidBoneTable), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_MetaData), Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_Inner = { "BlendShapeGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVrmBlendShapeGroup, METADATA_PARAMS(0, nullptr) }; // 1407096572
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup = { "BlendShapeGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, BlendShapeGroup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_MetaData), Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_MetaData) }; // 1407096572
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_Inner = { "VRMSpringMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRMSpringMeta, METADATA_PARAMS(0, nullptr) }; // 3277526494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta = { "VRMSpringMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, VRMSpringMeta), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_MetaData), Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_MetaData) }; // 3277526494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRM1SpringBoneMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRM1SpringBoneMeta = { "VRM1SpringBoneMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, VRM1SpringBoneMeta), Z_Construct_UScriptStruct_FVRM1SpringBoneMeta, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRM1SpringBoneMeta_MetaData), Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRM1SpringBoneMeta_MetaData) }; // 2960228230
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_Inner = { "VRMColliderMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRMColliderMeta, METADATA_PARAMS(0, nullptr) }; // 1648053318
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta = { "VRMColliderMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, VRMColliderMeta), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_MetaData), Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_MetaData) }; // 1648053318
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_Inner = { "VRMColliderGroupMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRMColliderGroupMeta, METADATA_PARAMS(0, nullptr) }; // 392720278
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta = { "VRMColliderGroupMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, VRMColliderGroupMeta), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_MetaData), Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_MetaData) }; // 392720278
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_ValueProp = { "VRMConstraintMeta", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVRMConstraint, METADATA_PARAMS(0, nullptr) }; // 3138655611
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_Key_KeyProp = { "VRMConstraintMeta_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta = { "VRMConstraintMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, VRMConstraintMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_MetaData), Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_MetaData) }; // 3138655611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMAnimationMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMAnimationMeta = { "VRMAnimationMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, VRMAnimationMeta), Z_Construct_UScriptStruct_FVRMAnimationMeta, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMAnimationMeta_MetaData), Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMAnimationMeta_MetaData) }; // 4180790472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject = { "VrmAssetListObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmMetaObject, VrmAssetListObject), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject_MetaData), Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmMetaObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRM1SpringBoneMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMAnimationMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmMetaObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmMetaObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmMetaObject_Statics::ClassParams = {
		&UVrmMetaObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVrmMetaObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmMetaObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVrmMetaObject()
	{
		if (!Z_Registration_Info_UClass_UVrmMetaObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmMetaObject.OuterSingleton, Z_Construct_UClass_UVrmMetaObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmMetaObject.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<UVrmMetaObject>()
	{
		return UVrmMetaObject::StaticClass();
	}
	UVrmMetaObject::UVrmMetaObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmMetaObject);
	UVrmMetaObject::~UVrmMetaObject() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::EnumInfo[] = {
		{ EVRMConstraintType_StaticEnum, TEXT("EVRMConstraintType"), &Z_Registration_Info_UEnum_EVRMConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2100349702U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ScriptStructInfo[] = {
		{ FVRMSpringMeta::StaticStruct, Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewStructOps, TEXT("VRMSpringMeta"), &Z_Registration_Info_UScriptStruct_VRMSpringMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMSpringMeta), 3277526494U) },
		{ FVRMSpringColliderData::StaticStruct, Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewStructOps, TEXT("VRMSpringColliderData"), &Z_Registration_Info_UScriptStruct_VRMSpringColliderData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMSpringColliderData), 3337611133U) },
		{ FVRMColliderGroupMeta::StaticStruct, Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewStructOps, TEXT("VRMColliderGroupMeta"), &Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMColliderGroupMeta), 392720278U) },
		{ FVRMColliderMeta::StaticStruct, Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewStructOps, TEXT("VRMColliderMeta"), &Z_Registration_Info_UScriptStruct_VRMColliderMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMColliderMeta), 1648053318U) },
		{ FVRM1SpringJointMeta::StaticStruct, Z_Construct_UScriptStruct_FVRM1SpringJointMeta_Statics::NewStructOps, TEXT("VRM1SpringJointMeta"), &Z_Registration_Info_UScriptStruct_VRM1SpringJointMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRM1SpringJointMeta), 801606751U) },
		{ FVRM1SpringMeta::StaticStruct, Z_Construct_UScriptStruct_FVRM1SpringMeta_Statics::NewStructOps, TEXT("VRM1SpringMeta"), &Z_Registration_Info_UScriptStruct_VRM1SpringMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRM1SpringMeta), 1838822325U) },
		{ FVRM1SpringCollider::StaticStruct, Z_Construct_UScriptStruct_FVRM1SpringCollider_Statics::NewStructOps, TEXT("VRM1SpringCollider"), &Z_Registration_Info_UScriptStruct_VRM1SpringCollider, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRM1SpringCollider), 1414706804U) },
		{ FVRM1SpringColliderGroups::StaticStruct, Z_Construct_UScriptStruct_FVRM1SpringColliderGroups_Statics::NewStructOps, TEXT("VRM1SpringColliderGroups"), &Z_Registration_Info_UScriptStruct_VRM1SpringColliderGroups, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRM1SpringColliderGroups), 3832148419U) },
		{ FVRM1SpringBoneMeta::StaticStruct, Z_Construct_UScriptStruct_FVRM1SpringBoneMeta_Statics::NewStructOps, TEXT("VRM1SpringBoneMeta"), &Z_Registration_Info_UScriptStruct_VRM1SpringBoneMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRM1SpringBoneMeta), 2960228230U) },
		{ FVrmBlendShape::StaticStruct, Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewStructOps, TEXT("VrmBlendShape"), &Z_Registration_Info_UScriptStruct_VrmBlendShape, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVrmBlendShape), 1740797354U) },
		{ FVrmBlendShapeMaterialList::StaticStruct, Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewStructOps, TEXT("VrmBlendShapeMaterialList"), &Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVrmBlendShapeMaterialList), 2861748015U) },
		{ FVrmBlendShapeGroup::StaticStruct, Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewStructOps, TEXT("VrmBlendShapeGroup"), &Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVrmBlendShapeGroup), 1407096572U) },
		{ FVRMConstraintRoll::StaticStruct, Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewStructOps, TEXT("VRMConstraintRoll"), &Z_Registration_Info_UScriptStruct_VRMConstraintRoll, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMConstraintRoll), 324557758U) },
		{ FVRMConstraintAim::StaticStruct, Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewStructOps, TEXT("VRMConstraintAim"), &Z_Registration_Info_UScriptStruct_VRMConstraintAim, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMConstraintAim), 4207519650U) },
		{ FVRMConstraintRotation::StaticStruct, Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewStructOps, TEXT("VRMConstraintRotation"), &Z_Registration_Info_UScriptStruct_VRMConstraintRotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMConstraintRotation), 3126783074U) },
		{ FVRMAnimationLookAt::StaticStruct, Z_Construct_UScriptStruct_FVRMAnimationLookAt_Statics::NewStructOps, TEXT("VRMAnimationLookAt"), &Z_Registration_Info_UScriptStruct_VRMAnimationLookAt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMAnimationLookAt), 637428290U) },
		{ FVRMAnimationExpressionPreset::StaticStruct, Z_Construct_UScriptStruct_FVRMAnimationExpressionPreset_Statics::NewStructOps, TEXT("VRMAnimationExpressionPreset"), &Z_Registration_Info_UScriptStruct_VRMAnimationExpressionPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMAnimationExpressionPreset), 1921493504U) },
		{ FVRMAnimationMeta::StaticStruct, Z_Construct_UScriptStruct_FVRMAnimationMeta_Statics::NewStructOps, TEXT("VRMAnimationMeta"), &Z_Registration_Info_UScriptStruct_VRMAnimationMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMAnimationMeta), 4180790472U) },
		{ FVRMConstraint::StaticStruct, Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewStructOps, TEXT("VRMConstraint"), &Z_Registration_Info_UScriptStruct_VRMConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMConstraint), 3138655611U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmMetaObject, UVrmMetaObject::StaticClass, TEXT("UVrmMetaObject"), &Z_Registration_Info_UClass_UVrmMetaObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmMetaObject), 1791514253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_987926345(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
