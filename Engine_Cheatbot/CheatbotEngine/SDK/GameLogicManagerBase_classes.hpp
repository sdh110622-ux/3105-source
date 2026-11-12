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

// BlueprintGeneratedClass GameLogicManagerBase.GameLogicManagerBase_C
// 0x0000 (0x0180 - 0x0180)
class UGameLogicManagerBase_C : public UGameBusinessManager
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass GameLogicManagerBase.GameLogicManagerBase_C");
		return pStaticClass;
	}

};


}

