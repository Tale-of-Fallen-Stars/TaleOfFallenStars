// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
class UGripMotionControllerComponent;
class USceneComponent;
struct FBPActorGripInformation;
class UVRGripScriptBase;
struct FTransform_NetQuantize;
struct FBPGripPair;
struct FVector;
struct FTransform;
struct FBPAdvGripSettings;
enum class EGripLateUpdateSettings : uint8;
enum class EGripMovementReplicationSettings : uint8;
enum class ESecondaryGripType : uint8;
enum class EGripCollisionType : uint8;
enum class EGripInterfaceTeleportBehavior : uint8;
#ifdef VREXPANSIONPLUGIN_GrippableStaticMeshComponent_generated_h
#error "GrippableStaticMeshComponent.generated.h already included, missing '#pragma once' in GrippableStaticMeshComponent.h"
#endif
#define VREXPANSIONPLUGIN_GrippableStaticMeshComponent_generated_h

#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_SPARSE_DATA
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_RPC_WRAPPERS \
	virtual void OnInput_Implementation(FKey Key, EInputEvent KeyEvent); \
	virtual void OnEndSecondaryUsed_Implementation(); \
	virtual void OnSecondaryUsed_Implementation(); \
	virtual void OnEndUsed_Implementation(); \
	virtual void OnUsed_Implementation(); \
	virtual void OnSecondaryGripRelease_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnSecondaryGrip_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnChildGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	virtual void OnChildGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void TickGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime); \
	virtual bool GetGripScripts_Implementation(TArray<UVRGripScriptBase*>& ArrayReference); \
	virtual bool RequestsSocketing_Implementation(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform); \
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld); \
	virtual void IsHeld_Implementation(TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld); \
	virtual bool AllowsMultipleGrips_Implementation(); \
	virtual void ClosestGripSlotInRange_Implementation(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	virtual float GripBreakDistance_Implementation(); \
	virtual FBPAdvGripSettings AdvancedGripSettings_Implementation(); \
	virtual void GetGripStiffnessAndDamping_Implementation(float& GripStiffnessOut, float& GripDampingOut); \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation(); \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation(); \
	virtual ESecondaryGripType SecondaryGripType_Implementation(); \
	virtual EGripCollisionType GetPrimaryGripType_Implementation(bool bIsSlot); \
	virtual bool SimulateOnDrop_Implementation(); \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation(); \
	virtual bool DenyGripping_Implementation(); \
 \
	DECLARE_FUNCTION(execOnInput); \
	DECLARE_FUNCTION(execOnEndSecondaryUsed); \
	DECLARE_FUNCTION(execOnSecondaryUsed); \
	DECLARE_FUNCTION(execOnEndUsed); \
	DECLARE_FUNCTION(execOnUsed); \
	DECLARE_FUNCTION(execOnSecondaryGripRelease); \
	DECLARE_FUNCTION(execOnSecondaryGrip); \
	DECLARE_FUNCTION(execOnChildGripRelease); \
	DECLARE_FUNCTION(execOnChildGrip); \
	DECLARE_FUNCTION(execOnGripRelease); \
	DECLARE_FUNCTION(execOnGrip); \
	DECLARE_FUNCTION(execTickGrip); \
	DECLARE_FUNCTION(execGetGripScripts); \
	DECLARE_FUNCTION(execRequestsSocketing); \
	DECLARE_FUNCTION(execSetHeld); \
	DECLARE_FUNCTION(execIsHeld); \
	DECLARE_FUNCTION(execAllowsMultipleGrips); \
	DECLARE_FUNCTION(execClosestGripSlotInRange); \
	DECLARE_FUNCTION(execGripBreakDistance); \
	DECLARE_FUNCTION(execAdvancedGripSettings); \
	DECLARE_FUNCTION(execGetGripStiffnessAndDamping); \
	DECLARE_FUNCTION(execGripLateUpdateSetting); \
	DECLARE_FUNCTION(execGripMovementReplicationType); \
	DECLARE_FUNCTION(execSecondaryGripType); \
	DECLARE_FUNCTION(execGetPrimaryGripType); \
	DECLARE_FUNCTION(execSimulateOnDrop); \
	DECLARE_FUNCTION(execTeleportBehavior); \
	DECLARE_FUNCTION(execDenyGripping); \
	DECLARE_FUNCTION(execSetDenyGripping);


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInput_Implementation(FKey Key, EInputEvent KeyEvent); \
	virtual void OnEndSecondaryUsed_Implementation(); \
	virtual void OnSecondaryUsed_Implementation(); \
	virtual void OnEndUsed_Implementation(); \
	virtual void OnUsed_Implementation(); \
	virtual void OnSecondaryGripRelease_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnSecondaryGrip_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnChildGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	virtual void OnChildGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void TickGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime); \
	virtual bool GetGripScripts_Implementation(TArray<UVRGripScriptBase*>& ArrayReference); \
	virtual bool RequestsSocketing_Implementation(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform); \
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld); \
	virtual void IsHeld_Implementation(TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld); \
	virtual bool AllowsMultipleGrips_Implementation(); \
	virtual void ClosestGripSlotInRange_Implementation(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	virtual float GripBreakDistance_Implementation(); \
	virtual FBPAdvGripSettings AdvancedGripSettings_Implementation(); \
	virtual void GetGripStiffnessAndDamping_Implementation(float& GripStiffnessOut, float& GripDampingOut); \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation(); \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation(); \
	virtual ESecondaryGripType SecondaryGripType_Implementation(); \
	virtual EGripCollisionType GetPrimaryGripType_Implementation(bool bIsSlot); \
	virtual bool SimulateOnDrop_Implementation(); \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation(); \
	virtual bool DenyGripping_Implementation(); \
 \
	DECLARE_FUNCTION(execOnInput); \
	DECLARE_FUNCTION(execOnEndSecondaryUsed); \
	DECLARE_FUNCTION(execOnSecondaryUsed); \
	DECLARE_FUNCTION(execOnEndUsed); \
	DECLARE_FUNCTION(execOnUsed); \
	DECLARE_FUNCTION(execOnSecondaryGripRelease); \
	DECLARE_FUNCTION(execOnSecondaryGrip); \
	DECLARE_FUNCTION(execOnChildGripRelease); \
	DECLARE_FUNCTION(execOnChildGrip); \
	DECLARE_FUNCTION(execOnGripRelease); \
	DECLARE_FUNCTION(execOnGrip); \
	DECLARE_FUNCTION(execTickGrip); \
	DECLARE_FUNCTION(execGetGripScripts); \
	DECLARE_FUNCTION(execRequestsSocketing); \
	DECLARE_FUNCTION(execSetHeld); \
	DECLARE_FUNCTION(execIsHeld); \
	DECLARE_FUNCTION(execAllowsMultipleGrips); \
	DECLARE_FUNCTION(execClosestGripSlotInRange); \
	DECLARE_FUNCTION(execGripBreakDistance); \
	DECLARE_FUNCTION(execAdvancedGripSettings); \
	DECLARE_FUNCTION(execGetGripStiffnessAndDamping); \
	DECLARE_FUNCTION(execGripLateUpdateSetting); \
	DECLARE_FUNCTION(execGripMovementReplicationType); \
	DECLARE_FUNCTION(execSecondaryGripType); \
	DECLARE_FUNCTION(execGetPrimaryGripType); \
	DECLARE_FUNCTION(execSimulateOnDrop); \
	DECLARE_FUNCTION(execTeleportBehavior); \
	DECLARE_FUNCTION(execDenyGripping); \
	DECLARE_FUNCTION(execSetDenyGripping);


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_EVENT_PARMS \
	struct GrippableStaticMeshComponent_eventAdvancedGripSettings_Parms \
	{ \
		FBPAdvGripSettings ReturnValue; \
	}; \
	struct GrippableStaticMeshComponent_eventAllowsMultipleGrips_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableStaticMeshComponent_eventAllowsMultipleGrips_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableStaticMeshComponent_eventClosestGripSlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bSecondarySlot; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
		FName SlotName; \
		UGripMotionControllerComponent* CallingController; \
		FName OverridePrefix; \
	}; \
	struct GrippableStaticMeshComponent_eventDenyGripping_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableStaticMeshComponent_eventDenyGripping_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableStaticMeshComponent_eventGetGripScripts_Parms \
	{ \
		TArray<UVRGripScriptBase*> ArrayReference; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableStaticMeshComponent_eventGetGripScripts_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableStaticMeshComponent_eventGetGripStiffnessAndDamping_Parms \
	{ \
		float GripStiffnessOut; \
		float GripDampingOut; \
	}; \
	struct GrippableStaticMeshComponent_eventGetPrimaryGripType_Parms \
	{ \
		bool bIsSlot; \
		EGripCollisionType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableStaticMeshComponent_eventGetPrimaryGripType_Parms() \
			: ReturnValue((EGripCollisionType)0) \
		{ \
		} \
	}; \
	struct GrippableStaticMeshComponent_eventGripBreakDistance_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableStaticMeshComponent_eventGripBreakDistance_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableStaticMeshComponent_eventGripLateUpdateSetting_Parms \
	{ \
		EGripLateUpdateSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableStaticMeshComponent_eventGripLateUpdateSetting_Parms() \
			: ReturnValue((EGripLateUpdateSettings)0) \
		{ \
		} \
	}; \
	struct GrippableStaticMeshComponent_eventGripMovementReplicationType_Parms \
	{ \
		EGripMovementReplicationSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableStaticMeshComponent_eventGripMovementReplicationType_Parms() \
			: ReturnValue((EGripMovementReplicationSettings)0) \
		{ \
		} \
	}; \
	struct GrippableStaticMeshComponent_eventIsHeld_Parms \
	{ \
		TArray<FBPGripPair> HoldingControllers; \
		bool bIsHeld; \
	}; \
	struct GrippableStaticMeshComponent_eventOnChildGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct GrippableStaticMeshComponent_eventOnChildGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
		bool bWasSocketed; \
	}; \
	struct GrippableStaticMeshComponent_eventOnGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct GrippableStaticMeshComponent_eventOnGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
		bool bWasSocketed; \
	}; \
	struct GrippableStaticMeshComponent_eventOnInput_Parms \
	{ \
		FKey Key; \
		TEnumAsByte<EInputEvent> KeyEvent; \
	}; \
	struct GrippableStaticMeshComponent_eventOnSecondaryGrip_Parms \
	{ \
		UGripMotionControllerComponent* GripOwningController; \
		USceneComponent* SecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct GrippableStaticMeshComponent_eventOnSecondaryGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* GripOwningController; \
		USceneComponent* ReleasingSecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct GrippableStaticMeshComponent_eventRequestsSocketing_Parms \
	{ \
		USceneComponent* ParentToSocketTo; \
		FName OptionalSocketName; \
		FTransform_NetQuantize RelativeTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableStaticMeshComponent_eventRequestsSocketing_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableStaticMeshComponent_eventSecondaryGripType_Parms \
	{ \
		ESecondaryGripType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableStaticMeshComponent_eventSecondaryGripType_Parms() \
			: ReturnValue((ESecondaryGripType)0) \
		{ \
		} \
	}; \
	struct GrippableStaticMeshComponent_eventSetHeld_Parms \
	{ \
		UGripMotionControllerComponent* HoldingController; \
		uint8 GripID; \
		bool bIsHeld; \
	}; \
	struct GrippableStaticMeshComponent_eventSimulateOnDrop_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableStaticMeshComponent_eventSimulateOnDrop_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableStaticMeshComponent_eventTeleportBehavior_Parms \
	{ \
		EGripInterfaceTeleportBehavior ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableStaticMeshComponent_eventTeleportBehavior_Parms() \
			: ReturnValue((EGripInterfaceTeleportBehavior)0) \
		{ \
		} \
	}; \
	struct GrippableStaticMeshComponent_eventTickGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
		float DeltaTime; \
	};


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_CALLBACK_WRAPPERS
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrippableStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UGrippableStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UGrippableStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGrippableStaticMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGrippableStaticMeshComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GripLogicScripts=NETFIELD_REP_START, \
		GameplayTags, \
		bRepGripSettingsAndGameplayTags, \
		bReplicateMovement, \
		VRGripInterfaceSettings, \
		NETFIELD_REP_END=VRGripInterfaceSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUGrippableStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UGrippableStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UGrippableStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGrippableStaticMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGrippableStaticMeshComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GripLogicScripts=NETFIELD_REP_START, \
		GameplayTags, \
		bRepGripSettingsAndGameplayTags, \
		bReplicateMovement, \
		VRGripInterfaceSettings, \
		NETFIELD_REP_END=VRGripInterfaceSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrippableStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrippableStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrippableStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrippableStaticMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrippableStaticMeshComponent(UGrippableStaticMeshComponent&&); \
	NO_API UGrippableStaticMeshComponent(const UGrippableStaticMeshComponent&); \
public:


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrippableStaticMeshComponent(UGrippableStaticMeshComponent&&); \
	NO_API UGrippableStaticMeshComponent(const UGrippableStaticMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrippableStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrippableStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrippableStaticMeshComponent)


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_PRIVATE_PROPERTY_OFFSET
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_20_PROLOG \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_EVENT_PARMS


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_SPARSE_DATA \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_RPC_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_CALLBACK_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_INCLASS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_SPARSE_DATA \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_CALLBACK_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_INCLASS_NO_PURE_DECLS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UGrippableStaticMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
