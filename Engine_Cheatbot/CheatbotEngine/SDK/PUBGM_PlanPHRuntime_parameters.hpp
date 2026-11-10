#pragma once

// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
#include "../SDK.hpp"

namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlanPHRuntime.BinFileHelper.Init
struct UBinFileHelper_Init_Params
{
	int                                                z4BufferSize;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                zeroListSize;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanPHRuntime.MapBarrierWidget.SetMapSize
struct UMapBarrierWidget_SetMapSize_Params
{
	struct FVector2D                                   InMapSize;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function PlanPHRuntime.MapBarrierWidget.SetMapBarrierData
struct UMapBarrierWidget_SetMapBarrierData_Params
{
	TArray<struct FBarrierData>                        InMapBarrierData;                                         // (ConstParm, Parm, ZeroConstructor)
};

// Function PlanPHRuntime.MapBarrierWidget.SetLevelBoundExtent
struct UMapBarrierWidget_SetLevelBoundExtent_Params
{
	int                                                InLevelBoundExtent;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.MapBarrierWidget.SetGridSize
struct UMapBarrierWidget_SetGridSize_Params
{
	float                                              InGridSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.MapBarrierWidget.SetDecorationData
struct UMapBarrierWidget_SetDecorationData_Params
{
	TArray<struct FDecorationData>                     InMapDecorationData;                                      // (Parm, ZeroConstructor)
};

// Function PlanPHRuntime.PlanPH_GameMode.HandleNavigationInfo
struct APlanPH_GameMode_HandleNavigationInfo_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPH_GameMode.GetPlayerStart
struct APlanPH_GameMode_GetPlayerStart_Params
{
	int                                                LandId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerStart*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPH_GameMode.DSPlayerKickOut
struct APlanPH_GameMode_DSPlayerKickOut_Params
{
	uint64_t                                           UID;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ExitReason;                                               // (Parm, ZeroConstructor)
};

// Function PlanPHRuntime.PlanPH_PlayerState.OnRep_LandId
struct APlanPH_PlayerState_OnRep_LandId_Params
{
};

// Function PlanPHRuntime.PlanPH_PlayerState.InitLandId
struct APlanPH_PlayerState_InitLandId_Params
{
};

// Function PlanPHRuntime.PlanPHDoor.Refresh_DoorCollisionChanel
struct APlanPHDoor_Refresh_DoorCollisionChanel_Params
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEnableCollision;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHDoor.DoorAniFinish
struct APlanPHDoor_DoorAniFinish_Params
{
	class UStaticMeshComponent*                        InDoorCheckBox;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Bright;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHGameplayStatics.ChangeLightChannel
struct UPlanPHGameplayStatics_ChangeLightChannel_Params
{
	class UPrimitiveComponent*                         InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InChannelBitMask;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHHomeArea.UpdateEditableArea
struct APlanPHHomeArea_UpdateEditableArea_Params
{
	struct FIntVector                                  InMinGridIndexXYZ;                                        // (Parm, IsPlainOldData)
	struct FIntVector                                  InMaxGridIndexXYZ;                                        // (Parm, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHHomeAreaVisualizationComponent.ShowGrids
struct UPlanPHHomeAreaVisualizationComponent_ShowGrids_Params
{
	bool                                               InBShow;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHMapData.RemovePlayerItem
struct UPlanPHMapData_RemovePlayerItem_Params
{
	class ASTExtraPlayerCharacter*                     PlayerCharacterItem;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHMapData.AddPlayerItem
struct UPlanPHMapData_AddPlayerItem_Params
{
	class ASTExtraPlayerCharacter*                     PlayerCharacterItem;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     PlayerInfoBPItem;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     PlayerInfoRotWidgetItem;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     OffsetLocation;                                           // (ConstParm, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHSpectatorPawn.OnSpectatorRestart
struct APlanPHSpectatorPawn_OnSpectatorRestart_Params
{
};

// Function PlanPHRuntime.PlanPHSpectatorPawn.MoveRight
struct APlanPHSpectatorPawn_MoveRight_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanPHRuntime.PlanPHSpectatorPawn.MoveForward
struct APlanPHSpectatorPawn_MoveForward_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

