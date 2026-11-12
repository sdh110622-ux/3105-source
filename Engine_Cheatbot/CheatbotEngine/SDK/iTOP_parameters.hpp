#pragma once

#ifndef _MSC_VER
#ifdef __cplusplus
#define __forceinline inline
#else
#define __forceinline
#endif
#endif

// PUBG (4.3.0) Created by @JokerRepo and for pattern @enen
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function iTOP.FBHelper.DelayToSetAutoInitFacebookLog
struct UFBHelper_DelayToSetAutoInitFacebookLog_Params
{
	bool                                               IsAutoInit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function iTOP.FBHelper.DelayToInitFacebookSDK
struct UFBHelper_DelayToInitFacebookSDK_Params
{
	bool                                               IsAutoInit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WithLaunchOption;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

}

