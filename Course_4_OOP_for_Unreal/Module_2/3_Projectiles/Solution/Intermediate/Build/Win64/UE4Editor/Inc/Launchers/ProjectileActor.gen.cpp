// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Launchers/ProjectileActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileActor() {}
// Cross Module References
	LAUNCHERS_API UClass* Z_Construct_UClass_AProjectileActor_NoRegister();
	LAUNCHERS_API UClass* Z_Construct_UClass_AProjectileActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Launchers();
// End Cross Module References
	void AProjectileActor::StaticRegisterNativesAProjectileActor()
	{
	}
	UClass* Z_Construct_UClass_AProjectileActor_NoRegister()
	{
		return AProjectileActor::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Launchers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A projectile\n*/" },
		{ "IncludePath", "ProjectileActor.h" },
		{ "ModuleRelativePath", "ProjectileActor.h" },
		{ "ToolTip", "A projectile" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectileActor_Statics::ClassParams = {
		&AProjectileActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProjectileActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectileActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectileActor, 2711493882);
	template<> LAUNCHERS_API UClass* StaticClass<AProjectileActor>()
	{
		return AProjectileActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectileActor(Z_Construct_UClass_AProjectileActor, &AProjectileActor::StaticClass, TEXT("/Script/Launchers"), TEXT("AProjectileActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
