// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/BallSpawnerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallSpawnerActor() {}
// Cross Module References
	MOVEIT_API UClass* Z_Construct_UClass_ABallSpawnerActor_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_ABallSpawnerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MOVEIT_API UClass* Z_Construct_UClass_ABallActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABallSpawnerActor::execSpawnBall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnBall();
		P_NATIVE_END;
	}
	void ABallSpawnerActor::StaticRegisterNativesABallSpawnerActor()
	{
		UClass* Class = ABallSpawnerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnBall", &ABallSpawnerActor::execSpawnBall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABallSpawnerActor_SpawnBall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABallSpawnerActor_SpawnBall_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Spawns a ball\n\x09*/" },
		{ "ModuleRelativePath", "BallSpawnerActor.h" },
		{ "ToolTip", "Spawns a ball" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABallSpawnerActor_SpawnBall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABallSpawnerActor, nullptr, "SpawnBall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABallSpawnerActor_SpawnBall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABallSpawnerActor_SpawnBall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABallSpawnerActor_SpawnBall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABallSpawnerActor_SpawnBall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABallSpawnerActor_NoRegister()
	{
		return ABallSpawnerActor::StaticClass();
	}
	struct Z_Construct_UClass_ABallSpawnerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UGreenBall_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UGreenBall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URedBall_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_URedBall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UWhiteBall_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UWhiteBall;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABallSpawnerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABallSpawnerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABallSpawnerActor_SpawnBall, "SpawnBall" }, // 1502395340
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallSpawnerActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A ball spawner\n*/" },
		{ "IncludePath", "BallSpawnerActor.h" },
		{ "ModuleRelativePath", "BallSpawnerActor.h" },
		{ "ToolTip", "A ball spawner" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallSpawnerActor_Statics::NewProp_UGreenBall_MetaData[] = {
		{ "Category", "BallBlueprints" },
		{ "MetaClass", "Ball" },
		{ "ModuleRelativePath", "BallSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABallSpawnerActor_Statics::NewProp_UGreenBall = { "UGreenBall", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallSpawnerActor, UGreenBall), Z_Construct_UClass_ABallActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABallSpawnerActor_Statics::NewProp_UGreenBall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABallSpawnerActor_Statics::NewProp_UGreenBall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallSpawnerActor_Statics::NewProp_URedBall_MetaData[] = {
		{ "Category", "BallBlueprints" },
		{ "MetaClass", "Ball" },
		{ "ModuleRelativePath", "BallSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABallSpawnerActor_Statics::NewProp_URedBall = { "URedBall", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallSpawnerActor, URedBall), Z_Construct_UClass_ABallActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABallSpawnerActor_Statics::NewProp_URedBall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABallSpawnerActor_Statics::NewProp_URedBall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallSpawnerActor_Statics::NewProp_UWhiteBall_MetaData[] = {
		{ "Category", "BallBlueprints" },
		{ "MetaClass", "Ball" },
		{ "ModuleRelativePath", "BallSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABallSpawnerActor_Statics::NewProp_UWhiteBall = { "UWhiteBall", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallSpawnerActor, UWhiteBall), Z_Construct_UClass_ABallActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABallSpawnerActor_Statics::NewProp_UWhiteBall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABallSpawnerActor_Statics::NewProp_UWhiteBall_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABallSpawnerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallSpawnerActor_Statics::NewProp_UGreenBall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallSpawnerActor_Statics::NewProp_URedBall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallSpawnerActor_Statics::NewProp_UWhiteBall,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABallSpawnerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallSpawnerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABallSpawnerActor_Statics::ClassParams = {
		&ABallSpawnerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABallSpawnerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABallSpawnerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABallSpawnerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABallSpawnerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABallSpawnerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABallSpawnerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABallSpawnerActor, 3604248044);
	template<> MOVEIT_API UClass* StaticClass<ABallSpawnerActor>()
	{
		return ABallSpawnerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABallSpawnerActor(Z_Construct_UClass_ABallSpawnerActor, &ABallSpawnerActor::StaticClass, TEXT("/Script/MoveIt"), TEXT("ABallSpawnerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABallSpawnerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
