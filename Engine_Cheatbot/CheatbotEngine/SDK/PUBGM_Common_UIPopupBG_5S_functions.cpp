// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
#include "../SDK.hpp"

namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_UIPopupBG_5S.Common_UIPopupBG_5S_C.Construct
// ()

void UCommon_UIPopupBG_5S_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_UIPopupBG_5S.Common_UIPopupBG_5S_C.Construct");

	UCommon_UIPopupBG_5S_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_UIPopupBG_5S.Common_UIPopupBG_5S_C.ExecuteUbergraph_Common_UIPopupBG_5S
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_UIPopupBG_5S_C::STATIC_ExecuteUbergraph_Common_UIPopupBG_5S(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_UIPopupBG_5S.Common_UIPopupBG_5S_C.ExecuteUbergraph_Common_UIPopupBG_5S");

	UCommon_UIPopupBG_5S_C_ExecuteUbergraph_Common_UIPopupBG_5S_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

