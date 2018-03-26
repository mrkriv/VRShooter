// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCharacter() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_ExtendedSimpleMoveToLocation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_GetTeleportLocation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_NotifyOfTeleport();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_RegenerateOffsetComponentToWorld();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVR();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep2();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_SetCharacterHalfHeightVR();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_SetCharacterSizeVR();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
// End Cross Module References
	static FName NAME_AVRCharacter_NotifyOfTeleport = FName(TEXT("NotifyOfTeleport"));
	void AVRCharacter::NotifyOfTeleport()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVRCharacter_NotifyOfTeleport),NULL);
	}
	static FName NAME_AVRCharacter_ServerMoveVR = FName(TEXT("ServerMoveVR"));
	void AVRCharacter::ServerMoveVR(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRCharacter_eventServerMoveVR_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRCharacter_ServerMoveVR),&Parms);
	}
	static FName NAME_AVRCharacter_ServerMoveVRDual = FName(TEXT("ServerMoveVRDual"));
	void AVRCharacter::ServerMoveVRDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRCharacter_eventServerMoveVRDual_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRCharacter_ServerMoveVRDual),&Parms);
	}
	static FName NAME_AVRCharacter_ServerMoveVRDualExLight = FName(TEXT("ServerMoveVRDualExLight"));
	void AVRCharacter::ServerMoveVRDualExLight(float TimeStamp0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRCharacter_eventServerMoveVRDualExLight_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRCharacter_ServerMoveVRDualExLight),&Parms);
	}
	static FName NAME_AVRCharacter_ServerMoveVRDualHybridRootMotion = FName(TEXT("ServerMoveVRDualHybridRootMotion"));
	void AVRCharacter::ServerMoveVRDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRCharacter_ServerMoveVRDualHybridRootMotion),&Parms);
	}
	static FName NAME_AVRCharacter_ServerMoveVRExLight = FName(TEXT("ServerMoveVRExLight"));
	void AVRCharacter::ServerMoveVRExLight(float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRCharacter_eventServerMoveVRExLight_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRCharacter_ServerMoveVRExLight),&Parms);
	}
	void AVRCharacter::StaticRegisterNativesAVRCharacter()
	{
		UClass* Class = AVRCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExtendedSimpleMoveToLocation", &AVRCharacter::execExtendedSimpleMoveToLocation },
			{ "GetTeleportLocation", &AVRCharacter::execGetTeleportLocation },
			{ "NotifyOfTeleport", &AVRCharacter::execNotifyOfTeleport },
			{ "RegenerateOffsetComponentToWorld", &AVRCharacter::execRegenerateOffsetComponentToWorld },
			{ "ServerMoveVR", &AVRCharacter::execServerMoveVR },
			{ "ServerMoveVRDual", &AVRCharacter::execServerMoveVRDual },
			{ "ServerMoveVRDualExLight", &AVRCharacter::execServerMoveVRDualExLight },
			{ "ServerMoveVRDualHybridRootMotion", &AVRCharacter::execServerMoveVRDualHybridRootMotion },
			{ "ServerMoveVRExLight", &AVRCharacter::execServerMoveVRExLight },
			{ "SetCharacterHalfHeightVR", &AVRCharacter::execSetCharacterHalfHeightVR },
			{ "SetCharacterSizeVR", &AVRCharacter::execSetCharacterSizeVR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_ExtendedSimpleMoveToLocation()
	{
		struct VRCharacter_eventExtendedSimpleMoveToLocation_Parms
		{
			FVector GoalLocation;
			float AcceptanceRadius;
			bool bStopOnOverlap;
			bool bUsePathfinding;
			bool bProjectDestinationToNavigation;
			bool bCanStrafe;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool bAllowPartialPath;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bAllowPartialPath_SetBit = [](void* Obj){ ((VRCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bAllowPartialPath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowPartialPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowPartialPath_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventExtendedSimpleMoveToLocation_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bCanStrafe_SetBit = [](void* Obj){ ((VRCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bCanStrafe = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanStrafe = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanStrafe", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanStrafe_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bProjectDestinationToNavigation_SetBit = [](void* Obj){ ((VRCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bProjectDestinationToNavigation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectDestinationToNavigation = { UE4CodeGen_Private::EPropertyClass::Bool, "bProjectDestinationToNavigation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bProjectDestinationToNavigation_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUsePathfinding_SetBit = [](void* Obj){ ((VRCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bUsePathfinding = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePathfinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsePathfinding_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bStopOnOverlap_SetBit = [](void* Obj){ ((VRCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bStopOnOverlap = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopOnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopOnOverlap_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptanceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventExtendedSimpleMoveToLocation_Parms, AcceptanceRadius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalLocation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "GoalLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventExtendedSimpleMoveToLocation_Parms, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_GoalLocation_MetaData, ARRAY_COUNT(NewProp_GoalLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowPartialPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanStrafe,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bProjectDestinationToNavigation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsePathfinding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopOnOverlap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptanceRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GoalLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "bStopOnOverlap,bCanStrafe,bAllowPartialPath" },
				{ "Category", "VRCharacter" },
				{ "CPP_Default_AcceptanceRadius", "-1.000000" },
				{ "CPP_Default_bAllowPartialPath", "true" },
				{ "CPP_Default_bCanStrafe", "false" },
				{ "CPP_Default_bProjectDestinationToNavigation", "true" },
				{ "CPP_Default_bStopOnOverlap", "false" },
				{ "CPP_Default_bUsePathfinding", "true" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
				{ "ToolTip", "An extended simple move to location with additional parameters" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "ExtendedSimpleMoveToLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20400, sizeof(VRCharacter_eventExtendedSimpleMoveToLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_GetTeleportLocation()
	{
		struct VRCharacter_eventGetTeleportLocation_Parms
		{
			FVector OriginalLocation;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventGetTeleportLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "OriginalLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventGetTeleportLocation_Parms, OriginalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OriginalLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGrip" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
				{ "ToolTip", "A helper function that offsets a given vector by the roots collision location\npass in a teleport location and it provides the correct spot for it to be at your feet" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "GetTeleportLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820400, sizeof(VRCharacter_eventGetTeleportLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_NotifyOfTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGrip" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "NotifyOfTeleport", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_RegenerateOffsetComponentToWorld()
	{
		struct VRCharacter_eventRegenerateOffsetComponentToWorld_Parms
		{
			bool bUpdateBounds;
			bool bCalculatePureYaw;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bCalculatePureYaw_SetBit = [](void* Obj){ ((VRCharacter_eventRegenerateOffsetComponentToWorld_Parms*)Obj)->bCalculatePureYaw = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCalculatePureYaw = { UE4CodeGen_Private::EPropertyClass::Bool, "bCalculatePureYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventRegenerateOffsetComponentToWorld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCalculatePureYaw_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUpdateBounds_SetBit = [](void* Obj){ ((VRCharacter_eventRegenerateOffsetComponentToWorld_Parms*)Obj)->bUpdateBounds = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateBounds = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventRegenerateOffsetComponentToWorld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateBounds_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCalculatePureYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateBounds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
				{ "ToolTip", "Regenerates the base offsetcomponenttoworld that VR uses" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "RegenerateOffsetComponentToWorld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRCharacter_eventRegenerateOffsetComponentToWorld_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedMoveFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "CompressedMoveFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, CompressedMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressedMoveFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "ServerMoveVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacter_eventServerMoveVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_OldCapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "OldCapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, OldCapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "OldCapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, OldCapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0 = { UE4CodeGen_Private::EPropertyClass::UInt32, "View0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, View0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0 = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldLFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info for two moves." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "ServerMoveVRDual", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacter_eventServerMoveVRDual_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_OldCapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "OldCapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, OldCapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "OldCapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, OldCapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0 = { UE4CodeGen_Private::EPropertyClass::UInt32, "View0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, View0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldLFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info for two moves. ExLight version is used if there was no requested velocity or customVRInputVector or Accell" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "ServerMoveVRDualExLight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacter_eventServerMoveVRDualExLight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_OldCapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "OldCapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, OldCapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "OldCapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, OldCapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0 = { UE4CodeGen_Private::EPropertyClass::UInt32, "View0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, View0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0 = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldLFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info for two moves. First move is non root motion, second is root motion." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "ServerMoveVRDualHybridRootMotion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedMoveFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "CompressedMoveFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, CompressedMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressedMoveFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info. ExLight version is used if there was no requested velocity or customVRInputVector or Accell" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "ServerMoveVRExLight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacter_eventServerMoveVRExLight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_SetCharacterHalfHeightVR()
	{
		struct VRCharacter_eventSetCharacterHalfHeightVR_Parms
		{
			float HalfHeight;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((VRCharacter_eventSetCharacterHalfHeightVR_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventSetCharacterHalfHeightVR_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "HalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventSetCharacterHalfHeightVR_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HalfHeight,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter" },
				{ "CPP_Default_bUpdateOverlaps", "true" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "SetCharacterHalfHeightVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRCharacter_eventSetCharacterHalfHeightVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_SetCharacterSizeVR()
	{
		struct VRCharacter_eventSetCharacterSizeVR_Parms
		{
			float NewRadius;
			float NewHalfHeight;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((VRCharacter_eventSetCharacterSizeVR_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventSetCharacterSizeVR_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewHalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "NewHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventSetCharacterSizeVR_Parms, NewHalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRadius = { UE4CodeGen_Private::EPropertyClass::Float, "NewRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventSetCharacterSizeVR_Parms, NewRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewHalfHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter" },
				{ "CPP_Default_bUpdateOverlaps", "true" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "SetCharacterSizeVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRCharacter_eventSetCharacterSizeVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRCharacter_NoRegister()
	{
		return AVRCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AVRBaseCharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AVRCharacter_ExtendedSimpleMoveToLocation, "ExtendedSimpleMoveToLocation" }, // 2210312081
				{ &Z_Construct_UFunction_AVRCharacter_GetTeleportLocation, "GetTeleportLocation" }, // 2232277604
				{ &Z_Construct_UFunction_AVRCharacter_NotifyOfTeleport, "NotifyOfTeleport" }, // 910301256
				{ &Z_Construct_UFunction_AVRCharacter_RegenerateOffsetComponentToWorld, "RegenerateOffsetComponentToWorld" }, // 3186149280
				{ &Z_Construct_UFunction_AVRCharacter_ServerMoveVR, "ServerMoveVR" }, // 574188818
				{ &Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual, "ServerMoveVRDual" }, // 1107908302
				{ &Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight, "ServerMoveVRDualExLight" }, // 3827855843
				{ &Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion, "ServerMoveVRDualHybridRootMotion" }, // 3370875624
				{ &Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight, "ServerMoveVRExLight" }, // 1376558195
				{ &Z_Construct_UFunction_AVRCharacter_SetCharacterHalfHeightVR, "SetCharacterHalfHeightVR" }, // 3014472451
				{ &Z_Construct_UFunction_AVRCharacter_SetCharacterSizeVR, "SetCharacterSizeVR" }, // 687644075
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "VRCharacter.h" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRRootReference_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRRootReference = { UE4CodeGen_Private::EPropertyClass::Object, "VRRootReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a201d, 1, nullptr, STRUCT_OFFSET(AVRCharacter, VRRootReference), Z_Construct_UClass_UVRRootComponent_NoRegister, METADATA_PARAMS(NewProp_VRRootReference_MetaData, ARRAY_COUNT(NewProp_VRRootReference_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRRootReference,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVRCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVRCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRCharacter, 3519689730);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRCharacter(Z_Construct_UClass_AVRCharacter, &AVRCharacter::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
