// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Launchers/ZombieProjectileActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieProjectileActor() {}
// Cross Module References
	LAUNCHERS_API UClass* Z_Construct_UClass_AZombieProjectileActor_NoRegister();
	LAUNCHERS_API UClass* Z_Construct_UClass_AZombieProjectileActor();
	LAUNCHERS_API UClass* Z_Construct_UClass_AProjectileActor();
	UPackage* Z_Construct_UPackage__Script_Launchers();
// End Cross Module References
	void AZombieProjectileActor::StaticRegisterNativesAZombieProjectileActor()
	{
	}
	UClass* Z_Construct_UClass_AZombieProjectileActor_NoRegister()
	{
		return AZombieProjectileActor::StaticClass();
	}
	struct Z_Construct_UClass_AZombieProjectileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieProjectileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Launchers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieProjectileActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A zombie projectile\n */" },
		{ "IncludePath", "ZombieProjectileActor.h" },
		{ "ModuleRelativePath", "ZombieProjectileActor.h" },
		{ "ToolTip", "A zombie projectile" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieProjectileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieProjectileActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieProjectileActor_Statics::ClassParams = {
		&AZombieProjectileActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieProjectileActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieProjectileActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieProjectileActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieProjectileActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieProjectileActor, 2112871872);
	template<> LAUNCHERS_API UClass* StaticClass<AZombieProjectileActor>()
	{
		return AZombieProjectileActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieProjectileActor(Z_Construct_UClass_AZombieProjectileActor, &AZombieProjectileActor::StaticClass, TEXT("/Script/Launchers"), TEXT("AZombieProjectileActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieProjectileActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
