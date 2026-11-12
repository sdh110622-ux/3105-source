#pragma once

#ifndef _MSC_VER
#ifdef __cplusplus
#define __forceinline inline
#else
#define __forceinline
#endif
#endif

// PUBG (4.3.0) Created by @JokerRepo and for pattern @enen
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Editor_login.Editor_login_C
// 0x0008 (0x04B8 - 0x04B0)
class AEditor_login_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass Editor_login.Editor_login_C");
		return pStaticClass;
	}


	void STATIC_SetFpsByIndex(int idx);
	void STATIC_InpActEvt_Android_Back_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void STATIC_InpActEvt_E_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void STATIC_InpActEvt_BackSpace_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void STATIC_InpActEvt_B_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void STATIC_InpActEvt_G_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void STATIC_InpActEvt_N_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Editor_login(int EntryPoint);
};


}

