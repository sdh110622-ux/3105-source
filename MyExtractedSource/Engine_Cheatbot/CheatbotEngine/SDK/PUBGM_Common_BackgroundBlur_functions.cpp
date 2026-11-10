// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
#include "../SDK.hpp"

namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_BackgroundBlur.Common_BackgroundBlur_C.Construct
// ()

void UCommon_BackgroundBlur_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_BackgroundBlur.Common_BackgroundBlur_C.Construct");

	UCommon_BackgroundBlur_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_BackgroundBlur.Common_BackgroundBlur_C.ExecuteUbergraph_Common_BackgroundBlur
// (Event, NetResponse, Static, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_BackgroundBlur_C::STATIC_ExecuteUbergraph_Common_BackgroundBlur(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_BackgroundBlur.Common_BackgroundBlur_C.ExecuteUbergraph_Common_BackgroundBlur");

	UCommon_BackgroundBlur_C_ExecuteUbergraph_Common_BackgroundBlur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

