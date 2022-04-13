// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/AutoLoginUserCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoLoginUserCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAutoLoginUserCallbackProxy_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAutoLoginUserCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UAutoLoginUserCallbackProxy::execAutoLoginUser)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAutoLoginUserCallbackProxy**)Z_Param__Result=UAutoLoginUserCallbackProxy::AutoLoginUser(Z_Param_WorldContextObject,Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	void UAutoLoginUserCallbackProxy::StaticRegisterNativesUAutoLoginUserCallbackProxy()
	{
		UClass* Class = UAutoLoginUserCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoLoginUser", &UAutoLoginUserCallbackProxy::execAutoLoginUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics
	{
		struct AutoLoginUserCallbackProxy_eventAutoLoginUser_Parms
		{
			UObject* WorldContextObject;
			int32 LocalUserNum;
			UAutoLoginUserCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoLoginUserCallbackProxy_eventAutoLoginUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoLoginUserCallbackProxy_eventAutoLoginUser_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoLoginUserCallbackProxy_eventAutoLoginUser_Parms, ReturnValue), Z_Construct_UClass_UAutoLoginUserCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::NewProp_LocalUserNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedIdentity" },
		{ "Comment", "/**\n\x09 * Logs the player into the online service using parameters passed on the\n\x09 * command line. Expects -AUTH_LOGIN=<UserName> -AUTH_PASSWORD=<password>. If either\n\x09 * are missing, the function returns false and doesn't start the login\n\x09 * process\n\x09 *\n\x09 * @param LocalUserNum the controller number of the associated user\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AutoLoginUserCallbackProxy.h" },
		{ "ToolTip", "Logs the player into the online service using parameters passed on the\ncommand line. Expects -AUTH_LOGIN=<UserName> -AUTH_PASSWORD=<password>. If either\nare missing, the function returns false and doesn't start the login\nprocess\n\n@param LocalUserNum the controller number of the associated user" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoLoginUserCallbackProxy, nullptr, "AutoLoginUser", nullptr, nullptr, sizeof(AutoLoginUserCallbackProxy_eventAutoLoginUser_Parms), Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAutoLoginUserCallbackProxy_NoRegister()
	{
		return UAutoLoginUserCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser, "AutoLoginUser" }, // 3132882576
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutoLoginUserCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/AutoLoginUserCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful destroy\n" },
		{ "ModuleRelativePath", "Classes/AutoLoginUserCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful destroy" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoLoginUserCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful destroy\n" },
		{ "ModuleRelativePath", "Classes/AutoLoginUserCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful destroy" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoLoginUserCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoLoginUserCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::ClassParams = {
		&UAutoLoginUserCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoLoginUserCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoLoginUserCallbackProxy, 2897896600);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UAutoLoginUserCallbackProxy>()
	{
		return UAutoLoginUserCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoLoginUserCallbackProxy(Z_Construct_UClass_UAutoLoginUserCallbackProxy, &UAutoLoginUserCallbackProxy::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAutoLoginUserCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoLoginUserCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
