// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeImageLoader.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTexture2D;
class UTextureCube;
struct FColor;
struct FInputImageDescription;
struct FLatentActionInfo;
struct FTransformImageParams;
#ifdef RUNTIMEIMAGELOADER_RuntimeImageLoader_generated_h
#error "RuntimeImageLoader.generated.h already included, missing '#pragma once' in RuntimeImageLoader.h"
#endif
#define RUNTIMEIMAGELOADER_RuntimeImageLoader_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_46_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_46_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetThisPluginResourcesDirectory); \
	DECLARE_FUNCTION(execFindImagesInDirectory); \
	DECLARE_FUNCTION(execLoadFileToByteArray); \
	DECLARE_FUNCTION(execCancelAll); \
	DECLARE_FUNCTION(execLoadImagePixels); \
	DECLARE_FUNCTION(execLoadImageFromBytesSync); \
	DECLARE_FUNCTION(execLoadImageSync); \
	DECLARE_FUNCTION(execLoadHDRIAsCubemapAsync); \
	DECLARE_FUNCTION(execLoadImageFromBytesAsync); \
	DECLARE_FUNCTION(execLoadImageAsync);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_46_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeImageLoader(); \
	friend struct Z_Construct_UClass_URuntimeImageLoader_Statics; \
public: \
	DECLARE_CLASS(URuntimeImageLoader, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeImageLoader"), NO_API) \
	DECLARE_SERIALIZER(URuntimeImageLoader)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeImageLoader(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeImageLoader(URuntimeImageLoader&&); \
	NO_API URuntimeImageLoader(const URuntimeImageLoader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeImageLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeImageLoader); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeImageLoader) \
	NO_API virtual ~URuntimeImageLoader();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_43_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_46_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_46_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_46_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_46_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEIMAGELOADER_API UClass* StaticClass<class URuntimeImageLoader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
