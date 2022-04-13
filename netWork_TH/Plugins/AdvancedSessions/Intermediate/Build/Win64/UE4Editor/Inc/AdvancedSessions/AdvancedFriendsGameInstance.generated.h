// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBPLoginStatus : uint8;
struct FBPUniqueNetId;
struct FBlueprintSessionResult;
#ifdef ADVANCEDSESSIONS_AdvancedFriendsGameInstance_generated_h
#error "AdvancedFriendsGameInstance.generated.h already included, missing '#pragma once' in AdvancedFriendsGameInstance.h"
#endif
#define ADVANCEDSESSIONS_AdvancedFriendsGameInstance_generated_h

#define GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_SPARSE_DATA
#define GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_RPC_WRAPPERS
#define GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_EVENT_PARMS \
	struct AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms \
	{ \
		int32 PlayerNum; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms \
	{ \
		int32 PlayerNum; \
		EBPLoginStatus PreviousStatus; \
		EBPLoginStatus NewStatus; \
		FBPUniqueNetId NewPlayerUniqueNetID; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms \
	{ \
		FBPUniqueNetId PlayerId; \
		bool bIsTalking; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms \
	{ \
		int32 LocalPlayerNum; \
		FBPUniqueNetId PersonInvited; \
		FBlueprintSessionResult SessionToJoin; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms \
	{ \
		int32 LocalPlayerNum; \
		FBPUniqueNetId PersonInviting; \
		FString AppId; \
		FBlueprintSessionResult SessionToJoin; \
	};


#define GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_CALLBACK_WRAPPERS
#define GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedFriendsGameInstance(); \
	friend struct Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics; \
public: \
	DECLARE_CLASS(UAdvancedFriendsGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedFriendsGameInstance)


#define GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedFriendsGameInstance(); \
	friend struct Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics; \
public: \
	DECLARE_CLASS(UAdvancedFriendsGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedFriendsGameInstance)


#define GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedFriendsGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedFriendsGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedFriendsGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFriendsGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedFriendsGameInstance(UAdvancedFriendsGameInstance&&); \
	NO_API UAdvancedFriendsGameInstance(const UAdvancedFriendsGameInstance&); \
public:


#define GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedFriendsGameInstance(UAdvancedFriendsGameInstance&&); \
	NO_API UAdvancedFriendsGameInstance(const UAdvancedFriendsGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedFriendsGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFriendsGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedFriendsGameInstance)


#define GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_PRIVATE_PROPERTY_OFFSET
#define GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_27_PROLOG \
	GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_EVENT_PARMS


#define GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_PRIVATE_PROPERTY_OFFSET \
	GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_SPARSE_DATA \
	GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_RPC_WRAPPERS \
	GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_CALLBACK_WRAPPERS \
	GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_INCLASS \
	GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_PRIVATE_PROPERTY_OFFSET \
	GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_SPARSE_DATA \
	GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_CALLBACK_WRAPPERS \
	GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_INCLASS_NO_PURE_DECLS \
	GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UAdvancedFriendsGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GroupB_Productions_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
