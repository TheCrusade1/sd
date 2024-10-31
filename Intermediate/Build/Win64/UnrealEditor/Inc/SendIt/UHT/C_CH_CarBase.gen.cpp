// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SendIt/Characters/C_CH_CarBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_CH_CarBase() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	SENDIT_API UClass* Z_Construct_UClass_AC_CH_CarBase();
	SENDIT_API UClass* Z_Construct_UClass_AC_CH_CarBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SendIt();
// End Cross Module References
	void AC_CH_CarBase::StaticRegisterNativesAC_CH_CarBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_CH_CarBase);
	UClass* Z_Construct_UClass_AC_CH_CarBase_NoRegister()
	{
		return AC_CH_CarBase::StaticClass();
	}
	struct Z_Construct_UClass_AC_CH_CarBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CarMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_CH_CarBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SendIt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_CH_CarBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_CH_CarBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/C_CH_CarBase.h" },
		{ "ModuleRelativePath", "Characters/C_CH_CarBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_SpringArmC_MetaData[] = {
		{ "Category", "C_CH_CarBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/C_CH_CarBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_SpringArmC = { "SpringArmC", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_CH_CarBase, SpringArmC), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_SpringArmC_MetaData), Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_SpringArmC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_CameraC_MetaData[] = {
		{ "Category", "C_CH_CarBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/C_CH_CarBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_CameraC = { "CameraC", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_CH_CarBase, CameraC), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_CameraC_MetaData), Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_CameraC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "C_CH_CarBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use floating pawn movement to smooth out motion. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/C_CH_CarBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use floating pawn movement to smooth out motion." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_CH_CarBase, Movement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_Movement_MetaData), Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_Movement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_MoveScale_MetaData[] = {
		{ "Category", "C_CH_CarBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scale to apply to location input. */" },
#endif
		{ "ModuleRelativePath", "Characters/C_CH_CarBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale to apply to location input." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_MoveScale = { "MoveScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_CH_CarBase, MoveScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_MoveScale_MetaData), Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_MoveScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_CarMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/C_CH_CarBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_CarMappingContext = { "CarMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_CH_CarBase, CarMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_CarMappingContext_MetaData), Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_CarMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/C_CH_CarBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_CH_CarBase, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_MoveAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_CH_CarBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_SpringArmC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_CameraC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_Movement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_MoveScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_CarMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_CH_CarBase_Statics::NewProp_MoveAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_CH_CarBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_CH_CarBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_CH_CarBase_Statics::ClassParams = {
		&AC_CH_CarBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC_CH_CarBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_CH_CarBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_CH_CarBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_CH_CarBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_CH_CarBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AC_CH_CarBase()
	{
		if (!Z_Registration_Info_UClass_AC_CH_CarBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_CH_CarBase.OuterSingleton, Z_Construct_UClass_AC_CH_CarBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AC_CH_CarBase.OuterSingleton;
	}
	template<> SENDIT_API UClass* StaticClass<AC_CH_CarBase>()
	{
		return AC_CH_CarBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_CH_CarBase);
	AC_CH_CarBase::~AC_CH_CarBase() {}
	struct Z_CompiledInDeferFile_FID_Projects_SendIt_Source_SendIt_Characters_C_CH_CarBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_SendIt_Source_SendIt_Characters_C_CH_CarBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC_CH_CarBase, AC_CH_CarBase::StaticClass, TEXT("AC_CH_CarBase"), &Z_Registration_Info_UClass_AC_CH_CarBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_CH_CarBase), 3134094817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_SendIt_Source_SendIt_Characters_C_CH_CarBase_h_3686549626(TEXT("/Script/SendIt"),
		Z_CompiledInDeferFile_FID_Projects_SendIt_Source_SendIt_Characters_C_CH_CarBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_SendIt_Source_SendIt_Characters_C_CH_CarBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
