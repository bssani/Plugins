// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../RuntimeImageLoader/Public/RuntimeImageLoader.h"
#include "../../../RuntimeImageLoader/Public/InputImageDescription.h"
#include "../../../RuntimeImageLoader/Public/RuntimeImageReader.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeImageLoader() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	RUNTIMEIMAGELOADER_API UClass* Z_Construct_UClass_URuntimeImageLoader();
	RUNTIMEIMAGELOADER_API UClass* Z_Construct_UClass_URuntimeImageLoader_NoRegister();
	RUNTIMEIMAGELOADER_API UClass* Z_Construct_UClass_URuntimeImageReader_NoRegister();
	RUNTIMEIMAGELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FInputImageDescription();
	RUNTIMEIMAGELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FTransformImageParams();
	UPackage* Z_Construct_UPackage__Script_RuntimeImageLoader();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeImageLoader::execGetThisPluginResourcesDirectory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URuntimeImageLoader::GetThisPluginResourcesDirectory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeImageLoader::execFindImagesInDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
		P_GET_UBOOL(Z_Param_bIsRecursive);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutImageFilenames);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindImagesInDirectory(Z_Param_Directory,Z_Param_bIsRecursive,Z_Param_Out_OutImageFilenames,Z_Param_Out_bSuccess,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeImageLoader::execLoadFileToByteArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ImageFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->LoadFileToByteArray(Z_Param_ImageFilename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeImageLoader::execCancelAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeImageLoader::execLoadImagePixels)
	{
		P_GET_STRUCT_REF(FInputImageDescription,Z_Param_Out_InputImage);
		P_GET_STRUCT_REF(FTransformImageParams,Z_Param_Out_TransformParams);
		P_GET_TARRAY_REF(FColor,Z_Param_Out_OutImagePixels);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadImagePixels(Z_Param_Out_InputImage,Z_Param_Out_TransformParams,Z_Param_Out_OutImagePixels,Z_Param_Out_bSuccess,Z_Param_Out_OutError,Z_Param_LatentInfo,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeImageLoader::execLoadImageFromBytesSync)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ImageBytes);
		P_GET_STRUCT_REF(FTransformImageParams,Z_Param_Out_TransformParams);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutTexture);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadImageFromBytesSync(Z_Param_Out_ImageBytes,Z_Param_Out_TransformParams,Z_Param_Out_OutTexture,Z_Param_Out_bSuccess,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeImageLoader::execLoadImageSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ImageFilename);
		P_GET_STRUCT_REF(FTransformImageParams,Z_Param_Out_TransformParams);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutTexture);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadImageSync(Z_Param_ImageFilename,Z_Param_Out_TransformParams,Z_Param_Out_OutTexture,Z_Param_Out_bSuccess,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeImageLoader::execLoadHDRIAsCubemapAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ImageFilename);
		P_GET_STRUCT_REF(FTransformImageParams,Z_Param_Out_TransformParams);
		P_GET_OBJECT_REF(UTextureCube,Z_Param_Out_OutTextureCube);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadHDRIAsCubemapAsync(Z_Param_ImageFilename,Z_Param_Out_TransformParams,Z_Param_Out_OutTextureCube,Z_Param_Out_bSuccess,Z_Param_Out_OutError,Z_Param_LatentInfo,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeImageLoader::execLoadImageFromBytesAsync)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ImageBytes);
		P_GET_STRUCT_REF(FTransformImageParams,Z_Param_Out_TransformParams);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutTexture);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadImageFromBytesAsync(Z_Param_Out_ImageBytes,Z_Param_Out_TransformParams,Z_Param_Out_OutTexture,Z_Param_Out_bSuccess,Z_Param_Out_OutError,Z_Param_LatentInfo,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeImageLoader::execLoadImageAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ImageFilename);
		P_GET_STRUCT_REF(FTransformImageParams,Z_Param_Out_TransformParams);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutTexture);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadImageAsync(Z_Param_ImageFilename,Z_Param_Out_TransformParams,Z_Param_Out_OutTexture,Z_Param_Out_bSuccess,Z_Param_Out_OutError,Z_Param_LatentInfo,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void URuntimeImageLoader::StaticRegisterNativesURuntimeImageLoader()
	{
		UClass* Class = URuntimeImageLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelAll", &URuntimeImageLoader::execCancelAll },
			{ "FindImagesInDirectory", &URuntimeImageLoader::execFindImagesInDirectory },
			{ "GetThisPluginResourcesDirectory", &URuntimeImageLoader::execGetThisPluginResourcesDirectory },
			{ "LoadFileToByteArray", &URuntimeImageLoader::execLoadFileToByteArray },
			{ "LoadHDRIAsCubemapAsync", &URuntimeImageLoader::execLoadHDRIAsCubemapAsync },
			{ "LoadImageAsync", &URuntimeImageLoader::execLoadImageAsync },
			{ "LoadImageFromBytesAsync", &URuntimeImageLoader::execLoadImageFromBytesAsync },
			{ "LoadImageFromBytesSync", &URuntimeImageLoader::execLoadImageFromBytesSync },
			{ "LoadImagePixels", &URuntimeImageLoader::execLoadImagePixels },
			{ "LoadImageSync", &URuntimeImageLoader::execLoadImageSync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeImageLoader_CancelAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_CancelAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Image Loader | Utilities" },
		{ "Comment", "/** Utilities */" },
		{ "ModuleRelativePath", "Public/RuntimeImageLoader.h" },
		{ "ToolTip", "Utilities" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeImageLoader_CancelAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeImageLoader, nullptr, "CancelAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_CancelAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeImageLoader_CancelAll_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URuntimeImageLoader_CancelAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeImageLoader_CancelAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics
	{
		struct RuntimeImageLoader_eventFindImagesInDirectory_Parms
		{
			FString Directory;
			bool bIsRecursive;
			TArray<FString> OutImageFilenames;
			bool bSuccess;
			FString OutError;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Directory;
		static void NewProp_bIsRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRecursive;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutImageFilenames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutImageFilenames;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventFindImagesInDirectory_Parms, Directory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_Directory_MetaData), Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_Directory_MetaData) };
	void Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_bIsRecursive_SetBit(void* Obj)
	{
		((RuntimeImageLoader_eventFindImagesInDirectory_Parms*)Obj)->bIsRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_bIsRecursive = { "bIsRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeImageLoader_eventFindImagesInDirectory_Parms), &Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_bIsRecursive_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_OutImageFilenames_Inner = { "OutImageFilenames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_OutImageFilenames = { "OutImageFilenames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventFindImagesInDirectory_Parms, OutImageFilenames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RuntimeImageLoader_eventFindImagesInDirectory_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeImageLoader_eventFindImagesInDirectory_Parms), &Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventFindImagesInDirectory_Parms, OutError), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_Directory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_bIsRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_OutImageFilenames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_OutImageFilenames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::NewProp_OutError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Image Loader | Utilities" },
		{ "ModuleRelativePath", "Public/RuntimeImageLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeImageLoader, nullptr, "FindImagesInDirectory", nullptr, nullptr, Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::RuntimeImageLoader_eventFindImagesInDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::RuntimeImageLoader_eventFindImagesInDirectory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory_Statics
	{
		struct RuntimeImageLoader_eventGetThisPluginResourcesDirectory_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventGetThisPluginResourcesDirectory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Image Loader | Utilities" },
		{ "ModuleRelativePath", "Public/RuntimeImageLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeImageLoader, nullptr, "GetThisPluginResourcesDirectory", nullptr, nullptr, Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory_Statics::RuntimeImageLoader_eventGetThisPluginResourcesDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory_Statics::RuntimeImageLoader_eventGetThisPluginResourcesDirectory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics
	{
		struct RuntimeImageLoader_eventLoadFileToByteArray_Parms
		{
			FString ImageFilename;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageFilename;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::NewProp_ImageFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::NewProp_ImageFilename = { "ImageFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadFileToByteArray_Parms, ImageFilename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::NewProp_ImageFilename_MetaData), Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::NewProp_ImageFilename_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadFileToByteArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::NewProp_ImageFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Image Loader | Utilities" },
		{ "ModuleRelativePath", "Public/RuntimeImageLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeImageLoader, nullptr, "LoadFileToByteArray", nullptr, nullptr, Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::RuntimeImageLoader_eventLoadFileToByteArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::RuntimeImageLoader_eventLoadFileToByteArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics
	{
		struct RuntimeImageLoader_eventLoadHDRIAsCubemapAsync_Parms
		{
			FString ImageFilename;
			FTransformImageParams TransformParams;
			UTextureCube* OutTextureCube;
			bool bSuccess;
			FString OutError;
			FLatentActionInfo LatentInfo;
			UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageFilename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutTextureCube;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_ImageFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_ImageFilename = { "ImageFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadHDRIAsCubemapAsync_Parms, ImageFilename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_ImageFilename_MetaData), Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_ImageFilename_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_TransformParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_TransformParams = { "TransformParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadHDRIAsCubemapAsync_Parms, TransformParams), Z_Construct_UScriptStruct_FTransformImageParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_TransformParams_MetaData), Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_TransformParams_MetaData) }; // 4275277378
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_OutTextureCube = { "OutTextureCube", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadHDRIAsCubemapAsync_Parms, OutTextureCube), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RuntimeImageLoader_eventLoadHDRIAsCubemapAsync_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeImageLoader_eventLoadHDRIAsCubemapAsync_Parms), &Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadHDRIAsCubemapAsync_Parms, OutError), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadHDRIAsCubemapAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadHDRIAsCubemapAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_ImageFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_TransformParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_OutTextureCube,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "TransformParams" },
		{ "Category", "Runtime Image Loader | Cubemap" },
		{ "CPP_Default_WorldContextObject", "None" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/RuntimeImageLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeImageLoader, nullptr, "LoadHDRIAsCubemapAsync", nullptr, nullptr, Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::RuntimeImageLoader_eventLoadHDRIAsCubemapAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::RuntimeImageLoader_eventLoadHDRIAsCubemapAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics
	{
		struct RuntimeImageLoader_eventLoadImageAsync_Parms
		{
			FString ImageFilename;
			FTransformImageParams TransformParams;
			UTexture2D* OutTexture;
			bool bSuccess;
			FString OutError;
			FLatentActionInfo LatentInfo;
			UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageFilename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutTexture;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_ImageFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_ImageFilename = { "ImageFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageAsync_Parms, ImageFilename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_ImageFilename_MetaData), Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_ImageFilename_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_TransformParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_TransformParams = { "TransformParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageAsync_Parms, TransformParams), Z_Construct_UScriptStruct_FTransformImageParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_TransformParams_MetaData), Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_TransformParams_MetaData) }; // 4275277378
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageAsync_Parms, OutTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RuntimeImageLoader_eventLoadImageAsync_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeImageLoader_eventLoadImageAsync_Parms), &Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageAsync_Parms, OutError), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_ImageFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_TransformParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_OutTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "TransformParams" },
		{ "Category", "Runtime Image Loader" },
		{ "Comment", "//------------------ Images --------------------\n" },
		{ "CPP_Default_WorldContextObject", "None" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/RuntimeImageLoader.h" },
		{ "ToolTip", "------------------ Images --------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeImageLoader, nullptr, "LoadImageAsync", nullptr, nullptr, Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::RuntimeImageLoader_eventLoadImageAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::RuntimeImageLoader_eventLoadImageAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics
	{
		struct RuntimeImageLoader_eventLoadImageFromBytesAsync_Parms
		{
			TArray<uint8> ImageBytes;
			FTransformImageParams TransformParams;
			UTexture2D* OutTexture;
			bool bSuccess;
			FString OutError;
			FLatentActionInfo LatentInfo;
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageBytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutTexture;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_ImageBytes_Inner = { "ImageBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_ImageBytes = { "ImageBytes", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageFromBytesAsync_Parms, ImageBytes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_TransformParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_TransformParams = { "TransformParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageFromBytesAsync_Parms, TransformParams), Z_Construct_UScriptStruct_FTransformImageParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_TransformParams_MetaData), Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_TransformParams_MetaData) }; // 4275277378
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageFromBytesAsync_Parms, OutTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RuntimeImageLoader_eventLoadImageFromBytesAsync_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeImageLoader_eventLoadImageFromBytesAsync_Parms), &Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageFromBytesAsync_Parms, OutError), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageFromBytesAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageFromBytesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_ImageBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_ImageBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_TransformParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_OutTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "TransformParams" },
		{ "Category", "Runtime Image Loader | Bytes" },
		{ "CPP_Default_WorldContextObject", "None" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/RuntimeImageLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeImageLoader, nullptr, "LoadImageFromBytesAsync", nullptr, nullptr, Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::RuntimeImageLoader_eventLoadImageFromBytesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::RuntimeImageLoader_eventLoadImageFromBytesAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics
	{
		struct RuntimeImageLoader_eventLoadImageFromBytesSync_Parms
		{
			TArray<uint8> ImageBytes;
			FTransformImageParams TransformParams;
			UTexture2D* OutTexture;
			bool bSuccess;
			FString OutError;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageBytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutTexture;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_ImageBytes_Inner = { "ImageBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_ImageBytes = { "ImageBytes", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageFromBytesSync_Parms, ImageBytes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_TransformParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_TransformParams = { "TransformParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageFromBytesSync_Parms, TransformParams), Z_Construct_UScriptStruct_FTransformImageParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_TransformParams_MetaData), Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_TransformParams_MetaData) }; // 4275277378
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageFromBytesSync_Parms, OutTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RuntimeImageLoader_eventLoadImageFromBytesSync_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeImageLoader_eventLoadImageFromBytesSync_Parms), &Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageFromBytesSync_Parms, OutError), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_ImageBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_ImageBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_TransformParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_OutTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::NewProp_OutError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "TransformParams" },
		{ "Category", "Runtime Image Loader | Bytes" },
		{ "ModuleRelativePath", "Public/RuntimeImageLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeImageLoader, nullptr, "LoadImageFromBytesSync", nullptr, nullptr, Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::RuntimeImageLoader_eventLoadImageFromBytesSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::RuntimeImageLoader_eventLoadImageFromBytesSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics
	{
		struct RuntimeImageLoader_eventLoadImagePixels_Parms
		{
			FInputImageDescription InputImage;
			FTransformImageParams TransformParams;
			TArray<FColor> OutImagePixels;
			bool bSuccess;
			FString OutError;
			FLatentActionInfo LatentInfo;
			UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutImagePixels_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutImagePixels;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_InputImage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_InputImage = { "InputImage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImagePixels_Parms, InputImage), Z_Construct_UScriptStruct_FInputImageDescription, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_InputImage_MetaData), Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_InputImage_MetaData) }; // 1350517924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_TransformParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_TransformParams = { "TransformParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImagePixels_Parms, TransformParams), Z_Construct_UScriptStruct_FTransformImageParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_TransformParams_MetaData), Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_TransformParams_MetaData) }; // 4275277378
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_OutImagePixels_Inner = { "OutImagePixels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_OutImagePixels = { "OutImagePixels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImagePixels_Parms, OutImagePixels), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RuntimeImageLoader_eventLoadImagePixels_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeImageLoader_eventLoadImagePixels_Parms), &Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImagePixels_Parms, OutError), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImagePixels_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImagePixels_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_InputImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_TransformParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_OutImagePixels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_OutImagePixels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Image Loader" },
		{ "CPP_Default_WorldContextObject", "None" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/RuntimeImageLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeImageLoader, nullptr, "LoadImagePixels", nullptr, nullptr, Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::RuntimeImageLoader_eventLoadImagePixels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::RuntimeImageLoader_eventLoadImagePixels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics
	{
		struct RuntimeImageLoader_eventLoadImageSync_Parms
		{
			FString ImageFilename;
			FTransformImageParams TransformParams;
			UTexture2D* OutTexture;
			bool bSuccess;
			FString OutError;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageFilename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutTexture;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_ImageFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_ImageFilename = { "ImageFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageSync_Parms, ImageFilename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_ImageFilename_MetaData), Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_ImageFilename_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_TransformParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_TransformParams = { "TransformParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageSync_Parms, TransformParams), Z_Construct_UScriptStruct_FTransformImageParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_TransformParams_MetaData), Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_TransformParams_MetaData) }; // 4275277378
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageSync_Parms, OutTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RuntimeImageLoader_eventLoadImageSync_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeImageLoader_eventLoadImageSync_Parms), &Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeImageLoader_eventLoadImageSync_Parms, OutError), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_ImageFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_TransformParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_OutTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::NewProp_OutError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "TransformParams" },
		{ "Category", "Runtime Image Loader" },
		{ "ModuleRelativePath", "Public/RuntimeImageLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeImageLoader, nullptr, "LoadImageSync", nullptr, nullptr, Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::RuntimeImageLoader_eventLoadImageSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::RuntimeImageLoader_eventLoadImageSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeImageLoader);
	UClass* Z_Construct_UClass_URuntimeImageLoader_NoRegister()
	{
		return URuntimeImageLoader::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeImageLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageReader_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageReader;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeImageLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeImageLoader,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeImageLoader_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeImageLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeImageLoader_CancelAll, "CancelAll" }, // 4061492332
		{ &Z_Construct_UFunction_URuntimeImageLoader_FindImagesInDirectory, "FindImagesInDirectory" }, // 4152348718
		{ &Z_Construct_UFunction_URuntimeImageLoader_GetThisPluginResourcesDirectory, "GetThisPluginResourcesDirectory" }, // 2093607616
		{ &Z_Construct_UFunction_URuntimeImageLoader_LoadFileToByteArray, "LoadFileToByteArray" }, // 159681784
		{ &Z_Construct_UFunction_URuntimeImageLoader_LoadHDRIAsCubemapAsync, "LoadHDRIAsCubemapAsync" }, // 167331030
		{ &Z_Construct_UFunction_URuntimeImageLoader_LoadImageAsync, "LoadImageAsync" }, // 2974403651
		{ &Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesAsync, "LoadImageFromBytesAsync" }, // 1772330013
		{ &Z_Construct_UFunction_URuntimeImageLoader_LoadImageFromBytesSync, "LoadImageFromBytesSync" }, // 4188533948
		{ &Z_Construct_UFunction_URuntimeImageLoader_LoadImagePixels, "LoadImagePixels" }, // 30900756
		{ &Z_Construct_UFunction_URuntimeImageLoader_LoadImageSync, "LoadImageSync" }, // 3747022984
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeImageLoader_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeImageLoader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RuntimeImageLoader.h" },
		{ "ModuleRelativePath", "Public/RuntimeImageLoader.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeImageLoader_Statics::NewProp_ImageReader_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeImageLoader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeImageLoader_Statics::NewProp_ImageReader = { "ImageReader", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeImageLoader, ImageReader), Z_Construct_UClass_URuntimeImageReader_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeImageLoader_Statics::NewProp_ImageReader_MetaData), Z_Construct_UClass_URuntimeImageLoader_Statics::NewProp_ImageReader_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeImageLoader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeImageLoader_Statics::NewProp_ImageReader,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeImageLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeImageLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeImageLoader_Statics::ClassParams = {
		&URuntimeImageLoader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeImageLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeImageLoader_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeImageLoader_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeImageLoader_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeImageLoader_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URuntimeImageLoader()
	{
		if (!Z_Registration_Info_UClass_URuntimeImageLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeImageLoader.OuterSingleton, Z_Construct_UClass_URuntimeImageLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeImageLoader.OuterSingleton;
	}
	template<> RUNTIMEIMAGELOADER_API UClass* StaticClass<URuntimeImageLoader>()
	{
		return URuntimeImageLoader::StaticClass();
	}
	URuntimeImageLoader::URuntimeImageLoader() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeImageLoader);
	URuntimeImageLoader::~URuntimeImageLoader() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeImageLoader, URuntimeImageLoader::StaticClass, TEXT("URuntimeImageLoader"), &Z_Registration_Info_UClass_URuntimeImageLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeImageLoader), 2190238863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_1512305011(TEXT("/Script/RuntimeImageLoader"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageLoader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
