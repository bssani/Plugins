// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../RuntimeImageLoader/Public/RuntimeGifReader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeGifReader() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	RUNTIMEIMAGELOADER_API UClass* Z_Construct_UClass_UAnimatedTexture2D_NoRegister();
	RUNTIMEIMAGELOADER_API UClass* Z_Construct_UClass_URuntimeGifReader();
	RUNTIMEIMAGELOADER_API UClass* Z_Construct_UClass_URuntimeGifReader_NoRegister();
	RUNTIMEIMAGELOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature();
	RUNTIMEIMAGELOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature();
	RUNTIMEIMAGELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FGifReadResult();
	UPackage* Z_Construct_UPackage__Script_RuntimeImageLoader();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature_Statics
	{
		struct _Script_RuntimeImageLoader_eventGifLoadingSuccessDelegate_Parms
		{
			UAnimatedTexture2D* OutGifTexture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutGifTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature_Statics::NewProp_OutGifTexture = { "OutGifTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeImageLoader_eventGifLoadingSuccessDelegate_Parms, OutGifTexture), Z_Construct_UClass_UAnimatedTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature_Statics::NewProp_OutGifTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RuntimeGifReader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeImageLoader, nullptr, "GifLoadingSuccessDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature_Statics::_Script_RuntimeImageLoader_eventGifLoadingSuccessDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature_Statics::_Script_RuntimeImageLoader_eventGifLoadingSuccessDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGifLoadingSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& GifLoadingSuccessDelegate, UAnimatedTexture2D* OutGifTexture)
{
	struct _Script_RuntimeImageLoader_eventGifLoadingSuccessDelegate_Parms
	{
		UAnimatedTexture2D* OutGifTexture;
	};
	_Script_RuntimeImageLoader_eventGifLoadingSuccessDelegate_Parms Parms;
	Parms.OutGifTexture=OutGifTexture;
	GifLoadingSuccessDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature_Statics
	{
		struct _Script_RuntimeImageLoader_eventGifLoadingFailureDelegate_Parms
		{
			FString OutError;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeImageLoader_eventGifLoadingFailureDelegate_Parms, OutError), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature_Statics::NewProp_OutError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RuntimeGifReader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeImageLoader, nullptr, "GifLoadingFailureDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature_Statics::_Script_RuntimeImageLoader_eventGifLoadingFailureDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature_Statics::_Script_RuntimeImageLoader_eventGifLoadingFailureDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGifLoadingFailureDelegate_DelegateWrapper(const FMulticastScriptDelegate& GifLoadingFailureDelegate, const FString& OutError)
{
	struct _Script_RuntimeImageLoader_eventGifLoadingFailureDelegate_Parms
	{
		FString OutError;
	};
	_Script_RuntimeImageLoader_eventGifLoadingFailureDelegate_Parms Parms;
	Parms.OutError=OutError;
	GifLoadingFailureDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GifReadResult;
class UScriptStruct* FGifReadResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GifReadResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GifReadResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGifReadResult, (UObject*)Z_Construct_UPackage__Script_RuntimeImageLoader(), TEXT("GifReadResult"));
	}
	return Z_Registration_Info_UScriptStruct_GifReadResult.OuterSingleton;
}
template<> RUNTIMEIMAGELOADER_API UScriptStruct* StaticStruct<FGifReadResult>()
{
	return FGifReadResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGifReadResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGifReadResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RuntimeGifReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGifReadResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGifReadResult>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGifReadResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeImageLoader,
		nullptr,
		&NewStructOps,
		"GifReadResult",
		nullptr,
		0,
		sizeof(FGifReadResult),
		alignof(FGifReadResult),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGifReadResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGifReadResult_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGifReadResult()
	{
		if (!Z_Registration_Info_UScriptStruct_GifReadResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GifReadResult.InnerSingleton, Z_Construct_UScriptStruct_FGifReadResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GifReadResult.InnerSingleton;
	}
	DEFINE_FUNCTION(URuntimeGifReader::execLoadGIFFromBytes)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_GifBytes);
		P_GET_PROPERTY(FByteProperty,Z_Param_InFilterMode);
		P_GET_UBOOL(Z_Param_bSynchronous);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeGifReader**)Z_Param__Result=URuntimeGifReader::LoadGIFFromBytes(Z_Param_Out_GifBytes,TextureFilter(Z_Param_InFilterMode),Z_Param_bSynchronous);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeGifReader::execLoadGIF)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GIFFilename);
		P_GET_PROPERTY(FByteProperty,Z_Param_InFilterMode);
		P_GET_UBOOL(Z_Param_bSynchronous);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeGifReader**)Z_Param__Result=URuntimeGifReader::LoadGIF(Z_Param_GIFFilename,TextureFilter(Z_Param_InFilterMode),Z_Param_bSynchronous);
		P_NATIVE_END;
	}
	void URuntimeGifReader::StaticRegisterNativesURuntimeGifReader()
	{
		UClass* Class = URuntimeGifReader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadGIF", &URuntimeGifReader::execLoadGIF },
			{ "LoadGIFFromBytes", &URuntimeGifReader::execLoadGIFFromBytes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics
	{
		struct RuntimeGifReader_eventLoadGIF_Parms
		{
			FString GIFFilename;
			TEnumAsByte<TextureFilter> InFilterMode;
			bool bSynchronous;
			URuntimeGifReader* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GIFFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GIFFilename;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InFilterMode;
		static void NewProp_bSynchronous_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSynchronous;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::NewProp_GIFFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::NewProp_GIFFilename = { "GIFFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeGifReader_eventLoadGIF_Parms, GIFFilename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::NewProp_GIFFilename_MetaData), Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::NewProp_GIFFilename_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::NewProp_InFilterMode = { "InFilterMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeGifReader_eventLoadGIF_Parms, InFilterMode), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(0, nullptr) }; // 2612248343
	void Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::NewProp_bSynchronous_SetBit(void* Obj)
	{
		((RuntimeGifReader_eventLoadGIF_Parms*)Obj)->bSynchronous = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::NewProp_bSynchronous = { "bSynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeGifReader_eventLoadGIF_Parms), &Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::NewProp_bSynchronous_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeGifReader_eventLoadGIF_Parms, ReturnValue), Z_Construct_UClass_URuntimeGifReader_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::NewProp_GIFFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::NewProp_InFilterMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::NewProp_bSynchronous,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Gif Reader" },
		{ "Comment", "/** GIF */" },
		{ "CPP_Default_bSynchronous", "false" },
		{ "CPP_Default_InFilterMode", "TF_Trilinear" },
		{ "ModuleRelativePath", "Public/RuntimeGifReader.h" },
		{ "ToolTip", "GIF" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeGifReader, nullptr, "LoadGIF", nullptr, nullptr, Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::RuntimeGifReader_eventLoadGIF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::RuntimeGifReader_eventLoadGIF_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URuntimeGifReader_LoadGIF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeGifReader_LoadGIF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics
	{
		struct RuntimeGifReader_eventLoadGIFFromBytes_Parms
		{
			TArray<uint8> GifBytes;
			TEnumAsByte<TextureFilter> InFilterMode;
			bool bSynchronous;
			URuntimeGifReader* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_GifBytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GifBytes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InFilterMode;
		static void NewProp_bSynchronous_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSynchronous;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::NewProp_GifBytes_Inner = { "GifBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::NewProp_GifBytes = { "GifBytes", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeGifReader_eventLoadGIFFromBytes_Parms, GifBytes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::NewProp_InFilterMode = { "InFilterMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeGifReader_eventLoadGIFFromBytes_Parms, InFilterMode), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(0, nullptr) }; // 2612248343
	void Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::NewProp_bSynchronous_SetBit(void* Obj)
	{
		((RuntimeGifReader_eventLoadGIFFromBytes_Parms*)Obj)->bSynchronous = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::NewProp_bSynchronous = { "bSynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeGifReader_eventLoadGIFFromBytes_Parms), &Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::NewProp_bSynchronous_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeGifReader_eventLoadGIFFromBytes_Parms, ReturnValue), Z_Construct_UClass_URuntimeGifReader_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::NewProp_GifBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::NewProp_GifBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::NewProp_InFilterMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::NewProp_bSynchronous,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Gif Reader" },
		{ "CPP_Default_bSynchronous", "false" },
		{ "CPP_Default_InFilterMode", "TF_Trilinear" },
		{ "ModuleRelativePath", "Public/RuntimeGifReader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeGifReader, nullptr, "LoadGIFFromBytes", nullptr, nullptr, Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::RuntimeGifReader_eventLoadGIFFromBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::RuntimeGifReader_eventLoadGIFFromBytes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeGifReader);
	UClass* Z_Construct_UClass_URuntimeGifReader_NoRegister()
	{
		return URuntimeGifReader::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeGifReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReadResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReadResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeGifReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeImageLoader,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeGifReader_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeGifReader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeGifReader_LoadGIF, "LoadGIF" }, // 4287323058
		{ &Z_Construct_UFunction_URuntimeGifReader_LoadGIFFromBytes, "LoadGIFFromBytes" }, // 2762541531
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeGifReader_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeGifReader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RuntimeGifReader.h" },
		{ "ModuleRelativePath", "Public/RuntimeGifReader.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeGifReader_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Bind to these events when you want to use async API from C++\n" },
		{ "ModuleRelativePath", "Public/RuntimeGifReader.h" },
		{ "ToolTip", "Bind to these events when you want to use async API from C++" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeGifReader_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeGifReader, OnSuccess), Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeGifReader_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_URuntimeGifReader_Statics::NewProp_OnSuccess_MetaData) }; // 1570312344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeGifReader_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeGifReader.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeGifReader_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeGifReader, OnFail), Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeGifReader_Statics::NewProp_OnFail_MetaData), Z_Construct_UClass_URuntimeGifReader_Statics::NewProp_OnFail_MetaData) }; // 2957873595
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeGifReader_Statics::NewProp_ReadResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeGifReader.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeGifReader_Statics::NewProp_ReadResult = { "ReadResult", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeGifReader, ReadResult), Z_Construct_UScriptStruct_FGifReadResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeGifReader_Statics::NewProp_ReadResult_MetaData), Z_Construct_UClass_URuntimeGifReader_Statics::NewProp_ReadResult_MetaData) }; // 1068232755
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeGifReader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeGifReader_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeGifReader_Statics::NewProp_OnFail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeGifReader_Statics::NewProp_ReadResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeGifReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeGifReader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeGifReader_Statics::ClassParams = {
		&URuntimeGifReader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeGifReader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeGifReader_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeGifReader_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeGifReader_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeGifReader_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URuntimeGifReader()
	{
		if (!Z_Registration_Info_UClass_URuntimeGifReader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeGifReader.OuterSingleton, Z_Construct_UClass_URuntimeGifReader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeGifReader.OuterSingleton;
	}
	template<> RUNTIMEIMAGELOADER_API UClass* StaticClass<URuntimeGifReader>()
	{
		return URuntimeGifReader::StaticClass();
	}
	URuntimeGifReader::URuntimeGifReader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeGifReader);
	URuntimeGifReader::~URuntimeGifReader() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_Statics::ScriptStructInfo[] = {
		{ FGifReadResult::StaticStruct, Z_Construct_UScriptStruct_FGifReadResult_Statics::NewStructOps, TEXT("GifReadResult"), &Z_Registration_Info_UScriptStruct_GifReadResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGifReadResult), 1068232755U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeGifReader, URuntimeGifReader::StaticClass, TEXT("URuntimeGifReader"), &Z_Registration_Info_UClass_URuntimeGifReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeGifReader), 3107563026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_4267688573(TEXT("/Script/RuntimeImageLoader"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeGifReader_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
