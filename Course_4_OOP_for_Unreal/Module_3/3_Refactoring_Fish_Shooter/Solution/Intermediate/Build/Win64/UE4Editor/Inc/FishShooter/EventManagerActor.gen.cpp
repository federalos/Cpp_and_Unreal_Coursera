// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FishShooter/EventManagerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventManagerActor() {}
// Cross Module References
	FISHSHOOTER_API UClass* Z_Construct_UClass_AEventManagerActor_NoRegister();
	FISHSHOOTER_API UClass* Z_Construct_UClass_AEventManagerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FishShooter();
	FISHSHOOTER_API UClass* Z_Construct_UClass_ATeddyBear_NoRegister();
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillAddedEventInvokers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillAddedEventInvokers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KillAddedEventInvokers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEventManagerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FishShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEventManagerActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An event manager\n*/" },
		{ "IncludePath", "EventManagerActor.h" },
		{ "ModuleRelativePath", "EventManagerActor.h" },
		{ "ToolTip", "An event manager" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEventManagerActor_Statics::NewProp_KillAddedEventInvokers_Inner = { "KillAddedEventInvokers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATeddyBear_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEventManagerActor_Statics::NewProp_KillAddedEventInvokers_MetaData[] = {
		{ "ModuleRelativePath", "EventManagerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEventManagerActor_Statics::NewProp_KillAddedEventInvokers = { "KillAddedEventInvokers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEventManagerActor, KillAddedEventInvokers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEventManagerActor_Statics::NewProp_KillAddedEventInvokers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEventManagerActor_Statics::NewProp_KillAddedEventInvokers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEventManagerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEventManagerActor_Statics::NewProp_KillAddedEventInvokers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEventManagerActor_Statics::NewProp_KillAddedEventInvokers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEventManagerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEventManagerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEventManagerActor_Statics::ClassParams = {
		&AEventManagerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEventManagerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEventManagerActor_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AEventManagerActor, 3431875452);
	template<> FISHSHOOTER_API UClass* StaticClass<AEventManagerActor>()
	{
		return AEventManagerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEventManagerActor(Z_Construct_UClass_AEventManagerActor, &AEventManagerActor::StaticClass, TEXT("/Script/FishShooter"), TEXT("AEventManagerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEventManagerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
