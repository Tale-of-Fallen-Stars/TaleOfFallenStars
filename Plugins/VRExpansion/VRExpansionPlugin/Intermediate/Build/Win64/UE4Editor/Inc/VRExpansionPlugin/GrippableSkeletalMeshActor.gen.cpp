// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippableSkeletalMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippableSkeletalMeshActor() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOptionalRepSkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableSkeletalMeshActor_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableSkeletalMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor();
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
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovementVR();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRClientAuthReplicationData();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	void UOptionalRepSkeletalMeshComponent::StaticRegisterNativesUOptionalRepSkeletalMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_NoRegister()
	{
		return UOptionalRepSkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[];
#endif
		static void NewProp_bReplicateMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n* A component specifically for being able to turn off movement replication in the component at will\n* Has the upside of also being a blueprintable base since UE4 doesn't allow that with std ones\n*/" },
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "Grippables/GrippableSkeletalMeshActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A component specifically for being able to turn off movement replication in the component at will\nHas the upside of also being a blueprintable base since UE4 doesn't allow that with std ones" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "Component Replication" },
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
	};
#endif
	void Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UOptionalRepSkeletalMeshComponent*)Obj)->bReplicateMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptionalRepSkeletalMeshComponent), &Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::NewProp_bReplicateMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptionalRepSkeletalMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::ClassParams = {
		&UOptionalRepSkeletalMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptionalRepSkeletalMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOptionalRepSkeletalMeshComponent, 3462293915);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UOptionalRepSkeletalMeshComponent>()
	{
		return UOptionalRepSkeletalMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOptionalRepSkeletalMeshComponent(Z_Construct_UClass_UOptionalRepSkeletalMeshComponent, &UOptionalRepSkeletalMeshComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UOptionalRepSkeletalMeshComponent"), false, nullptr, nullptr, nullptr);

	void UOptionalRepSkeletalMeshComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));

		const bool bIsValid = true
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOptionalRepSkeletalMeshComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptionalRepSkeletalMeshComponent);
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execOnInput)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY(FByteProperty,Z_Param_KeyEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInput_Implementation(Z_Param_Key,EInputEvent(Z_Param_KeyEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execOnEndSecondaryUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndSecondaryUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execOnSecondaryUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execOnEndUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execOnUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execOnSecondaryGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController);
		P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryGripRelease_Implementation(Z_Param_GripOwningController,Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execOnSecondaryGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController);
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryGrip_Implementation(Z_Param_GripOwningController,Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execOnChildGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_UBOOL(Z_Param_bWasSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChildGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execOnChildGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChildGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execOnGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_UBOOL(Z_Param_bWasSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execOnGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execTickGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execGetGripScripts)
	{
		P_GET_TARRAY_REF(UVRGripScriptBase*,Z_Param_Out_ArrayReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGripScripts_Implementation(Z_Param_Out_ArrayReference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execRequestsSocketing)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_ParentToSocketTo);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OptionalSocketName);
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_RelativeTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestsSocketing_Implementation(Z_Param_Out_ParentToSocketTo,Z_Param_Out_OptionalSocketName,Z_Param_Out_RelativeTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execSetHeld)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_HoldingController);
		P_GET_PROPERTY(FByteProperty,Z_Param_GripID);
		P_GET_UBOOL(Z_Param_bIsHeld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeld_Implementation(Z_Param_HoldingController,Z_Param_GripID,Z_Param_bIsHeld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execIsHeld)
	{
		P_GET_TARRAY_REF(FBPGripPair,Z_Param_Out_HoldingControllers);
		P_GET_UBOOL_REF(Z_Param_Out_bIsHeld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsHeld_Implementation(Z_Param_Out_HoldingControllers,Z_Param_Out_bIsHeld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execAllowsMultipleGrips)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllowsMultipleGrips_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execClosestGripSlotInRange)
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
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execGripBreakDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GripBreakDistance_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execAdvancedGripSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBPAdvGripSettings*)Z_Param__Result=P_THIS->AdvancedGripSettings_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execGetGripStiffnessAndDamping)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GripStiffnessOut);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GripDampingOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGripStiffnessAndDamping_Implementation(Z_Param_Out_GripStiffnessOut,Z_Param_Out_GripDampingOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execGripLateUpdateSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripLateUpdateSettings*)Z_Param__Result=P_THIS->GripLateUpdateSetting_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execGripMovementReplicationType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripMovementReplicationSettings*)Z_Param__Result=P_THIS->GripMovementReplicationType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execSecondaryGripType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESecondaryGripType*)Z_Param__Result=P_THIS->SecondaryGripType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execGetPrimaryGripType)
	{
		P_GET_UBOOL(Z_Param_bIsSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripCollisionType*)Z_Param__Result=P_THIS->GetPrimaryGripType_Implementation(Z_Param_bIsSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execSimulateOnDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SimulateOnDrop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execTeleportBehavior)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripInterfaceTeleportBehavior*)Z_Param__Result=P_THIS->TeleportBehavior_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execDenyGripping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DenyGripping_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execServer_GetClientAuthReplication)
	{
		P_GET_STRUCT(FRepMovementVR,Z_Param_newMovement);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_GetClientAuthReplication_Validate(Z_Param_newMovement))
		{
			RPC_ValidateFailed(TEXT("Server_GetClientAuthReplication_Validate"));
			return;
		}
		P_THIS->Server_GetClientAuthReplication_Implementation(Z_Param_newMovement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execCeaseReplicationBlocking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CeaseReplicationBlocking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execPollReplicationEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PollReplicationEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execRemoveFromClientReplicationBucket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveFromClientReplicationBucket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execAddToClientReplicationBucket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddToClientReplicationBucket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableSkeletalMeshActor::execSetDenyGripping)
	{
		P_GET_UBOOL(Z_Param_bDenyGripping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDenyGripping(Z_Param_bDenyGripping);
		P_NATIVE_END;
	}
	static FName NAME_AGrippableSkeletalMeshActor_AdvancedGripSettings = FName(TEXT("AdvancedGripSettings"));
	FBPAdvGripSettings AGrippableSkeletalMeshActor::AdvancedGripSettings()
	{
		GrippableSkeletalMeshActor_eventAdvancedGripSettings_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_AdvancedGripSettings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGrippableSkeletalMeshActor_AllowsMultipleGrips = FName(TEXT("AllowsMultipleGrips"));
	bool AGrippableSkeletalMeshActor::AllowsMultipleGrips()
	{
		GrippableSkeletalMeshActor_eventAllowsMultipleGrips_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_AllowsMultipleGrips),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGrippableSkeletalMeshActor_ClosestGripSlotInRange = FName(TEXT("ClosestGripSlotInRange"));
	void AGrippableSkeletalMeshActor::ClosestGripSlotInRange(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
	{
		GrippableSkeletalMeshActor_eventClosestGripSlotInRange_Parms Parms;
		Parms.WorldLocation=WorldLocation;
		Parms.bSecondarySlot=bSecondarySlot ? true : false;
		Parms.bHadSlotInRange=bHadSlotInRange ? true : false;
		Parms.SlotWorldTransform=SlotWorldTransform;
		Parms.SlotName=SlotName;
		Parms.CallingController=CallingController;
		Parms.OverridePrefix=OverridePrefix;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_ClosestGripSlotInRange),&Parms);
		bHadSlotInRange=Parms.bHadSlotInRange;
		SlotWorldTransform=Parms.SlotWorldTransform;
		SlotName=Parms.SlotName;
	}
	static FName NAME_AGrippableSkeletalMeshActor_DenyGripping = FName(TEXT("DenyGripping"));
	bool AGrippableSkeletalMeshActor::DenyGripping()
	{
		GrippableSkeletalMeshActor_eventDenyGripping_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_DenyGripping),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGrippableSkeletalMeshActor_GetGripScripts = FName(TEXT("GetGripScripts"));
	bool AGrippableSkeletalMeshActor::GetGripScripts(TArray<UVRGripScriptBase*>& ArrayReference)
	{
		GrippableSkeletalMeshActor_eventGetGripScripts_Parms Parms;
		Parms.ArrayReference=ArrayReference;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_GetGripScripts),&Parms);
		ArrayReference=Parms.ArrayReference;
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping = FName(TEXT("GetGripStiffnessAndDamping"));
	void AGrippableSkeletalMeshActor::GetGripStiffnessAndDamping(float& GripStiffnessOut, float& GripDampingOut)
	{
		GrippableSkeletalMeshActor_eventGetGripStiffnessAndDamping_Parms Parms;
		Parms.GripStiffnessOut=GripStiffnessOut;
		Parms.GripDampingOut=GripDampingOut;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping),&Parms);
		GripStiffnessOut=Parms.GripStiffnessOut;
		GripDampingOut=Parms.GripDampingOut;
	}
	static FName NAME_AGrippableSkeletalMeshActor_GetPrimaryGripType = FName(TEXT("GetPrimaryGripType"));
	EGripCollisionType AGrippableSkeletalMeshActor::GetPrimaryGripType(bool bIsSlot)
	{
		GrippableSkeletalMeshActor_eventGetPrimaryGripType_Parms Parms;
		Parms.bIsSlot=bIsSlot ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_GetPrimaryGripType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGrippableSkeletalMeshActor_GripBreakDistance = FName(TEXT("GripBreakDistance"));
	float AGrippableSkeletalMeshActor::GripBreakDistance()
	{
		GrippableSkeletalMeshActor_eventGripBreakDistance_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_GripBreakDistance),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGrippableSkeletalMeshActor_GripLateUpdateSetting = FName(TEXT("GripLateUpdateSetting"));
	EGripLateUpdateSettings AGrippableSkeletalMeshActor::GripLateUpdateSetting()
	{
		GrippableSkeletalMeshActor_eventGripLateUpdateSetting_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_GripLateUpdateSetting),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGrippableSkeletalMeshActor_GripMovementReplicationType = FName(TEXT("GripMovementReplicationType"));
	EGripMovementReplicationSettings AGrippableSkeletalMeshActor::GripMovementReplicationType()
	{
		GrippableSkeletalMeshActor_eventGripMovementReplicationType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_GripMovementReplicationType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGrippableSkeletalMeshActor_IsHeld = FName(TEXT("IsHeld"));
	void AGrippableSkeletalMeshActor::IsHeld(TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld)
	{
		GrippableSkeletalMeshActor_eventIsHeld_Parms Parms;
		Parms.HoldingControllers=HoldingControllers;
		Parms.bIsHeld=bIsHeld ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_IsHeld),&Parms);
		HoldingControllers=Parms.HoldingControllers;
		bIsHeld=Parms.bIsHeld;
	}
	static FName NAME_AGrippableSkeletalMeshActor_OnChildGrip = FName(TEXT("OnChildGrip"));
	void AGrippableSkeletalMeshActor::OnChildGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		GrippableSkeletalMeshActor_eventOnChildGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_OnChildGrip),&Parms);
	}
	static FName NAME_AGrippableSkeletalMeshActor_OnChildGripRelease = FName(TEXT("OnChildGripRelease"));
	void AGrippableSkeletalMeshActor::OnChildGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		GrippableSkeletalMeshActor_eventOnChildGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		Parms.bWasSocketed=bWasSocketed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_OnChildGripRelease),&Parms);
	}
	static FName NAME_AGrippableSkeletalMeshActor_OnEndSecondaryUsed = FName(TEXT("OnEndSecondaryUsed"));
	void AGrippableSkeletalMeshActor::OnEndSecondaryUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_OnEndSecondaryUsed),NULL);
	}
	static FName NAME_AGrippableSkeletalMeshActor_OnEndUsed = FName(TEXT("OnEndUsed"));
	void AGrippableSkeletalMeshActor::OnEndUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_OnEndUsed),NULL);
	}
	static FName NAME_AGrippableSkeletalMeshActor_OnGrip = FName(TEXT("OnGrip"));
	void AGrippableSkeletalMeshActor::OnGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		GrippableSkeletalMeshActor_eventOnGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_OnGrip),&Parms);
	}
	static FName NAME_AGrippableSkeletalMeshActor_OnGripRelease = FName(TEXT("OnGripRelease"));
	void AGrippableSkeletalMeshActor::OnGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		GrippableSkeletalMeshActor_eventOnGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		Parms.bWasSocketed=bWasSocketed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_OnGripRelease),&Parms);
	}
	static FName NAME_AGrippableSkeletalMeshActor_OnInput = FName(TEXT("OnInput"));
	void AGrippableSkeletalMeshActor::OnInput(FKey Key, EInputEvent KeyEvent)
	{
		GrippableSkeletalMeshActor_eventOnInput_Parms Parms;
		Parms.Key=Key;
		Parms.KeyEvent=KeyEvent;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_OnInput),&Parms);
	}
	static FName NAME_AGrippableSkeletalMeshActor_OnSecondaryGrip = FName(TEXT("OnSecondaryGrip"));
	void AGrippableSkeletalMeshActor::OnSecondaryGrip(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		GrippableSkeletalMeshActor_eventOnSecondaryGrip_Parms Parms;
		Parms.GripOwningController=GripOwningController;
		Parms.SecondaryGripComponent=SecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_OnSecondaryGrip),&Parms);
	}
	static FName NAME_AGrippableSkeletalMeshActor_OnSecondaryGripRelease = FName(TEXT("OnSecondaryGripRelease"));
	void AGrippableSkeletalMeshActor::OnSecondaryGripRelease(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		GrippableSkeletalMeshActor_eventOnSecondaryGripRelease_Parms Parms;
		Parms.GripOwningController=GripOwningController;
		Parms.ReleasingSecondaryGripComponent=ReleasingSecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_OnSecondaryGripRelease),&Parms);
	}
	static FName NAME_AGrippableSkeletalMeshActor_OnSecondaryUsed = FName(TEXT("OnSecondaryUsed"));
	void AGrippableSkeletalMeshActor::OnSecondaryUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_OnSecondaryUsed),NULL);
	}
	static FName NAME_AGrippableSkeletalMeshActor_OnUsed = FName(TEXT("OnUsed"));
	void AGrippableSkeletalMeshActor::OnUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_OnUsed),NULL);
	}
	static FName NAME_AGrippableSkeletalMeshActor_RequestsSocketing = FName(TEXT("RequestsSocketing"));
	bool AGrippableSkeletalMeshActor::RequestsSocketing(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform)
	{
		GrippableSkeletalMeshActor_eventRequestsSocketing_Parms Parms;
		Parms.ParentToSocketTo=ParentToSocketTo;
		Parms.OptionalSocketName=OptionalSocketName;
		Parms.RelativeTransform=RelativeTransform;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_RequestsSocketing),&Parms);
		ParentToSocketTo=Parms.ParentToSocketTo;
		OptionalSocketName=Parms.OptionalSocketName;
		RelativeTransform=Parms.RelativeTransform;
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGrippableSkeletalMeshActor_SecondaryGripType = FName(TEXT("SecondaryGripType"));
	ESecondaryGripType AGrippableSkeletalMeshActor::SecondaryGripType()
	{
		GrippableSkeletalMeshActor_eventSecondaryGripType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_SecondaryGripType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication = FName(TEXT("Server_GetClientAuthReplication"));
	void AGrippableSkeletalMeshActor::Server_GetClientAuthReplication(FRepMovementVR const& newMovement)
	{
		GrippableSkeletalMeshActor_eventServer_GetClientAuthReplication_Parms Parms;
		Parms.newMovement=newMovement;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication),&Parms);
	}
	static FName NAME_AGrippableSkeletalMeshActor_SetHeld = FName(TEXT("SetHeld"));
	void AGrippableSkeletalMeshActor::SetHeld(UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld)
	{
		GrippableSkeletalMeshActor_eventSetHeld_Parms Parms;
		Parms.HoldingController=HoldingController;
		Parms.GripID=GripID;
		Parms.bIsHeld=bIsHeld ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_SetHeld),&Parms);
	}
	static FName NAME_AGrippableSkeletalMeshActor_SimulateOnDrop = FName(TEXT("SimulateOnDrop"));
	bool AGrippableSkeletalMeshActor::SimulateOnDrop()
	{
		GrippableSkeletalMeshActor_eventSimulateOnDrop_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_SimulateOnDrop),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGrippableSkeletalMeshActor_TeleportBehavior = FName(TEXT("TeleportBehavior"));
	EGripInterfaceTeleportBehavior AGrippableSkeletalMeshActor::TeleportBehavior()
	{
		GrippableSkeletalMeshActor_eventTeleportBehavior_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_TeleportBehavior),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGrippableSkeletalMeshActor_TickGrip = FName(TEXT("TickGrip"));
	void AGrippableSkeletalMeshActor::TickGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)
	{
		GrippableSkeletalMeshActor_eventTickGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableSkeletalMeshActor_TickGrip),&Parms);
	}
	void AGrippableSkeletalMeshActor::StaticRegisterNativesAGrippableSkeletalMeshActor()
	{
		UClass* Class = AGrippableSkeletalMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToClientReplicationBucket", &AGrippableSkeletalMeshActor::execAddToClientReplicationBucket },
			{ "AdvancedGripSettings", &AGrippableSkeletalMeshActor::execAdvancedGripSettings },
			{ "AllowsMultipleGrips", &AGrippableSkeletalMeshActor::execAllowsMultipleGrips },
			{ "CeaseReplicationBlocking", &AGrippableSkeletalMeshActor::execCeaseReplicationBlocking },
			{ "ClosestGripSlotInRange", &AGrippableSkeletalMeshActor::execClosestGripSlotInRange },
			{ "DenyGripping", &AGrippableSkeletalMeshActor::execDenyGripping },
			{ "GetGripScripts", &AGrippableSkeletalMeshActor::execGetGripScripts },
			{ "GetGripStiffnessAndDamping", &AGrippableSkeletalMeshActor::execGetGripStiffnessAndDamping },
			{ "GetPrimaryGripType", &AGrippableSkeletalMeshActor::execGetPrimaryGripType },
			{ "GripBreakDistance", &AGrippableSkeletalMeshActor::execGripBreakDistance },
			{ "GripLateUpdateSetting", &AGrippableSkeletalMeshActor::execGripLateUpdateSetting },
			{ "GripMovementReplicationType", &AGrippableSkeletalMeshActor::execGripMovementReplicationType },
			{ "IsHeld", &AGrippableSkeletalMeshActor::execIsHeld },
			{ "OnChildGrip", &AGrippableSkeletalMeshActor::execOnChildGrip },
			{ "OnChildGripRelease", &AGrippableSkeletalMeshActor::execOnChildGripRelease },
			{ "OnEndSecondaryUsed", &AGrippableSkeletalMeshActor::execOnEndSecondaryUsed },
			{ "OnEndUsed", &AGrippableSkeletalMeshActor::execOnEndUsed },
			{ "OnGrip", &AGrippableSkeletalMeshActor::execOnGrip },
			{ "OnGripRelease", &AGrippableSkeletalMeshActor::execOnGripRelease },
			{ "OnInput", &AGrippableSkeletalMeshActor::execOnInput },
			{ "OnSecondaryGrip", &AGrippableSkeletalMeshActor::execOnSecondaryGrip },
			{ "OnSecondaryGripRelease", &AGrippableSkeletalMeshActor::execOnSecondaryGripRelease },
			{ "OnSecondaryUsed", &AGrippableSkeletalMeshActor::execOnSecondaryUsed },
			{ "OnUsed", &AGrippableSkeletalMeshActor::execOnUsed },
			{ "PollReplicationEvent", &AGrippableSkeletalMeshActor::execPollReplicationEvent },
			{ "RemoveFromClientReplicationBucket", &AGrippableSkeletalMeshActor::execRemoveFromClientReplicationBucket },
			{ "RequestsSocketing", &AGrippableSkeletalMeshActor::execRequestsSocketing },
			{ "SecondaryGripType", &AGrippableSkeletalMeshActor::execSecondaryGripType },
			{ "Server_GetClientAuthReplication", &AGrippableSkeletalMeshActor::execServer_GetClientAuthReplication },
			{ "SetDenyGripping", &AGrippableSkeletalMeshActor::execSetDenyGripping },
			{ "SetHeld", &AGrippableSkeletalMeshActor::execSetHeld },
			{ "SimulateOnDrop", &AGrippableSkeletalMeshActor::execSimulateOnDrop },
			{ "TeleportBehavior", &AGrippableSkeletalMeshActor::execTeleportBehavior },
			{ "TickGrip", &AGrippableSkeletalMeshActor::execTickGrip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_AddToClientReplicationBucket_Statics
	{
		struct GrippableSkeletalMeshActor_eventAddToClientReplicationBucket_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventAddToClientReplicationBucket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventAddToClientReplicationBucket_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_AddToClientReplicationBucket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_AddToClientReplicationBucket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Add this to client side physics replication (until coming to rest or timeout period is hit)\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Add this to client side physics replication (until coming to rest or timeout period is hit)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_AddToClientReplicationBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "AddToClientReplicationBucket", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventAddToClientReplicationBucket_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_AddToClientReplicationBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_AddToClientReplicationBucket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_AddToClientReplicationBucket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_AddToClientReplicationBucket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_AddToClientReplicationBucket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_AddToClientReplicationBucket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_AdvancedGripSettings_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_AdvancedGripSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventAdvancedGripSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPAdvGripSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_AdvancedGripSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_AdvancedGripSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_AdvancedGripSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Get the advanced physics settings for this grip\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Get the advanced physics settings for this grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_AdvancedGripSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "AdvancedGripSettings", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventAdvancedGripSettings_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_AdvancedGripSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_AdvancedGripSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_AdvancedGripSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_AdvancedGripSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_AdvancedGripSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_AdvancedGripSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_AllowsMultipleGrips_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_AllowsMultipleGrips_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventAllowsMultipleGrips_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_AllowsMultipleGrips_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventAllowsMultipleGrips_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_AllowsMultipleGrips_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_AllowsMultipleGrips_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_AllowsMultipleGrips_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_AllowsMultipleGrips_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Check if an object allows multiple grips at one time\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Check if an object allows multiple grips at one time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_AllowsMultipleGrips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "AllowsMultipleGrips", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventAllowsMultipleGrips_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_AllowsMultipleGrips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_AllowsMultipleGrips_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_AllowsMultipleGrips_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_AllowsMultipleGrips_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_AllowsMultipleGrips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_AllowsMultipleGrips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_CeaseReplicationBlocking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_CeaseReplicationBlocking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_CeaseReplicationBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "CeaseReplicationBlocking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_CeaseReplicationBlocking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_CeaseReplicationBlocking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_CeaseReplicationBlocking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_CeaseReplicationBlocking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_OverridePrefix = { "OverridePrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventClosestGripSlotInRange_Parms, OverridePrefix), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_CallingController = { "CallingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventClosestGripSlotInRange_Parms, CallingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventClosestGripSlotInRange_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_SlotWorldTransform = { "SlotWorldTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventClosestGripSlotInRange_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventClosestGripSlotInRange_Parms*)Obj)->bHadSlotInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange = { "bHadSlotInRange", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventClosestGripSlotInRange_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventClosestGripSlotInRange_Parms*)Obj)->bSecondarySlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot = { "bSecondarySlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventClosestGripSlotInRange_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventClosestGripSlotInRange_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_OverridePrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_CallingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_SlotWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Get closest primary slot in range\n" },
		{ "CPP_Default_CallingController", "None" },
		{ "CPP_Default_OverridePrefix", "None" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Get closest primary slot in range" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "ClosestGripSlotInRange", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventClosestGripSlotInRange_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_DenyGripping_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_DenyGripping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventDenyGripping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_DenyGripping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventDenyGripping_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_DenyGripping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_DenyGripping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_DenyGripping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_DenyGripping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Set up as deny instead of allow so that default allows for gripping\n" },
		{ "DisplayName", "IsDenyingGrips" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Set up as deny instead of allow so that default allows for gripping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_DenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "DenyGripping", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventDenyGripping_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_DenyGripping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_DenyGripping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_DenyGripping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_DenyGripping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_DenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_DenyGripping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics
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
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventGetGripScripts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventGetGripScripts_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::NewProp_ArrayReference_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::NewProp_ArrayReference = { "ArrayReference", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventGetGripScripts_Parms, ArrayReference), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::NewProp_ArrayReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::NewProp_ArrayReference_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::NewProp_ArrayReference_Inner = { "ArrayReference", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::NewProp_ArrayReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::NewProp_ArrayReference_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Get grip scripts\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Get grip scripts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "GetGripScripts", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventGetGripScripts_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripDampingOut;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripStiffnessOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping_Statics::NewProp_GripDampingOut = { "GripDampingOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventGetGripStiffnessAndDamping_Parms, GripDampingOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping_Statics::NewProp_GripStiffnessOut = { "GripStiffnessOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventGetGripStiffnessAndDamping_Parms, GripStiffnessOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping_Statics::NewProp_GripDampingOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping_Statics::NewProp_GripStiffnessOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// What grip stiffness and damping to use if using a physics constraint\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "What grip stiffness and damping to use if using a physics constraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "GetGripStiffnessAndDamping", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventGetGripStiffnessAndDamping_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventGetPrimaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::NewProp_bIsSlot_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventGetPrimaryGripType_Parms*)Obj)->bIsSlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::NewProp_bIsSlot = { "bIsSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventGetPrimaryGripType_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::NewProp_bIsSlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::NewProp_bIsSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Grip type to use\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Grip type to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "GetPrimaryGripType", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventGetPrimaryGripType_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripBreakDistance_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripBreakDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventGripBreakDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripBreakDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripBreakDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripBreakDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// What distance to break a grip at (only relevent with physics enabled grips\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "What distance to break a grip at (only relevent with physics enabled grips" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripBreakDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "GripBreakDistance", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventGripBreakDistance_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripBreakDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripBreakDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripBreakDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripBreakDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripBreakDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripBreakDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripLateUpdateSetting_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripLateUpdateSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventGripLateUpdateSetting_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripLateUpdateSetting_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripLateUpdateSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripLateUpdateSetting_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripLateUpdateSetting_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripLateUpdateSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Define the late update setting\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Define the late update setting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripLateUpdateSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "GripLateUpdateSetting", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventGripLateUpdateSetting_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripLateUpdateSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripLateUpdateSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripLateUpdateSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripLateUpdateSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripLateUpdateSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripLateUpdateSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripMovementReplicationType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripMovementReplicationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventGripMovementReplicationType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripMovementReplicationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripMovementReplicationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripMovementReplicationType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripMovementReplicationType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripMovementReplicationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Define which movement repliation setting to use\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Define which movement repliation setting to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripMovementReplicationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "GripMovementReplicationType", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventGripMovementReplicationType_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripMovementReplicationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripMovementReplicationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripMovementReplicationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripMovementReplicationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripMovementReplicationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripMovementReplicationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics
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
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventIsHeld_Parms*)Obj)->bIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventIsHeld_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::NewProp_HoldingControllers = { "HoldingControllers", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventIsHeld_Parms, HoldingControllers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::NewProp_HoldingControllers_Inner = { "HoldingControllers", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::NewProp_bIsHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::NewProp_HoldingControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::NewProp_HoldingControllers_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Returns if the object is held and if so, which controllers are holding it\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Returns if the object is held and if so, which controllers are holding it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "IsHeld", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventIsHeld_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnChildGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnChildGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when child component is gripped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Event triggered on the interfaced object when child component is gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "OnChildGrip", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventOnChildGrip_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics
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
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventOnChildGripRelease_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventOnChildGripRelease_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnChildGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnChildGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::NewProp_bWasSocketed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::NewProp_ReleasingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when child component is released\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Event triggered on the interfaced object when child component is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "OnChildGripRelease", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventOnChildGripRelease_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndSecondaryUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndSecondaryUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to stop using an object\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Call to stop using an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndSecondaryUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "OnEndSecondaryUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndSecondaryUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndSecondaryUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndSecondaryUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to stop using an object\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Call to stop using an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "OnEndUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when gripped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Event triggered on the interfaced object when gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "OnGrip", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventOnGrip_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics
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
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventOnGripRelease_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventOnGripRelease_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::NewProp_ReleasingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::NewProp_ReleasingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::NewProp_bWasSocketed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::NewProp_ReleasingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when grip is released\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Event triggered on the interfaced object when grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "OnGripRelease", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventOnGripRelease_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnInput_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyEvent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnInput_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnInput_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnInput_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnInput_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnInput_Statics::NewProp_KeyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnInput_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to send an action event to the object\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Call to send an action event to the object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "OnInput", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventOnInput_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnSecondaryGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent = { "SecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnSecondaryGrip_Parms, SecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::NewProp_GripOwningController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::NewProp_GripOwningController = { "GripOwningController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnSecondaryGrip_Parms, GripOwningController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::NewProp_GripOwningController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::NewProp_GripOwningController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::NewProp_GripOwningController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when secondary gripped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "OnSecondaryGrip", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventOnSecondaryGrip_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnSecondaryGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent = { "ReleasingSecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnSecondaryGripRelease_Parms, ReleasingSecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::NewProp_GripOwningController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::NewProp_GripOwningController = { "GripOwningController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventOnSecondaryGripRelease_Parms, GripOwningController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::NewProp_GripOwningController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::NewProp_GripOwningController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::NewProp_GripOwningController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when secondary grip is released\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "OnSecondaryGripRelease", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventOnSecondaryGripRelease_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to use an object\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "OnSecondaryUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to use an object\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "OnUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_PollReplicationEvent_Statics
	{
		struct GrippableSkeletalMeshActor_eventPollReplicationEvent_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_PollReplicationEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventPollReplicationEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_PollReplicationEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventPollReplicationEvent_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_PollReplicationEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_PollReplicationEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_PollReplicationEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_PollReplicationEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_PollReplicationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "PollReplicationEvent", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventPollReplicationEvent_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_PollReplicationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_PollReplicationEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_PollReplicationEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_PollReplicationEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_PollReplicationEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_PollReplicationEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket_Statics
	{
		struct GrippableSkeletalMeshActor_eventRemoveFromClientReplicationBucket_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventRemoveFromClientReplicationBucket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventRemoveFromClientReplicationBucket_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Remove this from client side physics replication\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Remove this from client side physics replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "RemoveFromClientReplicationBucket", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventRemoveFromClientReplicationBucket_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics
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
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventRequestsSocketing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventRequestsSocketing_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventRequestsSocketing_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::NewProp_OptionalSocketName = { "OptionalSocketName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventRequestsSocketing_Parms, OptionalSocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::NewProp_ParentToSocketTo = { "ParentToSocketTo", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventRequestsSocketing_Parms, ParentToSocketTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::NewProp_OptionalSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::NewProp_ParentToSocketTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Returns if the object wants to be socketed\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Returns if the object wants to be socketed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "RequestsSocketing", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventRequestsSocketing_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_SecondaryGripType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_SecondaryGripType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventSecondaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_SecondaryGripType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_SecondaryGripType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_SecondaryGripType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_SecondaryGripType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_SecondaryGripType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Secondary grip type\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Secondary grip type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_SecondaryGripType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "SecondaryGripType", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventSecondaryGripType_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_SecondaryGripType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_SecondaryGripType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_SecondaryGripType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_SecondaryGripType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_SecondaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_SecondaryGripType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement = { "newMovement", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventServer_GetClientAuthReplication_Parms, newMovement), Z_Construct_UScriptStruct_FRepMovementVR, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Notify the server that we locally gripped something\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Notify the server that we locally gripped something" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "Server_GetClientAuthReplication", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventServer_GetClientAuthReplication_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetDenyGripping_Statics
	{
		struct GrippableSkeletalMeshActor_eventSetDenyGripping_Parms
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
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventSetDenyGripping_Parms*)Obj)->bDenyGripping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetDenyGripping_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventSetDenyGripping_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetDenyGripping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetDenyGripping_Statics::NewProp_bDenyGripping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetDenyGripping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Sets the Deny Gripping variable on the FBPInterfaceSettings struct\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Sets the Deny Gripping variable on the FBPInterfaceSettings struct" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetDenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "SetDenyGripping", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventSetDenyGripping_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetDenyGripping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetDenyGripping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetDenyGripping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetDenyGripping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetDenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetDenyGripping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics
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
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventSetHeld_Parms*)Obj)->bIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventSetHeld_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventSetHeld_Parms, GripID), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::NewProp_HoldingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::NewProp_HoldingController = { "HoldingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventSetHeld_Parms, HoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::NewProp_HoldingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::NewProp_HoldingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::NewProp_bIsHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::NewProp_GripID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::NewProp_HoldingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "/*BlueprintCallable,*/" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "BlueprintCallable," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "SetHeld", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventSetHeld_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_SimulateOnDrop_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGrippableSkeletalMeshActor_SimulateOnDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshActor_eventSimulateOnDrop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_SimulateOnDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSkeletalMeshActor_eventSimulateOnDrop_Parms), &Z_Construct_UFunction_AGrippableSkeletalMeshActor_SimulateOnDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_SimulateOnDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_SimulateOnDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_SimulateOnDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Should this object simulate on drop\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Should this object simulate on drop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_SimulateOnDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "SimulateOnDrop", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventSimulateOnDrop_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_SimulateOnDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_SimulateOnDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_SimulateOnDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_SimulateOnDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_SimulateOnDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_SimulateOnDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_TeleportBehavior_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_TeleportBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventTeleportBehavior_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_TeleportBehavior_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_TeleportBehavior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_TeleportBehavior_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_TeleportBehavior_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_TeleportBehavior_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// How an interfaced object behaves when teleporting\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "How an interfaced object behaves when teleporting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_TeleportBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "TeleportBehavior", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventTeleportBehavior_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_TeleportBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_TeleportBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_TeleportBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_TeleportBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_TeleportBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_TeleportBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventTickGrip_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventTickGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSkeletalMeshActor_eventTickGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableSkeletalMeshActor, nullptr, "TickGrip", nullptr, nullptr, sizeof(GrippableSkeletalMeshActor_eventTickGrip_Parms), Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGrippableSkeletalMeshActor_NoRegister()
	{
		return AGrippableSkeletalMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRepGripSettingsAndGameplayTags_MetaData[];
#endif
		static void NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepGripSettingsAndGameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowIgnoringAttachOnOwner_MetaData[];
#endif
		static void NewProp_bAllowIgnoringAttachOnOwner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowIgnoringAttachOnOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientAuthReplicationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientAuthReplicationData;
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
	UObject* (*const Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASkeletalMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_AddToClientReplicationBucket, "AddToClientReplicationBucket" }, // 2174822013
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_AdvancedGripSettings, "AdvancedGripSettings" }, // 892153180
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_AllowsMultipleGrips, "AllowsMultipleGrips" }, // 3255664347
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_CeaseReplicationBlocking, "CeaseReplicationBlocking" }, // 1712734433
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_ClosestGripSlotInRange, "ClosestGripSlotInRange" }, // 4014190572
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_DenyGripping, "DenyGripping" }, // 2059722175
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripScripts, "GetGripScripts" }, // 2011852967
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping, "GetGripStiffnessAndDamping" }, // 1902919834
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_GetPrimaryGripType, "GetPrimaryGripType" }, // 1350234230
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripBreakDistance, "GripBreakDistance" }, // 24233114
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripLateUpdateSetting, "GripLateUpdateSetting" }, // 1102838875
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_GripMovementReplicationType, "GripMovementReplicationType" }, // 3980851545
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_IsHeld, "IsHeld" }, // 3542948000
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGrip, "OnChildGrip" }, // 952112784
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnChildGripRelease, "OnChildGripRelease" }, // 328084657
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndSecondaryUsed, "OnEndSecondaryUsed" }, // 2119318968
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnEndUsed, "OnEndUsed" }, // 2187604029
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGrip, "OnGrip" }, // 707802664
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnGripRelease, "OnGripRelease" }, // 1164827549
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnInput, "OnInput" }, // 1092392107
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGrip, "OnSecondaryGrip" }, // 1495892515
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryGripRelease, "OnSecondaryGripRelease" }, // 2430626511
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnSecondaryUsed, "OnSecondaryUsed" }, // 1553438787
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_OnUsed, "OnUsed" }, // 2463469487
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_PollReplicationEvent, "PollReplicationEvent" }, // 4169053284
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket, "RemoveFromClientReplicationBucket" }, // 552811787
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_RequestsSocketing, "RequestsSocketing" }, // 558215577
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_SecondaryGripType, "SecondaryGripType" }, // 4196019094
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_Server_GetClientAuthReplication, "Server_GetClientAuthReplication" }, // 3820321362
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetDenyGripping, "SetDenyGripping" }, // 4054025154
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_SetHeld, "SetHeld" }, // 4218752966
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_SimulateOnDrop, "SimulateOnDrop" }, // 2669277711
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_TeleportBehavior, "TeleportBehavior" }, // 2017776568
		{ &Z_Construct_UFunction_AGrippableSkeletalMeshActor_TickGrip, "TickGrip" }, // 1919709137
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Grippables/GrippableSkeletalMeshActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_VRGripInterfaceSettings_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_VRGripInterfaceSettings = { "VRGripInterfaceSettings", nullptr, (EPropertyFlags)0x0010008000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableSkeletalMeshActor, VRGripInterfaceSettings), Z_Construct_UScriptStruct_FBPInterfaceProperties, METADATA_PARAMS(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_VRGripInterfaceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_VRGripInterfaceSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
	};
#endif
	void Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj)
	{
		((AGrippableSkeletalMeshActor*)Obj)->bRepGripSettingsAndGameplayTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags = { "bRepGripSettingsAndGameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrippableSkeletalMeshActor), &Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "// Skips the attachment replication if we are locally owned and our grip settings say that we are a client authed grip.\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Skips the attachment replication if we are locally owned and our grip settings say that we are a client authed grip." },
	};
#endif
	void Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_SetBit(void* Obj)
	{
		((AGrippableSkeletalMeshActor*)Obj)->bAllowIgnoringAttachOnOwner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner = { "bAllowIgnoringAttachOnOwner", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrippableSkeletalMeshActor), &Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Tags that are set on this object */" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Tags that are set on this object" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableSkeletalMeshActor, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_GameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_ClientAuthReplicationData_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "// ------------------------------------------------\n// Client Auth Throwing Data and functions \n// ------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Client Auth Throwing Data and functions" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_ClientAuthReplicationData = { "ClientAuthReplicationData", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableSkeletalMeshActor, ClientAuthReplicationData), Z_Construct_UScriptStruct_FVRClientAuthReplicationData, METADATA_PARAMS(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_ClientAuthReplicationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_ClientAuthReplicationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnSecondaryGripRemoved_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary dropped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Called when an object we hold is secondary dropped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnSecondaryGripRemoved = { "OnSecondaryGripRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableSkeletalMeshActor, OnSecondaryGripRemoved), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnSecondaryGripRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnSecondaryGripRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnSecondaryGripAdded_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary gripped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Called when an object we hold is secondary gripped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnSecondaryGripAdded = { "OnSecondaryGripAdded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableSkeletalMeshActor, OnSecondaryGripAdded), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnSecondaryGripAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnSecondaryGripAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is dropped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Called when a object is dropped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableSkeletalMeshActor, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is gripped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
		{ "ToolTip", "Called when a object is gripped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableSkeletalMeshActor, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnGripped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnGripped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_GripLogicScripts_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_GripLogicScripts = { "GripLogicScripts", nullptr, (EPropertyFlags)0x001000800000003d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableSkeletalMeshActor, GripLogicScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_GripLogicScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_GripLogicScripts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_GripLogicScripts_Inner_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_GripLogicScripts_Inner = { "GripLogicScripts", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_GripLogicScripts_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_GripLogicScripts_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_VRGripInterfaceSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_GameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_ClientAuthReplicationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnSecondaryGripRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnSecondaryGripAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_OnGripped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_GripLogicScripts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::NewProp_GripLogicScripts_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(AGrippableSkeletalMeshActor, IVRGripInterface), false },
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(AGrippableSkeletalMeshActor, IGameplayTagAssetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrippableSkeletalMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::ClassParams = {
		&AGrippableSkeletalMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrippableSkeletalMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrippableSkeletalMeshActor, 3755443175);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AGrippableSkeletalMeshActor>()
	{
		return AGrippableSkeletalMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrippableSkeletalMeshActor(Z_Construct_UClass_AGrippableSkeletalMeshActor, &AGrippableSkeletalMeshActor::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AGrippableSkeletalMeshActor"), false, nullptr, nullptr, nullptr);

	void AGrippableSkeletalMeshActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GripLogicScripts(TEXT("GripLogicScripts"));
		static const FName Name_ClientAuthReplicationData(TEXT("ClientAuthReplicationData"));
		static const FName Name_GameplayTags(TEXT("GameplayTags"));
		static const FName Name_bAllowIgnoringAttachOnOwner(TEXT("bAllowIgnoringAttachOnOwner"));
		static const FName Name_bRepGripSettingsAndGameplayTags(TEXT("bRepGripSettingsAndGameplayTags"));
		static const FName Name_VRGripInterfaceSettings(TEXT("VRGripInterfaceSettings"));

		const bool bIsValid = true
			&& Name_GripLogicScripts == ClassReps[(int32)ENetFields_Private::GripLogicScripts].Property->GetFName()
			&& Name_ClientAuthReplicationData == ClassReps[(int32)ENetFields_Private::ClientAuthReplicationData].Property->GetFName()
			&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
			&& Name_bAllowIgnoringAttachOnOwner == ClassReps[(int32)ENetFields_Private::bAllowIgnoringAttachOnOwner].Property->GetFName()
			&& Name_bRepGripSettingsAndGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGripSettingsAndGameplayTags].Property->GetFName()
			&& Name_VRGripInterfaceSettings == ClassReps[(int32)ENetFields_Private::VRGripInterfaceSettings].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGrippableSkeletalMeshActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrippableSkeletalMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
