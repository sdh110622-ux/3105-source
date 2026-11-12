// PUBG (4.3.0) Created by @JokerRepo and for pattern @enen
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetImagePixelSize
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 sPath                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetImagePixelSize(const struct FString& sPath, class UObject* __WorldContext, int* Width, int* Height)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetImagePixelSize");

	UGlobalUIFunctionLibrary_C_GetImagePixelSize_Params params;
	params.sPath = sPath;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyCorpsIcon
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IconID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetLobbyCorpsIcon(int IconID, class UObject* __WorldContext, class UTexture2D** Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyCorpsIcon");

	UGlobalUIFunctionLibrary_C_GetLobbyCorpsIcon_Params params;
	params.IconID = IconID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsAsyncSetTexture
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAsync                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsAsyncSetTexture(class UObject* __WorldContext, bool* IsAsync)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsAsyncSetTexture");

	UGlobalUIFunctionLibrary_C_IsAsyncSetTexture_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsAsync != nullptr)
		*IsAsync = params.IsAsync;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetArenaWeaponLightProperty
// (Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetArenaWeaponLightProperty(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetArenaWeaponLightProperty");

	UGlobalUIFunctionLibrary_C_SetArenaWeaponLightProperty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetLobbyDefaultLightProperty
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetLobbyDefaultLightProperty(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetLobbyDefaultLightProperty");

	UGlobalUIFunctionLibrary_C_SetLobbyDefaultLightProperty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchLobbyMeshBg
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BgIdx                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SwitchLobbyMeshBg(int BgIdx, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchLobbyMeshBg");

	UGlobalUIFunctionLibrary_C_SwitchLobbyMeshBg_Params params;
	params.BgIdx = BgIdx;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.AddOrUpdateBlendable
// (Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        CameraComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* MIDynamic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendWeight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::AddOrUpdateBlendable(class UCameraComponent* CameraComponent, class UMaterialInstanceDynamic* MIDynamic, float BlendWeight, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.AddOrUpdateBlendable");

	UGlobalUIFunctionLibrary_C_AddOrUpdateBlendable_Params params;
	params.CameraComponent = CameraComponent;
	params.MIDynamic = MIDynamic;
	params.BlendWeight = BlendWeight;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ProcessAndroidBack
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::ProcessAndroidBack(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ProcessAndroidBack");

	UGlobalUIFunctionLibrary_C_ProcessAndroidBack_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSpecialIconWithSprite2DMatchSize
// (NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 specialIconPath                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetSpecialIconWithSprite2DMatchSize(class UImage* Widget, const struct FString& specialIconPath, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSpecialIconWithSprite2DMatchSize");

	UGlobalUIFunctionLibrary_C_SetSpecialIconWithSprite2DMatchSize_Params params;
	params.Widget = Widget;
	params.specialIconPath = specialIconPath;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTableRow
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_Item_type    Item                           (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::STATIC_GetItemTableRow(int ID, class UObject* __WorldContext, struct FBP_STRUCT_Item_type* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTableRow");

	UGlobalUIFunctionLibrary_C_GetItemTableRow_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SecondsToMMSS
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FormatTime                     (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::STATIC_SecondsToMMSS(int Seconds, class UObject* __WorldContext, struct FString* FormatTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SecondsToMMSS");

	UGlobalUIFunctionLibrary_C_SecondsToMMSS_Params params;
	params.Seconds = Seconds;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FormatTime != nullptr)
		*FormatTime = params.FormatTime;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundPopup
// (NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::PlaySoundPopup(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundPopup");

	UGlobalUIFunctionLibrary_C_PlaySoundPopup_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundTab
// (NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::PlaySoundTab(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundTab");

	UGlobalUIFunctionLibrary_C_PlaySoundTab_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetUIRectOffset
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Left                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Right                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetUIRectOffset(class UObject* __WorldContext, int* Left, int* Right)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetUIRectOffset");

	UGlobalUIFunctionLibrary_C_GetUIRectOffset_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Left != nullptr)
		*Left = params.Left;
	if (Right != nullptr)
		*Right = params.Right;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeSubType
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameModeSubType               InSubType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsConfigGameModeSubType(EGameModeSubType InSubType, class UObject* Context, class UObject* __WorldContext, bool* res)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeSubType");

	UGlobalUIFunctionLibrary_C_IsConfigGameModeSubType_Params params;
	params.InSubType = InSubType;
	params.Context = Context;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeType
// (NetRequest, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameModeType                  InGameModeType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsConfigGameModeType(EGameModeType InGameModeType, class UObject* Context, class UObject* __WorldContext, bool* res)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeType");

	UGlobalUIFunctionLibrary_C_IsConfigGameModeType_Params params;
	params.InGameModeType = InGameModeType;
	params.Context = Context;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalLuaUI
// (Exec, Native, Event, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGlobalLuaWidget_C*      AsGlobal_Lua_Widget            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetGlobalLuaUI(class UObject* WorldContextObject, class UObject* __WorldContext, class UGlobalLuaWidget_C** AsGlobal_Lua_Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalLuaUI");

	UGlobalUIFunctionLibrary_C_GetGlobalLuaUI_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AsGlobal_Lua_Widget != nullptr)
		*AsGlobal_Lua_Widget = params.AsGlobal_Lua_Widget;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetVector4
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          W                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          H                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector4                Vector                         (Parm, OutParm, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetVector4(float X, float Y, float W, float H, class UObject* __WorldContext, struct FVector4* Vector)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetVector4");

	UGlobalUIFunctionLibrary_C_GetVector4_Params params;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Vector != nullptr)
		*Vector = params.Vector;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InitAmmoDropBox
// (NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          MeshComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LOD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::InitAmmoDropBox(class UMeshComponent* MeshComponent, int LOD, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InitAmmoDropBox");

	UGlobalUIFunctionLibrary_C_InitAmmoDropBox_Params params;
	params.MeshComponent = MeshComponent;
	params.LOD = LOD;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralBigIcon
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGlobalUIFunctionLibrary_C::STATIC_GetRankIntegralBigIcon(const struct FString& Icon, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralBigIcon");

	UGlobalUIFunctionLibrary_C_GetRankIntegralBigIcon_Params params;
	params.Icon = Icon;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSmallIcon
// (Net, Exec, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGlobalUIFunctionLibrary_C::STATIC_GetRankIntegralSmallIcon(const struct FString& Icon, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSmallIcon");

	UGlobalUIFunctionLibrary_C_GetRankIntegralSmallIcon_Params params;
	params.Icon = Icon;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSubIcon
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGlobalUIFunctionLibrary_C::STATIC_GetRankIntegralSubIcon(const struct FString& Icon, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSubIcon");

	UGlobalUIFunctionLibrary_C_GetRankIntegralSubIcon_Params params;
	params.Icon = Icon;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetRankInteral
// (Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_STRUCT_RankIntegralLevel_type RankIntegralLevelInfo          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UImage*                  ImageIcon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextBlock_Rank                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCanvasPanel*            Canvas_Panel_Star              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Image_Star                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextBlock_Star                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSegmentStarOpen              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Image_Quality                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  vx_Image_Quality               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetRankInteral(const struct FBP_STRUCT_RankIntegralLevel_type& RankIntegralLevelInfo, class UImage* ImageIcon, class UTextBlock* TextBlock_Rank, class UCanvasPanel* Canvas_Panel_Star, class UImage* Image_Star, class UTextBlock* TextBlock_Star, bool isSegmentStarOpen, class UImage* Image_Quality, class UImage* vx_Image_Quality, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetRankInteral");

	UGlobalUIFunctionLibrary_C_SetRankInteral_Params params;
	params.RankIntegralLevelInfo = RankIntegralLevelInfo;
	params.ImageIcon = ImageIcon;
	params.TextBlock_Rank = TextBlock_Rank;
	params.Canvas_Panel_Star = Canvas_Panel_Star;
	params.Image_Star = Image_Star;
	params.TextBlock_Star = TextBlock_Star;
	params.isSegmentStarOpen = isSegmentStarOpen;
	params.Image_Quality = Image_Quality;
	params.vx_Image_Quality = vx_Image_Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageFromPath
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IconPath                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetImageFromPath(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageFromPath");

	UGlobalUIFunctionLibrary_C_SetImageFromPath_Params params;
	params.Image = Image;
	params.IconPath = IconPath;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBrushFromSprite
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 Path                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             Result                         (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::GetBrushFromSprite(const struct FSlateBrush& Brush, const struct FString& Path, class UObject* __WorldContext, struct FSlateBrush* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBrushFromSprite");

	UGlobalUIFunctionLibrary_C_GetBrushFromSprite_Params params;
	params.Brush = Brush;
	params.Path = Path;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.LoadSprite
// (Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IconPath                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::LoadSprite(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.LoadSprite");

	UGlobalUIFunctionLibrary_C_LoadSprite_Params params;
	params.Image = Image;
	params.IconPath = IconPath;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetXieQualityPath
// (NetRequest, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::STATIC_GetXieQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetXieQualityPath");

	UGlobalUIFunctionLibrary_C_GetXieQualityPath_Params params;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBgQualityPath
// (NetReliable, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::STATIC_GetBgQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBgQualityPath");

	UGlobalUIFunctionLibrary_C_GetBgQualityPath_Params params;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetQualityPath
// (Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::STATIC_GetQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetQualityPath");

	UGlobalUIFunctionLibrary_C_GetQualityPath_Params params;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCornerQuality
// (NetResponse, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetCornerQuality(class UImage* Image, int Quality, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCornerQuality");

	UGlobalUIFunctionLibrary_C_SetCornerQuality_Params params;
	params.Image = Image;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPingColor
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ms                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetPingColor(float ms, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPingColor");

	UGlobalUIFunctionLibrary_C_GetPingColor_Params params;
	params.ms = ms;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImgWithPath
// (Exec, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  ImgRef                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 imgPath                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsMatchSize                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SetImgWithPath(class UImage* ImgRef, const struct FString& imgPath, bool IsMatchSize, class UObject* __WorldContext, bool* Success)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImgWithPath");

	UGlobalUIFunctionLibrary_C_SetImgWithPath_Params params;
	params.ImgRef = ImgRef;
	params.imgPath = imgPath;
	params.IsMatchSize = IsMatchSize;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemName
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           chineseSensity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutName                        (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetItemName(const struct FString& Name, int Length, bool chineseSensity, class UObject* __WorldContext, struct FString* OutName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemName");

	UGlobalUIFunctionLibrary_C_GetItemName_Params params;
	params.Name = Name;
	params.Length = Length;
	params.chineseSensity = chineseSensity;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutName != nullptr)
		*OutName = params.OutName;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageByPath
// (NetReliable, Exec, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::UpdateImageByPath(class UImage* Image, const struct FString& Path, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageByPath");

	UGlobalUIFunctionLibrary_C_UpdateImageByPath_Params params;
	params.Image = Image;
	params.Path = Path;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageTint
// (NetRequest, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_UpdateImageTint(class UImage* Image, const struct FLinearColor& Color, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageTint");

	UGlobalUIFunctionLibrary_C_UpdateImageTint_Params params;
	params.Image = Image;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ChangeBrushColor
// (Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             NewBrush                       (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::STATIC_ChangeBrushColor(const struct FSlateBrush& Brush, const struct FLinearColor& Color, class UObject* __WorldContext, struct FSlateBrush* NewBrush)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ChangeBrushColor");

	UGlobalUIFunctionLibrary_C_ChangeBrushColor_Params params;
	params.Brush = Brush;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewBrush != nullptr)
		*NewBrush = params.NewBrush;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetCameraMod
// (NetReliable, NetRequest, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Mod                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetCameraMod(class UObject* __WorldContext, int* Mod)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetCameraMod");

	UGlobalUIFunctionLibrary_C_GetCameraMod_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Mod != nullptr)
		*Mod = params.Mod;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetHumanLightProperty
// (NetReliable, Exec, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SetHumanLightProperty(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetHumanLightProperty");

	UGlobalUIFunctionLibrary_C_SetHumanLightProperty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetWeaponLightProperty
// (NetReliable, Native, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SetWeaponLightProperty(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetWeaponLightProperty");

	UGlobalUIFunctionLibrary_C_SetWeaponLightProperty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneSkyLightProperty
// (Net, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 lightName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTransform              Trans                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetSceneSkyLightProperty(const struct FString& lightName, const struct FTransform& Trans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneSkyLightProperty");

	UGlobalUIFunctionLibrary_C_SetSceneSkyLightProperty_Params params;
	params.lightName = lightName;
	params.Trans = Trans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetAndroidKeyIsValid
// (NetReliable, Event, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetAndroidKeyIsValid(bool bValid, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetAndroidKeyIsValid");

	UGlobalUIFunctionLibrary_C_SetAndroidKeyIsValid_Params params;
	params.bValid = bValid;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStrFormat
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            timeNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TimeStr                        (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::numToTimeStrFormat(int timeNum, class UObject* __WorldContext, struct FString* TimeStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStrFormat");

	UGlobalUIFunctionLibrary_C_numToTimeStrFormat_Params params;
	params.timeNum = timeNum;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TimeStr != nullptr)
		*TimeStr = params.TimeStr;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStr
// (Net, Exec, Native, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            timeNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TimeStr                        (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::numToTimeStr(int timeNum, class UObject* __WorldContext, struct FString* TimeStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStr");

	UGlobalUIFunctionLibrary_C_numToTimeStr_Params params;
	params.timeNum = timeNum;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TimeStr != nullptr)
		*TimeStr = params.TimeStr;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateNationImage
// (NetRequest, Event, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 RoleNation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::UpdateNationImage(class UImage* Image, const struct FString& RoleNation, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateNationImage");

	UGlobalUIFunctionLibrary_C_UpdateNationImage_Params params;
	params.Image = Image;
	params.RoleNation = RoleNation;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetScenePointLightProperty
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 lightName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTransform              targetTrans                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            inverseSquareFalloff           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetScenePointLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetScenePointLightProperty");

	UGlobalUIFunctionLibrary_C_SetScenePointLightProperty_Params params;
	params.lightName = lightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.inverseSquareFalloff = inverseSquareFalloff;
	params.Radius = Radius;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneDirectionalLightProperty
// (NetRequest, Native, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 lightName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTransform              targetTrans                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetSceneDirectionalLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneDirectionalLightProperty");

	UGlobalUIFunctionLibrary_C_SetSceneDirectionalLightProperty_Params params;
	params.lightName = lightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyGlobalBp
// (NetReliable, Exec, Event, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGlobal_Bp_C*            AsGlobal_Bp                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetLobbyGlobalBp(class UObject* __WorldContext, class UGlobal_Bp_C** AsGlobal_Bp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyGlobalBp");

	UGlobalUIFunctionLibrary_C_GetLobbyGlobalBp_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AsGlobal_Bp != nullptr)
		*AsGlobal_Bp = params.AsGlobal_Bp;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyFrameTexture
// (NetReliable, Native, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            frameLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetLobbyFrameTexture(int frameLevel, class UObject* __WorldContext, class UTexture2D** Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyFrameTexture");

	UGlobalUIFunctionLibrary_C_GetLobbyFrameTexture_Params params;
	params.frameLevel = frameLevel;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationInfo
// (Native, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NationCode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_RegionConfig_type NationInfo                     (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::GetNationInfo(const struct FString& NationCode, class UObject* __WorldContext, struct FBP_STRUCT_RegionConfig_type* NationInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationInfo");

	UGlobalUIFunctionLibrary_C_GetNationInfo_Params params;
	params.NationCode = NationCode;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NationInfo != nullptr)
		*NationInfo = params.NationInfo;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageWithSpriteRes
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ResPath                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetImageWithSpriteRes(const struct FString& ResPath, class UImage* Image, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageWithSpriteRes");

	UGlobalUIFunctionLibrary_C_SetImageWithSpriteRes_Params params;
	params.ResPath = ResPath;
	params.Image = Image;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationSwitch
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetNationSwitch(const struct FString& Name, class UObject* __WorldContext, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationSwitch");

	UGlobalUIFunctionLibrary_C_GetNationSwitch_Params params;
	params.Name = Name;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CheckIfMenuOpen
// (Exec, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MenuId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::CheckIfMenuOpen(int MenuId, class UObject* __WorldContext, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CheckIfMenuOpen");

	UGlobalUIFunctionLibrary_C_CheckIfMenuOpen_Params params;
	params.MenuId = MenuId;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS
// (Net, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            res_id                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FirstTimeNum                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 time_s                         (Parm, OutParm, ZeroConstructor)
// bool                           is_have_limit                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetItemTimeS(int res_id, int FirstTimeNum, class UObject* __WorldContext, struct FString* time_s, bool* is_have_limit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS");

	UGlobalUIFunctionLibrary_C_GetItemTimeS_Params params;
	params.res_id = res_id;
	params.FirstTimeNum = FirstTimeNum;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (time_s != nullptr)
		*time_s = params.time_s;
	if (is_have_limit != nullptr)
		*is_have_limit = params.is_have_limit;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByButton
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            validHours                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isShowCloseBtn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::ShowItemTipsByButton(int ItemId, class UButton* Button, int validHours, bool isShowCloseBtn, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByButton");

	UGlobalUIFunctionLibrary_C_ShowItemTipsByButton_Params params;
	params.ItemId = ItemId;
	params.Button = Button;
	params.validHours = validHours;
	params.isShowCloseBtn = isShowCloseBtn;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseItemTips
// (NetReliable, Native, Event, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::CloseItemTips(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseItemTips");

	UGlobalUIFunctionLibrary_C_CloseItemTips_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CreateUAEUserWidget
// (Exec, Native, NetResponse, Static, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CreateUAEUserWidget");

	UGlobalUIFunctionLibrary_C_CreateUAEUserWidget_Params params;
	params.Class = Class;
	params.Parent = Parent;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundCloseButton
// (NetReliable, NetRequest, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_PlaySoundCloseButton(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundCloseButton");

	UGlobalUIFunctionLibrary_C_PlaySoundCloseButton_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowEffect
// (Event, NetResponse, Static, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_ShowEffect(bool IsShow, class UObject* __WorldContext, TArray<class UWidget*>* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowEffect");

	UGlobalUIFunctionLibrary_C_ShowEffect_Params params;
	params.IsShow = IsShow;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWidgetVisible
// (NetReliable, Exec, NetResponse, Static, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWidgetVisible");

	UGlobalUIFunctionLibrary_C_IsWidgetVisible_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundClickButton
// (NetReliable, Exec, Native, NetResponse, Static, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_PlaySoundClickButton(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundClickButton");

	UGlobalUIFunctionLibrary_C_PlaySoundClickButton_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendBAReport
// (NetRequest, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SendBAReport(int ButtonType, int Reason, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendBAReport");

	UGlobalUIFunctionLibrary_C_SendBAReport_Params params;
	params.ButtonType = ButtonType;
	params.Reason = Reason;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWhiteSpace
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsWhiteSpace(const struct FString& Text, class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWhiteSpace");

	UGlobalUIFunctionLibrary_C_IsWhiteSpace_Params params;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetTextLength
// (Net, Exec, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           chineseSensity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetTextLength(const struct FString& Text, bool chineseSensity, class UObject* __WorldContext, int* Length)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetTextLength");

	UGlobalUIFunctionLibrary_C_GetTextLength_Params params;
	params.Text = Text;
	params.chineseSensity = chineseSensity;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.BoolToVisible
// (NetRequest, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           collapse                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isButton                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               Visibility                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_BoolToVisible(bool Visible, bool collapse, bool isButton, class UObject* __WorldContext, ESlateVisibility* Visibility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.BoolToVisible");

	UGlobalUIFunctionLibrary_C_BoolToVisible_Params params;
	params.Visible = Visible;
	params.collapse = collapse;
	params.isButton = isButton;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Visibility != nullptr)
		*Visibility = params.Visibility;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsEnglish
// (NetReliable, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsEnglish(const struct FString& Text, class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsEnglish");

	UGlobalUIFunctionLibrary_C_IsEnglish_Params params;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalData
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Abp_global_C*            globalObj                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetGlobalData(class UObject* __WorldContext, class Abp_global_C** globalObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalData");

	UGlobalUIFunctionLibrary_C_GetGlobalData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (globalObj != nullptr)
		*globalObj = params.globalObj;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLocalizeString
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 string1                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 string2                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 string3                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TextValue                      (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetLocalizeString(int ID, const struct FString& string1, const struct FString& string2, const struct FString& string3, class UObject* __WorldContext, struct FString* TextValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLocalizeString");

	UGlobalUIFunctionLibrary_C_GetLocalizeString_Params params;
	params.ID = ID;
	params.string1 = string1;
	params.string2 = string2;
	params.string3 = string3;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TextValue != nullptr)
		*TextValue = params.TextValue;
}


}

