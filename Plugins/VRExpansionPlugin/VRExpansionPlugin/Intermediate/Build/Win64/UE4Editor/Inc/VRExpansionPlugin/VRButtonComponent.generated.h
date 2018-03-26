// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef VREXPANSIONPLUGIN_VRButtonComponent_generated_h
#error "VRButtonComponent.generated.h already included, missing '#pragma once' in VRButtonComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRButtonComponent_generated_h

#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_27_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms \
{ \
	bool ButtonState; \
}; \
static inline void FVRButtonStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRButtonStateChangedSignature, bool ButtonState) \
{ \
	_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms Parms; \
	Parms.ButtonState=ButtonState ? true : false; \
	VRButtonStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetButtonToRestingPosition) \
	{ \
		P_GET_UBOOL(Z_Param_bLerpToPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetButtonToRestingPosition(Z_Param_bLerpToPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetButtonState) \
	{ \
		P_GET_UBOOL(Z_Param_bNewButtonState); \
		P_GET_UBOOL(Z_Param_bCallButtonChangedEvent); \
		P_GET_UBOOL(Z_Param_bSnapIntoPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetButtonState(Z_Param_bNewButtonState,Z_Param_bCallButtonChangedEvent,Z_Param_bSnapIntoPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetInitialButtonLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetInitialButtonLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsButtonInUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsButtonInUse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetButtonToRestingPosition) \
	{ \
		P_GET_UBOOL(Z_Param_bLerpToPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetButtonToRestingPosition(Z_Param_bLerpToPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetButtonState) \
	{ \
		P_GET_UBOOL(Z_Param_bNewButtonState); \
		P_GET_UBOOL(Z_Param_bCallButtonChangedEvent); \
		P_GET_UBOOL(Z_Param_bSnapIntoPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetButtonState(Z_Param_bNewButtonState,Z_Param_bCallButtonChangedEvent,Z_Param_bSnapIntoPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetInitialButtonLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetInitialButtonLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsButtonInUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsButtonInUse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_EVENT_PARMS \
	struct VRButtonComponent_eventReceiveButtonStateChanged_Parms \
	{ \
		bool bCurButtonState; \
	};


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_CALLBACK_WRAPPERS
#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRButtonComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRButtonComponent(); \
public: \
	DECLARE_CLASS(UVRButtonComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRButtonComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUVRButtonComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRButtonComponent(); \
public: \
	DECLARE_CLASS(UVRButtonComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRButtonComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRButtonComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRButtonComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRButtonComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRButtonComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRButtonComponent(UVRButtonComponent&&); \
	NO_API UVRButtonComponent(const UVRButtonComponent&); \
public:


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRButtonComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRButtonComponent(UVRButtonComponent&&); \
	NO_API UVRButtonComponent(const UVRButtonComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRButtonComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRButtonComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRButtonComponent)


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_PRIVATE_PROPERTY_OFFSET
#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_29_PROLOG \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_EVENT_PARMS


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_RPC_WRAPPERS \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_CALLBACK_WRAPPERS \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_INCLASS \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_CALLBACK_WRAPPERS \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_INCLASS_NO_PURE_DECLS \
	VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VRButtonComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h


#define FOREACH_ENUM_EVRBUTTONTYPE(op) \
	op(EVRButtonType::Btn_Press) \
	op(EVRButtonType::Btn_Toggle_Return) \
	op(EVRButtonType::Btn_Toggle_Stay) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
