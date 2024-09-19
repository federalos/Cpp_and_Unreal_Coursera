// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shrink_and_Grow/S_Resize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_Resize() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SHRINK_AND_GROW_API UClass* Z_Construct_UClass_AS_Resize();
SHRINK_AND_GROW_API UClass* Z_Construct_UClass_AS_Resize_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shrink_and_Grow();
// End Cross Module References

// Begin Class AS_Resize
void AS_Resize::StaticRegisterNativesAS_Resize()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AS_Resize);
UClass* Z_Construct_UClass_AS_Resize_NoRegister()
{
	return AS_Resize::StaticClass();
}
struct Z_Construct_UClass_AS_Resize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n*/" },
#endif
		{ "IncludePath", "S_Resize.h" },
		{ "ModuleRelativePath", "S_Resize.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AS_Resize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AS_Resize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Shrink_and_Grow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AS_Resize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AS_Resize_Statics::ClassParams = {
	&AS_Resize::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AS_Resize_Statics::Class_MetaDataParams), Z_Construct_UClass_AS_Resize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AS_Resize()
{
	if (!Z_Registration_Info_UClass_AS_Resize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AS_Resize.OuterSingleton, Z_Construct_UClass_AS_Resize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AS_Resize.OuterSingleton;
}
template<> SHRINK_AND_GROW_API UClass* StaticClass<AS_Resize>()
{
	return AS_Resize::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AS_Resize);
AS_Resize::~AS_Resize() {}
// End Class AS_Resize

// Begin Registration
struct Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_2_More_CPP_Programming_and_Unreal_Module_1_1_Shrink_and_Grow_Solution_Shrink_and_Grow_Source_Shrink_and_Grow_S_Resize_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AS_Resize, AS_Resize::StaticClass, TEXT("AS_Resize"), &Z_Registration_Info_UClass_AS_Resize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AS_Resize), 3062712971U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_2_More_CPP_Programming_and_Unreal_Module_1_1_Shrink_and_Grow_Solution_Shrink_and_Grow_Source_Shrink_and_Grow_S_Resize_h_152670063(TEXT("/Script/Shrink_and_Grow"),
	Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_2_More_CPP_Programming_and_Unreal_Module_1_1_Shrink_and_Grow_Solution_Shrink_and_Grow_Source_Shrink_and_Grow_S_Resize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_2_More_CPP_Programming_and_Unreal_Module_1_1_Shrink_and_Grow_Solution_Shrink_and_Grow_Source_Shrink_and_Grow_S_Resize_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
