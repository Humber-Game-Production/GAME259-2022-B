// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPFriendInfo;
class UObject;
class APlayerController;
class UGetFriendsCallbackProxy;
#ifdef ADVANCEDSESSIONS_GetFriendsCallbackProxy_generated_h
#error "GetFriendsCallbackProxy.generated.h already included, missing '#pragma once' in GetFriendsCallbackProxy.h"
#endif
#define ADVANCEDSESSIONS_GetFriendsCallbackProxy_generated_h

#define GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_11_DELEGATE \
struct _Script_AdvancedSessions_eventBlueprintGetFriendsListDelegate_Parms \
{ \
	TArray<FBPFriendInfo> Results; \
}; \
static inline void FBlueprintGetFriendsListDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGetFriendsListDelegate, TArray<FBPFriendInfo> const& Results) \
{ \
	_Script_AdvancedSessions_eventBlueprintGetFriendsListDelegate_Parms Parms; \
	Parms.Results=Results; \
	BlueprintGetFriendsListDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_SPARSE_DATA
#define GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAndStoreFriendsList);


#define GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAndStoreFriendsList);


#define GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetFriendsCallbackProxy(); \
	friend struct Z_Construct_UClass_UGetFriendsCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UGetFriendsCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UGetFriendsCallbackProxy)


#define GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGetFriendsCallbackProxy(); \
	friend struct Z_Construct_UClass_UGetFriendsCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UGetFriendsCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UGetFriendsCallbackProxy)


#define GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UGetFriendsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetFriendsCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UGetFriendsCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetFriendsCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UGetFriendsCallbackProxy(UGetFriendsCallbackProxy&&); \
	ADVANCEDSESSIONS_API UGetFriendsCallbackProxy(const UGetFriendsCallbackProxy&); \
public:


#define GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UGetFriendsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UGetFriendsCallbackProxy(UGetFriendsCallbackProxy&&); \
	ADVANCEDSESSIONS_API UGetFriendsCallbackProxy(const UGetFriendsCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UGetFriendsCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetFriendsCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetFriendsCallbackProxy)


#define GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET
#define GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_13_PROLOG
#define GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_SPARSE_DATA \
	GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_RPC_WRAPPERS \
	GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_INCLASS \
	GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_SPARSE_DATA \
	GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
	GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GetFriendsCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UGetFriendsCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GroupB_Productions_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
