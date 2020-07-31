// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippableCapsuleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippableCapsuleComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableCapsuleComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableCapsuleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripSettings();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execOnInput)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY(FByteProperty,Z_Param_KeyEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInput_Implementation(Z_Param_Key,EInputEvent(Z_Param_KeyEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execOnEndSecondaryUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndSecondaryUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execOnSecondaryUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execOnEndUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execOnUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execOnSecondaryGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController);
		P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryGripRelease_Implementation(Z_Param_GripOwningController,Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execOnSecondaryGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController);
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryGrip_Implementation(Z_Param_GripOwningController,Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execOnChildGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_UBOOL(Z_Param_bWasSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChildGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execOnChildGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChildGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execOnGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_UBOOL(Z_Param_bWasSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execOnGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execTickGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execGetGripScripts)
	{
		P_GET_TARRAY_REF(UVRGripScriptBase*,Z_Param_Out_ArrayReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGripScripts_Implementation(Z_Param_Out_ArrayReference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execRequestsSocketing)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_ParentToSocketTo);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OptionalSocketName);
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_RelativeTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestsSocketing_Implementation(Z_Param_Out_ParentToSocketTo,Z_Param_Out_OptionalSocketName,Z_Param_Out_RelativeTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execSetHeld)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_HoldingController);
		P_GET_PROPERTY(FByteProperty,Z_Param_GripID);
		P_GET_UBOOL(Z_Param_bIsHeld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeld_Implementation(Z_Param_HoldingController,Z_Param_GripID,Z_Param_bIsHeld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execIsHeld)
	{
		P_GET_TARRAY_REF(FBPGripPair,Z_Param_Out_HoldingControllers);
		P_GET_UBOOL_REF(Z_Param_Out_bIsHeld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsHeld_Implementation(Z_Param_Out_HoldingControllers,Z_Param_Out_bIsHeld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execAllowsMultipleGrips)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllowsMultipleGrips_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execClosestGripSlotInRange)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldLocation);
		P_GET_UBOOL(Z_Param_bSecondarySlot);
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SlotName);
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_CallingController);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverridePrefix);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClosestGripSlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_bSecondarySlot,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_Out_SlotName,Z_Param_CallingController,Z_Param_OverridePrefix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execGripBreakDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GripBreakDistance_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execAdvancedGripSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBPAdvGripSettings*)Z_Param__Result=P_THIS->AdvancedGripSettings_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execGetGripStiffnessAndDamping)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GripStiffnessOut);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GripDampingOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGripStiffnessAndDamping_Implementation(Z_Param_Out_GripStiffnessOut,Z_Param_Out_GripDampingOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execGripLateUpdateSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripLateUpdateSettings*)Z_Param__Result=P_THIS->GripLateUpdateSetting_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execGripMovementReplicationType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripMovementReplicationSettings*)Z_Param__Result=P_THIS->GripMovementReplicationType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execSecondaryGripType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESecondaryGripType*)Z_Param__Result=P_THIS->SecondaryGripType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execGetPrimaryGripType)
	{
		P_GET_UBOOL(Z_Param_bIsSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripCollisionType*)Z_Param__Result=P_THIS->GetPrimaryGripType_Implementation(Z_Param_bIsSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execSimulateOnDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SimulateOnDrop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execTeleportBehavior)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripInterfaceTeleportBehavior*)Z_Param__Result=P_THIS->TeleportBehavior_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execDenyGripping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DenyGripping_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execSetDenyGripping)
	{
		P_GET_UBOOL(Z_Param_bDenyGripping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDenyGripping(Z_Param_bDenyGripping);
		P_NATIVE_END;
	}
	static FName NAME_UGrippableCapsuleComponent_AdvancedGripSettings = FName(TEXT("AdvancedGripSettings"));
	FBPAdvGripSettings UGrippableCapsuleComponent::AdvancedGripSettings()
	{
		GrippableCapsuleComponent_eventAdvancedGripSettings_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_AdvancedGripSettings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableCapsuleComponent_AllowsMultipleGrips = FName(TEXT("AllowsMultipleGrips"));
	bool UGrippableCapsuleComponent::AllowsMultipleGrips()
	{
		GrippableCapsuleComponent_eventAllowsMultipleGrips_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_AllowsMultipleGrips),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGrippableCapsuleComponent_ClosestGripSlotInRange = FName(TEXT("ClosestGripSlotInRange"));
	void UGrippableCapsuleComponent::ClosestGripSlotInRange(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
	{
		GrippableCapsuleComponent_eventClosestGripSlotInRange_Parms Parms;
		Parms.WorldLocation=WorldLocation;
		Parms.bSecondarySlot=bSecondarySlot ? true : false;
		Parms.bHadSlotInRange=bHadSlotInRange ? true : false;
		Parms.SlotWorldTransform=SlotWorldTransform;
		Parms.SlotName=SlotName;
		Parms.CallingController=CallingController;
		Parms.OverridePrefix=OverridePrefix;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_ClosestGripSlotInRange),&Parms);
		bHadSlotInRange=Parms.bHadSlotInRange;
		SlotWorldTransform=Parms.SlotWorldTransform;
		SlotName=Parms.SlotName;
	}
	static FName NAME_UGrippableCapsuleComponent_DenyGripping = FName(TEXT("DenyGripping"));
	bool UGrippableCapsuleComponent::DenyGripping()
	{
		GrippableCapsuleComponent_eventDenyGripping_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_DenyGripping),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGrippableCapsuleComponent_GetGripScripts = FName(TEXT("GetGripScripts"));
	bool UGrippableCapsuleComponent::GetGripScripts(TArray<UVRGripScriptBase*>& ArrayReference)
	{
		GrippableCapsuleComponent_eventGetGripScripts_Parms Parms;
		Parms.ArrayReference=ArrayReference;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_GetGripScripts),&Parms);
		ArrayReference=Parms.ArrayReference;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGrippableCapsuleComponent_GetGripStiffnessAndDamping = FName(TEXT("GetGripStiffnessAndDamping"));
	void UGrippableCapsuleComponent::GetGripStiffnessAndDamping(float& GripStiffnessOut, float& GripDampingOut)
	{
		GrippableCapsuleComponent_eventGetGripStiffnessAndDamping_Parms Parms;
		Parms.GripStiffnessOut=GripStiffnessOut;
		Parms.GripDampingOut=GripDampingOut;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_GetGripStiffnessAndDamping),&Parms);
		GripStiffnessOut=Parms.GripStiffnessOut;
		GripDampingOut=Parms.GripDampingOut;
	}
	static FName NAME_UGrippableCapsuleComponent_GetPrimaryGripType = FName(TEXT("GetPrimaryGripType"));
	EGripCollisionType UGrippableCapsuleComponent::GetPrimaryGripType(bool bIsSlot)
	{
		GrippableCapsuleComponent_eventGetPrimaryGripType_Parms Parms;
		Parms.bIsSlot=bIsSlot ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_GetPrimaryGripType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableCapsuleComponent_GripBreakDistance = FName(TEXT("GripBreakDistance"));
	float UGrippableCapsuleComponent::GripBreakDistance()
	{
		GrippableCapsuleComponent_eventGripBreakDistance_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_GripBreakDistance),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableCapsuleComponent_GripLateUpdateSetting = FName(TEXT("GripLateUpdateSetting"));
	EGripLateUpdateSettings UGrippableCapsuleComponent::GripLateUpdateSetting()
	{
		GrippableCapsuleComponent_eventGripLateUpdateSetting_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_GripLateUpdateSetting),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableCapsuleComponent_GripMovementReplicationType = FName(TEXT("GripMovementReplicationType"));
	EGripMovementReplicationSettings UGrippableCapsuleComponent::GripMovementReplicationType()
	{
		GrippableCapsuleComponent_eventGripMovementReplicationType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_GripMovementReplicationType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableCapsuleComponent_IsHeld = FName(TEXT("IsHeld"));
	void UGrippableCapsuleComponent::IsHeld(TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld)
	{
		GrippableCapsuleComponent_eventIsHeld_Parms Parms;
		Parms.HoldingControllers=HoldingControllers;
		Parms.bIsHeld=bIsHeld ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_IsHeld),&Parms);
		HoldingControllers=Parms.HoldingControllers;
		bIsHeld=Parms.bIsHeld;
	}
	static FName NAME_UGrippableCapsuleComponent_OnChildGrip = FName(TEXT("OnChildGrip"));
	void UGrippableCapsuleComponent::OnChildGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		GrippableCapsuleComponent_eventOnChildGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_OnChildGrip),&Parms);
	}
	static FName NAME_UGrippableCapsuleComponent_OnChildGripRelease = FName(TEXT("OnChildGripRelease"));
	void UGrippableCapsuleComponent::OnChildGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		GrippableCapsuleComponent_eventOnChildGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		Parms.bWasSocketed=bWasSocketed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_OnChildGripRelease),&Parms);
	}
	static FName NAME_UGrippableCapsuleComponent_OnEndSecondaryUsed = FName(TEXT("OnEndSecondaryUsed"));
	void UGrippableCapsuleComponent::OnEndSecondaryUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_OnEndSecondaryUsed),NULL);
	}
	static FName NAME_UGrippableCapsuleComponent_OnEndUsed = FName(TEXT("OnEndUsed"));
	void UGrippableCapsuleComponent::OnEndUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_OnEndUsed),NULL);
	}
	static FName NAME_UGrippableCapsuleComponent_OnGrip = FName(TEXT("OnGrip"));
	void UGrippableCapsuleComponent::OnGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		GrippableCapsuleComponent_eventOnGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_OnGrip),&Parms);
	}
	static FName NAME_UGrippableCapsuleComponent_OnGripRelease = FName(TEXT("OnGripRelease"));
	void UGrippableCapsuleComponent::OnGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		GrippableCapsuleComponent_eventOnGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		Parms.bWasSocketed=bWasSocketed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_OnGripRelease),&Parms);
	}
	static FName NAME_UGrippableCapsuleComponent_OnInput = FName(TEXT("OnInput"));
	void UGrippableCapsuleComponent::OnInput(FKey Key, EInputEvent KeyEvent)
	{
		GrippableCapsuleComponent_eventOnInput_Parms Parms;
		Parms.Key=Key;
		Parms.KeyEvent=KeyEvent;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_OnInput),&Parms);
	}
	static FName NAME_UGrippableCapsuleComponent_OnSecondaryGrip = FName(TEXT("OnSecondaryGrip"));
	void UGrippableCapsuleComponent::OnSecondaryGrip(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		GrippableCapsuleComponent_eventOnSecondaryGrip_Parms Parms;
		Parms.GripOwningController=GripOwningController;
		Parms.SecondaryGripComponent=SecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_OnSecondaryGrip),&Parms);
	}
	static FName NAME_UGrippableCapsuleComponent_OnSecondaryGripRelease = FName(TEXT("OnSecondaryGripRelease"));
	void UGrippableCapsuleComponent::OnSecondaryGripRelease(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		GrippableCapsuleComponent_eventOnSecondaryGripRelease_Parms Parms;
		Parms.GripOwningController=GripOwningController;
		Parms.ReleasingSecondaryGripComponent=ReleasingSecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_OnSecondaryGripRelease),&Parms);
	}
	static FName NAME_UGrippableCapsuleComponent_OnSecondaryUsed = FName(TEXT("OnSecondaryUsed"));
	void UGrippableCapsuleComponent::OnSecondaryUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_OnSecondaryUsed),NULL);
	}
	static FName NAME_UGrippableCapsuleComponent_OnUsed = FName(TEXT("OnUsed"));
	void UGrippableCapsuleComponent::OnUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_OnUsed),NULL);
	}
	static FName NAME_UGrippableCapsuleComponent_RequestsSocketing = FName(TEXT("RequestsSocketing"));
	bool UGrippableCapsuleComponent::RequestsSocketing(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform)
	{
		GrippableCapsuleComponent_eventRequestsSocketing_Parms Parms;
		Parms.ParentToSocketTo=ParentToSocketTo;
		Parms.OptionalSocketName=OptionalSocketName;
		Parms.RelativeTransform=RelativeTransform;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_RequestsSocketing),&Parms);
		ParentToSocketTo=Parms.ParentToSocketTo;
		OptionalSocketName=Parms.OptionalSocketName;
		RelativeTransform=Parms.RelativeTransform;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGrippableCapsuleComponent_SecondaryGripType = FName(TEXT("SecondaryGripType"));
	ESecondaryGripType UGrippableCapsuleComponent::SecondaryGripType()
	{
		GrippableCapsuleComponent_eventSecondaryGripType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_SecondaryGripType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableCapsuleComponent_SetHeld = FName(TEXT("SetHeld"));
	void UGrippableCapsuleComponent::SetHeld(UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld)
	{
		GrippableCapsuleComponent_eventSetHeld_Parms Parms;
		Parms.HoldingController=HoldingController;
		Parms.GripID=GripID;
		Parms.bIsHeld=bIsHeld ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_SetHeld),&Parms);
	}
	static FName NAME_UGrippableCapsuleComponent_SimulateOnDrop = FName(TEXT("SimulateOnDrop"));
	bool UGrippableCapsuleComponent::SimulateOnDrop()
	{
		GrippableCapsuleComponent_eventSimulateOnDrop_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_SimulateOnDrop),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGrippableCapsuleComponent_TeleportBehavior = FName(TEXT("TeleportBehavior"));
	EGripInterfaceTeleportBehavior UGrippableCapsuleComponent::TeleportBehavior()
	{
		GrippableCapsuleComponent_eventTeleportBehavior_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_TeleportBehavior),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableCapsuleComponent_TickGrip = FName(TEXT("TickGrip"));
	void UGrippableCapsuleComponent::TickGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)
	{
		GrippableCapsuleComponent_eventTickGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableCapsuleComponent_TickGrip),&Parms);
	}
	void UGrippableCapsuleComponent::StaticRegisterNativesUGrippableCapsuleComponent()
	{
		UClass* Class = UGrippableCapsuleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvancedGripSettings", &UGrippableCapsuleComponent::execAdvancedGripSettings },
			{ "AllowsMultipleGrips", &UGrippableCapsuleComponent::execAllowsMultipleGrips },
			{ "ClosestGripSlotInRange", &UGrippableCapsuleComponent::execClosestGripSlotInRange },
			{ "DenyGripping", &UGrippableCapsuleComponent::execDenyGripping },
			{ "GetGripScripts", &UGrippableCapsuleComponent::execGetGripScripts },
			{ "GetGripStiffnessAndDamping", &UGrippableCapsuleComponent::execGetGripStiffnessAndDamping },
			{ "GetPrimaryGripType", &UGrippableCapsuleComponent::execGetPrimaryGripType },
			{ "GripBreakDistance", &UGrippableCapsuleComponent::execGripBreakDistance },
			{ "GripLateUpdateSetting", &UGrippableCapsuleComponent::execGripLateUpdateSetting },
			{ "GripMovementReplicationType", &UGrippableCapsuleComponent::execGripMovementReplicationType },
			{ "IsHeld", &UGrippableCapsuleComponent::execIsHeld },
			{ "OnChildGrip", &UGrippableCapsuleComponent::execOnChildGrip },
			{ "OnChildGripRelease", &UGrippableCapsuleComponent::execOnChildGripRelease },
			{ "OnEndSecondaryUsed", &UGrippableCapsuleComponent::execOnEndSecondaryUsed },
			{ "OnEndUsed", &UGrippableCapsuleComponent::execOnEndUsed },
			{ "OnGrip", &UGrippableCapsuleComponent::execOnGrip },
			{ "OnGripRelease", &UGrippableCapsuleComponent::execOnGripRelease },
			{ "OnInput", &UGrippableCapsuleComponent::execOnInput },
			{ "OnSecondaryGrip", &UGrippableCapsuleComponent::execOnSecondaryGrip },
			{ "OnSecondaryGripRelease", &UGrippableCapsuleComponent::execOnSecondaryGripRelease },
			{ "OnSecondaryUsed", &UGrippableCapsuleComponent::execOnSecondaryUsed },
			{ "OnUsed", &UGrippableCapsuleComponent::execOnUsed },
			{ "RequestsSocketing", &UGrippableCapsuleComponent::execRequestsSocketing },
			{ "SecondaryGripType", &UGrippableCapsuleComponent::execSecondaryGripType },
			{ "SetDenyGripping", &UGrippableCapsuleComponent::execSetDenyGripping },
			{ "SetHeld", &UGrippableCapsuleComponent::execSetHeld },
			{ "SimulateOnDrop", &UGrippableCapsuleComponent::execSimulateOnDrop },
			{ "TeleportBehavior", &UGrippableCapsuleComponent::execTeleportBehavior },
			{ "TickGrip", &UGrippableCapsuleComponent::execTickGrip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_AdvancedGripSettings_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_AdvancedGripSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventAdvancedGripSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPAdvGripSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_AdvancedGripSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_AdvancedGripSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_AdvancedGripSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Get the advanced physics settings for this grip\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Get the advanced physics settings for this grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_AdvancedGripSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "AdvancedGripSettings", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventAdvancedGripSettings_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_AdvancedGripSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_AdvancedGripSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_AdvancedGripSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_AdvancedGripSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_AdvancedGripSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_AdvancedGripSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_AllowsMultipleGrips_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableCapsuleComponent_AllowsMultipleGrips_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableCapsuleComponent_eventAllowsMultipleGrips_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_AllowsMultipleGrips_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableCapsuleComponent_eventAllowsMultipleGrips_Parms), &Z_Construct_UFunction_UGrippableCapsuleComponent_AllowsMultipleGrips_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_AllowsMultipleGrips_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_AllowsMultipleGrips_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_AllowsMultipleGrips_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Check if an object allows multiple grips at one time\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Check if an object allows multiple grips at one time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_AllowsMultipleGrips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "AllowsMultipleGrips", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventAllowsMultipleGrips_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_AllowsMultipleGrips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_AllowsMultipleGrips_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_AllowsMultipleGrips_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_AllowsMultipleGrips_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_AllowsMultipleGrips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_AllowsMultipleGrips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverridePrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallingController;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotWorldTransform;
		static void NewProp_bHadSlotInRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadSlotInRange;
		static void NewProp_bSecondarySlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecondarySlot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_OverridePrefix = { "OverridePrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventClosestGripSlotInRange_Parms, OverridePrefix), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_CallingController = { "CallingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventClosestGripSlotInRange_Parms, CallingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventClosestGripSlotInRange_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_SlotWorldTransform = { "SlotWorldTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventClosestGripSlotInRange_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange_SetBit(void* Obj)
	{
		((GrippableCapsuleComponent_eventClosestGripSlotInRange_Parms*)Obj)->bHadSlotInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange = { "bHadSlotInRange", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableCapsuleComponent_eventClosestGripSlotInRange_Parms), &Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot_SetBit(void* Obj)
	{
		((GrippableCapsuleComponent_eventClosestGripSlotInRange_Parms*)Obj)->bSecondarySlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot = { "bSecondarySlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableCapsuleComponent_eventClosestGripSlotInRange_Parms), &Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventClosestGripSlotInRange_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_OverridePrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_CallingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_SlotWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Get closest primary slot in range\n" },
		{ "CPP_Default_CallingController", "None" },
		{ "CPP_Default_OverridePrefix", "None" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Get closest primary slot in range" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "ClosestGripSlotInRange", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventClosestGripSlotInRange_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_DenyGripping_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableCapsuleComponent_DenyGripping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableCapsuleComponent_eventDenyGripping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_DenyGripping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableCapsuleComponent_eventDenyGripping_Parms), &Z_Construct_UFunction_UGrippableCapsuleComponent_DenyGripping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_DenyGripping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_DenyGripping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_DenyGripping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Set up as deny instead of allow so that default allows for gripping\n" },
		{ "DisplayName", "IsDenyingGrips" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Set up as deny instead of allow so that default allows for gripping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_DenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "DenyGripping", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventDenyGripping_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_DenyGripping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_DenyGripping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_DenyGripping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_DenyGripping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_DenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_DenyGripping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayReference;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrayReference_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableCapsuleComponent_eventGetGripScripts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableCapsuleComponent_eventGetGripScripts_Parms), &Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::NewProp_ArrayReference_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::NewProp_ArrayReference = { "ArrayReference", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventGetGripScripts_Parms, ArrayReference), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::NewProp_ArrayReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::NewProp_ArrayReference_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::NewProp_ArrayReference_Inner = { "ArrayReference", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::NewProp_ArrayReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::NewProp_ArrayReference_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Get grip scripts\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Get grip scripts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "GetGripScripts", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventGetGripScripts_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripStiffnessAndDamping_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripDampingOut;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripStiffnessOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripStiffnessAndDamping_Statics::NewProp_GripDampingOut = { "GripDampingOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventGetGripStiffnessAndDamping_Parms, GripDampingOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripStiffnessAndDamping_Statics::NewProp_GripStiffnessOut = { "GripStiffnessOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventGetGripStiffnessAndDamping_Parms, GripStiffnessOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripStiffnessAndDamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripStiffnessAndDamping_Statics::NewProp_GripDampingOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripStiffnessAndDamping_Statics::NewProp_GripStiffnessOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// What grip stiffness and damping to use if using a physics constraint\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "What grip stiffness and damping to use if using a physics constraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripStiffnessAndDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "GetGripStiffnessAndDamping", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventGetGripStiffnessAndDamping_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripStiffnessAndDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripStiffnessAndDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripStiffnessAndDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripStiffnessAndDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static void NewProp_bIsSlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventGetPrimaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::NewProp_bIsSlot_SetBit(void* Obj)
	{
		((GrippableCapsuleComponent_eventGetPrimaryGripType_Parms*)Obj)->bIsSlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::NewProp_bIsSlot = { "bIsSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableCapsuleComponent_eventGetPrimaryGripType_Parms), &Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::NewProp_bIsSlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::NewProp_bIsSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Grip type to use\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Grip type to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "GetPrimaryGripType", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventGetPrimaryGripType_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_GripBreakDistance_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_GripBreakDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventGripBreakDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_GripBreakDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_GripBreakDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_GripBreakDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// What distance to break a grip at (only relevent with physics enabled grips\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "What distance to break a grip at (only relevent with physics enabled grips" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_GripBreakDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "GripBreakDistance", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventGripBreakDistance_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_GripBreakDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_GripBreakDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_GripBreakDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_GripBreakDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_GripBreakDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_GripBreakDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_GripLateUpdateSetting_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_GripLateUpdateSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventGripLateUpdateSetting_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_GripLateUpdateSetting_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_GripLateUpdateSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_GripLateUpdateSetting_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_GripLateUpdateSetting_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_GripLateUpdateSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Define the late update setting\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Define the late update setting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_GripLateUpdateSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "GripLateUpdateSetting", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventGripLateUpdateSetting_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_GripLateUpdateSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_GripLateUpdateSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_GripLateUpdateSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_GripLateUpdateSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_GripLateUpdateSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_GripLateUpdateSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_GripMovementReplicationType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_GripMovementReplicationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventGripMovementReplicationType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_GripMovementReplicationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_GripMovementReplicationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_GripMovementReplicationType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_GripMovementReplicationType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_GripMovementReplicationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Define which movement repliation setting to use\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Define which movement repliation setting to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_GripMovementReplicationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "GripMovementReplicationType", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventGripMovementReplicationType_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_GripMovementReplicationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_GripMovementReplicationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_GripMovementReplicationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_GripMovementReplicationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_GripMovementReplicationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_GripMovementReplicationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics
	{
		static void NewProp_bIsHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HoldingControllers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoldingControllers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((GrippableCapsuleComponent_eventIsHeld_Parms*)Obj)->bIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableCapsuleComponent_eventIsHeld_Parms), &Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::NewProp_HoldingControllers = { "HoldingControllers", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventIsHeld_Parms, HoldingControllers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::NewProp_HoldingControllers_Inner = { "HoldingControllers", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::NewProp_bIsHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::NewProp_HoldingControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::NewProp_HoldingControllers_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Returns if the object is held and if so, which controllers are holding it\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Returns if the object is held and if so, which controllers are holding it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "IsHeld", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventIsHeld_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnChildGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnChildGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when child component is gripped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when child component is gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "OnChildGrip", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventOnChildGrip_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics
	{
		static void NewProp_bWasSocketed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((GrippableCapsuleComponent_eventOnChildGripRelease_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableCapsuleComponent_eventOnChildGripRelease_Parms), &Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnChildGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnChildGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::NewProp_bWasSocketed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::NewProp_ReleasingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when child component is released\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when child component is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "OnChildGripRelease", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventOnChildGripRelease_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndSecondaryUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndSecondaryUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to stop using an object\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Call to stop using an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndSecondaryUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "OnEndSecondaryUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndSecondaryUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndSecondaryUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndSecondaryUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to stop using an object\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Call to stop using an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "OnEndUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when gripped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "OnGrip", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventOnGrip_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics
	{
		static void NewProp_bWasSocketed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((GrippableCapsuleComponent_eventOnGripRelease_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableCapsuleComponent_eventOnGripRelease_Parms), &Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::NewProp_ReleasingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::NewProp_ReleasingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::NewProp_bWasSocketed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::NewProp_ReleasingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when grip is released\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "OnGripRelease", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventOnGripRelease_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_OnInput_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyEvent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnInput_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnInput_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnInput_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnInput_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_OnInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnInput_Statics::NewProp_KeyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnInput_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to send an action event to the object\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Call to send an action event to the object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "OnInput", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventOnInput_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_OnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_OnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_OnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryGripComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripOwningController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripOwningController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnSecondaryGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent = { "SecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnSecondaryGrip_Parms, SecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::NewProp_GripOwningController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::NewProp_GripOwningController = { "GripOwningController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnSecondaryGrip_Parms, GripOwningController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::NewProp_GripOwningController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::NewProp_GripOwningController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::NewProp_GripOwningController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when secondary gripped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "OnSecondaryGrip", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventOnSecondaryGrip_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingSecondaryGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingSecondaryGripComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripOwningController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripOwningController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnSecondaryGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent = { "ReleasingSecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnSecondaryGripRelease_Parms, ReleasingSecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::NewProp_GripOwningController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::NewProp_GripOwningController = { "GripOwningController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventOnSecondaryGripRelease_Parms, GripOwningController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::NewProp_GripOwningController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::NewProp_GripOwningController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::NewProp_GripOwningController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when secondary grip is released\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "OnSecondaryGripRelease", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventOnSecondaryGripRelease_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to use an object\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "OnSecondaryUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_OnUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_OnUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to use an object\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_OnUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "OnUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_OnUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_OnUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_OnUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_OnUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentToSocketTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentToSocketTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableCapsuleComponent_eventRequestsSocketing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableCapsuleComponent_eventRequestsSocketing_Parms), &Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventRequestsSocketing_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::NewProp_OptionalSocketName = { "OptionalSocketName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventRequestsSocketing_Parms, OptionalSocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::NewProp_ParentToSocketTo = { "ParentToSocketTo", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventRequestsSocketing_Parms, ParentToSocketTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::NewProp_OptionalSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::NewProp_ParentToSocketTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Returns if the object wants to be socketed\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Returns if the object wants to be socketed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "RequestsSocketing", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventRequestsSocketing_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_SecondaryGripType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_SecondaryGripType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventSecondaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_SecondaryGripType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_SecondaryGripType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_SecondaryGripType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_SecondaryGripType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_SecondaryGripType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Secondary grip type\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Secondary grip type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_SecondaryGripType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "SecondaryGripType", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventSecondaryGripType_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_SecondaryGripType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_SecondaryGripType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_SecondaryGripType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_SecondaryGripType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_SecondaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_SecondaryGripType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics
	{
		struct GrippableCapsuleComponent_eventSetDenyGripping_Parms
		{
			bool bDenyGripping;
		};
		static void NewProp_bDenyGripping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
	{
		((GrippableCapsuleComponent_eventSetDenyGripping_Parms*)Obj)->bDenyGripping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableCapsuleComponent_eventSetDenyGripping_Parms), &Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::NewProp_bDenyGripping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Sets the Deny Gripping variable on the FBPInterfaceSettings struct\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Sets the Deny Gripping variable on the FBPInterfaceSettings struct" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "SetDenyGripping", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventSetDenyGripping_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics
	{
		static void NewProp_bIsHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((GrippableCapsuleComponent_eventSetHeld_Parms*)Obj)->bIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableCapsuleComponent_eventSetHeld_Parms), &Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventSetHeld_Parms, GripID), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::NewProp_HoldingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::NewProp_HoldingController = { "HoldingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventSetHeld_Parms, HoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::NewProp_HoldingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::NewProp_HoldingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::NewProp_bIsHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::NewProp_GripID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::NewProp_HoldingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "/*BlueprintCallable,*/" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "BlueprintCallable," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "SetHeld", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventSetHeld_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_SimulateOnDrop_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableCapsuleComponent_SimulateOnDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableCapsuleComponent_eventSimulateOnDrop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_SimulateOnDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableCapsuleComponent_eventSimulateOnDrop_Parms), &Z_Construct_UFunction_UGrippableCapsuleComponent_SimulateOnDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_SimulateOnDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_SimulateOnDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_SimulateOnDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Should this object simulate on drop\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Should this object simulate on drop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_SimulateOnDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "SimulateOnDrop", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventSimulateOnDrop_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_SimulateOnDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_SimulateOnDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_SimulateOnDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_SimulateOnDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_SimulateOnDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_SimulateOnDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_TeleportBehavior_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_TeleportBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventTeleportBehavior_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_TeleportBehavior_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_TeleportBehavior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_TeleportBehavior_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_TeleportBehavior_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_TeleportBehavior_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// How an interfaced object behaves when teleporting\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "How an interfaced object behaves when teleporting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_TeleportBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "TeleportBehavior", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventTeleportBehavior_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_TeleportBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_TeleportBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_TeleportBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_TeleportBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_TeleportBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_TeleportBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventTickGrip_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventTickGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventTickGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "TickGrip", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventTickGrip_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrippableCapsuleComponent_NoRegister()
	{
		return UGrippableCapsuleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGrippableCapsuleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRGripInterfaceSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VRGripInterfaceSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[];
#endif
		static void NewProp_bReplicateMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRepGripSettingsAndGameplayTags_MetaData[];
#endif
		static void NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepGripSettingsAndGameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGripped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGripped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GripLogicScripts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripLogicScripts_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrippableCapsuleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCapsuleComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrippableCapsuleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_AdvancedGripSettings, "AdvancedGripSettings" }, // 2025282223
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_AllowsMultipleGrips, "AllowsMultipleGrips" }, // 3815730285
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_ClosestGripSlotInRange, "ClosestGripSlotInRange" }, // 3638653902
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_DenyGripping, "DenyGripping" }, // 336073481
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripScripts, "GetGripScripts" }, // 1320227675
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_GetGripStiffnessAndDamping, "GetGripStiffnessAndDamping" }, // 1530126690
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_GetPrimaryGripType, "GetPrimaryGripType" }, // 1633039380
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_GripBreakDistance, "GripBreakDistance" }, // 2949625190
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_GripLateUpdateSetting, "GripLateUpdateSetting" }, // 1727009098
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_GripMovementReplicationType, "GripMovementReplicationType" }, // 3061651017
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_IsHeld, "IsHeld" }, // 21477526
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGrip, "OnChildGrip" }, // 2057508085
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_OnChildGripRelease, "OnChildGripRelease" }, // 1773445116
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndSecondaryUsed, "OnEndSecondaryUsed" }, // 137616295
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_OnEndUsed, "OnEndUsed" }, // 459514858
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_OnGrip, "OnGrip" }, // 2783821445
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_OnGripRelease, "OnGripRelease" }, // 4233845879
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_OnInput, "OnInput" }, // 1037141730
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGrip, "OnSecondaryGrip" }, // 3834322587
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryGripRelease, "OnSecondaryGripRelease" }, // 1756380474
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_OnSecondaryUsed, "OnSecondaryUsed" }, // 1994627093
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_OnUsed, "OnUsed" }, // 4231651680
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_RequestsSocketing, "RequestsSocketing" }, // 2302048393
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_SecondaryGripType, "SecondaryGripType" }, // 3556542331
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping, "SetDenyGripping" }, // 1663715472
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_SetHeld, "SetHeld" }, // 2102689153
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_SimulateOnDrop, "SimulateOnDrop" }, // 4217408781
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_TeleportBehavior, "TeleportBehavior" }, // 1474686423
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_TickGrip, "TickGrip" }, // 2378603414
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n*\n*/" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Grippables/GrippableCapsuleComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_VRGripInterfaceSettings_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_VRGripInterfaceSettings = { "VRGripInterfaceSettings", nullptr, (EPropertyFlags)0x0010008000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableCapsuleComponent, VRGripInterfaceSettings), Z_Construct_UScriptStruct_FBPInterfaceProperties, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_VRGripInterfaceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_VRGripInterfaceSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
	};
#endif
	void Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UGrippableCapsuleComponent*)Obj)->bReplicateMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGrippableCapsuleComponent), &Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bReplicateMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
		{ "Comment", "// Requires bReplicates to be true for the component\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Requires bReplicates to be true for the component" },
	};
#endif
	void Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj)
	{
		((UGrippableCapsuleComponent*)Obj)->bRepGripSettingsAndGameplayTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags = { "bRepGripSettingsAndGameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGrippableCapsuleComponent), &Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Tags that are set on this object */" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Tags that are set on this object" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableCapsuleComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripRemoved_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary dropped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Called when an object we hold is secondary dropped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripRemoved = { "OnSecondaryGripRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableCapsuleComponent, OnSecondaryGripRemoved), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripAdded_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary gripped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Called when an object we hold is secondary gripped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripAdded = { "OnSecondaryGripAdded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableCapsuleComponent, OnSecondaryGripAdded), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is dropped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Called when a object is dropped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableCapsuleComponent, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is gripped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Called when a object is gripped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableCapsuleComponent, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnGripped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnGripped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts = { "GripLogicScripts", nullptr, (EPropertyFlags)0x001000800000003d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableCapsuleComponent, GripLogicScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_Inner_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_Inner = { "GripLogicScripts", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrippableCapsuleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_VRGripInterfaceSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bReplicateMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnGripped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(UGrippableCapsuleComponent, IVRGripInterface), false },
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UGrippableCapsuleComponent, IGameplayTagAssetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrippableCapsuleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrippableCapsuleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::ClassParams = {
		&UGrippableCapsuleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGrippableCapsuleComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrippableCapsuleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrippableCapsuleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrippableCapsuleComponent, 1008354838);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGrippableCapsuleComponent>()
	{
		return UGrippableCapsuleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrippableCapsuleComponent(Z_Construct_UClass_UGrippableCapsuleComponent, &UGrippableCapsuleComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UGrippableCapsuleComponent"), false, nullptr, nullptr, nullptr);

	void UGrippableCapsuleComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GripLogicScripts(TEXT("GripLogicScripts"));
		static const FName Name_GameplayTags(TEXT("GameplayTags"));
		static const FName Name_bRepGripSettingsAndGameplayTags(TEXT("bRepGripSettingsAndGameplayTags"));
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));
		static const FName Name_VRGripInterfaceSettings(TEXT("VRGripInterfaceSettings"));

		const bool bIsValid = true
			&& Name_GripLogicScripts == ClassReps[(int32)ENetFields_Private::GripLogicScripts].Property->GetFName()
			&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
			&& Name_bRepGripSettingsAndGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGripSettingsAndGameplayTags].Property->GetFName()
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName()
			&& Name_VRGripInterfaceSettings == ClassReps[(int32)ENetFields_Private::VRGripInterfaceSettings].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGrippableCapsuleComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrippableCapsuleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
