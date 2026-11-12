// PUBG (4.3.0) Created by @JokerRepo and for pattern @enen
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadEffectItemBPTable
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadEffectItemBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadEffectItemBPTable");

	ULoadedClassManager_BP_C_LoadEffectItemBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadBPTableData
// (Net, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 tableName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadBPTableData(const struct FString& BPTableName, const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadBPTableData");

	ULoadedClassManager_BP_C_LoadBPTableData_Params params;
	params.BPTableName = BPTableName;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.Load3DIconBPTable
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_Load3DIconBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.Load3DIconBPTable");

	ULoadedClassManager_BP_C_Load3DIconBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadInFillingBPTable
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadInFillingBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadInFillingBPTable");

	ULoadedClassManager_BP_C_LoadInFillingBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehiclePropsBPTable
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadVehiclePropsBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehiclePropsBPTable");

	ULoadedClassManager_BP_C_LoadVehiclePropsBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadDecalBPTable
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadDecalBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadDecalBPTable");

	ULoadedClassManager_BP_C_LoadDecalBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadSkillPropsBPTable
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadSkillPropsBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadSkillPropsBPTable");

	ULoadedClassManager_BP_C_LoadSkillPropsBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadPetAvatarBPTable
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadPetAvatarBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadPetAvatarBPTable");

	ULoadedClassManager_BP_C_LoadPetAvatarBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehilceRefitBPTable
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadVehilceRefitBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehilceRefitBPTable");

	ULoadedClassManager_BP_C_LoadVehilceRefitBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadSeasonMissionBPTable
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadSeasonMissionBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadSeasonMissionBPTable");

	ULoadedClassManager_BP_C_LoadSeasonMissionBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadAvatarPatternBPTable
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadAvatarPatternBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadAvatarPatternBPTable");

	ULoadedClassManager_BP_C_LoadAvatarPatternBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadAvatarColorBPTable
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadAvatarColorBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadAvatarColorBPTable");

	ULoadedClassManager_BP_C_LoadAvatarColorBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehicleBPTable
// (Net, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadVehicleBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehicleBPTable");

	ULoadedClassManager_BP_C_LoadVehicleBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadPlaneBPTable
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadPlaneBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadPlaneBPTable");

	ULoadedClassManager_BP_C_LoadPlaneBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadEmoteBPTable
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadEmoteBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadEmoteBPTable");

	ULoadedClassManager_BP_C_LoadEmoteBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadConsumableBPTable
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadConsumableBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadConsumableBPTable");

	ULoadedClassManager_BP_C_LoadConsumableBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadGameModeBPTable
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadGameModeBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadGameModeBPTable");

	ULoadedClassManager_BP_C_LoadGameModeBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadAvatarBPTable
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadAvatarBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadAvatarBPTable");

	ULoadedClassManager_BP_C_LoadAvatarBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadWeaponBPTable
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadWeaponBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadWeaponBPTable");

	ULoadedClassManager_BP_C_LoadWeaponBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.InitBPTableMap
// ()

void ULoadedClassManager_BP_C::InitBPTableMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.InitBPTableMap");

	ULoadedClassManager_BP_C_InitBPTableMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.InitBPTableMap_Mod
// ()

void ULoadedClassManager_BP_C::InitBPTableMap_Mod()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.InitBPTableMap_Mod");

	ULoadedClassManager_BP_C_InitBPTableMap_Mod_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.ExecuteUbergraph_LoadedClassManager_BP
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoadedClassManager_BP_C::STATIC_ExecuteUbergraph_LoadedClassManager_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.ExecuteUbergraph_LoadedClassManager_BP");

	ULoadedClassManager_BP_C_ExecuteUbergraph_LoadedClassManager_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

