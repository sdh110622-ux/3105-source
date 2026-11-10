#pragma once

// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
#include "../SDK.hpp"

namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Intl.StatManager.ReportEventWithString
struct UStatManager_ReportEventWithString_Params
{
	int                                                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _eventBody;                                               // (Parm, ZeroConstructor)
	bool                                               isRealTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Intl.StatManager.ReportEventWithParam
struct UStatManager_ReportEventWithParam_Params
{
	int                                                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               _params;                                                  // (Parm, ZeroConstructor)
	bool                                               isRealTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Intl.StatManager.ReportEventWithNoParam
struct UStatManager_ReportEventWithNoParam_Params
{
	int                                                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isRealTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Intl.StatManager.GetInstance
struct UStatManager_GetInstance_Params
{
	class UStatManager*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

