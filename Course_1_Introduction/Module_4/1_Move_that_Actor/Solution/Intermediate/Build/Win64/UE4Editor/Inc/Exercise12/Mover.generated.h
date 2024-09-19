// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXERCISE12_Mover_generated_h
#error "Mover.generated.h already included, missing '#pragma once' in Mover.h"
#endif
#define EXERCISE12_Mover_generated_h

#define Exercise12_Source_Exercise12_Mover_h_15_SPARSE_DATA
#define Exercise12_Source_Exercise12_Mover_h_15_RPC_WRAPPERS
#define Exercise12_Source_Exercise12_Mover_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Exercise12_Source_Exercise12_Mover_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMover(); \
	friend struct Z_Construct_UClass_AMover_Statics; \
public: \
	DECLARE_CLASS(AMover, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Exercise12"), NO_API) \
	DECLARE_SERIALIZER(AMover)


#define Exercise12_Source_Exercise12_Mover_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMover(); \
	friend struct Z_Construct_UClass_AMover_Statics; \
public: \
	DECLARE_CLASS(AMover, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Exercise12"), NO_API) \
	DECLARE_SERIALIZER(AMover)


#define Exercise12_Source_Exercise12_Mover_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMover(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMover) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMover); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMover); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMover(AMover&&); \
	NO_API AMover(const AMover&); \
public:


#define Exercise12_Source_Exercise12_Mover_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMover(AMover&&); \
	NO_API AMover(const AMover&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMover); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMover); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMover)


#define Exercise12_Source_Exercise12_Mover_h_15_PRIVATE_PROPERTY_OFFSET
#define Exercise12_Source_Exercise12_Mover_h_12_PROLOG
#define Exercise12_Source_Exercise12_Mover_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Exercise12_Source_Exercise12_Mover_h_15_PRIVATE_PROPERTY_OFFSET \
	Exercise12_Source_Exercise12_Mover_h_15_SPARSE_DATA \
	Exercise12_Source_Exercise12_Mover_h_15_RPC_WRAPPERS \
	Exercise12_Source_Exercise12_Mover_h_15_INCLASS \
	Exercise12_Source_Exercise12_Mover_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Exercise12_Source_Exercise12_Mover_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Exercise12_Source_Exercise12_Mover_h_15_PRIVATE_PROPERTY_OFFSET \
	Exercise12_Source_Exercise12_Mover_h_15_SPARSE_DATA \
	Exercise12_Source_Exercise12_Mover_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Exercise12_Source_Exercise12_Mover_h_15_INCLASS_NO_PURE_DECLS \
	Exercise12_Source_Exercise12_Mover_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXERCISE12_API UClass* StaticClass<class AMover>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Exercise12_Source_Exercise12_Mover_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
