#pragma once

// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Editor_login.Editor_login_C
// 0x0008 (0x0400 - 0x03F8)
class AEditor_login_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass Editor_login.Editor_login_C");
		return pStaticClass;
	}


	void STATIC_SetFpsByIndex(int idx);
	void STATIC_InpActEvt_Android_Back_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void STATIC_InpActEvt_E_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void STATIC_InpActEvt_BackSpace_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void STATIC_InpActEvt_B_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void STATIC_InpActEvt_G_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Editor_login(int EntryPoint);
};


}

