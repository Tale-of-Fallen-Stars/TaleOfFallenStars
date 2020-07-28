// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVRInteractibleLeverEventType : uint8;
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
enum class EGripCollisionType : uint8;
enum class ESecondaryGripType : uint8;
enum class EGripInterfaceTeleportBehavior : uint8;
#ifdef VREXPANSIONPLUGIN_VRLeverComponent_generated_h
#error "VRLeverComponent.generated.h already included, missing '#pragma once' in VRLeverComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRLeverComponent_generated_h

#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_68_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRLeverFinishedLerpingSignature_Parms \
{ \
	float FinalAngle; \
}; \
static inline void FVRLeverFinishedLerpingSignature_DelegateWrapper(const FMulticastScriptDelegate& VRLeverFinishedLerpingSignature, float FinalAngle) \
{ \
	_Script_VRExpansionPlugin_eventVRLeverFinishedLerpingSignature_Parms Parms; \
	Parms.FinalAngle=FinalAngle; \
	VRLeverFinishedLerpingSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_67_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms \
{ \
	bool LeverStatus; \
	EVRInteractibleLeverEventType LeverStatusType; \
	float LeverAngleAtTime; \
}; \
static inline void FVRLeverStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRLeverStateChangedSignature, bool LeverStatus, EVRInteractibleLeverEventType LeverStatusType, float LeverAngleAtTime) \
{ \
	_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms Parms; \
	Parms.LeverStatus=LeverStatus ? true : false; \
	Parms.LeverStatusType=LeverStatusType; \
	Parms.LeverAngleAtTime=LeverAngleAtTime; \
	VRLeverStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_SPARSE_DATA
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_RPC_WRAPPERS \
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
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* NewHoldingController, uint8 GripID, bool bNewIsHeld); \
	virtual void IsHeld_Implementation(TArray<FBPGripPair>& CurHoldingControllers, bool& bCurIsHeld); \
	virtual bool AllowsMultipleGrips_Implementation(); \
	virtual void ClosestGripSlotInRange_Implementation(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	virtual float GripBreakDistance_Implementation(); \
	virtual FBPAdvGripSettings AdvancedGripSettings_Implementation(); \
	virtual void GetGripStiffnessAndDamping_Implementation(float& GripStiffnessOut, float& GripDampingOut); \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation(); \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation(); \
	virtual EGripCollisionType GetPrimaryGripType_Implementation(bool bIsSlot); \
	virtual ESecondaryGripType SecondaryGripType_Implementation(); \
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
	DECLARE_FUNCTION(execGetPrimaryGripType); \
	DECLARE_FUNCTION(execSecondaryGripType); \
	DECLARE_FUNCTION(execSimulateOnDrop); \
	DECLARE_FUNCTION(execTeleportBehavior); \
	DECLARE_FUNCTION(execDenyGripping); \
	DECLARE_FUNCTION(execReCalculateCurrentAngle); \
	DECLARE_FUNCTION(execSetLeverAngle); \
	DECLARE_FUNCTION(execResetInitialLeverLocation); \
	DECLARE_FUNCTION(execOnRep_InitialRelativeTransform);


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
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
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* NewHoldingController, uint8 GripID, bool bNewIsHeld); \
	virtual void IsHeld_Implementation(TArray<FBPGripPair>& CurHoldingControllers, bool& bCurIsHeld); \
	virtual bool AllowsMultipleGrips_Implementation(); \
	virtual void ClosestGripSlotInRange_Implementation(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	virtual float GripBreakDistance_Implementation(); \
	virtual FBPAdvGripSettings AdvancedGripSettings_Implementation(); \
	virtual void GetGripStiffnessAndDamping_Implementation(float& GripStiffnessOut, float& GripDampingOut); \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation(); \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation(); \
	virtual EGripCollisionType GetPrimaryGripType_Implementation(bool bIsSlot); \
	virtual ESecondaryGripType SecondaryGripType_Implementation(); \
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
	DECLARE_FUNCTION(execGetPrimaryGripType); \
	DECLARE_FUNCTION(execSecondaryGripType); \
	DECLARE_FUNCTION(execSimulateOnDrop); \
	DECLARE_FUNCTION(execTeleportBehavior); \
	DECLARE_FUNCTION(execDenyGripping); \
	DECLARE_FUNCTION(execReCalculateCurrentAngle); \
	DECLARE_FUNCTION(execSetLeverAngle); \
	DECLARE_FUNCTION(execResetInitialLeverLocation); \
	DECLARE_FUNCTION(execOnRep_InitialRelativeTransform);


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_EVENT_PARMS \
	struct VRLeverComponent_eventAdvancedGripSettings_Parms \
	{ \
		FBPAdvGripSettings ReturnValue; \
	}; \
	struct VRLeverComponent_eventAllowsMultipleGrips_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRLeverComponent_eventAllowsMultipleGrips_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRLeverComponent_eventClosestGripSlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bSecondarySlot; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
		FName SlotName; \
		UGripMotionControllerComponent* CallingController; \
		FName OverridePrefix; \
	}; \
	struct VRLeverComponent_eventDenyGripping_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRLeverComponent_eventDenyGripping_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRLeverComponent_eventGetGripScripts_Parms \
	{ \
		TArray<UVRGripScriptBase*> ArrayReference; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRLeverComponent_eventGetGripScripts_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRLeverComponent_eventGetGripStiffnessAndDamping_Parms \
	{ \
		float GripStiffnessOut; \
		float GripDampingOut; \
	}; \
	struct VRLeverComponent_eventGetPrimaryGripType_Parms \
	{ \
		bool bIsSlot; \
		EGripCollisionType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRLeverComponent_eventGetPrimaryGripType_Parms() \
			: ReturnValue((EGripCollisionType)0) \
		{ \
		} \
	}; \
	struct VRLeverComponent_eventGripBreakDistance_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRLeverComponent_eventGripBreakDistance_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRLeverComponent_eventGripLateUpdateSetting_Parms \
	{ \
		EGripLateUpdateSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRLeverComponent_eventGripLateUpdateSetting_Parms() \
			: ReturnValue((EGripLateUpdateSettings)0) \
		{ \
		} \
	}; \
	struct VRLeverComponent_eventGripMovementReplicationType_Parms \
	{ \
		EGripMovementReplicationSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRLeverComponent_eventGripMovementReplicationType_Parms() \
			: ReturnValue((EGripMovementReplicationSettings)0) \
		{ \
		} \
	}; \
	struct VRLeverComponent_eventIsHeld_Parms \
	{ \
		TArray<FBPGripPair> CurHoldingControllers; \
		bool bCurIsHeld; \
	}; \
	struct VRLeverComponent_eventOnChildGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRLeverComponent_eventOnChildGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
		bool bWasSocketed; \
	}; \
	struct VRLeverComponent_eventOnGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRLeverComponent_eventOnGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
		bool bWasSocketed; \
	}; \
	struct VRLeverComponent_eventOnInput_Parms \
	{ \
		FKey Key; \
		TEnumAsByte<EInputEvent> KeyEvent; \
	}; \
	struct VRLeverComponent_eventOnSecondaryGrip_Parms \
	{ \
		UGripMotionControllerComponent* GripOwningController; \
		USceneComponent* SecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRLeverComponent_eventOnSecondaryGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* GripOwningController; \
		USceneComponent* ReleasingSecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRLeverComponent_eventReceiveLeverFinishedLerping_Parms \
	{ \
		float LeverFinalAngle; \
	}; \
	struct VRLeverComponent_eventReceiveLeverStateChanged_Parms \
	{ \
		bool LeverStatus; \
		EVRInteractibleLeverEventType LeverStatusType; \
		float LeverAngleAtTime; \
	}; \
	struct VRLeverComponent_eventRequestsSocketing_Parms \
	{ \
		USceneComponent* ParentToSocketTo; \
		FName OptionalSocketName; \
		FTransform_NetQuantize RelativeTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRLeverComponent_eventRequestsSocketing_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRLeverComponent_eventSecondaryGripType_Parms \
	{ \
		ESecondaryGripType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRLeverComponent_eventSecondaryGripType_Parms() \
			: ReturnValue((ESecondaryGripType)0) \
		{ \
		} \
	}; \
	struct VRLeverComponent_eventSetHeld_Parms \
	{ \
		UGripMotionControllerComponent* NewHoldingController; \
		uint8 GripID; \
		bool bNewIsHeld; \
	}; \
	struct VRLeverComponent_eventSimulateOnDrop_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRLeverComponent_eventSimulateOnDrop_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRLeverComponent_eventTeleportBehavior_Parms \
	{ \
		EGripInterfaceTeleportBehavior ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRLeverComponent_eventTeleportBehavior_Parms() \
			: ReturnValue((EGripInterfaceTeleportBehavior)0) \
		{ \
		} \
	}; \
	struct VRLeverComponent_eventTickGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
		float DeltaTime; \
	};


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_CALLBACK_WRAPPERS
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRLeverComponent(); \
	friend struct Z_Construct_UClass_UVRLeverComponent_Statics; \
public: \
	DECLARE_CLASS(UVRLeverComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRLeverComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVRLeverComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InitialRelativeTransform=NETFIELD_REP_START, \
		GameplayTags, \
		bRepGameplayTags, \
		bReplicateMovement, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUVRLeverComponent(); \
	friend struct Z_Construct_UClass_UVRLeverComponent_Statics; \
public: \
	DECLARE_CLASS(UVRLeverComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRLeverComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVRLeverComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InitialRelativeTransform=NETFIELD_REP_START, \
		GameplayTags, \
		bRepGameplayTags, \
		bReplicateMovement, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRLeverComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRLeverComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRLeverComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRLeverComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRLeverComponent(UVRLeverComponent&&); \
	NO_API UVRLeverComponent(const UVRLeverComponent&); \
public:


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRLeverComponent(UVRLeverComponent&&); \
	NO_API UVRLeverComponent(const UVRLeverComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRLeverComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRLeverComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRLeverComponent)


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_PRIVATE_PROPERTY_OFFSET
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_74_PROLOG \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_EVENT_PARMS


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_PRIVATE_PROPERTY_OFFSET \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_SPARSE_DATA \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_RPC_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_CALLBACK_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_INCLASS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_PRIVATE_PROPERTY_OFFSET \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_SPARSE_DATA \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_CALLBACK_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_INCLASS_NO_PURE_DECLS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRLeverComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h


#define FOREACH_ENUM_EVRINTERACTIBLELEVERRETURNTYPE(op) \
	op(EVRInteractibleLeverReturnType::Stay) \
	op(EVRInteractibleLeverReturnType::ReturnToZero) \
	op(EVRInteractibleLeverReturnType::LerpToMax) \
	op(EVRInteractibleLeverReturnType::LerpToMaxIfOverThreshold) \
	op(EVRInteractibleLeverReturnType::RetainMomentum) 

enum class EVRInteractibleLeverReturnType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleLeverReturnType>();

#define FOREACH_ENUM_EVRINTERACTIBLELEVEREVENTTYPE(op) \
	op(EVRInteractibleLeverEventType::LeverPositive) \
	op(EVRInteractibleLeverEventType::LeverNegative) 

enum class EVRInteractibleLeverEventType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleLeverEventType>();

#define FOREACH_ENUM_EVRINTERACTIBLELEVERAXIS(op) \
	op(EVRInteractibleLeverAxis::Axis_X) \
	op(EVRInteractibleLeverAxis::Axis_Y) \
	op(EVRInteractibleLeverAxis::Axis_Z) \
	op(EVRInteractibleLeverAxis::Axis_XY) \
	op(EVRInteractibleLeverAxis::FlightStick_XY) 

enum class EVRInteractibleLeverAxis : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleLeverAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
