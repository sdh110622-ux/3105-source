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

// Function GlobalLuaWidget.GlobalLuaWidget_C.GetNewLevelTaskData
struct UGlobalLuaWidget_C_GetNewLevelTaskData_Params
{
	struct FString                                     TaskID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Has;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_NewLevelTask_type                BP_STRUCT_NewLevelTask_type;                              // (Parm, OutParm)
};

}

