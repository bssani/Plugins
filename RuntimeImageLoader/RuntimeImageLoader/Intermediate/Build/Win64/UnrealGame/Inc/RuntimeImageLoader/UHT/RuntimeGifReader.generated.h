// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeGifReader.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimatedTexture2D;
class URuntimeGifReader;
#ifdef RUNTIMEIMAGELOADER_RuntimeGifReader_generated_h
#error "RuntimeGifReader.generated.h already included, missing '#pragma once' in RuntimeGifReader.h"
#endif
#define RUNTIMEIMAGELOADER_RuntimeGifReader_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_17_DELEGATE \
RUNTIMEIMAGELOADER_API void FGifLoadingSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& GifLoadingSuccessDelegate, UAnimatedTexture2D* OutGifTexture);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_18_DELEGATE \
RUNTIMEIMAGELOADER_API void FGifLoadingFailureDelegate_DelegateWrapper(const FMulticastScriptDelegate& GifLoadingFailureDelegate, const FString& OutError);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGifReadResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RUNTIMEIMAGELOADER_API UScriptStruct* StaticStruct<struct FGifReadResult>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_42_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_42_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_42_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadGIFFromBytes); \
	DECLARE_FUNCTION(execLoadGIF);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_42_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeGifReader(); \
	friend struct Z_Construct_UClass_URuntimeGifReader_Statics; \
public: \
	DECLARE_CLASS(URuntimeGifReader, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeImageLoader"), NO_API) \
	DECLARE_SERIALIZER(URuntimeGifReader)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeGifReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeGifReader(URuntimeGifReader&&); \
	NO_API URuntimeGifReader(const URuntimeGifReader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeGifReader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeGifReader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeGifReader) \
	NO_API virtual ~URuntimeGifReader();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_39_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_42_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_42_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_42_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_42_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_42_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEIMAGELOADER_API UClass* StaticClass<class URuntimeGifReader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
