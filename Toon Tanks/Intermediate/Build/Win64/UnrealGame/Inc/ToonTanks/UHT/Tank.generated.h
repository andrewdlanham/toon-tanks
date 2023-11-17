// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tank.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_Tank_generated_h
#error "Tank.generated.h already included, missing '#pragma once' in Tank.h"
#endif
#define TOONTANKS_Tank_generated_h

#define FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_SPARSE_DATA
#define FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_RPC_WRAPPERS
#define FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_ACCESSORS
#define FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATank(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public: \
	NO_API virtual ~ATank();


#define FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATank) \
	NO_API virtual ~ATank();


#define FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_12_PROLOG
#define FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_SPARSE_DATA \
	FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_RPC_WRAPPERS \
	FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_ACCESSORS \
	FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_INCLASS \
	FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_SPARSE_DATA \
	FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_ACCESSORS \
	FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_INCLASS_NO_PURE_DECLS \
	FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class ATank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toon_tanks_Toon_Tanks_Source_ToonTanks_Tank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
