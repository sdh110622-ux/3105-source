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

// Function VersionUpdate_UIBP.VersionUpdate_UIBP_C.Construct
struct UVersionUpdate_UIBP_C_Construct_Params
{
};

// Function VersionUpdate_UIBP.VersionUpdate_UIBP_C.ExecuteUbergraph_VersionUpdate_UIBP
struct UVersionUpdate_UIBP_C_ExecuteUbergraph_VersionUpdate_UIBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

