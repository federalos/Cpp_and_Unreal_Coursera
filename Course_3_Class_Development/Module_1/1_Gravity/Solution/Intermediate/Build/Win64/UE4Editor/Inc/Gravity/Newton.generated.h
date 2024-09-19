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
#ifdef GRAVITY_Newton_generated_h
#error "Newton.generated.h already included, missing '#pragma once' in Newton.h"
#endif
#define GRAVITY_Newton_generated_h

#define Gravity_Source_Gravity_Newton_h_15_SPARSE_DATA
#define Gravity_Source_Gravity_Newton_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Gravity_Source_Gravity_Newton_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Gravity_Source_Gravity_Newton_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANewton(); \
	friend struct Z_Construct_UClass_ANewton_Statics; \
public: \
	DECLARE_CLASS(ANewton, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gravity"), NO_API) \
	DECLARE_SERIALIZER(ANewton)


#define Gravity_Source_Gravity_Newton_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANewton(); \
	friend struct Z_Construct_UClass_ANewton_Statics; \
public: \
	DECLARE_CLASS(ANewton, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gravity"), NO_API) \
	DECLARE_SERIALIZER(ANewton)


#define Gravity_Source_Gravity_Newton_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANewton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANewton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANewton(ANewton&&); \
	NO_API ANewton(const ANewton&); \
public:


#define Gravity_Source_Gravity_Newton_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANewton(ANewton&&); \
	NO_API ANewton(const ANewton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANewton)


#define Gravity_Source_Gravity_Newton_h_15_PRIVATE_PROPERTY_OFFSET
#define Gravity_Source_Gravity_Newton_h_12_PROLOG
#define Gravity_Source_Gravity_Newton_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gravity_Source_Gravity_Newton_h_15_PRIVATE_PROPERTY_OFFSET \
	Gravity_Source_Gravity_Newton_h_15_SPARSE_DATA \
	Gravity_Source_Gravity_Newton_h_15_RPC_WRAPPERS \
	Gravity_Source_Gravity_Newton_h_15_INCLASS \
	Gravity_Source_Gravity_Newton_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Gravity_Source_Gravity_Newton_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gravity_Source_Gravity_Newton_h_15_PRIVATE_PROPERTY_OFFSET \
	Gravity_Source_Gravity_Newton_h_15_SPARSE_DATA \
	Gravity_Source_Gravity_Newton_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Gravity_Source_Gravity_Newton_h_15_INCLASS_NO_PURE_DECLS \
	Gravity_Source_Gravity_Newton_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAVITY_API UClass* StaticClass<class ANewton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Gravity_Source_Gravity_Newton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
