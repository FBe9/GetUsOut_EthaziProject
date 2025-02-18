// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenXRExpansionTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPENXREXPANSIONPLUGIN_OpenXRExpansionTypes_generated_h
#error "OpenXRExpansionTypes.generated.h already included, missing '#pragma once' in OpenXRExpansionTypes.h"
#endif
#define OPENXREXPANSIONPLUGIN_OpenXRExpansionTypes_generated_h

#define FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPOpenXRActionSkeletalData>();

#define FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h_155_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPOpenXRSkeletalPair>();

#define FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h_195_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPOpenXRSkeletalMappingData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h


#define FOREACH_ENUM_EBPXRRESULTSWITCH(op) \
	op(EBPXRResultSwitch::OnSucceeded) \
	op(EBPXRResultSwitch::OnFailed) 

enum class EBPXRResultSwitch : uint8;
template<> struct TIsUEnumClass<EBPXRResultSwitch> { enum { Value = true }; };
template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPXRResultSwitch>();

#define FOREACH_ENUM_EVRSKELETALHANDINDEX(op) \
	op(EVRSkeletalHandIndex::EActionHandIndex_Left) \
	op(EVRSkeletalHandIndex::EActionHandIndex_Right) 

enum class EVRSkeletalHandIndex : uint8;
template<> struct TIsUEnumClass<EVRSkeletalHandIndex> { enum { Value = true }; };
template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRSkeletalHandIndex>();

#define FOREACH_ENUM_EXRHANDJOINTTYPE(op) \
	op(EXRHandJointType::OXR_HAND_JOINT_PALM_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_WRIST_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_THUMB_METACARPAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_THUMB_PROXIMAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_THUMB_DISTAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_THUMB_TIP_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_INDEX_METACARPAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_INDEX_PROXIMAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_INDEX_INTERMEDIATE_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_INDEX_DISTAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_INDEX_TIP_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_MIDDLE_METACARPAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_MIDDLE_PROXIMAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_MIDDLE_INTERMEDIATE_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_MIDDLE_DISTAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_MIDDLE_TIP_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_RING_METACARPAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_RING_PROXIMAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_RING_INTERMEDIATE_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_RING_DISTAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_RING_TIP_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_LITTLE_METACARPAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_LITTLE_PROXIMAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_LITTLE_INTERMEDIATE_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_LITTLE_DISTAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_LITTLE_TIP_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_MAX_ENUM_EXT) 

enum class EXRHandJointType : uint8;
template<> struct TIsUEnumClass<EXRHandJointType> { enum { Value = true }; };
template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EXRHandJointType>();

#define FOREACH_ENUM_EVROPENXRSKELETONTYPE(op) \
	op(EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Right) \
	op(EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Left) \
	op(EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Right) \
	op(EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Left) \
	op(EVROpenXRSkeletonType::OXR_SkeletonType_UE5Default_Right) \
	op(EVROpenXRSkeletonType::OXR_SkeletonType_UE5Default_Left) \
	op(EVROpenXRSkeletonType::OXR_SkeletonType_OpenXRDefault_Right) \
	op(EVROpenXRSkeletonType::OXR_SkeletonType_OpenXRDefault_Left) \
	op(EVROpenXRSkeletonType::OXR_SkeletonType_Custom) 

enum class EVROpenXRSkeletonType : uint8;
template<> struct TIsUEnumClass<EVROpenXRSkeletonType> { enum { Value = true }; };
template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EVROpenXRSkeletonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
