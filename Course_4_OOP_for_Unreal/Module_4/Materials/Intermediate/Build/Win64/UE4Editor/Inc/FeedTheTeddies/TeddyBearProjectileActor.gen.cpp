// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/TeddyBearProjectileActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBearProjectileActor() {}
// Cross Module References
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_ATeddyBearProjectileActor_NoRegister();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_ATeddyBearProjectileActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_UHomingActorInterface_NoRegister();
// End Cross Module References
	void ATeddyBearProjectileActor::StaticRegisterNativesATeddyBearProjectileActor()
	{
	}
	UClass* Z_Construct_UClass_ATeddyBearProjectileActor_NoRegister()
	{
		return ATeddyBearProjectileActor::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBearProjectileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBearProjectileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearProjectileActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A teddy bear projectile\n*/" },
		{ "IncludePath", "TeddyBearProjectileActor.h" },
		{ "ModuleRelativePath", "TeddyBearProjectileActor.h" },
		{ "ToolTip", "A teddy bear projectile" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATeddyBearProjectileActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHomingActorInterface_NoRegister, (int32)VTABLE_OFFSET(ATeddyBearProjectileActor, IHomingActorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeddyBearProjectileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeddyBearProjectileActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeddyBearProjectileActor_Statics::ClassParams = {
		&ATeddyBearProjectileActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeddyBearProjectileActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearProjectileActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeddyBearProjectileActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeddyBearProjectileActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeddyBearProjectileActor, 25003315);
	template<> FEEDTHETEDDIES_API UClass* StaticClass<ATeddyBearProjectileActor>()
	{
		return ATeddyBearProjectileActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeddyBearProjectileActor(Z_Construct_UClass_ATeddyBearProjectileActor, &ATeddyBearProjectileActor::StaticClass, TEXT("/Script/FeedTheTeddies"), TEXT("ATeddyBearProjectileActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBearProjectileActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
