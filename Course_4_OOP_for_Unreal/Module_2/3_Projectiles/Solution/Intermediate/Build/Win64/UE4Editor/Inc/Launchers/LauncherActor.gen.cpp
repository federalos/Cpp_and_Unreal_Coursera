// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Launchers/LauncherActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLauncherActor() {}
// Cross Module References
	LAUNCHERS_API UClass* Z_Construct_UClass_ALauncherActor_NoRegister();
	LAUNCHERS_API UClass* Z_Construct_UClass_ALauncherActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Launchers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LAUNCHERS_API UClass* Z_Construct_UClass_AProjectileActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALauncherActor::execSpawnProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnProjectile();
		P_NATIVE_END;
	}
	void ALauncherActor::StaticRegisterNativesALauncherActor()
	{
		UClass* Class = ALauncherActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnProjectile", &ALauncherActor::execSpawnProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALauncherActor_SpawnProjectile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALauncherActor_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Spawns a projectile\n\x09*/" },
		{ "ModuleRelativePath", "LauncherActor.h" },
		{ "ToolTip", "Spawns a projectile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALauncherActor_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALauncherActor, nullptr, "SpawnProjectile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALauncherActor_SpawnProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALauncherActor_SpawnProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALauncherActor_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALauncherActor_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALauncherActor_NoRegister()
	{
		return ALauncherActor::StaticClass();
	}
	struct Z_Construct_UClass_ALauncherActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UProjectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALauncherActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Launchers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALauncherActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALauncherActor_SpawnProjectile, "SpawnProjectile" }, // 1225921259
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALauncherActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A launcher\n*/" },
		{ "IncludePath", "LauncherActor.h" },
		{ "ModuleRelativePath", "LauncherActor.h" },
		{ "ToolTip", "A launcher" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALauncherActor_Statics::NewProp_UProjectile_MetaData[] = {
		{ "Category", "ProjectileBlueprints" },
		{ "MetaClass", "Projectile" },
		{ "ModuleRelativePath", "LauncherActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALauncherActor_Statics::NewProp_UProjectile = { "UProjectile", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALauncherActor, UProjectile), Z_Construct_UClass_AProjectileActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALauncherActor_Statics::NewProp_UProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherActor_Statics::NewProp_UProjectile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALauncherActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALauncherActor_Statics::NewProp_UProjectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALauncherActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALauncherActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALauncherActor_Statics::ClassParams = {
		&ALauncherActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALauncherActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALauncherActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALauncherActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALauncherActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALauncherActor, 2747580421);
	template<> LAUNCHERS_API UClass* StaticClass<ALauncherActor>()
	{
		return ALauncherActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALauncherActor(Z_Construct_UClass_ALauncherActor, &ALauncherActor::StaticClass, TEXT("/Script/Launchers"), TEXT("ALauncherActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALauncherActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
