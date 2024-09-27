// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FEEDTHETEDDIES_BurgerPawn_generated_h
#error "BurgerPawn.generated.h already included, missing '#pragma once' in BurgerPawn.h"
#endif
#define FEEDTHETEDDIES_BurgerPawn_generated_h

#define FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_SPARSE_DATA
#define FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABurgerPawn(); \
	friend struct Z_Construct_UClass_ABurgerPawn_Statics; \
public: \
	DECLARE_CLASS(ABurgerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FeedTheTeddies"), NO_API) \
	DECLARE_SERIALIZER(ABurgerPawn)


#define FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABurgerPawn(); \
	friend struct Z_Construct_UClass_ABurgerPawn_Statics; \
public: \
	DECLARE_CLASS(ABurgerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FeedTheTeddies"), NO_API) \
	DECLARE_SERIALIZER(ABurgerPawn)


#define FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABurgerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABurgerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABurgerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABurgerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABurgerPawn(ABurgerPawn&&); \
	NO_API ABurgerPawn(const ABurgerPawn&); \
public:


#define FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABurgerPawn(ABurgerPawn&&); \
	NO_API ABurgerPawn(const ABurgerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABurgerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABurgerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABurgerPawn)


#define FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_PRIVATE_PROPERTY_OFFSET
#define FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_16_PROLOG
#define FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_SPARSE_DATA \
	FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_RPC_WRAPPERS \
	FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_INCLASS \
	FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_SPARSE_DATA \
	FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_INCLASS_NO_PURE_DECLS \
	FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FEEDTHETEDDIES_API UClass* StaticClass<class ABurgerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
