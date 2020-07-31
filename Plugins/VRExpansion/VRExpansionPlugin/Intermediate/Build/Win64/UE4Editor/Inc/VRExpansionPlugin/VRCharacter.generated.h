// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize10;
struct FVRConditionalMoveRep;
struct FVector_NetQuantize100;
struct FVRConditionalMoveRep2;
struct FVector;
class UPrimitiveComponent;
#ifdef VREXPANSIONPLUGIN_VRCharacter_generated_h
#error "VRCharacter.generated.h already included, missing '#pragma once' in VRCharacter.h"
#endif
#define VREXPANSIONPLUGIN_VRCharacter_generated_h

#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_SPARSE_DATA
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_RPC_WRAPPERS \
	virtual bool ServerMoveVROld_Validate(float , FVector_NetQuantize10 , uint8 , FVRConditionalMoveRep ); \
	virtual void ServerMoveVROld_Implementation(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags, FVRConditionalMoveRep ConditionalReps); \
	virtual bool ServerMoveVRDualHybridRootMotion_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVRDualHybridRootMotion_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRDualExLight_Validate(float , uint8 , uint32 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , float , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVRDualExLight_Implementation(float TimeStamp0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRDual_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVRDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRExLight_Validate(float , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVRExLight_Implementation(float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual bool ServerMoveVR_Validate(float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVR_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual void ClientVeryShortAdjustPositionVR_Implementation(float TimeStamp, FVector NewLoc, uint16 NewYaw, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAdjustPositionVR_Implementation(float TimeStamp, FVector NewLoc, uint16 NewYaw, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
 \
	DECLARE_FUNCTION(execServerMoveVROld); \
	DECLARE_FUNCTION(execServerMoveVRDualHybridRootMotion); \
	DECLARE_FUNCTION(execServerMoveVRDualExLight); \
	DECLARE_FUNCTION(execServerMoveVRDual); \
	DECLARE_FUNCTION(execServerMoveVRExLight); \
	DECLARE_FUNCTION(execServerMoveVR); \
	DECLARE_FUNCTION(execClientVeryShortAdjustPositionVR); \
	DECLARE_FUNCTION(execClientAdjustPositionVR);


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServerMoveVROld); \
	DECLARE_FUNCTION(execServerMoveVRDualHybridRootMotion); \
	DECLARE_FUNCTION(execServerMoveVRDualExLight); \
	DECLARE_FUNCTION(execServerMoveVRDual); \
	DECLARE_FUNCTION(execServerMoveVRExLight); \
	DECLARE_FUNCTION(execServerMoveVR); \
	DECLARE_FUNCTION(execClientVeryShortAdjustPositionVR); \
	DECLARE_FUNCTION(execClientAdjustPositionVR);


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_EVENT_PARMS \
	struct VRCharacter_eventClientAdjustPositionVR_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		uint16 NewYaw; \
		FVector NewVel; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct VRCharacter_eventClientVeryShortAdjustPositionVR_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		uint16 NewYaw; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVR_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 CompressedMoveFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVRDual_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		uint16 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 NewFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVRDualExLight_Parms \
	{ \
		float TimeStamp0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		uint16 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 NewFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		uint16 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 NewFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVRExLight_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 CompressedMoveFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVROld_Parms \
	{ \
		float OldTimeStamp; \
		FVector_NetQuantize10 OldAccel; \
		uint8 OldMoveFlags; \
		FVRConditionalMoveRep ConditionalReps; \
	};


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_CALLBACK_WRAPPERS
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, AVRBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, AVRBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public:


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRCharacter)


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_PRIVATE_PROPERTY_OFFSET
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_19_PROLOG \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_EVENT_PARMS


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_SPARSE_DATA \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_RPC_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_CALLBACK_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_INCLASS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_SPARSE_DATA \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_CALLBACK_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_INCLASS_NO_PURE_DECLS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class AVRCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
