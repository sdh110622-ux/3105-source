// PUBG (4.3.0) Created by @JokerRepo and for pattern @enen
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Global_Bp.Global_Bp_C.InitOBSettingData
// (NetRequest, Native, MulticastDelegate, Public, Private, NetServer, HasOutParms, BlueprintPure)
// Parameters:
// class USettingConfig_C*        ServerSettingConfig            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::InitOBSettingData(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitOBSettingData");

	UGlobal_Bp_C_InitOBSettingData_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.InitCustomizeSettingData
// (Exec, MulticastDelegate, Public, Private, NetServer, HasOutParms, BlueprintPure)
// Parameters:
// class USettingConfig_C*        ServerSettingConfig            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::InitCustomizeSettingData(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitCustomizeSettingData");

	UGlobal_Bp_C_InitCustomizeSettingData_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.InitFireGyroSensibilitySettingData
// (NetReliable, NetRequest, MulticastDelegate, Public, Private, NetServer, HasOutParms, BlueprintPure)
// Parameters:
// class USettingConfig_C*        ServerSettingConfig            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::InitFireGyroSensibilitySettingData(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitFireGyroSensibilitySettingData");

	UGlobal_Bp_C_InitFireGyroSensibilitySettingData_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.MapFromCBToESBH
// (NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable)
// Parameters:
// class USettingConfig_C*        SettingConfig                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::STATIC_MapFromCBToESBH(class USettingConfig_C* SettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.MapFromCBToESBH");

	UGlobal_Bp_C_MapFromCBToESBH_Params params;
	params.SettingConfig = SettingConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.InitMirrorObjMapPickupSetting
// (NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable)
// Parameters:
// class USettingConfig_C*        ServerSettingConfig            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::STATIC_InitMirrorObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitMirrorObjMapPickupSetting");

	UGlobal_Bp_C_InitMirrorObjMapPickupSetting_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.InitThrowObjMapPickupSetting
// (NetReliable, Exec, Native, Event, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable)
// Parameters:
// class USettingConfig_C*        ServerSettingConfig            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::STATIC_InitThrowObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitThrowObjMapPickupSetting");

	UGlobal_Bp_C_InitThrowObjMapPickupSetting_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.InitDrugMapPickupSetting
// (NetReliable, Native, Event, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable)
// Parameters:
// class USettingConfig_C*        ServerSettingConfig            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::STATIC_InitDrugMapPickupSetting(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitDrugMapPickupSetting");

	UGlobal_Bp_C_InitDrugMapPickupSetting_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.InitBasicSettingData
// (NetRequest, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable)
// Parameters:
// class USettingConfig_C*        ServerSettingConfig            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::InitBasicSettingData(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitBasicSettingData");

	UGlobal_Bp_C_InitBasicSettingData_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.InitPickupSettingData_XT
// (NetReliable, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable)
// Parameters:
// class USettingConfig_C*        SettingConfig                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::InitPickupSettingData_XT(class USettingConfig_C* SettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitPickupSettingData_XT");

	UGlobal_Bp_C_InitPickupSettingData_XT_Params params;
	params.SettingConfig = SettingConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.InitPickupSettingData
// (NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable)
// Parameters:
// class USettingConfig_C*        ServerSettingConfig            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::InitPickupSettingData(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitPickupSettingData");

	UGlobal_Bp_C_InitPickupSettingData_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.InitSensibilitySettingData
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable)
// Parameters:
// class USettingConfig_C*        ServerSettingConfig            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::InitSensibilitySettingData(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitSensibilitySettingData");

	UGlobal_Bp_C_InitSensibilitySettingData_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.SetGrenadeDefaultPickValue
// (Net, Exec, Event, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::SetGrenadeDefaultPickValue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SetGrenadeDefaultPickValue");

	UGlobal_Bp_C_SetGrenadeDefaultPickValue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.InitMapFromCBToES
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable)

void UGlobal_Bp_C::InitMapFromCBToES()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitMapFromCBToES");

	UGlobal_Bp_C_InitMapFromCBToES_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.MapFromCBToESGlobal
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Delegate, BlueprintEvent)
// Parameters:
// class USettingConfig_C*        SettingConfig                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::STATIC_MapFromCBToESGlobal(class USettingConfig_C* SettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.MapFromCBToESGlobal");

	UGlobal_Bp_C_MapFromCBToESGlobal_Params params;
	params.SettingConfig = SettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.MapFromCBToESJK
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Delegate, BlueprintEvent)
// Parameters:
// class USettingConfig_C*        SettingConfig                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::STATIC_MapFromCBToESJK(class USettingConfig_C* SettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.MapFromCBToESJK");

	UGlobal_Bp_C_MapFromCBToESJK_Params params;
	params.SettingConfig = SettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.MapFromCBToESVN
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Delegate, BlueprintEvent)
// Parameters:
// class USettingConfig_C*        SettingConfig                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::STATIC_MapFromCBToESVN(class USettingConfig_C* SettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.MapFromCBToESVN");

	UGlobal_Bp_C_MapFromCBToESVN_Params params;
	params.SettingConfig = SettingConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.LoadSettingConfigFromSlot
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, BlueprintEvent)

void UGlobal_Bp_C::STATIC_LoadSettingConfigFromSlot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.LoadSettingConfigFromSlot");

	UGlobal_Bp_C_LoadSettingConfigFromSlot_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.SetPostProcessSettings
// (Net, NetRequest, Event, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isReverse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isClosing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::SetPostProcessSettings(int ID, float Time, bool isReverse, bool isClosing)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SetPostProcessSettings");

	UGlobal_Bp_C_SetPostProcessSettings_Params params;
	params.ID = ID;
	params.Time = Time;
	params.isReverse = isReverse;
	params.isClosing = isClosing;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.EventAndroidQuitGame
// (NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Delegate, BlueprintEvent)

void UGlobal_Bp_C::STATIC_EventAndroidQuitGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.EventAndroidQuitGame");

	UGlobal_Bp_C_EventAndroidQuitGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.Construct
// ()

void UGlobal_Bp_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.Construct");

	UGlobal_Bp_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.ExecuteUbergraph_Global_Bp
// (NetRequest, Exec, Event, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::ExecuteUbergraph_Global_Bp(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.ExecuteUbergraph_Global_Bp");

	UGlobal_Bp_C_ExecuteUbergraph_Global_Bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

