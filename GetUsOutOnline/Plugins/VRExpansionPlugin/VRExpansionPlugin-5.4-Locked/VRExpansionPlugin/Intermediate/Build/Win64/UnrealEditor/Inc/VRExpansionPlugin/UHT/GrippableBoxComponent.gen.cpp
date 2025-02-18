// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippableBoxComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippableBoxComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableBoxComponent();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableBoxComponent_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties();
// End Cross Module References

// Begin Class UGrippableBoxComponent Function SetDenyGripping
struct Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping_Statics
{
	struct GrippableBoxComponent_eventSetDenyGripping_Parms
	{
		bool bDenyGripping;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the Deny Gripping variable on the FBPInterfaceSettings struct\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableBoxComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Deny Gripping variable on the FBPInterfaceSettings struct" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bDenyGripping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
{
	((GrippableBoxComponent_eventSetDenyGripping_Parms*)Obj)->bDenyGripping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GrippableBoxComponent_eventSetDenyGripping_Parms), &Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping_Statics::NewProp_bDenyGripping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableBoxComponent, nullptr, "SetDenyGripping", nullptr, nullptr, Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping_Statics::GrippableBoxComponent_eventSetDenyGripping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping_Statics::GrippableBoxComponent_eventSetDenyGripping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrippableBoxComponent::execSetDenyGripping)
{
	P_GET_UBOOL(Z_Param_bDenyGripping);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDenyGripping(Z_Param_bDenyGripping);
	P_NATIVE_END;
}
// End Class UGrippableBoxComponent Function SetDenyGripping

// Begin Class UGrippableBoxComponent Function SetGripPriority
struct Z_Construct_UFunction_UGrippableBoxComponent_SetGripPriority_Statics
{
	struct GrippableBoxComponent_eventSetGripPriority_Parms
	{
		int32 NewGripPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the grip priority on the FBPInterfaceSettings struct\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableBoxComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the grip priority on the FBPInterfaceSettings struct" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewGripPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGrippableBoxComponent_SetGripPriority_Statics::NewProp_NewGripPriority = { "NewGripPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrippableBoxComponent_eventSetGripPriority_Parms, NewGripPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableBoxComponent_SetGripPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableBoxComponent_SetGripPriority_Statics::NewProp_NewGripPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableBoxComponent_SetGripPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableBoxComponent_SetGripPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableBoxComponent, nullptr, "SetGripPriority", nullptr, nullptr, Z_Construct_UFunction_UGrippableBoxComponent_SetGripPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableBoxComponent_SetGripPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrippableBoxComponent_SetGripPriority_Statics::GrippableBoxComponent_eventSetGripPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableBoxComponent_SetGripPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrippableBoxComponent_SetGripPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGrippableBoxComponent_SetGripPriority_Statics::GrippableBoxComponent_eventSetGripPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrippableBoxComponent_SetGripPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrippableBoxComponent_SetGripPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrippableBoxComponent::execSetGripPriority)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewGripPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGripPriority(Z_Param_NewGripPriority);
	P_NATIVE_END;
}
// End Class UGrippableBoxComponent Function SetGripPriority

// Begin Class UGrippableBoxComponent
void UGrippableBoxComponent::StaticRegisterNativesUGrippableBoxComponent()
{
	UClass* Class = UGrippableBoxComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetDenyGripping", &UGrippableBoxComponent::execSetDenyGripping },
		{ "SetGripPriority", &UGrippableBoxComponent::execSetGripPriority },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrippableBoxComponent);
UClass* Z_Construct_UClass_UGrippableBoxComponent_NoRegister()
{
	return UGrippableBoxComponent::StaticClass();
}
struct Z_Construct_UClass_UGrippableBoxComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Grippables/GrippableBoxComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableBoxComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_Inner_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableBoxComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableBoxComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateGripScripts_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then the grip script array will be considered for replication, if false then it will not\n// This is an optimization for when you have a lot of grip scripts in use, you can toggle this off in cases\n// where the object will never have a replicating script\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableBoxComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then the grip script array will be considered for replication, if false then it will not\nThis is an optimization for when you have a lot of grip scripts in use, you can toggle this off in cases\nwhere the object will never have a replicating script" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when a object is gripped\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableBoxComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a object is gripped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when a object is dropped\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableBoxComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a object is dropped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripAdded_MetaData[] = {
		{ "Category", "Grip Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when an object we hold is secondary gripped\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableBoxComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when an object we hold is secondary gripped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripRemoved_MetaData[] = {
		{ "Category", "Grip Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when an object we hold is secondary dropped\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableBoxComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when an object we hold is secondary dropped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that are set on this object */" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableBoxComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that are set on this object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRepGripSettingsAndGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Requires bReplicates to be true for the component\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableBoxComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requires bReplicates to be true for the component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableBoxComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRGripInterfaceSettings_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableBoxComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GripLogicScripts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GripLogicScripts;
	static void NewProp_bReplicateGripScripts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateGripScripts;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGripped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripRemoved;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static void NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepGripSettingsAndGameplayTags;
	static void NewProp_bReplicateMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VRGripInterfaceSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrippableBoxComponent_SetDenyGripping, "SetDenyGripping" }, // 1236554311
		{ &Z_Construct_UFunction_UGrippableBoxComponent_SetGripPriority, "SetGripPriority" }, // 2111252967
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrippableBoxComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_GripLogicScripts_Inner = { "GripLogicScripts", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripLogicScripts_Inner_MetaData), NewProp_GripLogicScripts_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_GripLogicScripts = { "GripLogicScripts", nullptr, (EPropertyFlags)0x012408800000003d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrippableBoxComponent, GripLogicScripts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripLogicScripts_MetaData), NewProp_GripLogicScripts_MetaData) };
void Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_bReplicateGripScripts_SetBit(void* Obj)
{
	((UGrippableBoxComponent*)Obj)->bReplicateGripScripts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_bReplicateGripScripts = { "bReplicateGripScripts", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGrippableBoxComponent), &Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_bReplicateGripScripts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateGripScripts_MetaData), NewProp_bReplicateGripScripts_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrippableBoxComponent, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGripped_MetaData), NewProp_OnGripped_MetaData) }; // 3815915342
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrippableBoxComponent, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDropped_MetaData), NewProp_OnDropped_MetaData) }; // 1002007758
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_OnSecondaryGripAdded = { "OnSecondaryGripAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrippableBoxComponent, OnSecondaryGripAdded), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSecondaryGripAdded_MetaData), NewProp_OnSecondaryGripAdded_MetaData) }; // 3815915342
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_OnSecondaryGripRemoved = { "OnSecondaryGripRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrippableBoxComponent, OnSecondaryGripRemoved), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSecondaryGripRemoved_MetaData), NewProp_OnSecondaryGripRemoved_MetaData) }; // 3815915342
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrippableBoxComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
void Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj)
{
	((UGrippableBoxComponent*)Obj)->bRepGripSettingsAndGameplayTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags = { "bRepGripSettingsAndGameplayTags", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGrippableBoxComponent), &Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRepGripSettingsAndGameplayTags_MetaData), NewProp_bRepGripSettingsAndGameplayTags_MetaData) };
void Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
{
	((UGrippableBoxComponent*)Obj)->bReplicateMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGrippableBoxComponent), &Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateMovement_MetaData), NewProp_bReplicateMovement_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_VRGripInterfaceSettings = { "VRGripInterfaceSettings", nullptr, (EPropertyFlags)0x0020088000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrippableBoxComponent, VRGripInterfaceSettings), Z_Construct_UScriptStruct_FBPInterfaceProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRGripInterfaceSettings_MetaData), NewProp_VRGripInterfaceSettings_MetaData) }; // 972051801
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrippableBoxComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_GripLogicScripts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_GripLogicScripts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_bReplicateGripScripts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_OnGripped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_OnDropped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_OnSecondaryGripAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_OnSecondaryGripRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_bReplicateMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableBoxComponent_Statics::NewProp_VRGripInterfaceSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableBoxComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGrippableBoxComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBoxComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableBoxComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGrippableBoxComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(UGrippableBoxComponent, IVRGripInterface), false },  // 199302906
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UGrippableBoxComponent, IGameplayTagAssetInterface), false },  // 2863124436
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrippableBoxComponent_Statics::ClassParams = {
	&UGrippableBoxComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGrippableBoxComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableBoxComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableBoxComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGrippableBoxComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGrippableBoxComponent()
{
	if (!Z_Registration_Info_UClass_UGrippableBoxComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrippableBoxComponent.OuterSingleton, Z_Construct_UClass_UGrippableBoxComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGrippableBoxComponent.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGrippableBoxComponent>()
{
	return UGrippableBoxComponent::StaticClass();
}
void UGrippableBoxComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_GripLogicScripts(TEXT("GripLogicScripts"));
	static const FName Name_bReplicateGripScripts(TEXT("bReplicateGripScripts"));
	static const FName Name_GameplayTags(TEXT("GameplayTags"));
	static const FName Name_bRepGripSettingsAndGameplayTags(TEXT("bRepGripSettingsAndGameplayTags"));
	static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));
	static const FName Name_VRGripInterfaceSettings(TEXT("VRGripInterfaceSettings"));
	const bool bIsValid = true
		&& Name_GripLogicScripts == ClassReps[(int32)ENetFields_Private::GripLogicScripts].Property->GetFName()
		&& Name_bReplicateGripScripts == ClassReps[(int32)ENetFields_Private::bReplicateGripScripts].Property->GetFName()
		&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
		&& Name_bRepGripSettingsAndGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGripSettingsAndGameplayTags].Property->GetFName()
		&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName()
		&& Name_VRGripInterfaceSettings == ClassReps[(int32)ENetFields_Private::VRGripInterfaceSettings].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGrippableBoxComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGrippableBoxComponent);
// End Class UGrippableBoxComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGrippableBoxComponent, UGrippableBoxComponent::StaticClass, TEXT("UGrippableBoxComponent"), &Z_Registration_Info_UClass_UGrippableBoxComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrippableBoxComponent), 595529243U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_3120505767(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
