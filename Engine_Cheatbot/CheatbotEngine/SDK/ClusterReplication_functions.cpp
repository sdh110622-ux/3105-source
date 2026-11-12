// PUBG (4.3.0) Created by @JokerRepo and for pattern @enen
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ClusterReplication.ClusterReplicationSubsystem.SetAutoClearCache
// ()
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UClusterReplicationSubsystem::SetAutoClearCache(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClusterReplication.ClusterReplicationSubsystem.SetAutoClearCache");

	UClusterReplicationSubsystem_SetAutoClearCache_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClusterReplication.ClusterReplicationSubsystem.SetAutoCache
// ()
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UClusterReplicationSubsystem::SetAutoCache(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClusterReplication.ClusterReplicationSubsystem.SetAutoCache");

	UClusterReplicationSubsystem_SetAutoCache_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClusterReplication.ClusterReplicationSubsystem.RemoveAllCachedObjectData
// ()

void UClusterReplicationSubsystem::RemoveAllCachedObjectData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClusterReplication.ClusterReplicationSubsystem.RemoveAllCachedObjectData");

	UClusterReplicationSubsystem_RemoveAllCachedObjectData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

