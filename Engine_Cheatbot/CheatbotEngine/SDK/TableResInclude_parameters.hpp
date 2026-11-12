#pragma once

#ifndef _MSC_VER
#ifdef __cplusplus
#define __forceinline inline
#else
#define __forceinline
#endif
#endif

// PUBG (4.3.0) Created by @JokerRepo and for pattern @enen
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TableResInclude.EvoBaseMapUIMarkTableMap.TraversTable
struct UEvoBaseMapUIMarkTableMap_TraversTable_Params
{
	class UUAEDataTable*                               TableData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TableResInclude.EvoBaseModTableTestTableMap.TraversTable
struct UEvoBaseModTableTestTableMap_TraversTable_Params
{
	class UUAEDataTable*                               TableData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

