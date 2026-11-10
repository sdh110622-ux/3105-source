// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
#include "../SDK.hpp"

namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlanPHRuntime.BinFileHelper.Init
// ()
// Parameters:
// int                            z4BufferSize                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            zeroListSize                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBinFileHelper::Init(int z4BufferSize, int zeroListSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.BinFileHelper.Init");

	UBinFileHelper_Init_Params params;
	params.z4BufferSize = z4BufferSize;
	params.zeroListSize = zeroListSize;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.MapBarrierWidget.SetMapSize
// ()
// Parameters:
// struct FVector2D               InMapSize                      (Parm, OutParm, IsPlainOldData)

void UMapBarrierWidget::SetMapSize(struct FVector2D* InMapSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.MapBarrierWidget.SetMapSize");

	UMapBarrierWidget_SetMapSize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InMapSize != nullptr)
		*InMapSize = params.InMapSize;
}


// Function PlanPHRuntime.MapBarrierWidget.SetMapBarrierData
// ()
// Parameters:
// TArray<struct FBarrierData>    InMapBarrierData               (ConstParm, Parm, ZeroConstructor)

void UMapBarrierWidget::SetMapBarrierData(TArray<struct FBarrierData> InMapBarrierData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.MapBarrierWidget.SetMapBarrierData");

	UMapBarrierWidget_SetMapBarrierData_Params params;
	params.InMapBarrierData = InMapBarrierData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.MapBarrierWidget.SetLevelBoundExtent
// ()
// Parameters:
// int                            InLevelBoundExtent             (Parm, ZeroConstructor, IsPlainOldData)

void UMapBarrierWidget::SetLevelBoundExtent(int InLevelBoundExtent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.MapBarrierWidget.SetLevelBoundExtent");

	UMapBarrierWidget_SetLevelBoundExtent_Params params;
	params.InLevelBoundExtent = InLevelBoundExtent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.MapBarrierWidget.SetGridSize
// ()
// Parameters:
// float                          InGridSize                     (Parm, ZeroConstructor, IsPlainOldData)

void UMapBarrierWidget::SetGridSize(float InGridSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.MapBarrierWidget.SetGridSize");

	UMapBarrierWidget_SetGridSize_Params params;
	params.InGridSize = InGridSize;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.MapBarrierWidget.SetDecorationData
// ()
// Parameters:
// TArray<struct FDecorationData> InMapDecorationData            (Parm, ZeroConstructor)

void UMapBarrierWidget::SetDecorationData(TArray<struct FDecorationData> InMapDecorationData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.MapBarrierWidget.SetDecorationData");

	UMapBarrierWidget_SetDecorationData_Params params;
	params.InMapDecorationData = InMapDecorationData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_GameMode.HandleNavigationInfo
// ()
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void APlanPH_GameMode::HandleNavigationInfo(class AController* Controller)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameMode.HandleNavigationInfo");

	APlanPH_GameMode_HandleNavigationInfo_Params params;
	params.Controller = Controller;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_GameMode.GetPlayerStart
// ()
// Parameters:
// int                            LandId                         (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraPlayerStart*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraPlayerStart* APlanPH_GameMode::GetPlayerStart(int LandId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameMode.GetPlayerStart");

	APlanPH_GameMode_GetPlayerStart_Params params;
	params.LandId = LandId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.PlanPH_GameMode.DSPlayerKickOut
// ()
// Parameters:
// uint64_t                       UID                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ExitReason                     (Parm, ZeroConstructor)

void APlanPH_GameMode::DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameMode.DSPlayerKickOut");

	APlanPH_GameMode_DSPlayerKickOut_Params params;
	params.UID = UID;
	params.PlayerType = PlayerType;
	params.ExitReason = ExitReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_PlayerState.OnRep_LandId
// ()

void APlanPH_PlayerState::OnRep_LandId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_PlayerState.OnRep_LandId");

	APlanPH_PlayerState_OnRep_LandId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_PlayerState.InitLandId
// ()

void APlanPH_PlayerState::InitLandId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_PlayerState.InitLandId");

	APlanPH_PlayerState_InitLandId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHDoor.Refresh_DoorCollisionChanel
// ()
// Parameters:
// class UStaticMeshComponent*    StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bEnableCollision               (Parm, ZeroConstructor, IsPlainOldData)

void APlanPHDoor::Refresh_DoorCollisionChanel(class UStaticMeshComponent* StaticMeshComponent, bool bEnableCollision)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHDoor.Refresh_DoorCollisionChanel");

	APlanPHDoor_Refresh_DoorCollisionChanel_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.bEnableCollision = bEnableCollision;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHDoor.DoorAniFinish
// ()
// Parameters:
// class UStaticMeshComponent*    InDoorCheckBox                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Bright                         (Parm, ZeroConstructor, IsPlainOldData)

void APlanPHDoor::DoorAniFinish(class UStaticMeshComponent* InDoorCheckBox, bool Bright)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHDoor.DoorAniFinish");

	APlanPHDoor_DoorAniFinish_Params params;
	params.InDoorCheckBox = InDoorCheckBox;
	params.Bright = Bright;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHGameplayStatics.ChangeLightChannel
// ()
// Parameters:
// class UPrimitiveComponent*     InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InChannelBitMask               (Parm, ZeroConstructor, IsPlainOldData)

void UPlanPHGameplayStatics::ChangeLightChannel(class UPrimitiveComponent* InComponent, int InChannelBitMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHGameplayStatics.ChangeLightChannel");

	UPlanPHGameplayStatics_ChangeLightChannel_Params params;
	params.InComponent = InComponent;
	params.InChannelBitMask = InChannelBitMask;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHHomeArea.UpdateEditableArea
// ()
// Parameters:
// struct FIntVector              InMinGridIndexXYZ              (Parm, IsPlainOldData)
// struct FIntVector              InMaxGridIndexXYZ              (Parm, IsPlainOldData)

void APlanPHHomeArea::UpdateEditableArea(const struct FIntVector& InMinGridIndexXYZ, const struct FIntVector& InMaxGridIndexXYZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHHomeArea.UpdateEditableArea");

	APlanPHHomeArea_UpdateEditableArea_Params params;
	params.InMinGridIndexXYZ = InMinGridIndexXYZ;
	params.InMaxGridIndexXYZ = InMaxGridIndexXYZ;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHHomeAreaVisualizationComponent.ShowGrids
// ()
// Parameters:
// bool                           InBShow                        (Parm, ZeroConstructor, IsPlainOldData)

void UPlanPHHomeAreaVisualizationComponent::ShowGrids(bool InBShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHHomeAreaVisualizationComponent.ShowGrids");

	UPlanPHHomeAreaVisualizationComponent_ShowGrids_Params params;
	params.InBShow = InBShow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHMapData.RemovePlayerItem
// ()
// Parameters:
// class ASTExtraPlayerCharacter* PlayerCharacterItem            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlanPHMapData::RemovePlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHMapData.RemovePlayerItem");

	UPlanPHMapData_RemovePlayerItem_Params params;
	params.PlayerCharacterItem = PlayerCharacterItem;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.PlanPHMapData.AddPlayerItem
// ()
// Parameters:
// class ASTExtraPlayerCharacter* PlayerCharacterItem            (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 PlayerInfoBPItem               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 PlayerInfoRotWidgetItem        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 OffsetLocation                 (ConstParm, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlanPHMapData::AddPlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem, class UWidget* PlayerInfoBPItem, class UWidget* PlayerInfoRotWidgetItem, const struct FVector& OffsetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHMapData.AddPlayerItem");

	UPlanPHMapData_AddPlayerItem_Params params;
	params.PlayerCharacterItem = PlayerCharacterItem;
	params.PlayerInfoBPItem = PlayerInfoBPItem;
	params.PlayerInfoRotWidgetItem = PlayerInfoRotWidgetItem;
	params.OffsetLocation = OffsetLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.PlanPHSpectatorPawn.OnSpectatorRestart
// ()

void APlanPHSpectatorPawn::OnSpectatorRestart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHSpectatorPawn.OnSpectatorRestart");

	APlanPHSpectatorPawn_OnSpectatorRestart_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHSpectatorPawn.MoveRight
// ()
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void APlanPHSpectatorPawn::MoveRight(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHSpectatorPawn.MoveRight");

	APlanPHSpectatorPawn_MoveRight_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHSpectatorPawn.MoveForward
// ()
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void APlanPHSpectatorPawn::MoveForward(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHSpectatorPawn.MoveForward");

	APlanPHSpectatorPawn_MoveForward_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

