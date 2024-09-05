// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "First_log_output/PrintFavoriteGames.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrintFavoriteGames() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
FIRST_LOG_OUTPUT_API UClass* Z_Construct_UClass_APrintFavoriteGames();
FIRST_LOG_OUTPUT_API UClass* Z_Construct_UClass_APrintFavoriteGames_NoRegister();
UPackage* Z_Construct_UPackage__Script_First_log_output();
// End Cross Module References

// Begin Class APrintFavoriteGames
void APrintFavoriteGames::StaticRegisterNativesAPrintFavoriteGames()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrintFavoriteGames);
UClass* Z_Construct_UClass_APrintFavoriteGames_NoRegister()
{
	return APrintFavoriteGames::StaticClass();
}
struct Z_Construct_UClass_APrintFavoriteGames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n*/" },
#endif
		{ "IncludePath", "PrintFavoriteGames.h" },
		{ "ModuleRelativePath", "PrintFavoriteGames.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrintFavoriteGames>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APrintFavoriteGames_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_First_log_output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrintFavoriteGames_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APrintFavoriteGames_Statics::ClassParams = {
	&APrintFavoriteGames::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrintFavoriteGames_Statics::Class_MetaDataParams), Z_Construct_UClass_APrintFavoriteGames_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APrintFavoriteGames()
{
	if (!Z_Registration_Info_UClass_APrintFavoriteGames.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrintFavoriteGames.OuterSingleton, Z_Construct_UClass_APrintFavoriteGames_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APrintFavoriteGames.OuterSingleton;
}
template<> FIRST_LOG_OUTPUT_API UClass* StaticClass<APrintFavoriteGames>()
{
	return APrintFavoriteGames::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APrintFavoriteGames);
APrintFavoriteGames::~APrintFavoriteGames() {}
// End Class APrintFavoriteGames

// Begin Registration
struct Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_1_Introduction_Module_1_1_First_UElog_output_First_log_output_Source_First_log_output_PrintFavoriteGames_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APrintFavoriteGames, APrintFavoriteGames::StaticClass, TEXT("APrintFavoriteGames"), &Z_Registration_Info_UClass_APrintFavoriteGames, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrintFavoriteGames), 3452329523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_1_Introduction_Module_1_1_First_UElog_output_First_log_output_Source_First_log_output_PrintFavoriteGames_h_897874023(TEXT("/Script/First_log_output"),
	Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_1_Introduction_Module_1_1_First_UElog_output_First_log_output_Source_First_log_output_PrintFavoriteGames_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_1_Introduction_Module_1_1_First_UElog_output_First_log_output_Source_First_log_output_PrintFavoriteGames_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
