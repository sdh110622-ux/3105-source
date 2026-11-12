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
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KantanChartsDatasource.KantanCartesianDatapoint
// 0x0008
struct FKantanCartesianDatapoint
{
	struct FVector2D                                   Coords;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

}

