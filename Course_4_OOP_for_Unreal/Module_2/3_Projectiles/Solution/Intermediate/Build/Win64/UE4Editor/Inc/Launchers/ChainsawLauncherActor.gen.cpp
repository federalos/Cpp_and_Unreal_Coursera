// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Launchers/ChainsawLauncherActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainsawLauncherActor() {}
// Cross Module References
	LAUNCHERS_API UClass* Z_Construct_UClass_AChainsawLauncherActor_NoRegister();
	LAUNCHERS_API UClass* Z_Construct_UClass_AChainsawLauncherActor();
	LAUNCHERS_API UClass* Z_Construct_UClass_ALauncherActor();
	UPackage* Z_Construct_UPackage__Script_Launchers();
// End Cross Module References
	void AChainsawLauncherActor::StaticRegisterNativesAChainsawLauncherActor()
	{
	}
	UClass* Z_Construct_UClass_AChainsawLauncherActor_NoRegister()
	{
		return AChainsawLauncherActor::StaticClass();
	}
	struct Z_Construct_UClass_AChainsawLauncherActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChainsawLauncherActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALauncherActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Launchers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsawLauncherActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A chainsaw launcher\n */" },
		{ "IncludePath", "ChainsawLauncherActor.h" },
		{ "ModuleRelativePath", "ChainsawLauncherActor.h" },
		{ "ToolTip", "A chainsaw launcher" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChainsawLauncherActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChainsawLauncherActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChainsawLauncherActor_Statics::ClassParams = {
		&AChainsawLauncherActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChainsawLauncherActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsawLauncherActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChainsawLauncherActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChainsawLauncherActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChainsawLauncherActor, 3109079592);
	template<> LAUNCHERS_API UClass* StaticClass<AChainsawLauncherActor>()
	{
		return AChainsawLauncherActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChainsawLauncherActor(Z_Construct_UClass_AChainsawLauncherActor, &AChainsawLauncherActor::StaticClass, TEXT("/Script/Launchers"), TEXT("AChainsawLauncherActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChainsawLauncherActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
