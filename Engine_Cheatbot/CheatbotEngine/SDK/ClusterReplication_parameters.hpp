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

// Function ClusterReplication.ClusterReplicationSubsystem.SetAutoClearCache
struct UClusterReplicationSubsystem_SetAutoClearCache_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClusterReplication.ClusterReplicationSubsystem.SetAutoCache
struct UClusterReplicationSubsystem_SetAutoCache_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClusterReplication.ClusterReplicationSubsystem.RemoveAllCachedObjectData
struct UClusterReplicationSubsystem_RemoveAllCachedObjectData_Params
{
};

}

