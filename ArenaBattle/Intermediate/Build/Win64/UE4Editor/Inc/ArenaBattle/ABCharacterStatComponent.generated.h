// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABCharacterStatComponent_generated_h
#error "ABCharacterStatComponent.generated.h already included, missing '#pragma once' in ABCharacterStatComponent.h"
#endif
#define ARENABATTLE_ABCharacterStatComponent_generated_h

#define ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_RPC_WRAPPERS
#define ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABCharacterStatComponent(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_UABCharacterStatComponent(); \
public: \
	DECLARE_CLASS(UABCharacterStatComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABCharacterStatComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUABCharacterStatComponent(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_UABCharacterStatComponent(); \
public: \
	DECLARE_CLASS(UABCharacterStatComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABCharacterStatComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABCharacterStatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABCharacterStatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABCharacterStatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABCharacterStatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABCharacterStatComponent(UABCharacterStatComponent&&); \
	NO_API UABCharacterStatComponent(const UABCharacterStatComponent&); \
public:


#define ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABCharacterStatComponent(UABCharacterStatComponent&&); \
	NO_API UABCharacterStatComponent(const UABCharacterStatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABCharacterStatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABCharacterStatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABCharacterStatComponent)


#define ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Level() { return STRUCT_OFFSET(UABCharacterStatComponent, Level); } \
	FORCEINLINE static uint32 __PPO__CurrentHP() { return STRUCT_OFFSET(UABCharacterStatComponent, CurrentHP); }


#define ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_10_PROLOG
#define ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_RPC_WRAPPERS \
	ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_INCLASS \
	ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_INCLASS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS