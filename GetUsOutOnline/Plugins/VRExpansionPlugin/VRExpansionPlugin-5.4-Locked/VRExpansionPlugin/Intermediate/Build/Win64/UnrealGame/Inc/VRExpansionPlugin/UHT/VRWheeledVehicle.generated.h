// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/VRWheeledVehicle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
#ifdef VREXPANSIONPLUGIN_VRWheeledVehicle_generated_h
#error "VRWheeledVehicle.generated.h already included, missing '#pragma once' in VRWheeledVehicle.h"
#endif
#define VREXPANSIONPLUGIN_VRWheeledVehicle_generated_h

#define FID_GetUsOutOnline_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPVehicleTransmissionConfig_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FVehicleTransmissionConfig Super;


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPVehicleTransmissionConfig>();

#define FID_GetUsOutOnline_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetOverrideController); \
	DECLARE_FUNCTION(execSetBindToInput); \
	DECLARE_FUNCTION(execSetFinalGearRatio); \
	DECLARE_FUNCTION(execGetFinalGearRatio);


#define FID_GetUsOutOnline_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRWheeledVehicle(); \
	friend struct Z_Construct_UClass_AVRWheeledVehicle_Statics; \
public: \
	DECLARE_CLASS(AVRWheeledVehicle, AWheeledVehiclePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRWheeledVehicle)


#define FID_GetUsOutOnline_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRWheeledVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVRWheeledVehicle(AVRWheeledVehicle&&); \
	AVRWheeledVehicle(const AVRWheeledVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRWheeledVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRWheeledVehicle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRWheeledVehicle) \
	NO_API virtual ~AVRWheeledVehicle();


#define FID_GetUsOutOnline_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_53_PROLOG
#define FID_GetUsOutOnline_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GetUsOutOnline_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GetUsOutOnline_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_57_INCLASS_NO_PURE_DECLS \
	FID_GetUsOutOnline_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class AVRWheeledVehicle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GetUsOutOnline_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
