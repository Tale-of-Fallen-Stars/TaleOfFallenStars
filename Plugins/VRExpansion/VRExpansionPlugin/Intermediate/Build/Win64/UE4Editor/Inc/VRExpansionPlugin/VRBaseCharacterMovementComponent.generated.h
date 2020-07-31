// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPrimitiveComponent;
enum class EVRConjoinedMovementModes : uint8;
enum class EVRMoveAction : uint8;
enum class EVRMoveActionDataReq : uint8;
struct FRotator;
enum class EVRMoveActionVelocityRetention : uint8;
#ifdef VREXPANSIONPLUGIN_VRBaseCharacterMovementComponent_generated_h
#error "VRBaseCharacterMovementComponent.generated.h already included, missing '#pragma once' in VRBaseCharacterMovementComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRBaseCharacterMovementComponent_generated_h

#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_374_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRConditionalMoveRep2>();

#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_311_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRConditionalMoveRep>();

#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_238_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRMoveActionArray_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRMoveActionArray>();

#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRMoveActionContainer>();

#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_16_DELEGATE \
struct _Script_VRExpansionPlugin_eventVROnPerformClimbingStepUp_Parms \
{ \
	FVector FinalStepUpLocation; \
}; \
static inline void FVROnPerformClimbingStepUp_DelegateWrapper(const FMulticastScriptDelegate& VROnPerformClimbingStepUp, FVector FinalStepUpLocation) \
{ \
	_Script_VRExpansionPlugin_eventVROnPerformClimbingStepUp_Parms Parms; \
	Parms.FinalStepUpLocation=FinalStepUpLocation; \
	VROnPerformClimbingStepUp.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_SPARSE_DATA
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_RPC_WRAPPERS \
	virtual void ClientVeryShortAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
 \
	DECLARE_FUNCTION(execClientVeryShortAdjustPosition); \
	DECLARE_FUNCTION(execClientAdjustPosition); \
	DECLARE_FUNCTION(execGetReplicatedMovementMode); \
	DECLARE_FUNCTION(execSetReplicatedMovementMode); \
	DECLARE_FUNCTION(execSetClimbingMode); \
	DECLARE_FUNCTION(execGetCustomInputVector); \
	DECLARE_FUNCTION(execRewindVRMovement); \
	DECLARE_FUNCTION(execPerformMoveAction_Custom); \
	DECLARE_FUNCTION(execPerformMoveAction_StopAllMovement); \
	DECLARE_FUNCTION(execPerformMoveAction_Teleport); \
	DECLARE_FUNCTION(execPerformMoveAction_SetRotation); \
	DECLARE_FUNCTION(execPerformMoveAction_SnapTurn); \
	DECLARE_FUNCTION(execAddCustomReplicatedMovement); \
	DECLARE_FUNCTION(execSetCrouchedHalfHeight);


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClientVeryShortAdjustPosition); \
	DECLARE_FUNCTION(execClientAdjustPosition); \
	DECLARE_FUNCTION(execGetReplicatedMovementMode); \
	DECLARE_FUNCTION(execSetReplicatedMovementMode); \
	DECLARE_FUNCTION(execSetClimbingMode); \
	DECLARE_FUNCTION(execGetCustomInputVector); \
	DECLARE_FUNCTION(execRewindVRMovement); \
	DECLARE_FUNCTION(execPerformMoveAction_Custom); \
	DECLARE_FUNCTION(execPerformMoveAction_StopAllMovement); \
	DECLARE_FUNCTION(execPerformMoveAction_Teleport); \
	DECLARE_FUNCTION(execPerformMoveAction_SetRotation); \
	DECLARE_FUNCTION(execPerformMoveAction_SnapTurn); \
	DECLARE_FUNCTION(execAddCustomReplicatedMovement); \
	DECLARE_FUNCTION(execSetCrouchedHalfHeight);


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_EVENT_PARMS \
	struct VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		FVector NewVel; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	};


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_CALLBACK_WRAPPERS
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRBaseCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UVRBaseCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRBaseCharacterMovementComponent)


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_INCLASS \
private: \
	static void StaticRegisterNativesUVRBaseCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UVRBaseCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRBaseCharacterMovementComponent)


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRBaseCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRBaseCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRBaseCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRBaseCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRBaseCharacterMovementComponent(UVRBaseCharacterMovementComponent&&); \
	NO_API UVRBaseCharacterMovementComponent(const UVRBaseCharacterMovementComponent&); \
public:


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRBaseCharacterMovementComponent(UVRBaseCharacterMovementComponent&&); \
	NO_API UVRBaseCharacterMovementComponent(const UVRBaseCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRBaseCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRBaseCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRBaseCharacterMovementComponent)


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_PRIVATE_PROPERTY_OFFSET
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_624_PROLOG \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_EVENT_PARMS


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_PRIVATE_PROPERTY_OFFSET \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_SPARSE_DATA \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_RPC_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_CALLBACK_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_INCLASS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_PRIVATE_PROPERTY_OFFSET \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_SPARSE_DATA \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_RPC_WRAPPERS_NO_PURE_DECLS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_CALLBACK_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_INCLASS_NO_PURE_DECLS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_627_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRBaseCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h


#define FOREACH_ENUM_EVRMOVEACTIONDATAREQ(op) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_None) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT) 

enum class EVRMoveActionDataReq : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveActionDataReq>();

#define FOREACH_ENUM_EVRMOVEACTIONVELOCITYRETENTION(op) \
	op(EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_None) \
	op(EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Clear) \
	op(EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn) 

enum class EVRMoveActionVelocityRetention : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveActionVelocityRetention>();

#define FOREACH_ENUM_EVRMOVEACTION(op) \
	op(EVRMoveAction::VRMOVEACTION_None) \
	op(EVRMoveAction::VRMOVEACTION_SnapTurn) \
	op(EVRMoveAction::VRMOVEACTION_Teleport) \
	op(EVRMoveAction::VRMOVEACTION_StopAllMovement) \
	op(EVRMoveAction::VRMOVEACTION_SetRotation) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM1) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM2) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM3) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM4) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM5) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM6) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM7) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM8) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM9) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM10) 

enum class EVRMoveAction : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
