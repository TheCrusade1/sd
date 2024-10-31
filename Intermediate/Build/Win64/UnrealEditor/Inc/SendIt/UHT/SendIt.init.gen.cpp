// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSendIt_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SendIt;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SendIt()
	{
		if (!Z_Registration_Info_UPackage__Script_SendIt.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SendIt",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5776B92C,
				0x3F059EBA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SendIt.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SendIt.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SendIt(Z_Construct_UPackage__Script_SendIt, TEXT("/Script/SendIt"), Z_Registration_Info_UPackage__Script_SendIt, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5776B92C, 0x3F059EBA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
