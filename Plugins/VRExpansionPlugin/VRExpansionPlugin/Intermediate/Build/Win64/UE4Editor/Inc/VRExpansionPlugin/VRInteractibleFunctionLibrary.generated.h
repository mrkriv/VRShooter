// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVRInteractibleAxis : uint8;
struct FVector;
class USceneComponent;
struct FBPActorGripInformation;
struct FBPVRInteractibleBaseData;
struct FTransform;
#ifdef VREXPANSIONPLUGIN_VRInteractibleFunctionLibrary_generated_h
#error "VRInteractibleFunctionLibrary.generated.h already included, missing '#pragma once' in VRInteractibleFunctionLibrary.h"
#endif
#define VREXPANSIONPLUGIN_VRInteractibleFunctionLibrary_generated_h

#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_21_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPVRInteractibleBaseData(); \
	static class UScriptStruct* StaticStruct();


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInteractible_GetThresholdSnappedValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ValueToSnap); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SnapIncrement); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SnapThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetThresholdSnappedValue(Z_Param_ValueToSnap,Z_Param_SnapIncrement,Z_Param_SnapThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractible_GetAngleAroundAxisDelta) \
	{ \
		P_GET_ENUM(EVRInteractibleAxis,Z_Param_AxisToCalc); \
		P_GET_STRUCT(FVector,Z_Param_CurInteractorLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InitialAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetAngleAroundAxisDelta(EVRInteractibleAxis(Z_Param_AxisToCalc),Z_Param_CurInteractorLocation,Z_Param_InitialAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractible_GetAngleAroundAxis) \
	{ \
		P_GET_ENUM(EVRInteractibleAxis,Z_Param_AxisToCalc); \
		P_GET_STRUCT(FVector,Z_Param_CurInteractorLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetAngleAroundAxis(EVRInteractibleAxis(Z_Param_AxisToCalc),Z_Param_CurInteractorLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractible_OnGripInit) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InteractibleComp); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_GET_STRUCT_REF(FBPVRInteractibleBaseData,Z_Param_Out_BaseDataToInit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRInteractibleFunctionLibrary::Interactible_OnGripInit(Z_Param_InteractibleComp,Z_Param_Out_GripInformation,Z_Param_Out_BaseDataToInit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractible_BeginPlayInit) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InteractibleComp); \
		P_GET_STRUCT_REF(FBPVRInteractibleBaseData,Z_Param_Out_BaseDataToInit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRInteractibleFunctionLibrary::Interactible_BeginPlayInit(Z_Param_InteractibleComp,Z_Param_Out_BaseDataToInit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractible_GetCurrentRelativeTransform) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponentToCheck); \
		P_GET_STRUCT_REF(FBPVRInteractibleBaseData,Z_Param_Out_BaseData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetCurrentRelativeTransform(Z_Param_SceneComponentToCheck,Z_Param_Out_BaseData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractible_GetCurrentParentTransform) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponentToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetCurrentParentTransform(Z_Param_SceneComponentToCheck); \
		P_NATIVE_END; \
	}


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteractible_GetThresholdSnappedValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ValueToSnap); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SnapIncrement); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SnapThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetThresholdSnappedValue(Z_Param_ValueToSnap,Z_Param_SnapIncrement,Z_Param_SnapThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractible_GetAngleAroundAxisDelta) \
	{ \
		P_GET_ENUM(EVRInteractibleAxis,Z_Param_AxisToCalc); \
		P_GET_STRUCT(FVector,Z_Param_CurInteractorLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InitialAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetAngleAroundAxisDelta(EVRInteractibleAxis(Z_Param_AxisToCalc),Z_Param_CurInteractorLocation,Z_Param_InitialAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractible_GetAngleAroundAxis) \
	{ \
		P_GET_ENUM(EVRInteractibleAxis,Z_Param_AxisToCalc); \
		P_GET_STRUCT(FVector,Z_Param_CurInteractorLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetAngleAroundAxis(EVRInteractibleAxis(Z_Param_AxisToCalc),Z_Param_CurInteractorLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractible_OnGripInit) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InteractibleComp); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_GET_STRUCT_REF(FBPVRInteractibleBaseData,Z_Param_Out_BaseDataToInit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRInteractibleFunctionLibrary::Interactible_OnGripInit(Z_Param_InteractibleComp,Z_Param_Out_GripInformation,Z_Param_Out_BaseDataToInit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractible_BeginPlayInit) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InteractibleComp); \
		P_GET_STRUCT_REF(FBPVRInteractibleBaseData,Z_Param_Out_BaseDataToInit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRInteractibleFunctionLibrary::Interactible_BeginPlayInit(Z_Param_InteractibleComp,Z_Param_Out_BaseDataToInit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractible_GetCurrentRelativeTransform) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponentToCheck); \
		P_GET_STRUCT_REF(FBPVRInteractibleBaseData,Z_Param_Out_BaseData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetCurrentRelativeTransform(Z_Param_SceneComponentToCheck,Z_Param_Out_BaseData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractible_GetCurrentParentTransform) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponentToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetCurrentParentTransform(Z_Param_SceneComponentToCheck); \
		P_NATIVE_END; \
	}


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRInteractibleFunctionLibrary(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRInteractibleFunctionLibrary(); \
public: \
	DECLARE_CLASS(UVRInteractibleFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRInteractibleFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUVRInteractibleFunctionLibrary(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRInteractibleFunctionLibrary(); \
public: \
	DECLARE_CLASS(UVRInteractibleFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRInteractibleFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRInteractibleFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRInteractibleFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRInteractibleFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRInteractibleFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRInteractibleFunctionLibrary(UVRInteractibleFunctionLibrary&&); \
	NO_API UVRInteractibleFunctionLibrary(const UVRInteractibleFunctionLibrary&); \
public:


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRInteractibleFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRInteractibleFunctionLibrary(UVRInteractibleFunctionLibrary&&); \
	NO_API UVRInteractibleFunctionLibrary(const UVRInteractibleFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRInteractibleFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRInteractibleFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRInteractibleFunctionLibrary)


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_PRIVATE_PROPERTY_OFFSET
#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_45_PROLOG
#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_PRIVATE_PROPERTY_OFFSET \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_RPC_WRAPPERS \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_INCLASS \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_PRIVATE_PROPERTY_OFFSET \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_INCLASS_NO_PURE_DECLS \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
