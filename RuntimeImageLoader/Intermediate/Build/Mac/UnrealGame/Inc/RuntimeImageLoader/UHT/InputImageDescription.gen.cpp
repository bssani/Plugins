// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../RuntimeImageLoader/Public/InputImageDescription.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputImageDescription() {}
// Cross Module References
	RUNTIMEIMAGELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FInputImageDescription();
	UPackage* Z_Construct_UPackage__Script_RuntimeImageLoader();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputImageDescription;
class UScriptStruct* FInputImageDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputImageDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputImageDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputImageDescription, (UObject*)Z_Construct_UPackage__Script_RuntimeImageLoader(), TEXT("InputImageDescription"));
	}
	return Z_Registration_Info_UScriptStruct_InputImageDescription.OuterSingleton;
}
template<> RUNTIMEIMAGELOADER_API UScriptStruct* StaticStruct<FInputImageDescription>()
{
	return FInputImageDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputImageDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageFilename;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageBytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageBytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageBytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputImageDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InputImageDescription.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputImageDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputImageDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputImageDescription_Statics::NewProp_ImageFilename_MetaData[] = {
		{ "Category", "Runtime Image Loader" },
		{ "ModuleRelativePath", "Public/InputImageDescription.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInputImageDescription_Statics::NewProp_ImageFilename = { "ImageFilename", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputImageDescription, ImageFilename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputImageDescription_Statics::NewProp_ImageFilename_MetaData), Z_Construct_UScriptStruct_FInputImageDescription_Statics::NewProp_ImageFilename_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputImageDescription_Statics::NewProp_ImageBytes_Inner = { "ImageBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputImageDescription_Statics::NewProp_ImageBytes_MetaData[] = {
		{ "Category", "Runtime Image Loader" },
		{ "ModuleRelativePath", "Public/InputImageDescription.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputImageDescription_Statics::NewProp_ImageBytes = { "ImageBytes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputImageDescription, ImageBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputImageDescription_Statics::NewProp_ImageBytes_MetaData), Z_Construct_UScriptStruct_FInputImageDescription_Statics::NewProp_ImageBytes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputImageDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputImageDescription_Statics::NewProp_ImageFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputImageDescription_Statics::NewProp_ImageBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputImageDescription_Statics::NewProp_ImageBytes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputImageDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeImageLoader,
		nullptr,
		&NewStructOps,
		"InputImageDescription",
		Z_Construct_UScriptStruct_FInputImageDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputImageDescription_Statics::PropPointers),
		sizeof(FInputImageDescription),
		alignof(FInputImageDescription),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputImageDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputImageDescription_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputImageDescription_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInputImageDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_InputImageDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputImageDescription.InnerSingleton, Z_Construct_UScriptStruct_FInputImageDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputImageDescription.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_InputImageDescription_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_InputImageDescription_h_Statics::ScriptStructInfo[] = {
		{ FInputImageDescription::StaticStruct, Z_Construct_UScriptStruct_FInputImageDescription_Statics::NewStructOps, TEXT("InputImageDescription"), &Z_Registration_Info_UScriptStruct_InputImageDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputImageDescription), 1350517924U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_InputImageDescription_h_1365107092(TEXT("/Script/RuntimeImageLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_InputImageDescription_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_InputImageDescription_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
