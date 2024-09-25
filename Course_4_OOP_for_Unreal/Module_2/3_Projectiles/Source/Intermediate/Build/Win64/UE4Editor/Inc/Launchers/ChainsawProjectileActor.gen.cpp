// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Launchers/ChainsawProjectileActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainsawProjectileActor() {}
// Cross Module References
	LAUNCHERS_API UClass* Z_Construct_UClass_AChainsawProjectileActor_NoRegister();
	LAUNCHERS_API UClass* Z_Construct_UClass_AChainsawProjectileActor();
	LAUNCHERS_API UClass* Z_Construct_UClass_AProjectileActor();
	UPackage* Z_Construct_UPackage__Script_Launchers();
// End Cross Module References
	void AChainsawProjectileActor::StaticRegisterNativesAChainsawProjectileActor()
	{
	}
	UClass* Z_Construct_UClass_AChainsawProjectileActor_NoRegister()
	{
		return AChainsawProjectileActor::StaticClass();
	}
	struct Z_Construct_UClass_AChainsawProjectileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChainsawProjectileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Launchers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsawProjectileActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A chainsaw projectile\n */" },
		{ "IncludePath", "ChainsawProjectileActor.h" },
		{ "ModuleRelativePath", "ChainsawProjectileActor.h" },
		{ "ToolTip", "A chainsaw projectile" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChainsawProjectileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChainsawProjectileActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChainsawProjectileActor_Statics::ClassParams = {
		&AChainsawProjectileActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChainsawProjectileActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsawProjectileActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChainsawProjectileActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChainsawProjectileActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChainsawProjectileActor, 2044200365);
	template<> LAUNCHERS_API UClass* StaticClass<AChainsawProjectileActor>()
	{
		return AChainsawProjectileActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChainsawProjectileActor(Z_Construct_UClass_AChainsawProjectileActor, &AChainsawProjectileActor::StaticClass, TEXT("/Script/Launchers"), TEXT("AChainsawProjectileActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChainsawProjectileActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
