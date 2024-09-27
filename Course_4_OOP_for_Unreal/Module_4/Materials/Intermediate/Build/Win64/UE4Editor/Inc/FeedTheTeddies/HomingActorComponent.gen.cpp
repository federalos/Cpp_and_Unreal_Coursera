// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/HomingActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHomingActorComponent() {}
// Cross Module References
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_UHomingActorComponent_NoRegister();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_UHomingActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	void UHomingActorComponent::StaticRegisterNativesUHomingActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UHomingActorComponent_NoRegister()
	{
		return UHomingActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHomingActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHomingActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHomingActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Gives the actor the component is attached to homing behavior\n * toward the burger\n*/" },
		{ "IncludePath", "HomingActorComponent.h" },
		{ "ModuleRelativePath", "HomingActorComponent.h" },
		{ "ToolTip", "Gives the actor the component is attached to homing behavior\ntoward the burger" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHomingActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHomingActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHomingActorComponent_Statics::ClassParams = {
		&UHomingActorComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHomingActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHomingActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHomingActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHomingActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHomingActorComponent, 663126310);
	template<> FEEDTHETEDDIES_API UClass* StaticClass<UHomingActorComponent>()
	{
		return UHomingActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHomingActorComponent(Z_Construct_UClass_UHomingActorComponent, &UHomingActorComponent::StaticClass, TEXT("/Script/FeedTheTeddies"), TEXT("UHomingActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHomingActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
