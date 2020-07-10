// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMTK_GameJam_2020/GMTK_GameJam_2020GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMTK_GameJam_2020GameModeBase() {}
// Cross Module References
	GMTK_GAMEJAM_2020_API UClass* Z_Construct_UClass_AGMTK_GameJam_2020GameModeBase_NoRegister();
	GMTK_GAMEJAM_2020_API UClass* Z_Construct_UClass_AGMTK_GameJam_2020GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GMTK_GameJam_2020();
// End Cross Module References
	void AGMTK_GameJam_2020GameModeBase::StaticRegisterNativesAGMTK_GameJam_2020GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGMTK_GameJam_2020GameModeBase_NoRegister()
	{
		return AGMTK_GameJam_2020GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGMTK_GameJam_2020GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMTK_GameJam_2020GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GMTK_GameJam_2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTK_GameJam_2020GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GMTK_GameJam_2020GameModeBase.h" },
		{ "ModuleRelativePath", "GMTK_GameJam_2020GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMTK_GameJam_2020GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMTK_GameJam_2020GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMTK_GameJam_2020GameModeBase_Statics::ClassParams = {
		&AGMTK_GameJam_2020GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGMTK_GameJam_2020GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTK_GameJam_2020GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMTK_GameJam_2020GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMTK_GameJam_2020GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMTK_GameJam_2020GameModeBase, 1884771317);
	template<> GMTK_GAMEJAM_2020_API UClass* StaticClass<AGMTK_GameJam_2020GameModeBase>()
	{
		return AGMTK_GameJam_2020GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMTK_GameJam_2020GameModeBase(Z_Construct_UClass_AGMTK_GameJam_2020GameModeBase, &AGMTK_GameJam_2020GameModeBase::StaticClass, TEXT("/Script/GMTK_GameJam_2020"), TEXT("AGMTK_GameJam_2020GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMTK_GameJam_2020GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
