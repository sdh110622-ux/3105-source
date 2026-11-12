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

// Function ZLevel.ZLevelData.ReBindLevelDataComponent
struct AZLevelData_ReBindLevelDataComponent_Params
{
};

// Function ZLevel.ZLevelData.CheckMonsterSpotIsOnLand
struct AZLevelData_CheckMonsterSpotIsOnLand_Params
{
	class UZMonsterSpot*                               MonsterSpot;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UZMonsterSpotGroup*                          SpotGroup;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

