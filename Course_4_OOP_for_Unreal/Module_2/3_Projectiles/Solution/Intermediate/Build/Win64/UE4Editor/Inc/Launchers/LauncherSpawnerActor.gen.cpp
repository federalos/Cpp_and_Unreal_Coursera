// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Launchers/LauncherSpawnerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLauncherSpawnerActor() {}
// Cross Module References
	LAUNCHERS_API UClass* Z_Construct_UClass_ALauncherSpawnerActor_NoRegister();
	LAUNCHERS_API UClass* Z_Construct_UClass_ALauncherSpawnerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Launchers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LAUNCHERS_API UClass* Z_Construct_UClass_ALauncherActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALauncherSpawnerActor::execSpawnLauncher)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnLauncher();
		P_NATIVE_END;
	}
	void ALauncherSpawnerActor::StaticRegisterNativesALauncherSpawnerActor()
	{
		UClass* Class = ALauncherSpawnerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnLauncher", &ALauncherSpawnerActor::execSpawnLauncher },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALauncherSpawnerActor_SpawnLauncher_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALauncherSpawnerActor_SpawnLauncher_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Spawns a launcher\n\x09*/" },
		{ "ModuleRelativePath", "LauncherSpawnerActor.h" },
		{ "ToolTip", "Spawns a launcher" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALauncherSpawnerActor_SpawnLauncher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALauncherSpawnerActor, nullptr, "SpawnLauncher", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALauncherSpawnerActor_SpawnLauncher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALauncherSpawnerActor_SpawnLauncher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALauncherSpawnerActor_SpawnLauncher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALauncherSpawnerActor_SpawnLauncher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALauncherSpawnerActor_NoRegister()
	{
		return ALauncherSpawnerActor::StaticClass();
	}
	struct Z_Construct_UClass_ALauncherSpawnerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UChainsawLauncher_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UChainsawLauncher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UPirateLauncher_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UPirateLauncher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UZombieLauncher_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UZombieLauncher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALauncherSpawnerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Launchers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALauncherSpawnerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALauncherSpawnerActor_SpawnLauncher, "SpawnLauncher" }, // 3526048694
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALauncherSpawnerActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A launcher spawner\n*/" },
		{ "IncludePath", "LauncherSpawnerActor.h" },
		{ "ModuleRelativePath", "LauncherSpawnerActor.h" },
		{ "ToolTip", "A launcher spawner" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALauncherSpawnerActor_Statics::NewProp_UChainsawLauncher_MetaData[] = {
		{ "Category", "LauncherBlueprints" },
		{ "MetaClass", "Launcher" },
		{ "ModuleRelativePath", "LauncherSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALauncherSpawnerActor_Statics::NewProp_UChainsawLauncher = { "UChainsawLauncher", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALauncherSpawnerActor, UChainsawLauncher), Z_Construct_UClass_ALauncherActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALauncherSpawnerActor_Statics::NewProp_UChainsawLauncher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherSpawnerActor_Statics::NewProp_UChainsawLauncher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALauncherSpawnerActor_Statics::NewProp_UPirateLauncher_MetaData[] = {
		{ "Category", "LauncherBlueprints" },
		{ "MetaClass", "Launcher" },
		{ "ModuleRelativePath", "LauncherSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALauncherSpawnerActor_Statics::NewProp_UPirateLauncher = { "UPirateLauncher", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALauncherSpawnerActor, UPirateLauncher), Z_Construct_UClass_ALauncherActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALauncherSpawnerActor_Statics::NewProp_UPirateLauncher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherSpawnerActor_Statics::NewProp_UPirateLauncher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALauncherSpawnerActor_Statics::NewProp_UZombieLauncher_MetaData[] = {
		{ "Category", "LauncherBlueprints" },
		{ "MetaClass", "Launcher" },
		{ "ModuleRelativePath", "LauncherSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALauncherSpawnerActor_Statics::NewProp_UZombieLauncher = { "UZombieLauncher", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALauncherSpawnerActor, UZombieLauncher), Z_Construct_UClass_ALauncherActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALauncherSpawnerActor_Statics::NewProp_UZombieLauncher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherSpawnerActor_Statics::NewProp_UZombieLauncher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALauncherSpawnerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALauncherSpawnerActor_Statics::NewProp_UChainsawLauncher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALauncherSpawnerActor_Statics::NewProp_UPirateLauncher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALauncherSpawnerActor_Statics::NewProp_UZombieLauncher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALauncherSpawnerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALauncherSpawnerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALauncherSpawnerActor_Statics::ClassParams = {
		&ALauncherSpawnerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALauncherSpawnerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherSpawnerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALauncherSpawnerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherSpawnerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALauncherSpawnerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALauncherSpawnerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALauncherSpawnerActor, 151716857);
	template<> LAUNCHERS_API UClass* StaticClass<ALauncherSpawnerActor>()
	{
		return ALauncherSpawnerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALauncherSpawnerActor(Z_Construct_UClass_ALauncherSpawnerActor, &ALauncherSpawnerActor::StaticClass, TEXT("/Script/Launchers"), TEXT("ALauncherSpawnerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALauncherSpawnerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
