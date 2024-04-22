// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../RuntimeImageLoader/Private/TextureFactory/RuntimeTextureFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeTextureFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RUNTIMEIMAGELOADER_API UClass* Z_Construct_UClass_URuntimeTextureFactory();
	RUNTIMEIMAGELOADER_API UClass* Z_Construct_UClass_URuntimeTextureFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RuntimeImageLoader();
// End Cross Module References
	void URuntimeTextureFactory::StaticRegisterNativesURuntimeTextureFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeTextureFactory);
	UClass* Z_Construct_UClass_URuntimeTextureFactory_NoRegister()
	{
		return URuntimeTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeImageLoader,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTextureFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TextureFactory/RuntimeTextureFactory.h" },
		{ "ModuleRelativePath", "Private/TextureFactory/RuntimeTextureFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeTextureFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeTextureFactory_Statics::ClassParams = {
		&URuntimeTextureFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTextureFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeTextureFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URuntimeTextureFactory()
	{
		if (!Z_Registration_Info_UClass_URuntimeTextureFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeTextureFactory.OuterSingleton, Z_Construct_UClass_URuntimeTextureFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeTextureFactory.OuterSingleton;
	}
	template<> RUNTIMEIMAGELOADER_API UClass* StaticClass<URuntimeTextureFactory>()
	{
		return URuntimeTextureFactory::StaticClass();
	}
	URuntimeTextureFactory::URuntimeTextureFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeTextureFactory);
	URuntimeTextureFactory::~URuntimeTextureFactory() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Private_TextureFactory_RuntimeTextureFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Private_TextureFactory_RuntimeTextureFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeTextureFactory, URuntimeTextureFactory::StaticClass, TEXT("URuntimeTextureFactory"), &Z_Registration_Info_UClass_URuntimeTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeTextureFactory), 2906484570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Private_TextureFactory_RuntimeTextureFactory_h_1909563819(TEXT("/Script/RuntimeImageLoader"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Private_TextureFactory_RuntimeTextureFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Private_TextureFactory_RuntimeTextureFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
