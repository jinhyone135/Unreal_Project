// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRM4URender.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRM4URENDER_VRM4URender_generated_h
#error "VRM4URender.generated.h already included, missing '#pragma once' in VRM4URender.h"
#endif
#define VRM4URENDER_VRM4URender_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Private_VRM4URender_h


#define FOREACH_ENUM_EVRM4U_CAPTURESOURCE(op) \
	op(ColorTexturePostOpaque) \
	op(ColorTextureOverlay) \
	op(ColorTexturePreTonemap) \
	op(ColorTexturePostTonemap) \
	op(ColorTextureLastPass) \
	op(DepthTexture) \
	op(NormalTexture) \
	op(VelocityTexture) \
	op(SceneColorTexturePostOpaque) \
	op(SceneColorTextureOverlay) \
	op(SceneDepthTexture) \
	op(GBufferATexture) \
	op(GBufferBTexture) \
	op(GBufferCTexture) \
	op(GBufferDTexture) \
	op(GBufferETexture) \
	op(GBufferFTexture) \
	op(GBufferVelocityTexture) \
	op(ScreenSpaceAOTexture) \
	op(CustomDepthTexture) 

enum EVRM4U_CaptureSource : int;
template<> VRM4URENDER_API UEnum* StaticEnum<EVRM4U_CaptureSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
