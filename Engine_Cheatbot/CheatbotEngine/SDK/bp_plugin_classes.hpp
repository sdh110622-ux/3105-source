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

// Class bp_plugin.bp_pluginBPLibrary
// 0x0000 (0x0028 - 0x0028)
class Ubp_pluginBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class bp_plugin.bp_pluginBPLibrary");
		return pStaticClass;
	}


	void bp_pluginSendEvent(const struct FString& jsonEventCmd);
	int bp_pluginRequestInstallWidget(int wigetType, const struct FString& authInfo);
	float bp_pluginLaunchMeemoFunction(const struct FString& Param);
	bool bp_pluginIsInForeground();
	int bp_pluginGetInstalledWidgetType();
};


}

