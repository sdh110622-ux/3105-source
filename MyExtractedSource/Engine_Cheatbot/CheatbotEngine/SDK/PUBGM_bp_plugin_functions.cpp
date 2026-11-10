// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
#include "../SDK.hpp"

namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginSendEvent
// ()
// Parameters:
// struct FString                 jsonEventCmd                   (Parm, ZeroConstructor)

void Ubp_pluginBPLibrary::bp_pluginSendEvent(const struct FString& jsonEventCmd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginSendEvent");

	Ubp_pluginBPLibrary_bp_pluginSendEvent_Params params;
	params.jsonEventCmd = jsonEventCmd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_plugin.bp_pluginBPLibrary.bp_pluginLaunchMeemoFunction
// ()
// Parameters:
// struct FString                 Param                          (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Ubp_pluginBPLibrary::bp_pluginLaunchMeemoFunction(const struct FString& Param)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginLaunchMeemoFunction");

	Ubp_pluginBPLibrary_bp_pluginLaunchMeemoFunction_Params params;
	params.Param = Param;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bp_plugin.bp_pluginBPLibrary.bp_pluginIsInForeground
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubp_pluginBPLibrary::bp_pluginIsInForeground()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginIsInForeground");

	Ubp_pluginBPLibrary_bp_pluginIsInForeground_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bp_plugin.bp_pluginBPLibrary.bp_pluginGetInstalledWidgetType
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int Ubp_pluginBPLibrary::bp_pluginGetInstalledWidgetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginGetInstalledWidgetType");

	Ubp_pluginBPLibrary_bp_pluginGetInstalledWidgetType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

