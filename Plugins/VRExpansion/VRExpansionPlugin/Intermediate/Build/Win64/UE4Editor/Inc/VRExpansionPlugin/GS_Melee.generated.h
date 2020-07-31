// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPLodgeComponentInfo;
class AActor;
class UPrimitiveComponent;
struct FVector;
struct FHitResult;
struct FBPGripPair;
#ifdef VREXPANSIONPLUGIN_GS_Melee_generated_h
#error "GS_Melee.generated.h already included, missing '#pragma once' in GS_Melee.h"
#endif
#define VREXPANSIONPLUGIN_GS_Melee_generated_h

#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPLodgeComponentInfo>();

#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_91_DELEGATE \
struct _Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms \
{ \
	FBPLodgeComponentInfo LogComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	TEnumAsByte<ECollisionChannel> OtherCompCollisionChannel; \
	FVector NormalImpulse; \
	FHitResult Hit; \
}; \
static inline void FVROnMeleeShouldLodgeSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnMeleeShouldLodgeSignature, FBPLodgeComponentInfo LogComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, ECollisionChannel OtherCompCollisionChannel, FVector NormalImpulse, FHitResult const& Hit) \
{ \
	_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms Parms; \
	Parms.LogComponent=LogComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.OtherCompCollisionChannel=OtherCompCollisionChannel; \
	Parms.NormalImpulse=NormalImpulse; \
	Parms.Hit=Hit; \
	VROnMeleeShouldLodgeSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_SPARSE_DATA
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPrimaryAndSecondaryHands); \
	DECLARE_FUNCTION(execUpdateHandPosition); \
	DECLARE_FUNCTION(execSetIsLodged); \
	DECLARE_FUNCTION(execOnLodgeHitCallback);


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPrimaryAndSecondaryHands); \
	DECLARE_FUNCTION(execUpdateHandPosition); \
	DECLARE_FUNCTION(execSetIsLodged); \
	DECLARE_FUNCTION(execOnLodgeHitCallback);


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGS_Melee(); \
	friend struct Z_Construct_UClass_UGS_Melee_Statics; \
public: \
	DECLARE_CLASS(UGS_Melee, UGS_Default, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGS_Melee)


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUGS_Melee(); \
	friend struct Z_Construct_UClass_UGS_Melee_Statics; \
public: \
	DECLARE_CLASS(UGS_Melee, UGS_Default, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGS_Melee)


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGS_Melee(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGS_Melee) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGS_Melee); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGS_Melee); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGS_Melee(UGS_Melee&&); \
	NO_API UGS_Melee(const UGS_Melee&); \
public:


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGS_Melee(UGS_Melee&&); \
	NO_API UGS_Melee(const UGS_Melee&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGS_Melee); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGS_Melee); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGS_Melee)


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_PRIVATE_PROPERTY_OFFSET
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_97_PROLOG
#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_PRIVATE_PROPERTY_OFFSET \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_SPARSE_DATA \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_RPC_WRAPPERS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_INCLASS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_PRIVATE_PROPERTY_OFFSET \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_SPARSE_DATA \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_INCLASS_NO_PURE_DECLS \
	TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UGS_Melee>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TaleOfFallenStars_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h


#define FOREACH_ENUM_EVRMELEEPRIMARYHANDTYPE(op) \
	op(EVRMeleePrimaryHandType::VRPHAND_Rear) \
	op(EVRMeleePrimaryHandType::VRPHAND_Front) \
	op(EVRMeleePrimaryHandType::VRPHAND_Slotted) 

enum class EVRMeleePrimaryHandType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMeleePrimaryHandType>();

#define FOREACH_ENUM_EVRMELEECOMTYPE(op) \
	op(EVRMeleeComType::VRPMELEECOM_Normal) \
	op(EVRMeleeComType::VRPMELEECOM_BetweenHands) \
	op(EVRMeleeComType::VRPMELEECOM_PrimaryHand) 

enum class EVRMeleeComType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMeleeComType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
