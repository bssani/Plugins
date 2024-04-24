// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../RuntimeImageLoader/Public/RuntimeImageReader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeImageReader() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	RUNTIMEIMAGELOADER_API UClass* Z_Construct_UClass_URuntimeImageReader();
	RUNTIMEIMAGELOADER_API UClass* Z_Construct_UClass_URuntimeImageReader_NoRegister();
	RUNTIMEIMAGELOADER_API UClass* Z_Construct_UClass_URuntimeTextureFactory_NoRegister();
	RUNTIMEIMAGELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FImageReadResult();
	RUNTIMEIMAGELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FTransformImageParams();
	UPackage* Z_Construct_UPackage__Script_RuntimeImageLoader();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformImageParams;
class UScriptStruct* FTransformImageParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformImageParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformImageParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformImageParams, (UObject*)Z_Construct_UPackage__Script_RuntimeImageLoader(), TEXT("TransformImageParams"));
	}
	return Z_Registration_Info_UScriptStruct_TransformImageParams.OuterSingleton;
}
template<> RUNTIMEIMAGELOADER_API UScriptStruct* StaticStruct<FTransformImageParams>()
{
	return FTransformImageParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransformImageParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForUI_MetaData[];
#endif
		static void NewProp_bForUI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PercentSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PercentSizeY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformImageParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeImageReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformImageParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_bForUI_MetaData[] = {
		{ "Category", "Runtime Image Reader" },
		{ "ModuleRelativePath", "Public/RuntimeImageReader.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_bForUI_SetBit(void* Obj)
	{
		((FTransformImageParams*)Obj)->bForUI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_bForUI = { "bForUI", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTransformImageParams), &Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_bForUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_bForUI_MetaData), Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_bForUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_FilterMode_MetaData[] = {
		{ "Category", "Runtime Image Reader" },
		{ "ModuleRelativePath", "Public/RuntimeImageReader.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_FilterMode = { "FilterMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformImageParams, FilterMode), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_FilterMode_MetaData), Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_FilterMode_MetaData) }; // 2612248343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_PercentSizeX_MetaData[] = {
		{ "Category", "Runtime Image Reader" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/RuntimeImageReader.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_PercentSizeX = { "PercentSizeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformImageParams, PercentSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_PercentSizeX_MetaData), Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_PercentSizeX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_PercentSizeY_MetaData[] = {
		{ "Category", "Runtime Image Reader" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/RuntimeImageReader.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_PercentSizeY = { "PercentSizeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformImageParams, PercentSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_PercentSizeY_MetaData), Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_PercentSizeY_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformImageParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_bForUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_FilterMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_PercentSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewProp_PercentSizeY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformImageParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeImageLoader,
		nullptr,
		&NewStructOps,
		"TransformImageParams",
		Z_Construct_UScriptStruct_FTransformImageParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformImageParams_Statics::PropPointers),
		sizeof(FTransformImageParams),
		alignof(FTransformImageParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformImageParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransformImageParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformImageParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTransformImageParams()
	{
		if (!Z_Registration_Info_UScriptStruct_TransformImageParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformImageParams.InnerSingleton, Z_Construct_UScriptStruct_FTransformImageParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransformImageParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImageReadResult;
class UScriptStruct* FImageReadResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImageReadResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImageReadResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageReadResult, (UObject*)Z_Construct_UPackage__Script_RuntimeImageLoader(), TEXT("ImageReadResult"));
	}
	return Z_Registration_Info_UScriptStruct_ImageReadResult.OuterSingleton;
}
template<> RUNTIMEIMAGELOADER_API UScriptStruct* StaticStruct<FImageReadResult>()
{
	return FImageReadResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImageReadResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutImagePixels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutImagePixels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutImagePixels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutTextureCube_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutTextureCube;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageReadResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RuntimeImageReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImageReadResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageReadResult>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutImagePixels_Inner = { "OutImagePixels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutImagePixels_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeImageReader.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutImagePixels = { "OutImagePixels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageReadResult, OutImagePixels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutImagePixels_MetaData), Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutImagePixels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeImageReader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageReadResult, OutTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutTexture_MetaData), Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutTextureCube_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeImageReader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutTextureCube = { "OutTextureCube", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageReadResult, OutTextureCube), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutTextureCube_MetaData), Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutTextureCube_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageReadResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutImagePixels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutImagePixels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageReadResult_Statics::NewProp_OutTextureCube,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageReadResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeImageLoader,
		nullptr,
		&NewStructOps,
		"ImageReadResult",
		Z_Construct_UScriptStruct_FImageReadResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageReadResult_Statics::PropPointers),
		sizeof(FImageReadResult),
		alignof(FImageReadResult),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageReadResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImageReadResult_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageReadResult_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FImageReadResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ImageReadResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImageReadResult.InnerSingleton, Z_Construct_UScriptStruct_FImageReadResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImageReadResult.InnerSingleton;
	}
	void URuntimeImageReader::StaticRegisterNativesURuntimeImageReader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeImageReader);
	UClass* Z_Construct_UClass_URuntimeImageReader_NoRegister()
	{
		return URuntimeImageReader::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeImageReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingReadResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingReadResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureFactory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeImageReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeImageLoader,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeImageReader_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeImageReader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RuntimeImageReader.h" },
		{ "ModuleRelativePath", "Public/RuntimeImageReader.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FImageReadResult, METADATA_PARAMS(0, nullptr) }; // 1774227171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_Results_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeImageReader.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeImageReader, Results), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_Results_MetaData), Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_Results_MetaData) }; // 1774227171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_PendingReadResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeImageReader.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_PendingReadResult = { "PendingReadResult", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeImageReader, PendingReadResult), Z_Construct_UScriptStruct_FImageReadResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_PendingReadResult_MetaData), Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_PendingReadResult_MetaData) }; // 1774227171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_TextureFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeImageReader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_TextureFactory = { "TextureFactory", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeImageReader, TextureFactory), Z_Construct_UClass_URuntimeTextureFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_TextureFactory_MetaData), Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_TextureFactory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeImageReader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_Results_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_Results,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_PendingReadResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeImageReader_Statics::NewProp_TextureFactory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeImageReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeImageReader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeImageReader_Statics::ClassParams = {
		&URuntimeImageReader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URuntimeImageReader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeImageReader_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeImageReader_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeImageReader_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeImageReader_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URuntimeImageReader()
	{
		if (!Z_Registration_Info_UClass_URuntimeImageReader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeImageReader.OuterSingleton, Z_Construct_UClass_URuntimeImageReader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeImageReader.OuterSingleton;
	}
	template<> RUNTIMEIMAGELOADER_API UClass* StaticClass<URuntimeImageReader>()
	{
		return URuntimeImageReader::StaticClass();
	}
	URuntimeImageReader::URuntimeImageReader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeImageReader);
	URuntimeImageReader::~URuntimeImageReader() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageReader_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageReader_h_Statics::ScriptStructInfo[] = {
		{ FTransformImageParams::StaticStruct, Z_Construct_UScriptStruct_FTransformImageParams_Statics::NewStructOps, TEXT("TransformImageParams"), &Z_Registration_Info_UScriptStruct_TransformImageParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformImageParams), 4275277378U) },
		{ FImageReadResult::StaticStruct, Z_Construct_UScriptStruct_FImageReadResult_Statics::NewStructOps, TEXT("ImageReadResult"), &Z_Registration_Info_UScriptStruct_ImageReadResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImageReadResult), 1774227171U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageReader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeImageReader, URuntimeImageReader::StaticClass, TEXT("URuntimeImageReader"), &Z_Registration_Info_UClass_URuntimeImageReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeImageReader), 3044581506U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageReader_h_2862633453(TEXT("/Script/RuntimeImageLoader"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageReader_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageReader_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeImageLoader_Source_RuntimeImageLoader_Public_RuntimeImageReader_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
