// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LAUNCHERS_LauncherActor_generated_h
#error "LauncherActor.generated.h already included, missing '#pragma once' in LauncherActor.h"
#endif
#define LAUNCHERS_LauncherActor_generated_h

#define Launchers_Source_Launchers_LauncherActor_h_17_SPARSE_DATA
#define Launchers_Source_Launchers_LauncherActor_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnProjectile);


#define Launchers_Source_Launchers_LauncherActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnProjectile);


#define Launchers_Source_Launchers_LauncherActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALauncherActor(); \
	friend struct Z_Construct_UClass_ALauncherActor_Statics; \
public: \
	DECLARE_CLASS(ALauncherActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Launchers"), NO_API) \
	DECLARE_SERIALIZER(ALauncherActor)


#define Launchers_Source_Launchers_LauncherActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesALauncherActor(); \
	friend struct Z_Construct_UClass_ALauncherActor_Statics; \
public: \
	DECLARE_CLASS(ALauncherActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Launchers"), NO_API) \
	DECLARE_SERIALIZER(ALauncherActor)


#define Launchers_Source_Launchers_LauncherActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALauncherActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALauncherActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALauncherActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALauncherActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALauncherActor(ALauncherActor&&); \
	NO_API ALauncherActor(const ALauncherActor&); \
public:


#define Launchers_Source_Launchers_LauncherActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALauncherActor(ALauncherActor&&); \
	NO_API ALauncherActor(const ALauncherActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALauncherActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALauncherActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALauncherActor)


#define Launchers_Source_Launchers_LauncherActor_h_17_PRIVATE_PROPERTY_OFFSET
#define Launchers_Source_Launchers_LauncherActor_h_14_PROLOG
#define Launchers_Source_Launchers_LauncherActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Launchers_Source_Launchers_LauncherActor_h_17_PRIVATE_PROPERTY_OFFSET \
	Launchers_Source_Launchers_LauncherActor_h_17_SPARSE_DATA \
	Launchers_Source_Launchers_LauncherActor_h_17_RPC_WRAPPERS \
	Launchers_Source_Launchers_LauncherActor_h_17_INCLASS \
	Launchers_Source_Launchers_LauncherActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Launchers_Source_Launchers_LauncherActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Launchers_Source_Launchers_LauncherActor_h_17_PRIVATE_PROPERTY_OFFSET \
	Launchers_Source_Launchers_LauncherActor_h_17_SPARSE_DATA \
	Launchers_Source_Launchers_LauncherActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Launchers_Source_Launchers_LauncherActor_h_17_INCLASS_NO_PURE_DECLS \
	Launchers_Source_Launchers_LauncherActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAUNCHERS_API UClass* StaticClass<class ALauncherActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Launchers_Source_Launchers_LauncherActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
