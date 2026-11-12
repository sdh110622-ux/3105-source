// PUBG (4.3.0) Created by @JokerRepo and for pattern @enen
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Intl.StatManager.ReportUAStatsEvent
// ()
// Parameters:
// TArray<struct FString>         InReportChannels               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 InEventName                    (Parm, ZeroConstructor)
// TMap<struct FString, struct FString> InParams                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           InIsRealTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UStatManager::ReportUAStatsEvent(TArray<struct FString> InReportChannels, const struct FString& InEventName, TMap<struct FString, struct FString> InParams, bool InIsRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportUAStatsEvent");

	UStatManager_ReportUAStatsEvent_Params params;
	params.InReportChannels = InReportChannels;
	params.InEventName = InEventName;
	params.InParams = InParams;
	params.InIsRealTime = InIsRealTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Intl.StatManager.ReportRevenue
// ()
// Parameters:
// int                            InPurchaseEventType            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InCurrencyCode                 (Parm, ZeroConstructor)
// struct FString                 InExpense                      (Parm, ZeroConstructor)
// TMap<struct FString, struct FString> InParams                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UStatManager::ReportRevenue(int InPurchaseEventType, const struct FString& InCurrencyCode, const struct FString& InExpense, TMap<struct FString, struct FString> InParams, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportRevenue");

	UStatManager_ReportRevenue_Params params;
	params.InPurchaseEventType = InPurchaseEventType;
	params.InCurrencyCode = InCurrencyCode;
	params.InExpense = InExpense;
	params.InParams = InParams;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Intl.StatManager.ReportPurchase
// ()
// Parameters:
// int                            InPurchaseEventType            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InCurrencyCode                 (Parm, ZeroConstructor)
// struct FString                 InExpense                      (Parm, ZeroConstructor)
// bool                           isRealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatManager::ReportPurchase(int InPurchaseEventType, const struct FString& InCurrencyCode, const struct FString& InExpense, bool isRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportPurchase");

	UStatManager_ReportPurchase_Params params;
	params.InPurchaseEventType = InPurchaseEventType;
	params.InCurrencyCode = InCurrencyCode;
	params.InExpense = InExpense;
	params.isRealTime = isRealTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Intl.StatManager.ReportEventWithString
// ()
// Parameters:
// int                            EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 _eventBody                     (Parm, ZeroConstructor)
// bool                           isRealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatManager::ReportEventWithString(int EventType, const struct FString& _eventBody, bool isRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportEventWithString");

	UStatManager_ReportEventWithString_Params params;
	params.EventType = EventType;
	params._eventBody = _eventBody;
	params.isRealTime = isRealTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Intl.StatManager.ReportEventWithParam
// ()
// Parameters:
// int                            EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FString, struct FString> _params                        (Parm, ZeroConstructor)
// bool                           isRealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatManager::ReportEventWithParam(int EventType, TMap<struct FString, struct FString> _params, bool isRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportEventWithParam");

	UStatManager_ReportEventWithParam_Params params;
	params.EventType = EventType;
	params._params = _params;
	params.isRealTime = isRealTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Intl.StatManager.ReportEventWithNoParam
// ()
// Parameters:
// int                            EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isRealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatManager::ReportEventWithNoParam(int EventType, bool isRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportEventWithNoParam");

	UStatManager_ReportEventWithNoParam_Params params;
	params.EventType = EventType;
	params.isRealTime = isRealTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Intl.StatManager.GetInstance
// ()
// Parameters:
// class UStatManager*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStatManager* UStatManager::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.GetInstance");

	UStatManager_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

