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
#ifdef FEEDTHETEDDIES_TeddyBearActor_generated_h
#error "TeddyBearActor.generated.h already included, missing '#pragma once' in TeddyBearActor.h"
#endif
#define FEEDTHETEDDIES_TeddyBearActor_generated_h

#define FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_SPARSE_DATA
#define FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execShootProjectile);


#define FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execShootProjectile);


#define FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeddyBearActor(); \
	friend struct Z_Construct_UClass_ATeddyBearActor_Statics; \
public: \
	DECLARE_CLASS(ATeddyBearActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FeedTheTeddies"), NO_API) \
	DECLARE_SERIALIZER(ATeddyBearActor) \
	virtual UObject* _getUObject() const override { return const_cast<ATeddyBearActor*>(this); }


#define FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesATeddyBearActor(); \
	friend struct Z_Construct_UClass_ATeddyBearActor_Statics; \
public: \
	DECLARE_CLASS(ATeddyBearActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FeedTheTeddies"), NO_API) \
	DECLARE_SERIALIZER(ATeddyBearActor) \
	virtual UObject* _getUObject() const override { return const_cast<ATeddyBearActor*>(this); }


#define FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeddyBearActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeddyBearActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeddyBearActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeddyBearActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeddyBearActor(ATeddyBearActor&&); \
	NO_API ATeddyBearActor(const ATeddyBearActor&); \
public:


#define FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeddyBearActor(ATeddyBearActor&&); \
	NO_API ATeddyBearActor(const ATeddyBearActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeddyBearActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeddyBearActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeddyBearActor)


#define FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_PRIVATE_PROPERTY_OFFSET
#define FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_17_PROLOG
#define FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_PRIVATE_PROPERTY_OFFSET \
	FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_SPARSE_DATA \
	FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_RPC_WRAPPERS \
	FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_INCLASS \
	FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_PRIVATE_PROPERTY_OFFSET \
	FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_SPARSE_DATA \
	FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_INCLASS_NO_PURE_DECLS \
	FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FEEDTHETEDDIES_API UClass* StaticClass<class ATeddyBearActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
