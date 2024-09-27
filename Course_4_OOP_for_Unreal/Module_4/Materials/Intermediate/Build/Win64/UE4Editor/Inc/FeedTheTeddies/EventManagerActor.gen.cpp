// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/EventManagerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventManagerActor() {}
// Cross Module References
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_AEventManagerActor_NoRegister();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_AEventManagerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	void AEventManagerActor::StaticRegisterNativesAEventManagerActor()
	{
	}
	UClass* Z_Construct_UClass_AEventManagerActor_NoRegister()
	{
		return AEventManagerActor::StaticClass();
	}
	struct Z_Construct_UClass_AEventManagerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEventManagerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEventManagerActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An event manager\n*/" },
		{ "IncludePath", "EventManagerActor.h" },
		{ "ModuleRelativePath", "EventManagerActor.h" },
		{ "ToolTip", "An event manager" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEventManagerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEventManagerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEventManagerActor_Statics::ClassParams = {
		&AEventManagerActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEventManagerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEventManagerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEventManagerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEventManagerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEventManagerActor, 3384790780);
	template<> FEEDTHETEDDIES_API UClass* StaticClass<AEventManagerActor>()
	{
		return AEventManagerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEventManagerActor(Z_Construct_UClass_AEventManagerActor, &AEventManagerActor::StaticClass, TEXT("/Script/FeedTheTeddies"), TEXT("AEventManagerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEventManagerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
