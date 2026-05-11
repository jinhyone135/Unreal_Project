// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRM4U_RenderSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
class UVrmExtensionRimFilterData;
#ifdef VRM4URENDER_VRM4U_RenderSubsystem_generated_h
#error "VRM4U_RenderSubsystem.generated.h already included, missing '#pragma once' in VRM4U_RenderSubsystem.h"
#endif
#define VRM4URENDER_VRM4U_RenderSubsystem_generated_h

#define FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_32_SPARSE_DATA
#define FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_32_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetViewExtension); \
	DECLARE_FUNCTION(execResetSceneTextureExtentHistory); \
	DECLARE_FUNCTION(execRemoveAllCaptureTexture); \
	DECLARE_FUNCTION(execRemoveCaptureTexture); \
	DECLARE_FUNCTION(execAddCaptureTexture); \
	DECLARE_FUNCTION(execRemoveRimFilterDataByPriority); \
	DECLARE_FUNCTION(execRemoveRimFilterData); \
	DECLARE_FUNCTION(execAddRimFilterData);


#define FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_32_ACCESSORS
#define FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRM4U_RenderSubsystem(); \
	friend struct Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVRM4U_RenderSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4URender"), NO_API) \
	DECLARE_SERIALIZER(UVRM4U_RenderSubsystem)


#define FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRM4U_RenderSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRM4U_RenderSubsystem(UVRM4U_RenderSubsystem&&); \
	NO_API UVRM4U_RenderSubsystem(const UVRM4U_RenderSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRM4U_RenderSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRM4U_RenderSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVRM4U_RenderSubsystem) \
	NO_API virtual ~UVRM4U_RenderSubsystem();


#define FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_28_PROLOG
#define FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_32_SPARSE_DATA \
	FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_32_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_32_ACCESSORS \
	FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_32_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4URENDER_API UClass* StaticClass<class UVRM4U_RenderSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
