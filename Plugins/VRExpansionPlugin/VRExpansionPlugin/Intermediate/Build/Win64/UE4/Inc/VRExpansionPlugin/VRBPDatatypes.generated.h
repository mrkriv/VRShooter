// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_VRBPDatatypes_generated_h
#error "VRBPDatatypes.generated.h already included, missing '#pragma once' in VRBPDatatypes.h"
#endif
#define VREXPANSIONPLUGIN_VRBPDatatypes_generated_h

#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_1308_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation(); \
	static class UScriptStruct* StaticStruct();


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_1217_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties(); \
	static class UScriptStruct* StaticStruct();


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_1030_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation(); \
	static class UScriptStruct* StaticStruct();


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_954_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPInteractionSettings(); \
	static class UScriptStruct* StaticStruct();


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_852_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPSecondaryGripInfo(); \
	static class UScriptStruct* StaticStruct();


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_824_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripSettings(); \
	static class UScriptStruct* StaticStruct();


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_685_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings(); \
	static class UScriptStruct* StaticStruct();


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_582_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings(); \
	static class UScriptStruct* StaticStruct();


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_363_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep(); \
	static class UScriptStruct* StaticStruct();


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_251_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize(); \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTransform Super;


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_168_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilter(); \
	static class UScriptStruct* StaticStruct();


#define VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_87_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info(); \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRShooter_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h


#define FOREACH_ENUM_EPHYSICSGRIPCONSTRAINTTYPE(op) \
	op(EPhysicsGripConstraintType::AccelerationConstraint) \
	op(EPhysicsGripConstraintType::ForceConstraint) 
#define FOREACH_ENUM_EGRIPINTERFACETELEPORTBEHAVIOR(op) \
	op(EGripInterfaceTeleportBehavior::TeleportAllComponents) \
	op(EGripInterfaceTeleportBehavior::OnlyTeleportRootComponent) \
	op(EGripInterfaceTeleportBehavior::DropOnTeleport) \
	op(EGripInterfaceTeleportBehavior::DontTeleport) 
#define FOREACH_ENUM_EGRIPTARGETTYPE(op) \
	op(EGripTargetType::ActorGrip) \
	op(EGripTargetType::ComponentGrip) 
#define FOREACH_ENUM_EGRIPMOVEMENTREPLICATIONSETTINGS(op) \
	op(EGripMovementReplicationSettings::KeepOriginalMovement) \
	op(EGripMovementReplicationSettings::ForceServerSideMovement) \
	op(EGripMovementReplicationSettings::ForceClientSideMovement) \
	op(EGripMovementReplicationSettings::ClientSide_Authoritive) \
	op(EGripMovementReplicationSettings::ClientSide_Authoritive_NoRep) 
#define FOREACH_ENUM_EGRIPLATEUPDATESETTINGS(op) \
	op(EGripLateUpdateSettings::LateUpdatesAlwaysOn) \
	op(EGripLateUpdateSettings::LateUpdatesAlwaysOff) \
	op(EGripLateUpdateSettings::NotWhenColliding) \
	op(EGripLateUpdateSettings::NotWhenDoubleGripping) \
	op(EGripLateUpdateSettings::NotWhenCollidingOrDoubleGripping) 
#define FOREACH_ENUM_ESECONDARYGRIPTYPE(op) \
	op(ESecondaryGripType::SG_None) \
	op(ESecondaryGripType::SG_Free) \
	op(ESecondaryGripType::SG_SlotOnly) \
	op(ESecondaryGripType::SG_Free_Retain) \
	op(ESecondaryGripType::SG_SlotOnly_Retain) \
	op(ESecondaryGripType::SG_FreeWithScaling_Retain) \
	op(ESecondaryGripType::SG_SlotOnlyWithScaling_Retain) \
	op(ESecondaryGripType::SG_Custom) \
	op(ESecondaryGripType::SG_ScalingOnly) 
#define FOREACH_ENUM_EGRIPLERPSTATE(op) \
	op(EGripLerpState::StartLerp) \
	op(EGripLerpState::EndLerp) \
	op(EGripLerpState::ConstantLerp) \
	op(EGripLerpState::NotLerping) 
#define FOREACH_ENUM_EBPHMDDEVICETYPE(op) \
	op(EBPHMDDeviceType::DT_OculusHMD) \
	op(EBPHMDDeviceType::DT_PSVR) \
	op(EBPHMDDeviceType::DT_ES2GenericStereoMesh) \
	op(EBPHMDDeviceType::DT_SteamVR) \
	op(EBPHMDDeviceType::DT_GearVR) \
	op(EBPHMDDeviceType::DT_GoogleVR) \
	op(EBPHMDDeviceType::DT_OSVR) \
	op(EBPHMDDeviceType::DT_AppleARKit) \
	op(EBPHMDDeviceType::DT_GoogleARCore) \
	op(EBPHMDDeviceType::DT_Unknown) 
#define FOREACH_ENUM_EGRIPCOLLISIONTYPE(op) \
	op(EGripCollisionType::InteractiveCollisionWithPhysics) \
	op(EGripCollisionType::InteractiveCollisionWithSweep) \
	op(EGripCollisionType::InteractiveHybridCollisionWithPhysics) \
	op(EGripCollisionType::InteractiveHybridCollisionWithSweep) \
	op(EGripCollisionType::SweepWithPhysics) \
	op(EGripCollisionType::PhysicsOnly) \
	op(EGripCollisionType::ManipulationGrip) \
	op(EGripCollisionType::ManipulationGripWithWristTwist) \
	op(EGripCollisionType::CustomGrip) 
#define FOREACH_ENUM_EVRVECTORQUANTIZATION(op) \
	op(EVRVectorQuantization::RoundOneDecimal) \
	op(EVRVectorQuantization::RoundTwoDecimals) 
#define FOREACH_ENUM_EBPVRWAISTTRACKINGMODE(op) \
	op(EBPVRWaistTrackingMode::VRWaist_Tracked_Front) \
	op(EBPVRWaistTrackingMode::VRWaist_Tracked_Rear) \
	op(EBPVRWaistTrackingMode::VRWaist_Tracked_Left) \
	op(EBPVRWaistTrackingMode::VRWaist_Tracked_Right) 
#define FOREACH_ENUM_EBPVRRESULTSWITCH(op) \
	op(EBPVRResultSwitch::OnSucceeded) \
	op(EBPVRResultSwitch::OnFailed) 
#define FOREACH_ENUM_EVRCONJOINEDMOVEMENTMODES(op) \
	op(EVRConjoinedMovementModes::C_MOVE_None) \
	op(EVRConjoinedMovementModes::C_MOVE_Walking) \
	op(EVRConjoinedMovementModes::C_MOVE_NavWalking) \
	op(EVRConjoinedMovementModes::C_MOVE_Falling) \
	op(EVRConjoinedMovementModes::C_MOVE_Swimming) \
	op(EVRConjoinedMovementModes::C_MOVE_Flying) \
	op(EVRConjoinedMovementModes::C_MOVE_MAX) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Climbing) \
	op(EVRConjoinedMovementModes::C_VRMOVE_LowGrav) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Seated) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Custom1) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Custom2) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Custom3) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Custom4) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Custom5) 
#define FOREACH_ENUM_EVRCUSTOMMOVEMENTMODE(op) \
	op(EVRCustomMovementMode::VRMOVE_Climbing) \
	op(EVRCustomMovementMode::VRMOVE_LowGrav) \
	op(EVRCustomMovementMode::VRMOVE_Seated) 
#define FOREACH_ENUM_EVRINTERACTIBLEAXIS(op) \
	op(EVRInteractibleAxis::Axis_X) \
	op(EVRInteractibleAxis::Axis_Y) \
	op(EVRInteractibleAxis::Axis_Z) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
