// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UEditor/Public/VrmEditorBPFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmEditorBPFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRM4UEditor();
	VRM4UEDITOR_API UClass* Z_Construct_UClass_UVrmEditorBPFunctionLibrary();
	VRM4UEDITOR_API UClass* Z_Construct_UClass_UVrmEditorBPFunctionLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVrmEditorBPFunctionLibrary::execEvaluateCurvesFromSequence)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Seq);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrameNo);
		P_GET_TARRAY_REF(FString,Z_Param_Out_names);
		P_GET_TARRAY_REF(float,Z_Param_Out_curves);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVrmEditorBPFunctionLibrary::EvaluateCurvesFromSequence(Z_Param_Seq,Z_Param_FrameNo,Z_Param_Out_names,Z_Param_Out_curves);
		P_NATIVE_END;
	}
	void UVrmEditorBPFunctionLibrary::StaticRegisterNativesUVrmEditorBPFunctionLibrary()
	{
		UClass* Class = UVrmEditorBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluateCurvesFromSequence", &UVrmEditorBPFunctionLibrary::execEvaluateCurvesFromSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics
	{
		struct VrmEditorBPFunctionLibrary_eventEvaluateCurvesFromSequence_Parms
		{
			const UMovieSceneSequence* Seq;
			float FrameNo;
			TArray<FString> names;
			TArray<float> curves;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seq_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Seq;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameNo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_names_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_names;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_curves_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_curves;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_Seq_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_Seq = { "Seq", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmEditorBPFunctionLibrary_eventEvaluateCurvesFromSequence_Parms, Seq), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_Seq_MetaData), Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_Seq_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_FrameNo = { "FrameNo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmEditorBPFunctionLibrary_eventEvaluateCurvesFromSequence_Parms, FrameNo), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_names_Inner = { "names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_names = { "names", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmEditorBPFunctionLibrary_eventEvaluateCurvesFromSequence_Parms, names), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_curves_Inner = { "curves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_curves = { "curves", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmEditorBPFunctionLibrary_eventEvaluateCurvesFromSequence_Parms, curves), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmEditorBPFunctionLibrary_eventEvaluateCurvesFromSequence_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_Seq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_FrameNo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_names,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_curves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_curves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintPure, Category = \"VRM4U\")\n//static void VRMGetMorphTargetList(const USkeletalMesh *target, TArray<FString> &morphTargetList);\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmEditorBPFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintPure, Category = \"VRM4U\")\nstatic void VRMGetMorphTargetList(const USkeletalMesh *target, TArray<FString> &morphTargetList);" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmEditorBPFunctionLibrary, nullptr, "EvaluateCurvesFromSequence", nullptr, nullptr, Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::VrmEditorBPFunctionLibrary_eventEvaluateCurvesFromSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::VrmEditorBPFunctionLibrary_eventEvaluateCurvesFromSequence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmEditorBPFunctionLibrary);
	UClass* Z_Construct_UClass_UVrmEditorBPFunctionLibrary_NoRegister()
	{
		return UVrmEditorBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence, "EvaluateCurvesFromSequence" }, // 1169304896
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "VrmEditorBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VrmEditorBPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmEditorBPFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::ClassParams = {
		&UVrmEditorBPFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVrmEditorBPFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UVrmEditorBPFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmEditorBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmEditorBPFunctionLibrary.OuterSingleton;
	}
	template<> VRM4UEDITOR_API UClass* StaticClass<UVrmEditorBPFunctionLibrary>()
	{
		return UVrmEditorBPFunctionLibrary::StaticClass();
	}
	UVrmEditorBPFunctionLibrary::UVrmEditorBPFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmEditorBPFunctionLibrary);
	UVrmEditorBPFunctionLibrary::~UVrmEditorBPFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UEditor_Public_VrmEditorBPFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UEditor_Public_VrmEditorBPFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmEditorBPFunctionLibrary, UVrmEditorBPFunctionLibrary::StaticClass, TEXT("UVrmEditorBPFunctionLibrary"), &Z_Registration_Info_UClass_UVrmEditorBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmEditorBPFunctionLibrary), 2590999627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UEditor_Public_VrmEditorBPFunctionLibrary_h_353157296(TEXT("/Script/VRM4UEditor"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UEditor_Public_VrmEditorBPFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UEditor_Public_VrmEditorBPFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
