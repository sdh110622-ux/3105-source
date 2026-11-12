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

// BlueprintGeneratedClass BpOverWrite.BpOverWrite_C
// 0x0000 (0x01F8 - 0x01F8)
class UBpOverWrite_C : public UBPClassManager
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BpOverWrite.BpOverWrite_C");
		return pStaticClass;
	}

};


}

