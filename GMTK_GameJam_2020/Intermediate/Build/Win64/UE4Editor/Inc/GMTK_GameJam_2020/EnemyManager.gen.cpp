// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMTK_GameJam_2020/EnemyManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyManager() {}
// Cross Module References
	GMTK_GAMEJAM_2020_API UClass* Z_Construct_UClass_AEnemyManager_NoRegister();
	GMTK_GAMEJAM_2020_API UClass* Z_Construct_UClass_AEnemyManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GMTK_GameJam_2020();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEnemyManager::StaticRegisterNativesAEnemyManager()
	{
	}
	UClass* Z_Construct_UClass_AEnemyManager_NoRegister()
	{
		return AEnemyManager::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_verticalSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_verticalSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_horizontalSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_horizontalSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rows_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_rows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_columns_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_columns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Enemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TestMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GMTK_GameJam_2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyManager.h" },
		{ "ModuleRelativePath", "EnemyManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_verticalSpacing_MetaData[] = {
		{ "Category", "EnemyManager" },
		{ "ModuleRelativePath", "EnemyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_verticalSpacing = { "verticalSpacing", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, verticalSpacing), METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_verticalSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_verticalSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_horizontalSpacing_MetaData[] = {
		{ "Category", "EnemyManager" },
		{ "ModuleRelativePath", "EnemyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_horizontalSpacing = { "horizontalSpacing", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, horizontalSpacing), METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_horizontalSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_horizontalSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_rows_MetaData[] = {
		{ "Category", "EnemyManager" },
		{ "ModuleRelativePath", "EnemyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_rows = { "rows", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, rows), METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_rows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_rows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_columns_MetaData[] = {
		{ "Category", "EnemyManager" },
		{ "ModuleRelativePath", "EnemyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_columns = { "columns", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, columns), METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_columns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_columns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_Enemy_MetaData[] = {
		{ "Category", "EnemyManager" },
		{ "ModuleRelativePath", "EnemyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, Enemy), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_Enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_Enemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_TestMesh_MetaData[] = {
		{ "Category", "EnemyManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_TestMesh = { "TestMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, TestMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_TestMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_TestMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_verticalSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_horizontalSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_rows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_columns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_Enemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_TestMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyManager_Statics::ClassParams = {
		&AEnemyManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyManager, 639800569);
	template<> GMTK_GAMEJAM_2020_API UClass* StaticClass<AEnemyManager>()
	{
		return AEnemyManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyManager(Z_Construct_UClass_AEnemyManager, &AEnemyManager::StaticClass, TEXT("/Script/GMTK_GameJam_2020"), TEXT("AEnemyManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
