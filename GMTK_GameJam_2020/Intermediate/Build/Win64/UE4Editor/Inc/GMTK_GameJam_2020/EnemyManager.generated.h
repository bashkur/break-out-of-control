// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GMTK_GAMEJAM_2020_EnemyManager_generated_h
#error "EnemyManager.generated.h already included, missing '#pragma once' in EnemyManager.h"
#endif
#define GMTK_GAMEJAM_2020_EnemyManager_generated_h

#define GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_SPARSE_DATA
#define GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_RPC_WRAPPERS
#define GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyManager(); \
	friend struct Z_Construct_UClass_AEnemyManager_Statics; \
public: \
	DECLARE_CLASS(AEnemyManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GMTK_GameJam_2020"), NO_API) \
	DECLARE_SERIALIZER(AEnemyManager)


#define GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyManager(); \
	friend struct Z_Construct_UClass_AEnemyManager_Statics; \
public: \
	DECLARE_CLASS(AEnemyManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GMTK_GameJam_2020"), NO_API) \
	DECLARE_SERIALIZER(AEnemyManager)


#define GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyManager(AEnemyManager&&); \
	NO_API AEnemyManager(const AEnemyManager&); \
public:


#define GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyManager(AEnemyManager&&); \
	NO_API AEnemyManager(const AEnemyManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyManager)


#define GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Enemy() { return STRUCT_OFFSET(AEnemyManager, Enemy); } \
	FORCEINLINE static uint32 __PPO__columns() { return STRUCT_OFFSET(AEnemyManager, columns); } \
	FORCEINLINE static uint32 __PPO__rows() { return STRUCT_OFFSET(AEnemyManager, rows); } \
	FORCEINLINE static uint32 __PPO__horizontalSpacing() { return STRUCT_OFFSET(AEnemyManager, horizontalSpacing); } \
	FORCEINLINE static uint32 __PPO__verticalSpacing() { return STRUCT_OFFSET(AEnemyManager, verticalSpacing); }


#define GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_9_PROLOG
#define GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_PRIVATE_PROPERTY_OFFSET \
	GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_SPARSE_DATA \
	GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_RPC_WRAPPERS \
	GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_INCLASS \
	GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_PRIVATE_PROPERTY_OFFSET \
	GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_SPARSE_DATA \
	GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_INCLASS_NO_PURE_DECLS \
	GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMTK_GAMEJAM_2020_API UClass* StaticClass<class AEnemyManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GMTK_GameJam_2020_Source_GMTK_GameJam_2020_EnemyManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
