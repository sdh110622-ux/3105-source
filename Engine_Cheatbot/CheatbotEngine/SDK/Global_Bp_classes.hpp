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

// WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C
// 0x0030 (0x0448 - 0x0418)
class UGlobal_Bp_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (Transient, DuplicateTransient)
	class USettingConfig_C*                            SettingConfigObject;                                      // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Abp_global_C*                                bp_global;                                                // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isPostProcessVolumeInit;                                  // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	class APostProcessVolume*                          postProcessClassic;                                       // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACameraPostProcessActor_C*                   cameraPostProcessActor;                                   // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C");
		return pStaticClass;
	}


	void InitOBSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitCustomizeSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitFireGyroSensibilitySettingData(class USettingConfig_C* ServerSettingConfig);
	void STATIC_MapFromCBToESBH(class USettingConfig_C* SettingConfig);
	void STATIC_InitMirrorObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void STATIC_InitThrowObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void STATIC_InitDrugMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitBasicSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitPickupSettingData_XT(class USettingConfig_C* SettingConfig);
	void InitPickupSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitSensibilitySettingData(class USettingConfig_C* ServerSettingConfig);
	void SetGrenadeDefaultPickValue();
	void InitMapFromCBToES();
	void STATIC_MapFromCBToESGlobal(class USettingConfig_C* SettingConfig);
	void STATIC_MapFromCBToESJK(class USettingConfig_C* SettingConfig);
	void STATIC_MapFromCBToESVN(class USettingConfig_C* SettingConfig);
	void STATIC_LoadSettingConfigFromSlot();
	void SetPostProcessSettings(int ID, float Time, bool isReverse, bool isClosing);
	void STATIC_EventAndroidQuitGame();
	void Construct();
	void ExecuteUbergraph_Global_Bp(int EntryPoint);
};


}

