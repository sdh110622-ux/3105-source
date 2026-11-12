// PUBG (4.3.0) Created by @JokerRepo and for pattern @enen
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_UIPopupBG.Common_UIPopupBG_C.Construct
// ()

void UCommon_UIPopupBG_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_UIPopupBG.Common_UIPopupBG_C.Construct");

	UCommon_UIPopupBG_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_UIPopupBG.Common_UIPopupBG_C.ExecuteUbergraph_Common_UIPopupBG
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_UIPopupBG_C::ExecuteUbergraph_Common_UIPopupBG(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_UIPopupBG.Common_UIPopupBG_C.ExecuteUbergraph_Common_UIPopupBG");

	UCommon_UIPopupBG_C_ExecuteUbergraph_Common_UIPopupBG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

