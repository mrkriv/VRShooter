// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SimpleChar/VRSimpleCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRSimpleCharacter() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRSimpleCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRSimpleCharacter();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRSimpleCharacter_GetTeleportLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRSimpleCharacter_RegenerateOffsetComponentToWorld();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep2();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_AVRSimpleCharacter_ServerMoveVR = FName(TEXT("ServerMoveVR"));
	void AVRSimpleCharacter::ServerMoveVR(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint8 CompressedMoveFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRSimpleCharacter_eventServerMoveVR_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRSimpleCharacter_ServerMoveVR),&Parms);
	}
	static FName NAME_AVRSimpleCharacter_ServerMoveVRDual = FName(TEXT("ServerMoveVRDual"));
	void AVRSimpleCharacter::ServerMoveVRDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRSimpleCharacter_eventServerMoveVRDual_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.NewFlags=NewFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRSimpleCharacter_ServerMoveVRDual),&Parms);
	}
	static FName NAME_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion = FName(TEXT("ServerMoveVRDualHybridRootMotion"));
	void AVRSimpleCharacter::ServerMoveVRDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.NewFlags=NewFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion),&Parms);
	}
	void AVRSimpleCharacter::StaticRegisterNativesAVRSimpleCharacter()
	{
		UClass* Class = AVRSimpleCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTeleportLocation", &AVRSimpleCharacter::execGetTeleportLocation },
			{ "RegenerateOffsetComponentToWorld", &AVRSimpleCharacter::execRegenerateOffsetComponentToWorld },
			{ "ServerMoveVR", &AVRSimpleCharacter::execServerMoveVR },
			{ "ServerMoveVRDual", &AVRSimpleCharacter::execServerMoveVRDual },
			{ "ServerMoveVRDualHybridRootMotion", &AVRSimpleCharacter::execServerMoveVRDualHybridRootMotion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AVRSimpleCharacter_GetTeleportLocation()
	{
		struct VRSimpleCharacter_eventGetTeleportLocation_Parms
		{
			FVector OriginalLocation;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventGetTeleportLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "OriginalLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventGetTeleportLocation_Parms, OriginalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OriginalLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGrip" },
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacter.h" },
				{ "ToolTip", "A helper function that offsets a given vector by the roots collision location\npass in a teleport location and it provides the correct spot for it to be at your feet" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRSimpleCharacter, "GetTeleportLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820400, sizeof(VRSimpleCharacter_eventGetTeleportLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRSimpleCharacter_RegenerateOffsetComponentToWorld()
	{
		struct VRSimpleCharacter_eventRegenerateOffsetComponentToWorld_Parms
		{
			bool bUpdateBounds;
			bool bCalculatePureYaw;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bCalculatePureYaw_SetBit = [](void* Obj){ ((VRSimpleCharacter_eventRegenerateOffsetComponentToWorld_Parms*)Obj)->bCalculatePureYaw = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCalculatePureYaw = { UE4CodeGen_Private::EPropertyClass::Bool, "bCalculatePureYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRSimpleCharacter_eventRegenerateOffsetComponentToWorld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCalculatePureYaw_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUpdateBounds_SetBit = [](void* Obj){ ((VRSimpleCharacter_eventRegenerateOffsetComponentToWorld_Parms*)Obj)->bUpdateBounds = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateBounds = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRSimpleCharacter_eventRegenerateOffsetComponentToWorld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateBounds_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCalculatePureYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateBounds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacter.h" },
				{ "ToolTip", "Regenerates the base offsetcomponenttoworld that VR uses" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRSimpleCharacter, "RegenerateOffsetComponentToWorld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRSimpleCharacter_eventRegenerateOffsetComponentToWorld_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedMoveFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "CompressedMoveFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, CompressedMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressedMoveFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacter.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRSimpleCharacter, "ServerMoveVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRSimpleCharacter_eventServerMoveVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0 = { UE4CodeGen_Private::EPropertyClass::UInt32, "View0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, View0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0 = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldLFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacter.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info for two moves." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRSimpleCharacter, "ServerMoveVRDual", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRSimpleCharacter_eventServerMoveVRDual_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0 = { UE4CodeGen_Private::EPropertyClass::UInt32, "View0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, View0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0 = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldLFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacter.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info for two moves. First move is non root motion, second is root motion." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRSimpleCharacter, "ServerMoveVRDualHybridRootMotion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRSimpleCharacter_NoRegister()
	{
		return AVRSimpleCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRSimpleCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AVRBaseCharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AVRSimpleCharacter_GetTeleportLocation, "GetTeleportLocation" }, // 413567516
				{ &Z_Construct_UFunction_AVRSimpleCharacter_RegenerateOffsetComponentToWorld, "RegenerateOffsetComponentToWorld" }, // 428467587
				{ &Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR, "ServerMoveVR" }, // 3663475720
				{ &Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual, "ServerMoveVRDual" }, // 1611357582
				{ &Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion, "ServerMoveVRDualHybridRootMotion" }, // 1361303330
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "SimpleChar/VRSimpleCharacter.h" },
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacter.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRSceneComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRSimpleCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRSceneComponent = { UE4CodeGen_Private::EPropertyClass::Object, "VRSceneComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AVRSimpleCharacter, VRSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_VRSceneComponent_MetaData, ARRAY_COUNT(NewProp_VRSceneComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRSceneComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVRSimpleCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVRSimpleCharacter::StaticClass,
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
	IMPLEMENT_CLASS(AVRSimpleCharacter, 237284477);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRSimpleCharacter(Z_Construct_UClass_AVRSimpleCharacter, &AVRSimpleCharacter::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRSimpleCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRSimpleCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
