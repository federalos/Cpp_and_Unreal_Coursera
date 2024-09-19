// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomDestruction/TeddyBearSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBearSpawner() {}
// Cross Module References
	RANDOMDESTRUCTION_API UClass* Z_Construct_UClass_ATeddyBearSpawner_NoRegister();
	RANDOMDESTRUCTION_API UClass* Z_Construct_UClass_ATeddyBearSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RandomDestruction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	RANDOMDESTRUCTION_API UClass* Z_Construct_UClass_ATeddyBear_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATeddyBearSpawner::execSpawnTeddyBear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnTeddyBear();
		P_NATIVE_END;
	}
	void ATeddyBearSpawner::StaticRegisterNativesATeddyBearSpawner()
	{
		UClass* Class = ATeddyBearSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnTeddyBear", &ATeddyBearSpawner::execSpawnTeddyBear },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Spawns a teddy bear\n\x09*/" },
		{ "ModuleRelativePath", "TeddyBearSpawner.h" },
		{ "ToolTip", "Spawns a teddy bear" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeddyBearSpawner, nullptr, "SpawnTeddyBear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATeddyBearSpawner_NoRegister()
	{
		return ATeddyBearSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBearSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UGreenTeddyBear_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UGreenTeddyBear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UPurpleTeddyBear_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UPurpleTeddyBear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UYellowTeddyBear_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UYellowTeddyBear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBearSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RandomDestruction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATeddyBearSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear, "SpawnTeddyBear" }, // 1806636807
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearSpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The teddy bear spawner\n*/" },
		{ "IncludePath", "TeddyBearSpawner.h" },
		{ "ModuleRelativePath", "TeddyBearSpawner.h" },
		{ "ToolTip", "The teddy bear spawner" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UGreenTeddyBear_MetaData[] = {
		{ "Category", "TeddyBearBlueprints" },
		{ "MetaClass", "TeddyBear" },
		{ "ModuleRelativePath", "TeddyBearSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UGreenTeddyBear = { "UGreenTeddyBear", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeddyBearSpawner, UGreenTeddyBear), Z_Construct_UClass_ATeddyBear_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UGreenTeddyBear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UGreenTeddyBear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UPurpleTeddyBear_MetaData[] = {
		{ "Category", "TeddyBearBlueprints" },
		{ "MetaClass", "TeddyBear" },
		{ "ModuleRelativePath", "TeddyBearSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UPurpleTeddyBear = { "UPurpleTeddyBear", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeddyBearSpawner, UPurpleTeddyBear), Z_Construct_UClass_ATeddyBear_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UPurpleTeddyBear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UPurpleTeddyBear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UYellowTeddyBear_MetaData[] = {
		{ "Category", "TeddyBearBlueprints" },
		{ "MetaClass", "TeddyBear" },
		{ "ModuleRelativePath", "TeddyBearSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UYellowTeddyBear = { "UYellowTeddyBear", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeddyBearSpawner, UYellowTeddyBear), Z_Construct_UClass_ATeddyBear_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UYellowTeddyBear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UYellowTeddyBear_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeddyBearSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UGreenTeddyBear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UPurpleTeddyBear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UYellowTeddyBear,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeddyBearSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeddyBearSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeddyBearSpawner_Statics::ClassParams = {
		&ATeddyBearSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATeddyBearSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeddyBearSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeddyBearSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeddyBearSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeddyBearSpawner, 628135063);
	template<> RANDOMDESTRUCTION_API UClass* StaticClass<ATeddyBearSpawner>()
	{
		return ATeddyBearSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeddyBearSpawner(Z_Construct_UClass_ATeddyBearSpawner, &ATeddyBearSpawner::StaticClass, TEXT("/Script/RandomDestruction"), TEXT("ATeddyBearSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBearSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
