#pragma once

// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
#include "../SDK.hpp"

namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CableComponent.CableComponent.SetAttachEndTo
struct UCableComponent_SetAttachEndTo_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ComponentProperty;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CableComponent.CableComponent.GetCableParticleLocations
struct UCableComponent_GetCableParticleLocations_Params
{
	TArray<struct FVector>                             Locations;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function CableComponent.CableComponent.GetAttachedComponent
struct UCableComponent_GetAttachedComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CableComponent.CableComponent.GetAttachedActor
struct UCableComponent_GetAttachedActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

