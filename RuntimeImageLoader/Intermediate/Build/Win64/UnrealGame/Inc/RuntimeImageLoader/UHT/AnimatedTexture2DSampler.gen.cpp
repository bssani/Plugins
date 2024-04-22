// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../RuntimeImageLoader/Public/Texture2DAnimation/AnimatedTexture2DSampler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimatedTexture2DSampler() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter();
	RUNTIMEIMAGELOADER_API UClass* Z_Construct_UClass_UAnimatedTexture2DSampler();
	RUNTIMEIMAGELOADER_API UClass* Z_Construct_UClass_UAnimatedTexture2DSampler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RuntimeImageLoader();
// End Cross Module References
	void UAnimatedTexture2DSampler::StaticRegisterNativesUAnimatedTexture2DSampler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimatedTexture2DSampler);
	UClass* Z_Construct_UClass_UAnimatedTexture2DSampler_NoRegister()
	{
		return UAnimatedTexture2DSampler::StaticClass();
	}
	struct Z_Construct_UClass_UAnimatedTexture2DSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimatedTexture2DSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeImageLoader,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedTexture2DSampler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedTexture2DSampler_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object" },
		{ "IncludePath", "Texture2DAnimation/AnimatedTexture2DSampler.h" },
		{ "ModuleRelativePath", "Public/Texture2DAnimation/AnimatedTexture2DSampler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimatedTexture2DSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatedTexture2DSampler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimatedTexture2DSampler_Statics::ClassParams = {
		&UAnimatedTexture2DSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001020B0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedTexture2DSampler_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimatedTexture2DSampler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimatedTexture2DSampler()
	{
		if (!Z_Registration_Info_UClass_UAnimatedTexture2DSampler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimatedTexture2DSampler.OuterSingleton, Z_Construct_UClass_UAnimatedTexture2DSampler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimatedTexture2DSampler.OuterSingleton;
	}
	template<> RUNTIMEIMAGELOADER_API UClass* StaticClass<UAnimatedTexture2DSampler>()
	{
		return UAnimatedTexture2DSampler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatedTexture2DSampler);
	UAnimatedTexture2DSampler::~UAnimatedTexture2DSampler() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_Texture2DAnimation_AnimatedTexture2DSampler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_Texture2DAnimation_AnimatedTexture2DSampler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimatedTexture2DSampler, UAnimatedTexture2DSampler::StaticClass, TEXT("UAnimatedTexture2DSampler"), &Z_Registration_Info_UClass_UAnimatedTexture2DSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimatedTexture2DSampler), 893129526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_Texture2DAnimation_AnimatedTexture2DSampler_h_775228113(TEXT("/Script/RuntimeImageLoader"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_Texture2DAnimation_AnimatedTexture2DSampler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_Texture2DAnimation_AnimatedTexture2DSampler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
