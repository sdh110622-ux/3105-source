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

// Class PixUILog.PxLogMgr
// 0x0010 (0x0038 - 0x0028)
class UPxLogMgr : public UObject
{
public:
	struct FScriptMulticastDelegate                    LogDelegate;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUILog.PxLogMgr");
		return pStaticClass;
	}


	void PxLogToggleSwitchLevel(EPxLogLevels eLogLevel, bool beOpen);
	void PxLogToggleSwitchGroup(EPxLogGroups eLogGroup, bool beOpen);
	void PxLogToggleForceLocalOutPut(bool beOpen);
	void PxLogEnable(bool beEnable);
	class UPxLogMgr* Get();
	void DispatchLog(EPxLogGroups eLogGroup, EPxLogLevels eLogLevel, const struct FString& strLogContent);
};


}

