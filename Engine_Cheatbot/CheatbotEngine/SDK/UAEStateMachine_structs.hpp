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

// ScriptStruct UAEStateMachine.UAETransitionState
// 0x0010
struct FUAETransitionState
{
	struct FString                                     StateName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct UAEStateMachine.UAEStateMachineTransition
// 0x0028
struct FUAEStateMachineTransition
{
	TArray<struct FUAETransitionState>                 TransiteFromStates;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FUAETransitionState                         TransitToState;                                           // 0x0010(0x0010) (Edit)
	float                                              AutoFiredDelayTime;                                       // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AutoFiredForcedTransit;                                   // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct UAEStateMachine.UAEStatesGather
// 0x0010
struct FUAEStatesGather
{
	TArray<class UUAEState*>                           States;                                                   // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
};

}

