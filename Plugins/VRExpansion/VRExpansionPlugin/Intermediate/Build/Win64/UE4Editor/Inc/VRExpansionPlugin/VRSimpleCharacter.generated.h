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
#ifdef VREXPANSIONPLUGIN_VRSimpleCharacter_generated_h
#error "VRSimpleCharacter.generated.h already included, missing '#pragma once' in VRSimpleCharacter.h"
#endif
#define VREXPANSIONPLUGIN_VRSimpleCharacter_generated_h

#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_SPARSE_DATA
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_RPC_WRAPPERS \
	virtual bool ServerMoveVRDualHybridRootMotion_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , FVRConditionalMoveRep , FVector_NetQuantize100 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVRDualHybridRootMotion_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRDual_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , FVRConditionalMoveRep , FVector_NetQuantize100 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVRDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual bool ServerMoveVR_Validate(float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVR_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint8 CompressedMoveFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
 \
	DECLARE_FUNCTION(execServerMoveVRDualHybridRootMotion); \
	DECLARE_FUNCTION(execServerMoveVRDual); \
	DECLARE_FUNCTION(execServerMoveVR);


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServerMoveVRDualHybridRootMotion); \
	DECLARE_FUNCTION(execServerMoveVRDual); \
	DECLARE_FUNCTION(execServerMoveVR);


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_EVENT_PARMS \
	struct VRSimpleCharacter_eventServerMoveVR_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint8 CompressedMoveFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRSimpleCharacter_eventServerMoveVRDual_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint8 NewFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint8 NewFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	};


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_CALLBACK_WRAPPERS
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRSimpleCharacter(); \
	friend struct Z_Construct_UClass_AVRSimpleCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRSimpleCharacter, AVRBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRSimpleCharacter)


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAVRSimpleCharacter(); \
	friend struct Z_Construct_UClass_AVRSimpleCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRSimpleCharacter, AVRBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRSimpleCharacter)


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRSimpleCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRSimpleCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRSimpleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRSimpleCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRSimpleCharacter(AVRSimpleCharacter&&); \
	NO_API AVRSimpleCharacter(const AVRSimpleCharacter&); \
public:


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRSimpleCharacter(AVRSimpleCharacter&&); \
	NO_API AVRSimpleCharacter(const AVRSimpleCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRSimpleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRSimpleCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRSimpleCharacter)


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_PRIVATE_PROPERTY_OFFSET
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_16_PROLOG \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_EVENT_PARMS


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_SPARSE_DATA \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_RPC_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_CALLBACK_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_INCLASS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_SPARSE_DATA \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_CALLBACK_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_INCLASS_NO_PURE_DECLS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class AVRSimpleCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
