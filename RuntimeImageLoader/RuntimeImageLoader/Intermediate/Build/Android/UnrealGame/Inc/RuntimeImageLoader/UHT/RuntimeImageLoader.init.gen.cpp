// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeImageLoader_init() {}
	RUNTIMEIMAGELOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature();
	RUNTIMEIMAGELOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RuntimeImageLoader;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RuntimeImageLoader()
	{
		if (!Z_Registration_Info_UPackage__Script_RuntimeImageLoader.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingFailureDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeImageLoader_GifLoadingSuccessDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RuntimeImageLoader",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3C17E953,
				0x64F76EE3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RuntimeImageLoader.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RuntimeImageLoader.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RuntimeImageLoader(Z_Construct_UPackage__Script_RuntimeImageLoader, TEXT("/Script/RuntimeImageLoader"), Z_Registration_Info_UPackage__Script_RuntimeImageLoader, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3C17E953, 0x64F76EE3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
