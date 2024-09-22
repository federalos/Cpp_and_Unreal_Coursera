// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealDataTable/ConfigurationDataStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfigurationDataStruct() {}
// Cross Module References
	UNREALDATATABLE_API UScriptStruct* Z_Construct_UScriptStruct_FConfigurationDataStruct();
	UPackage* Z_Construct_UPackage__Script_UnrealDataTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FConfigurationDataStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FConfigurationDataStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FConfigurationDataStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALDATATABLE_API uint32 Get_Z_Construct_UScriptStruct_FConfigurationDataStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConfigurationDataStruct, Z_Construct_UPackage__Script_UnrealDataTable(), TEXT("ConfigurationDataStruct"), sizeof(FConfigurationDataStruct), Get_Z_Construct_UScriptStruct_FConfigurationDataStruct_Hash());
	}
	return Singleton;
}
template<> UNREALDATATABLE_API UScriptStruct* StaticStruct<FConfigurationDataStruct>()
{
	return FConfigurationDataStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConfigurationDataStruct(FConfigurationDataStruct::StaticStruct, TEXT("/Script/UnrealDataTable"), TEXT("ConfigurationDataStruct"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealDataTable_StaticRegisterNativesFConfigurationDataStruct
{
	FScriptStruct_UnrealDataTable_StaticRegisterNativesFConfigurationDataStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConfigurationDataStruct")),new UScriptStruct::TCppStructOps<FConfigurationDataStruct>);
	}
} ScriptStruct_UnrealDataTable_StaticRegisterNativesFConfigurationDataStruct;
	struct Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeddyBearMoveAmountPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeddyBearMoveAmountPerSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConfigurationDataStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_TeddyBearMoveAmountPerSecond_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_TeddyBearMoveAmountPerSecond = { "TeddyBearMoveAmountPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConfigurationDataStruct, TeddyBearMoveAmountPerSecond), METADATA_PARAMS(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_TeddyBearMoveAmountPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_TeddyBearMoveAmountPerSecond_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_TeddyBearMoveAmountPerSecond,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealDataTable,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ConfigurationDataStruct",
		sizeof(FConfigurationDataStruct),
		alignof(FConfigurationDataStruct),
		Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConfigurationDataStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConfigurationDataStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealDataTable();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConfigurationDataStruct"), sizeof(FConfigurationDataStruct), Get_Z_Construct_UScriptStruct_FConfigurationDataStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConfigurationDataStruct_Hash() { return 3104396878U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
