// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SendIt/SendItPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSendItPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	SENDIT_API UClass* Z_Construct_UClass_ASendItPlayerController();
	SENDIT_API UClass* Z_Construct_UClass_ASendItPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SendIt();
// End Cross Module References
	void ASendItPlayerController::StaticRegisterNativesASendItPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASendItPlayerController);
	UClass* Z_Construct_UClass_ASendItPlayerController_NoRegister()
	{
		return ASendItPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASendItPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASendItPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SendIt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASendItPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASendItPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SendItPlayerController.h" },
		{ "ModuleRelativePath", "SendItPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASendItPlayerController_Statics::NewProp_PawnMappingContext_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mapping context used for pawn control. */" },
#endif
		{ "ModuleRelativePath", "SendItPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping context used for pawn control." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASendItPlayerController_Statics::NewProp_PawnMappingContext = { "PawnMappingContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASendItPlayerController, PawnMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASendItPlayerController_Statics::NewProp_PawnMappingContext_MetaData), Z_Construct_UClass_ASendItPlayerController_Statics::NewProp_PawnMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASendItPlayerController_Statics::NewProp_MoveAction_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Action to update location. */" },
#endif
		{ "ModuleRelativePath", "SendItPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action to update location." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASendItPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASendItPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASendItPlayerController_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_ASendItPlayerController_Statics::NewProp_MoveAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASendItPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASendItPlayerController_Statics::NewProp_PawnMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASendItPlayerController_Statics::NewProp_MoveAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASendItPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASendItPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASendItPlayerController_Statics::ClassParams = {
		&ASendItPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASendItPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASendItPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASendItPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASendItPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASendItPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASendItPlayerController()
	{
		if (!Z_Registration_Info_UClass_ASendItPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASendItPlayerController.OuterSingleton, Z_Construct_UClass_ASendItPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASendItPlayerController.OuterSingleton;
	}
	template<> SENDIT_API UClass* StaticClass<ASendItPlayerController>()
	{
		return ASendItPlayerController::StaticClass();
	}
	ASendItPlayerController::ASendItPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASendItPlayerController);
	ASendItPlayerController::~ASendItPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Projects_SendIt_Source_SendIt_SendItPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_SendIt_Source_SendIt_SendItPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASendItPlayerController, ASendItPlayerController::StaticClass, TEXT("ASendItPlayerController"), &Z_Registration_Info_UClass_ASendItPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASendItPlayerController), 2199149286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_SendIt_Source_SendIt_SendItPlayerController_h_2925714818(TEXT("/Script/SendIt"),
		Z_CompiledInDeferFile_FID_Projects_SendIt_Source_SendIt_SendItPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_SendIt_Source_SendIt_SendItPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
