// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THERUNAWAY_GameHUD_generated_h
#error "GameHUD.generated.h already included, missing '#pragma once' in GameHUD.h"
#endif
#define THERUNAWAY_GameHUD_generated_h

#define TheRunaway_Source_TheRunaway_GameHUD_h_15_SPARSE_DATA
#define TheRunaway_Source_TheRunaway_GameHUD_h_15_RPC_WRAPPERS
#define TheRunaway_Source_TheRunaway_GameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TheRunaway_Source_TheRunaway_GameHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameHUD(); \
	friend struct Z_Construct_UClass_AGameHUD_Statics; \
public: \
	DECLARE_CLASS(AGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheRunaway"), NO_API) \
	DECLARE_SERIALIZER(AGameHUD)


#define TheRunaway_Source_TheRunaway_GameHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGameHUD(); \
	friend struct Z_Construct_UClass_AGameHUD_Statics; \
public: \
	DECLARE_CLASS(AGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheRunaway"), NO_API) \
	DECLARE_SERIALIZER(AGameHUD)


#define TheRunaway_Source_TheRunaway_GameHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameHUD(AGameHUD&&); \
	NO_API AGameHUD(const AGameHUD&); \
public:


#define TheRunaway_Source_TheRunaway_GameHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameHUD(AGameHUD&&); \
	NO_API AGameHUD(const AGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameHUD)


#define TheRunaway_Source_TheRunaway_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define TheRunaway_Source_TheRunaway_GameHUD_h_12_PROLOG
#define TheRunaway_Source_TheRunaway_GameHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheRunaway_Source_TheRunaway_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	TheRunaway_Source_TheRunaway_GameHUD_h_15_SPARSE_DATA \
	TheRunaway_Source_TheRunaway_GameHUD_h_15_RPC_WRAPPERS \
	TheRunaway_Source_TheRunaway_GameHUD_h_15_INCLASS \
	TheRunaway_Source_TheRunaway_GameHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheRunaway_Source_TheRunaway_GameHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheRunaway_Source_TheRunaway_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	TheRunaway_Source_TheRunaway_GameHUD_h_15_SPARSE_DATA \
	TheRunaway_Source_TheRunaway_GameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TheRunaway_Source_TheRunaway_GameHUD_h_15_INCLASS_NO_PURE_DECLS \
	TheRunaway_Source_TheRunaway_GameHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THERUNAWAY_API UClass* StaticClass<class AGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheRunaway_Source_TheRunaway_GameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
