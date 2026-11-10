// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
#include "../SDK.hpp"

namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CameraPostProcessActor.CameraPostProcessActor_C.UserConstructionScript
// ()

void ACameraPostProcessActor_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CameraPostProcessActor.CameraPostProcessActor_C.UserConstructionScript");

	ACameraPostProcessActor_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CameraPostProcessActor.CameraPostProcessActor_C.Timeline_LerpPPSettings__FinishedFunc
// ()

void ACameraPostProcessActor_C::Timeline_LerpPPSettings__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CameraPostProcessActor.CameraPostProcessActor_C.Timeline_LerpPPSettings__FinishedFunc");

	ACameraPostProcessActor_C_Timeline_LerpPPSettings__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CameraPostProcessActor.CameraPostProcessActor_C.Timeline_LerpPPSettings__UpdateFunc
// ()

void ACameraPostProcessActor_C::Timeline_LerpPPSettings__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CameraPostProcessActor.CameraPostProcessActor_C.Timeline_LerpPPSettings__UpdateFunc");

	ACameraPostProcessActor_C_Timeline_LerpPPSettings__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CameraPostProcessActor.CameraPostProcessActor_C.Event LerpPostProcessSettings
// (NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, NetValidate)
// Parameters:
// class APostProcessVolume*      currentPPVolumn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_CameraPostProcessSettings_type targetPPSettingsStruct         (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isReverse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACameraPostProcessActor_C::Event_LerpPostProcessSettings(class APostProcessVolume* currentPPVolumn, const struct FBP_STRUCT_CameraPostProcessSettings_type& targetPPSettingsStruct, float Time, int ID, bool isReverse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CameraPostProcessActor.CameraPostProcessActor_C.Event LerpPostProcessSettings");

	ACameraPostProcessActor_C_Event_LerpPostProcessSettings_Params params;
	params.currentPPVolumn = currentPPVolumn;
	params.targetPPSettingsStruct = targetPPSettingsStruct;
	params.Time = Time;
	params.ID = ID;
	params.isReverse = isReverse;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CameraPostProcessActor.CameraPostProcessActor_C.ExecuteUbergraph_CameraPostProcessActor
// (Net, NetReliable, NetRequest, Event, Static, MulticastDelegate, Private, HasDefaults, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACameraPostProcessActor_C::STATIC_ExecuteUbergraph_CameraPostProcessActor(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CameraPostProcessActor.CameraPostProcessActor_C.ExecuteUbergraph_CameraPostProcessActor");

	ACameraPostProcessActor_C_ExecuteUbergraph_CameraPostProcessActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

