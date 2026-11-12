// PUBG (4.3.0) Created by @JokerRepo and for pattern @enen
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic.PlayerReliableSequentialSyncActor.OnActorSpawned
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerReliableSequentialSyncActor::OnActorSpawned(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.PlayerReliableSequentialSyncActor.OnActorSpawned");

	APlayerReliableSequentialSyncActor_OnActorSpawned_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAENetActor.ReceivedPlayerActiveRegionsChanged
// ()
// Parameters:
// bool                           bEnter                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAENetActor::ReceivedPlayerActiveRegionsChanged(bool bEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAENetActor.ReceivedPlayerActiveRegionsChanged");

	AUAENetActor_ReceivedPlayerActiveRegionsChanged_Params params;
	params.bEnter = bEnter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.SetAssociation
// ()
// Parameters:
// int                            AssociationType                (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemAssociation        Association                    (Parm)

void UItemHandleBase::SetAssociation(int AssociationType, const struct FItemAssociation& Association)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.SetAssociation");

	UItemHandleBase_SetAssociation_Params params;
	params.AssociationType = AssociationType;
	params.Association = Association;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.RemoveAssociation
// ()
// Parameters:
// int                            AssociationType                (Parm, ZeroConstructor, IsPlainOldData)

void UItemHandleBase::RemoveAssociation(int AssociationType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.RemoveAssociation");

	UItemHandleBase_RemoveAssociation_Params params;
	params.AssociationType = AssociationType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.Init
// ()
// Parameters:
// struct FItemDefineID           InDefineID                     (Parm)

void UItemHandleBase::Init(const struct FItemDefineID& InDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.Init");

	UItemHandleBase_Init_Params params;
	params.InDefineID = InDefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.GetDefineID
// ()
// Parameters:
// struct FItemDefineID           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemDefineID UItemHandleBase::GetDefineID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetDefineID");

	UItemHandleBase_GetDefineID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociationMap
// ()
// Parameters:
// TMap<int, struct FItemAssociation> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<int, struct FItemAssociation> UItemHandleBase::GetAssociationMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociationMap");

	UItemHandleBase_GetAssociationMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociationListByTargetType
// ()
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FItemAssociation> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemAssociation> UItemHandleBase::GetAssociationListByTargetType(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociationListByTargetType");

	UItemHandleBase_GetAssociationListByTargetType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociationByTargetDefineID
// ()
// Parameters:
// struct FItemDefineID           TargetDefineID                 (Parm)
// struct FItemAssociation        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemAssociation UItemHandleBase::GetAssociationByTargetDefineID(const struct FItemDefineID& TargetDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociationByTargetDefineID");

	UItemHandleBase_GetAssociationByTargetDefineID_Params params;
	params.TargetDefineID = TargetDefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociation
// ()
// Parameters:
// int                            AssociationType                (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemAssociation        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemAssociation UItemHandleBase::GetAssociation(int AssociationType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociation");

	UItemHandleBase_GetAssociation_Params params;
	params.AssociationType = AssociationType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.Constuct
// ()
// Parameters:
// struct FItemDefineID           InDefineID                     (ConstParm, Parm, OutParm, ReferenceParm)

void UItemHandleBase::Constuct(const struct FItemDefineID& InDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.Constuct");

	UItemHandleBase_Constuct_Params params;
	params.InDefineID = InDefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.CollectionNeedLoadSoftPath
// ()
// Parameters:
// TArray<struct FSoftObjectPath> OutSoftPathList                (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemHandleBase::CollectionNeedLoadSoftPath(TArray<struct FSoftObjectPath>* OutSoftPathList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.CollectionNeedLoadSoftPath");

	UItemHandleBase_CollectionNeedLoadSoftPath_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutSoftPathList != nullptr)
		*OutSoftPathList = params.OutSoftPathList;
}


// Function Basic.ItemHandleBase.AddAssociation
// ()
// Parameters:
// int                            AssociationType                (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemAssociation        Association                    (Parm)

void UItemHandleBase::AddAssociation(int AssociationType, const struct FItemAssociation& Association)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.AddAssociation");

	UItemHandleBase_AddAssociation_Params params;
	params.AssociationType = AssociationType;
	params.Association = Association;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BattleItemHandleBase.UpdateAttributeModify
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandleBase::UpdateAttributeModify(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.UpdateAttributeModify");

	UBattleItemHandleBase_UpdateAttributeModify_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BattleItemHandleBase.UnEquip
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::UnEquip()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.UnEquip");

	UBattleItemHandleBase_UnEquip_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.ShouldDropInDisuse
// ()
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FItemDefineID           CurrentPickupItemDefineID      (Parm)
// struct FItemDefineID           ThisItemDefineID               (Parm)
// int                            KeptCount                      (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDisuseReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::ShouldDropInDisuse(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FItemDefineID& CurrentPickupItemDefineID, const struct FItemDefineID& ThisItemDefineID, int KeptCount, EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.ShouldDropInDisuse");

	UBattleItemHandleBase_ShouldDropInDisuse_Params params;
	params.ItemContainer = ItemContainer;
	params.CurrentPickupItemDefineID = CurrentPickupItemDefineID;
	params.ThisItemDefineID = ThisItemDefineID;
	params.KeptCount = KeptCount;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HanldePickupAssociationData
// ()
// Parameters:
// TArray<struct FBattleItemAdditionalData> PickupAdditionalData           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HanldePickupAssociationData(TArray<struct FBattleItemAdditionalData> PickupAdditionalData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HanldePickupAssociationData");

	UBattleItemHandleBase_HanldePickupAssociationData_Params params;
	params.PickupAdditionalData = PickupAdditionalData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HanldeDropAssociationData
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HanldeDropAssociationData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HanldeDropAssociationData");

	UBattleItemHandleBase_HanldeDropAssociationData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HanldeCleared
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HanldeCleared()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HanldeCleared");

	UBattleItemHandleBase_HanldeCleared_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleUse
// ()
// Parameters:
// struct FBattleItemUseTarget    Target                         (Parm)
// EBattleItemUseReason           Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleUse(const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleUse");

	UBattleItemHandleBase_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandlePickup
// ()
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemPickupInfo   PickupInfo                     (Parm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandlePickup(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandlePickup");

	UBattleItemHandleBase_HandlePickup_Params params;
	params.ItemContainer = ItemContainer;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleEnable
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleEnable");

	UBattleItemHandleBase_HandleEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleDrop
// ()
// Parameters:
// int                            InCount                        (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason          Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleDrop(int InCount, EBattleItemDropReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleDrop");

	UBattleItemHandleBase_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleDisuse
// ()
// Parameters:
// EBattleItemDisuseReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleDisuse(EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleDisuse");

	UBattleItemHandleBase_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleChangeItemStoreArea
// ()
// Parameters:
// EItemStoreArea                 InItemStoreArea                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleChangeItemStoreArea(EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleChangeItemStoreArea");

	UBattleItemHandleBase_HandleChangeItemStoreArea_Params params;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleBindToTargetItem
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleBindToTargetItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleBindToTargetItem");

	UBattleItemHandleBase_HandleBindToTargetItem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.GetWorldInternal
// ()
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UBattleItemHandleBase::GetWorldInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.GetWorldInternal");

	UBattleItemHandleBase_GetWorldInternal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.GetCurrentWorld
// ()
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UBattleItemHandleBase::GetCurrentWorld()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.GetCurrentWorld");

	UBattleItemHandleBase_GetCurrentWorld_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.ExtractItemData
// ()
// Parameters:
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBattleItemHandleBase::ExtractItemData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.ExtractItemData");

	UBattleItemHandleBase_ExtractItemData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.ClearAdditionalDataByType
// ()
// Parameters:
// EBattleItemAdditionalDataType  DataType                       (Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandleBase::ClearAdditionalDataByType(EBattleItemAdditionalDataType DataType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.ClearAdditionalDataByType");

	UBattleItemHandleBase_ClearAdditionalDataByType_Params params;
	params.DataType = DataType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BattleItemHandleBase.ClearAdditionalData
// ()

void UBattleItemHandleBase::ClearAdditionalData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.ClearAdditionalData");

	UBattleItemHandleBase_ClearAdditionalData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BattleItemHandleBase.CheckCanUse
// ()
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemUseTarget    Target                         (Parm)
// EBattleItemUseReason           Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::CheckCanUse(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.CheckCanUse");

	UBattleItemHandleBase_CheckCanUse_Params params;
	params.ItemContainer = ItemContainer;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.SetModeID
// ()
// Parameters:
// int                            InModeID                       (Parm, ZeroConstructor, IsPlainOldData)

void UUAEGameInstance::SetModeID(int InModeID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.SetModeID");

	UUAEGameInstance_SetModeID_Params params;
	params.InModeID = InModeID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEGameInstance.SetLuaStateWrapper
// ()
// Parameters:
// class ULuaStateWrapper*        TLuaStateWrapper               (Parm, ZeroConstructor, IsPlainOldData)

void UUAEGameInstance::SetLuaStateWrapper(class ULuaStateWrapper* TLuaStateWrapper)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.SetLuaStateWrapper");

	UUAEGameInstance_SetLuaStateWrapper_Params params;
	params.TLuaStateWrapper = TLuaStateWrapper;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEGameInstance.SetExtraModules
// ()
// Parameters:
// TArray<struct FString>         InExtraModules                 (Parm, ZeroConstructor)

void UUAEGameInstance::SetExtraModules(TArray<struct FString> InExtraModules)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.SetExtraModules");

	UUAEGameInstance_SetExtraModules_Params params;
	params.InExtraModules = InExtraModules;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEGameInstance.OpenAssetLoadLog
// ()

void UUAEGameInstance::OpenAssetLoadLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.OpenAssetLoadLog");

	UUAEGameInstance_OpenAssetLoadLog_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.UAEGameInstance.OnPreBattleResult__DelegateSignature
// ()

void UUAEGameInstance::OnPreBattleResult__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.UAEGameInstance.OnPreBattleResult__DelegateSignature");

	UUAEGameInstance_OnPreBattleResult__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEGameInstance.LuaLeakDetect
// ()

void UUAEGameInstance::LuaLeakDetect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.LuaLeakDetect");

	UUAEGameInstance_LuaLeakDetect_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEGameInstance.LuaDoString
// ()
// Parameters:
// struct FString                 LuaString                      (Parm, ZeroConstructor)

void UUAEGameInstance::LuaDoString(const struct FString& LuaString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.LuaDoString");

	UUAEGameInstance_LuaDoString_Params params;
	params.LuaString = LuaString;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEGameInstance.GetWeatherTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUAEGameInstance::GetWeatherTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetWeatherTime");

	UUAEGameInstance_GetWeatherTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetWeatherLevelName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEGameInstance::GetWeatherLevelName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetWeatherLevelName");

	UUAEGameInstance_GetWeatherLevelName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetWeatherID
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEGameInstance::GetWeatherID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetWeatherID");

	UUAEGameInstance_GetWeatherID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetModType2
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEGameInstance::GetModType2()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetModType2");

	UUAEGameInstance_GetModType2_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetModType
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEGameInstance::GetModType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetModType");

	UUAEGameInstance_GetModType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetModeID
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEGameInstance::GetModeID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetModeID");

	UUAEGameInstance_GetModeID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetLuaStateWrapper
// ()
// Parameters:
// class ULuaStateWrapper*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULuaStateWrapper* UUAEGameInstance::GetLuaStateWrapper()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetLuaStateWrapper");

	UUAEGameInstance_GetLuaStateWrapper_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetLoadWeatherName
// ()
// Parameters:
// struct FString                 InWeatherName                  (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEGameInstance::GetLoadWeatherName(const struct FString& InWeatherName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetLoadWeatherName");

	UUAEGameInstance_GetLoadWeatherName_Params params;
	params.InWeatherName = InWeatherName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetIsHighWeatherLevel
// ()
// Parameters:
// struct FString                 InWeatherLevelName             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEGameInstance::GetIsHighWeatherLevel(const struct FString& InWeatherLevelName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetIsHighWeatherLevel");

	UUAEGameInstance_GetIsHighWeatherLevel_Params params;
	params.InWeatherLevelName = InWeatherLevelName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetGameID
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEGameInstance::GetGameID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetGameID");

	UUAEGameInstance_GetGameID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetExtraModulesString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEGameInstance::GetExtraModulesString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetExtraModulesString");

	UUAEGameInstance_GetExtraModulesString_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetExtraModules
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UUAEGameInstance::GetExtraModules()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetExtraModules");

	UUAEGameInstance_GetExtraModules_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetDeviceLevel
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEGameInstance::GetDeviceLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetDeviceLevel");

	UUAEGameInstance_GetDeviceLevel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetDataTable_Mod
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAEGameInstance::GetDataTable_Mod(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetDataTable_Mod");

	UUAEGameInstance_GetDataTable_Mod_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetDataTable
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAEGameInstance::GetDataTable(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetDataTable");

	UUAEGameInstance_GetDataTable_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetAssociatedFrontendHUD
// ()
// Parameters:
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* UUAEGameInstance::GetAssociatedFrontendHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetAssociatedFrontendHUD");

	UUAEGameInstance_GetAssociatedFrontendHUD_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.CloseAssetLoadLog
// ()

void UUAEGameInstance::CloseAssetLoadLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.CloseAssetLoadLog");

	UUAEGameInstance_CloseAssetLoadLog_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.SwitchAttrModifierByIndex
// ()
// Parameters:
// int                            ModifyConfigIndex              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::SwitchAttrModifierByIndex(int ModifyConfigIndex, bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SwitchAttrModifierByIndex");

	UAttrModifyComponent_SwitchAttrModifierByIndex_Params params;
	params.ModifyConfigIndex = ModifyConfigIndex;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.SwitchAttrModifier
// ()
// Parameters:
// struct FString                 AttrModifyItemName             (Parm, ZeroConstructor)
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::SwitchAttrModifier(const struct FString& AttrModifyItemName, bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SwitchAttrModifier");

	UAttrModifyComponent_SwitchAttrModifier_Params params;
	params.AttrModifyItemName = AttrModifyItemName;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.StartTimerToSyncRecordAttrValue
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::StartTimerToSyncRecordAttrValue(float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.StartTimerToSyncRecordAttrValue");

	UAttrModifyComponent_StartTimerToSyncRecordAttrValue_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.SetValueToAttributeSafety
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModifyRecordType               (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::SetValueToAttributeSafety(const struct FString& AttrName, float Value, int ModifyRecordType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SetValueToAttributeSafety");

	UAttrModifyComponent_SetValueToAttributeSafety_Params params;
	params.AttrName = AttrName;
	params.Value = Value;
	params.ModifyRecordType = ModifyRecordType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.SetOrignalValueToAttribute
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::SetOrignalValueToAttribute(const struct FString& AttrName, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SetOrignalValueToAttribute");

	UAttrModifyComponent_SetOrignalValueToAttribute_Params params;
	params.AttrName = AttrName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.SetOrignalValueAndBaseValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::SetOrignalValueAndBaseValue(const struct FString& AttrName, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SetOrignalValueAndBaseValue");

	UAttrModifyComponent_SetOrignalValueAndBaseValue_Params params;
	params.AttrName = AttrName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.SetAttrModifyStateValue
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::SetAttrModifyStateValue(int Index, bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SetAttrModifyStateValue");

	UAttrModifyComponent_SetAttrModifyStateValue_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.SetAttributeMinValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          MinValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::SetAttributeMinValue(const struct FString& AttrName, float MinValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SetAttributeMinValue");

	UAttrModifyComponent_SetAttributeMinValue_Params params;
	params.AttrName = AttrName;
	params.MinValue = MinValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.SetAttributeMaxValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          MaxValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::SetAttributeMaxValue(const struct FString& AttrName, float MaxValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SetAttributeMaxValue");

	UAttrModifyComponent_SetAttributeMaxValue_Params params;
	params.AttrName = AttrName;
	params.MaxValue = MaxValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.ServerSendExceptionType
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// int                            ExceptionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::ServerSendExceptionType(const struct FString& AttrName, int ExceptionType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.ServerSendExceptionType");

	UAttrModifyComponent_ServerSendExceptionType_Params params;
	params.AttrName = AttrName;
	params.ExceptionType = ExceptionType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.ServerRequestRecordAttrValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)

void UAttrModifyComponent::ServerRequestRecordAttrValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.ServerRequestRecordAttrValue");

	UAttrModifyComponent_ServerRequestRecordAttrValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.ResponeAttrValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          FinalValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::ResponeAttrValue(const struct FString& AttrName, float FinalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.ResponeAttrValue");

	UAttrModifyComponent_ResponeAttrValue_Params params;
	params.AttrName = AttrName;
	params.FinalValue = FinalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.RequestAttrValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)

void UAttrModifyComponent::RequestAttrValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RequestAttrValue");

	UAttrModifyComponent_RequestAttrValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.RemoveModifyItemFromCache
// ()
// Parameters:
// uint32_t                       ModifyUID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::RemoveModifyItemFromCache(uint32_t ModifyUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RemoveModifyItemFromCache");

	UAttrModifyComponent_RemoveModifyItemFromCache_Params params;
	params.ModifyUID = ModifyUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.RemoveAttrListener
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// struct FSluaBPVar              Listener                       (Parm)

void UAttrModifyComponent::RemoveAttrListener(const struct FString& AttrName, const struct FSluaBPVar& Listener)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RemoveAttrListener");

	UAttrModifyComponent_RemoveAttrListener_Params params;
	params.AttrName = AttrName;
	params.Listener = Listener;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.RemoveAllDynamicModifier
// ()
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::RemoveAllDynamicModifier(bool bForce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RemoveAllDynamicModifier");

	UAttrModifyComponent_RemoveAllDynamicModifier_Params params;
	params.bForce = bForce;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.RegisterModifyAbleAttr
// ()
// Parameters:
// TArray<struct FAttrRegisterItem> AttrRegists                    (Parm, OutParm, ZeroConstructor)
// bool                           bSetAttrByOrigin               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::RegisterModifyAbleAttr(bool bSetAttrByOrigin, TArray<struct FAttrRegisterItem>* AttrRegists)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RegisterModifyAbleAttr");

	UAttrModifyComponent_RegisterModifyAbleAttr_Params params;
	params.bSetAttrByOrigin = bSetAttrByOrigin;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AttrRegists != nullptr)
		*AttrRegists = params.AttrRegists;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.RegistAttrModifyRecordList
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// int                            RecordLen                      (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::RegistAttrModifyRecordList(const struct FString& AttrName, int RecordLen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RegistAttrModifyRecordList");

	UAttrModifyComponent_RegistAttrModifyRecordList_Params params;
	params.AttrName = AttrName;
	params.RecordLen = RecordLen;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.RegCurrentModAttrs
// ()

void UAttrModifyComponent::RegCurrentModAttrs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RegCurrentModAttrs");

	UAttrModifyComponent_RegCurrentModAttrs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.RefreshAttributeModify
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)

void UAttrModifyComponent::RefreshAttributeModify(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RefreshAttributeModify");

	UAttrModifyComponent_RefreshAttributeModify_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.PushAttrModifyRecordItem
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          PreValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurValue                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModifyRecordType               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModifyDesc                     (Parm, ZeroConstructor)

void UAttrModifyComponent::PushAttrModifyRecordItem(const struct FString& AttrName, float PreValue, float CurValue, int ModifyRecordType, const struct FString& ModifyDesc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.PushAttrModifyRecordItem");

	UAttrModifyComponent_PushAttrModifyRecordItem_Params params;
	params.AttrName = AttrName;
	params.PreValue = PreValue;
	params.CurValue = CurValue;
	params.ModifyRecordType = ModifyRecordType;
	params.ModifyDesc = ModifyDesc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.OnRep_ModSimulateSyncList
// ()

void UAttrModifyComponent::OnRep_ModSimulateSyncList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.OnRep_ModSimulateSyncList");

	UAttrModifyComponent_OnRep_ModSimulateSyncList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.OnRep_ExceptionAttrModifyRecords
// ()

void UAttrModifyComponent::OnRep_ExceptionAttrModifyRecords()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.OnRep_ExceptionAttrModifyRecords");

	UAttrModifyComponent_OnRep_ExceptionAttrModifyRecords_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.OnRep_DynamicModifier
// ()

void UAttrModifyComponent::OnRep_DynamicModifier()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.OnRep_DynamicModifier");

	UAttrModifyComponent_OnRep_DynamicModifier_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.OnRep_AttrModifyStateList
// ()

void UAttrModifyComponent::OnRep_AttrModifyStateList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.OnRep_AttrModifyStateList");

	UAttrModifyComponent_OnRep_AttrModifyStateList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.AttrModifyComponent.OnNeedSetSpeedOverLimit__DelegateSignature
// ()

void UAttrModifyComponent::OnNeedSetSpeedOverLimit__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.AttrModifyComponent.OnNeedSetSpeedOverLimit__DelegateSignature");

	UAttrModifyComponent_OnNeedSetSpeedOverLimit__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.AttrModifyComponent.OnAttrModifiedEvent__DelegateSignature
// ()
// Parameters:
// TArray<struct FAttrAffected>   AffectedAttrS                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAttrModifyComponent::OnAttrModifiedEvent__DelegateSignature(TArray<struct FAttrAffected> AffectedAttrS)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.AttrModifyComponent.OnAttrModifiedEvent__DelegateSignature");

	UAttrModifyComponent_OnAttrModifiedEvent__DelegateSignature_Params params;
	params.AffectedAttrS = AffectedAttrS;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.LuaSetValueToAttributeSafety
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::LuaSetValueToAttributeSafety(const struct FString& AttrName, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.LuaSetValueToAttributeSafety");

	UAttrModifyComponent_LuaSetValueToAttributeSafety_Params params;
	params.AttrName = AttrName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.IsAttrModifyStateValidIndex
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::IsAttrModifyStateValidIndex(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.IsAttrModifyStateValidIndex");

	UAttrModifyComponent_IsAttrModifyStateValidIndex_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.InitializeRelateAttributeExpands
// ()

void UAttrModifyComponent::InitializeRelateAttributeExpands()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.InitializeRelateAttributeExpands");

	UAttrModifyComponent_InitializeRelateAttributeExpands_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.HasDynamicModifier
// ()
// Parameters:
// struct FString                 AttrModifyId                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::HasDynamicModifier(const struct FString& AttrModifyId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.HasDynamicModifier");

	UAttrModifyComponent_HasDynamicModifier_Params params;
	params.AttrModifyId = AttrModifyId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.HandleExceptionAttrModify
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// int                            ExceptionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::HandleExceptionAttrModify(const struct FString& AttrName, int ExceptionType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.HandleExceptionAttrModify");

	UAttrModifyComponent_HandleExceptionAttrModify_Params params;
	params.AttrName = AttrName;
	params.ExceptionType = ExceptionType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.GetSubsystem
// ()
// Parameters:
// class UAttrModifyModDataSubsystem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAttrModifyModDataSubsystem* UAttrModifyComponent::GetSubsystem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetSubsystem");

	UAttrModifyComponent_GetSubsystem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetMaxAttrName
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAttrModifyComponent::GetMaxAttrName(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetMaxAttrName");

	UAttrModifyComponent_GetMaxAttrName_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttrModifyStateValue
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::GetAttrModifyStateValue(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttrModifyStateValue");

	UAttrModifyComponent_GetAttrModifyStateValue_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttrModifyStateNum
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAttrModifyComponent::GetAttrModifyStateNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttrModifyStateNum");

	UAttrModifyComponent_GetAttrModifyStateNum_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttrModifyItemByItemName
// ()
// Parameters:
// struct FString                 ItemName                       (Parm, ZeroConstructor)
// struct FAttrModifyItem         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAttrModifyItem UAttrModifyComponent::GetAttrModifyItemByItemName(const struct FString& ItemName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttrModifyItemByItemName");

	UAttrModifyComponent_GetAttrModifyItemByItemName_Params params;
	params.ItemName = ItemName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttributeValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttrModifyComponent::GetAttributeValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttributeValue");

	UAttrModifyComponent_GetAttributeValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttributeOrignalValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttrModifyComponent::GetAttributeOrignalValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttributeOrignalValue");

	UAttrModifyComponent_GetAttributeOrignalValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttributeMaxValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttrModifyComponent::GetAttributeMaxValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttributeMaxValue");

	UAttrModifyComponent_GetAttributeMaxValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttrDynamicModifyTargetString
// ()
// Parameters:
// struct FAttrDynamicModifyTarget DynamicModifyTarget            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAttrModifyComponent::GetAttrDynamicModifyTargetString(const struct FAttrDynamicModifyTarget& DynamicModifyTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttrDynamicModifyTargetString");

	UAttrModifyComponent_GetAttrDynamicModifyTargetString_Params params;
	params.DynamicModifyTarget = DynamicModifyTarget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttrDynamicModifyItemString
// ()
// Parameters:
// struct FAttrDynamicModifyItem  DynamicModifyItem              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAttrModifyComponent::GetAttrDynamicModifyItemString(const struct FAttrDynamicModifyItem& DynamicModifyItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttrDynamicModifyItemString");

	UAttrModifyComponent_GetAttrDynamicModifyItemString_Params params;
	params.DynamicModifyItem = DynamicModifyItem;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.EnableAttrModifierByIndex
// ()
// Parameters:
// int                            ModifyConfigIndex              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::EnableAttrModifierByIndex(int ModifyConfigIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.EnableAttrModifierByIndex");

	UAttrModifyComponent_EnableAttrModifierByIndex_Params params;
	params.ModifyConfigIndex = ModifyConfigIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.EnableAttrModifier
// ()
// Parameters:
// struct FString                 AttrModifyItemName             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::EnableAttrModifier(const struct FString& AttrModifyItemName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.EnableAttrModifier");

	UAttrModifyComponent_EnableAttrModifier_Params params;
	params.AttrModifyItemName = AttrModifyItemName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.DisableAttrModifierByIndex
// ()
// Parameters:
// int                            ModifyConfigIndex              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::DisableAttrModifierByIndex(int ModifyConfigIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.DisableAttrModifierByIndex");

	UAttrModifyComponent_DisableAttrModifierByIndex_Params params;
	params.ModifyConfigIndex = ModifyConfigIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.DisableAttrModifier
// ()
// Parameters:
// struct FString                 AttrModifyItemName             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::DisableAttrModifier(const struct FString& AttrModifyItemName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.DisableAttrModifier");

	UAttrModifyComponent_DisableAttrModifier_Params params;
	params.AttrModifyItemName = AttrModifyItemName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.DisableAllAttrModifier
// ()
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::DisableAllAttrModifier(bool bForce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.DisableAllAttrModifier");

	UAttrModifyComponent_DisableAllAttrModifier_Params params;
	params.bForce = bForce;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.ConditionSyncRecordAttrValue
// ()

void UAttrModifyComponent::ConditionSyncRecordAttrValue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.ConditionSyncRecordAttrValue");

	UAttrModifyComponent_ConditionSyncRecordAttrValue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.ClientSyncRecordAttrValue
// ()
// Parameters:
// TArray<struct FAttrDesc>       AttrDescs                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UAttrModifyComponent::ClientSyncRecordAttrValue(TArray<struct FAttrDesc> AttrDescs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.ClientSyncRecordAttrValue");

	UAttrModifyComponent_ClientSyncRecordAttrValue_Params params;
	params.AttrDescs = AttrDescs;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.ClientSendRecordData
// ()
// Parameters:
// struct FAttrModifyRecordItem   RecordItem                     (ConstParm, Parm, ReferenceParm)
// int                            ExceptionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::ClientSendRecordData(const struct FAttrModifyRecordItem& RecordItem, int ExceptionType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.ClientSendRecordData");

	UAttrModifyComponent_ClientSendRecordData_Params params;
	params.RecordItem = RecordItem;
	params.ExceptionType = ExceptionType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.ClearAllAttrModify
// ()

void UAttrModifyComponent::ClearAllAttrModify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.ClearAllAttrModify");

	UAttrModifyComponent_ClearAllAttrModify_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.AddValueToAttribute
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::AddValueToAttribute(const struct FString& AttrName, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddValueToAttribute");

	UAttrModifyComponent_AddValueToAttribute_Params params;
	params.AttrName = AttrName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.AddModifyItemAndCache
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// EAttrModifyRefType             CModifyType                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          CValue                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOldModify                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UAttrModifyComponent::AddModifyItemAndCache(const struct FString& AttrName, EAttrModifyRefType CModifyType, float CValue, bool bEnable, class UObject* Causer, bool bOldModify)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddModifyItemAndCache");

	UAttrModifyComponent_AddModifyItemAndCache_Params params;
	params.AttrName = AttrName;
	params.CModifyType = CModifyType;
	params.CValue = CValue;
	params.bEnable = bEnable;
	params.Causer = Causer;
	params.bOldModify = bOldModify;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.AddDynamicModifier
// ()
// Parameters:
// struct FAttrModifyItem         AttrModifyItem                 (Parm, OutParm)
// bool                           RepOnlyOwner                   (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::AddDynamicModifier(bool RepOnlyOwner, struct FAttrModifyItem* AttrModifyItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddDynamicModifier");

	UAttrModifyComponent_AddDynamicModifier_Params params;
	params.RepOnlyOwner = RepOnlyOwner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AttrModifyItem != nullptr)
		*AttrModifyItem = params.AttrModifyItem;
}


// Function Basic.AttrModifyComponent.AddBModifyAndCacheWithCParam
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// EAttrModifyRefType             CModifyType                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          CValue                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ClientSimulate                 (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UAttrModifyComponent::AddBModifyAndCacheWithCParam(const struct FString& AttrName, EAttrModifyRefType CModifyType, float CValue, bool ClientSimulate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddBModifyAndCacheWithCParam");

	UAttrModifyComponent_AddBModifyAndCacheWithCParam_Params params;
	params.AttrName = AttrName;
	params.CModifyType = CModifyType;
	params.CValue = CValue;
	params.ClientSimulate = ClientSimulate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.AddBModifyAndCache
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// EAttrOperator                  ModifyType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ClientSimulate                 (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UAttrModifyComponent::AddBModifyAndCache(const struct FString& AttrName, EAttrOperator ModifyType, float Value, bool ClientSimulate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddBModifyAndCache");

	UAttrModifyComponent_AddBModifyAndCache_Params params;
	params.AttrName = AttrName;
	params.ModifyType = ModifyType;
	params.Value = Value;
	params.ClientSimulate = ClientSimulate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.AddAttrListener
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// struct FSluaBPVar              Listener                       (Parm)

void UAttrModifyComponent::AddAttrListener(const struct FString& AttrName, const struct FSluaBPVar& Listener)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddAttrListener");

	UAttrModifyComponent_AddAttrListener_Params params;
	params.AttrName = AttrName;
	params.Listener = Listener;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyInterface.SetAttrValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          NewVal                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyInterface::SetAttrValue(const struct FString& AttrName, float NewVal, int Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.SetAttrValue");

	UAttrModifyInterface_SetAttrValue_Params params;
	params.AttrName = AttrName;
	params.NewVal = NewVal;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyInterface.RequestAttrValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)

void UAttrModifyInterface::RequestAttrValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.RequestAttrValue");

	UAttrModifyInterface_RequestAttrValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyInterface.RegisterModifiedAttributes
// ()

void UAttrModifyInterface::RegisterModifiedAttributes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.RegisterModifiedAttributes");

	UAttrModifyInterface_RegisterModifiedAttributes_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyInterface.GetAttrValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttrModifyInterface::GetAttrValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.GetAttrValue");

	UAttrModifyInterface_GetAttrValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.GetAttrModifyRelevantActors
// ()
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UAttrModifyInterface::GetAttrModifyRelevantActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.GetAttrModifyRelevantActors");

	UAttrModifyInterface_GetAttrModifyRelevantActors_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.GetAttrModifyComponent
// ()
// Parameters:
// class UAttrModifyComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAttrModifyComponent* UAttrModifyInterface::GetAttrModifyComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.GetAttrModifyComponent");

	UAttrModifyInterface_GetAttrModifyComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.GetAttributeValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttrModifyInterface::GetAttributeValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.GetAttributeValue");

	UAttrModifyInterface_GetAttributeValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.AddAttrValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          AddVal                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyInterface::AddAttrValue(const struct FString& AttrName, float AddVal, int Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.AddAttrValue");

	UAttrModifyInterface_AddAttrValue_Params params;
	params.AttrName = AttrName;
	params.AddVal = AddVal;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BPClassManager.ModifyClass
// ()
// Parameters:
// class UClass*                  InNativeClass                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BPClassPath                    (Parm, ZeroConstructor)
// struct FString                 ModTag                         (Parm, ZeroConstructor)

void UBPClassManager::ModifyClass(class UClass* InNativeClass, const struct FString& BPClassPath, const struct FString& ModTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.ModifyClass");

	UBPClassManager_ModifyClass_Params params;
	params.InNativeClass = InNativeClass;
	params.BPClassPath = BPClassPath;
	params.ModTag = ModTag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BPClassManager.GetUClass
// ()
// Parameters:
// int                            KeyIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPClassManager::GetUClass(int KeyIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.GetUClass");

	UBPClassManager_GetUClass_Params params;
	params.KeyIndex = KeyIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPClassManager.GetBPClassOverrideByName
// ()
// Parameters:
// struct FString                 ClassTagName                   (Parm, ZeroConstructor)
// struct FString                 ModTag                         (Parm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPClassManager::GetBPClassOverrideByName(const struct FString& ClassTagName, const struct FString& ModTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.GetBPClassOverrideByName");

	UBPClassManager_GetBPClassOverrideByName_Params params;
	params.ClassTagName = ClassTagName;
	params.ModTag = ModTag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPClassManager.GetBPClassOverride
// ()
// Parameters:
// class UClass*                  InNativeClass                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModTag                         (Parm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPClassManager::GetBPClassOverride(class UClass* InNativeClass, const struct FString& ModTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.GetBPClassOverride");

	UBPClassManager_GetBPClassOverride_Params params;
	params.InNativeClass = InNativeClass;
	params.ModTag = ModTag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPClassManager.Get
// ()
// Parameters:
// class UBPClassManager*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBPClassManager* UBPClassManager::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.Get");

	UBPClassManager_Get_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BuffConfigSubsystem.ReloadTable
// ()
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)

void UBuffConfigSubsystem::ReloadTable(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BuffConfigSubsystem.ReloadTable");

	UBuffConfigSubsystem_ReloadTable_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BuffConfigSubsystem.ClearTable
// ()

void UBuffConfigSubsystem::ClearTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BuffConfigSubsystem.ClearTable");

	UBuffConfigSubsystem_ClearTable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BuffUtils.IsRoleOK
// ()
// Parameters:
// EBuffEnabledRole               EnabledRole                    (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         OwnerComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuffUtils::IsRoleOK(EBuffEnabledRole EnabledRole, class UActorComponent* OwnerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BuffUtils.IsRoleOK");

	UBuffUtils_IsRoleOK_Params params;
	params.EnabledRole = EnabledRole;
	params.OwnerComponent = OwnerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.DelayReplicationInterface.ReSendRPCAfterBeginPlay
// ()

void UDelayReplicationInterface::ReSendRPCAfterBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.DelayReplicationInterface.ReSendRPCAfterBeginPlay");

	UDelayReplicationInterface_ReSendRPCAfterBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.DelayReplicationInterface.ReCallRepAfterBeginPlay
// ()

void UDelayReplicationInterface::ReCallRepAfterBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.DelayReplicationInterface.ReCallRepAfterBeginPlay");

	UDelayReplicationInterface_ReCallRepAfterBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.GameModeEnvUtil.GetModeID
// ()
// Parameters:
// struct FString                 GameModeClassPath              (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameModeEnvUtil::GetModeID(const struct FString& GameModeClassPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.GameModeEnvUtil.GetModeID");

	UGameModeEnvUtil_GetModeID_Params params;
	params.GameModeClassPath = GameModeClassPath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.GameModeEnvUtil.GetGameModeEnvData
// ()
// Parameters:
// int                            InModeID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameModeEnvData        OutData                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameModeEnvUtil::GetGameModeEnvData(int InModeID, struct FGameModeEnvData* OutData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.GameModeEnvUtil.GetGameModeEnvData");

	UGameModeEnvUtil_GetGameModeEnvData_Params params;
	params.InModeID = InModeID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.PushVectorModify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UStackModifyAttrInterface::PushVectorModify(int ModifyKey, const struct FName& PropertyName, const struct FVector& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushVectorModify");

	UStackModifyAttrInterface_PushVectorModify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PushVector4Modify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UStackModifyAttrInterface::PushVector4Modify(int ModifyKey, const struct FName& PropertyName, const struct FVector4& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushVector4Modify");

	UStackModifyAttrInterface_PushVector4Modify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PushVector2DModify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               InValue                        (Parm, IsPlainOldData)

void UStackModifyAttrInterface::PushVector2DModify(int ModifyKey, const struct FName& PropertyName, const struct FVector2D& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushVector2DModify");

	UStackModifyAttrInterface_PushVector2DModify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PushTransformModify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UStackModifyAttrInterface::PushTransformModify(int ModifyKey, const struct FName& PropertyName, const struct FTransform& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushTransformModify");

	UStackModifyAttrInterface_PushTransformModify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PushStringModify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InValue                        (Parm, ZeroConstructor)

void UStackModifyAttrInterface::PushStringModify(int ModifyKey, const struct FName& PropertyName, const struct FString& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushStringModify");

	UStackModifyAttrInterface_PushStringModify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PushRotatorModify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UStackModifyAttrInterface::PushRotatorModify(int ModifyKey, const struct FName& PropertyName, const struct FRotator& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushRotatorModify");

	UStackModifyAttrInterface_PushRotatorModify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PushQuatModify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UStackModifyAttrInterface::PushQuatModify(int ModifyKey, const struct FName& PropertyName, const struct FQuat& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushQuatModify");

	UStackModifyAttrInterface_PushQuatModify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PushNameModify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UStackModifyAttrInterface::PushNameModify(int ModifyKey, const struct FName& PropertyName, const struct FName& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushNameModify");

	UStackModifyAttrInterface_PushNameModify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PushLinearColorModify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            InValue                        (Parm, IsPlainOldData)

void UStackModifyAttrInterface::PushLinearColorModify(int ModifyKey, const struct FName& PropertyName, const struct FLinearColor& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushLinearColorModify");

	UStackModifyAttrInterface_PushLinearColorModify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PushIntVectorModify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FIntVector              InValue                        (Parm, IsPlainOldData)

void UStackModifyAttrInterface::PushIntVectorModify(int ModifyKey, const struct FName& PropertyName, const struct FIntVector& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushIntVectorModify");

	UStackModifyAttrInterface_PushIntVectorModify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PushIntPointModify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FIntPoint               InValue                        (Parm, IsPlainOldData)

void UStackModifyAttrInterface::PushIntPointModify(int ModifyKey, const struct FName& PropertyName, const struct FIntPoint& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushIntPointModify");

	UStackModifyAttrInterface_PushIntPointModify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PushInt32Modify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UStackModifyAttrInterface::PushInt32Modify(int ModifyKey, const struct FName& PropertyName, int InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushInt32Modify");

	UStackModifyAttrInterface_PushInt32Modify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PushFloatModify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UStackModifyAttrInterface::PushFloatModify(int ModifyKey, const struct FName& PropertyName, float InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushFloatModify");

	UStackModifyAttrInterface_PushFloatModify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PushColorModify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  InValue                        (Parm, IsPlainOldData)

void UStackModifyAttrInterface::PushColorModify(int ModifyKey, const struct FName& PropertyName, const struct FColor& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushColorModify");

	UStackModifyAttrInterface_PushColorModify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PushByteModify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UStackModifyAttrInterface::PushByteModify(int ModifyKey, const struct FName& PropertyName, unsigned char InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushByteModify");

	UStackModifyAttrInterface_PushByteModify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PushBoolModify
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UStackModifyAttrInterface::PushBoolModify(int ModifyKey, const struct FName& PropertyName, bool InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PushBoolModify");

	UStackModifyAttrInterface_PushBoolModify_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.StackModifyAttrInterface.PopStackModifyAttr
// ()
// Parameters:
// int                            ModifyKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStackModifyAttrInterface::PopStackModifyAttr(int ModifyKey, const struct FName& PropertyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.PopStackModifyAttr");

	UStackModifyAttrInterface_PopStackModifyAttr_Params params;
	params.ModifyKey = ModifyKey;
	params.PropertyName = PropertyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.HasStackModify
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStackModifyAttrInterface::HasStackModify(const struct FName& PropertyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.HasStackModify");

	UStackModifyAttrInterface_HasStackModify_Params params;
	params.PropertyName = PropertyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedVector4
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector4                OriginalValue                  (Parm, IsPlainOldData)
// struct FVector4                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector4 UStackModifyAttrInterface::GetModifiedVector4(const struct FName& PropertyName, const struct FVector4& OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedVector4");

	UStackModifyAttrInterface_GetModifiedVector4_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedVector2D
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               OriginalValue                  (Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UStackModifyAttrInterface::GetModifiedVector2D(const struct FName& PropertyName, const struct FVector2D& OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedVector2D");

	UStackModifyAttrInterface_GetModifiedVector2D_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedVector
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OriginalValue                  (Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UStackModifyAttrInterface::GetModifiedVector(const struct FName& PropertyName, const struct FVector& OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedVector");

	UStackModifyAttrInterface_GetModifiedVector_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedTransform
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OriginalValue                  (Parm, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UStackModifyAttrInterface::GetModifiedTransform(const struct FName& PropertyName, const struct FTransform& OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedTransform");

	UStackModifyAttrInterface_GetModifiedTransform_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedString
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OriginalValue                  (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UStackModifyAttrInterface::GetModifiedString(const struct FName& PropertyName, const struct FString& OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedString");

	UStackModifyAttrInterface_GetModifiedString_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedRotator
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OriginalValue                  (Parm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UStackModifyAttrInterface::GetModifiedRotator(const struct FName& PropertyName, const struct FRotator& OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedRotator");

	UStackModifyAttrInterface_GetModifiedRotator_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedQuat
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   OriginalValue                  (Parm, IsPlainOldData)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UStackModifyAttrInterface::GetModifiedQuat(const struct FName& PropertyName, const struct FQuat& OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedQuat");

	UStackModifyAttrInterface_GetModifiedQuat_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedName
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OriginalValue                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UStackModifyAttrInterface::GetModifiedName(const struct FName& PropertyName, const struct FName& OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedName");

	UStackModifyAttrInterface_GetModifiedName_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedLinearColor
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OriginalValue                  (Parm, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UStackModifyAttrInterface::GetModifiedLinearColor(const struct FName& PropertyName, const struct FLinearColor& OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedLinearColor");

	UStackModifyAttrInterface_GetModifiedLinearColor_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedIntVector
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FIntVector              OriginalValue                  (Parm, IsPlainOldData)
// struct FIntVector              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FIntVector UStackModifyAttrInterface::GetModifiedIntVector(const struct FName& PropertyName, const struct FIntVector& OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedIntVector");

	UStackModifyAttrInterface_GetModifiedIntVector_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedIntPoint
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FIntPoint               OriginalValue                  (Parm, IsPlainOldData)
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FIntPoint UStackModifyAttrInterface::GetModifiedIntPoint(const struct FName& PropertyName, const struct FIntPoint& OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedIntPoint");

	UStackModifyAttrInterface_GetModifiedIntPoint_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedInt32
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            OriginalValue                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UStackModifyAttrInterface::GetModifiedInt32(const struct FName& PropertyName, int OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedInt32");

	UStackModifyAttrInterface_GetModifiedInt32_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedFloat
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          OriginalValue                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStackModifyAttrInterface::GetModifiedFloat(const struct FName& PropertyName, float OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedFloat");

	UStackModifyAttrInterface_GetModifiedFloat_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedColor
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  OriginalValue                  (Parm, IsPlainOldData)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FColor UStackModifyAttrInterface::GetModifiedColor(const struct FName& PropertyName, const struct FColor& OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedColor");

	UStackModifyAttrInterface_GetModifiedColor_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedByte
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OriginalValue                  (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UStackModifyAttrInterface::GetModifiedByte(const struct FName& PropertyName, unsigned char OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedByte");

	UStackModifyAttrInterface_GetModifiedByte_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.StackModifyAttrInterface.GetModifiedBool
// ()
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OriginalValue                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStackModifyAttrInterface::GetModifiedBool(const struct FName& PropertyName, bool OriginalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.StackModifyAttrInterface.GetModifiedBool");

	UStackModifyAttrInterface_GetModifiedBool_Params params;
	params.PropertyName = PropertyName;
	params.OriginalValue = OriginalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetOwningObject
// ()
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UItemContainerInterface::GetOwningObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetOwningObject");

	UItemContainerInterface_GetOwningObject_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetItemHandleListByDefineID
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UItemHandleBase*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UItemHandleBase*> UItemContainerInterface::GetItemHandleListByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetItemHandleListByDefineID");

	UItemContainerInterface_GetItemHandleListByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetItemHandleByDefineID
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UItemHandleBase*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemHandleBase* UItemContainerInterface::GetItemHandleByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetItemHandleByDefineID");

	UItemContainerInterface_GetItemHandleByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetItemDefineIDList
// ()
// Parameters:
// TArray<struct FItemDefineID>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemDefineID> UItemContainerInterface::GetItemDefineIDList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetItemDefineIDList");

	UItemContainerInterface_GetItemDefineIDList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetFirstItemDefineBySpecificID
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemDefineID UItemContainerInterface::GetFirstItemDefineBySpecificID(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetFirstItemDefineBySpecificID");

	UItemContainerInterface_GetFirstItemDefineBySpecificID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerOwnerInterface.NotifyUpdateCustomAccessoriesData
// ()
// Parameters:
// int                            WeaponItemId                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSetOrRemove                 (Parm, ZeroConstructor, IsPlainOldData)

void UItemContainerOwnerInterface::NotifyUpdateCustomAccessoriesData(int WeaponItemId, int Index, int ItemId, bool bIsSetOrRemove)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerOwnerInterface.NotifyUpdateCustomAccessoriesData");

	UItemContainerOwnerInterface_NotifyUpdateCustomAccessoriesData_Params params;
	params.WeaponItemId = WeaponItemId;
	params.Index = Index;
	params.ItemId = ItemId;
	params.bIsSetOrRemove = bIsSetOrRemove;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemContainerOwnerInterface.NotifyUpdateCapacity
// ()
// Parameters:
// float                          InBackPackCapacity             (Parm, ZeroConstructor, IsPlainOldData)
// float                          InOccupiedCapacity             (Parm, ZeroConstructor, IsPlainOldData)
// float                          InSafetyBoxCapacity            (Parm, ZeroConstructor, IsPlainOldData)
// float                          InSafetyBoxOccupiedCapacity    (Parm, ZeroConstructor, IsPlainOldData)

void UItemContainerOwnerInterface::NotifyUpdateCapacity(float InBackPackCapacity, float InOccupiedCapacity, float InSafetyBoxCapacity, float InSafetyBoxOccupiedCapacity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerOwnerInterface.NotifyUpdateCapacity");

	UItemContainerOwnerInterface_NotifyUpdateCapacity_Params params;
	params.InBackPackCapacity = InBackPackCapacity;
	params.InOccupiedCapacity = InOccupiedCapacity;
	params.InSafetyBoxCapacity = InSafetyBoxCapacity;
	params.InSafetyBoxOccupiedCapacity = InSafetyBoxOccupiedCapacity;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemContainerOwnerInterface.NotifyItemUpdated
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemData         ItemData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemContainerOwnerInterface::NotifyItemUpdated(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerOwnerInterface.NotifyItemUpdated");

	UItemContainerOwnerInterface_NotifyItemUpdated_Params params;
	params.DefineID = DefineID;
	params.ItemData = ItemData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemContainerOwnerInterface.NotifyItemRemoved
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemData         ItemData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemContainerOwnerInterface::NotifyItemRemoved(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerOwnerInterface.NotifyItemRemoved");

	UItemContainerOwnerInterface_NotifyItemRemoved_Params params;
	params.DefineID = DefineID;
	params.ItemData = ItemData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemContainerOwnerInterface.NotifyItemEmpty
// ()

void UItemContainerOwnerInterface::NotifyItemEmpty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerOwnerInterface.NotifyItemEmpty");

	UItemContainerOwnerInterface_NotifyItemEmpty_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemContainerOwnerInterface.NotifyItemAdded
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemData         ItemData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemContainerOwnerInterface::NotifyItemAdded(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerOwnerInterface.NotifyItemAdded");

	UItemContainerOwnerInterface_NotifyItemAdded_Params params;
	params.DefineID = DefineID;
	params.ItemData = ItemData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaAsyncTasksSubsystem.IsNeedClear
// ()
// Parameters:
// float                          ClearMemorySize                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ClearArrayObjectSize           (Parm, ZeroConstructor, IsPlainOldData)
// struct FSluaBPVar              Callback                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULuaAsyncTasksSubsystem::IsNeedClear(float ClearMemorySize, float ClearArrayObjectSize, const struct FSluaBPVar& Callback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaAsyncTasksSubsystem.IsNeedClear");

	ULuaAsyncTasksSubsystem_IsNeedClear_Params params;
	params.ClearMemorySize = ClearMemorySize;
	params.ClearArrayObjectSize = ClearArrayObjectSize;
	params.Callback = Callback;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.LuaAsyncTaskSubsystem.IsNeedClear
// ()
// Parameters:
// class UFrontendHUD*            FrontendHUD                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FSluaBPVar              Callback                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULuaAsyncTaskSubsystem::IsNeedClear(class UFrontendHUD* FrontendHUD, const struct FSluaBPVar& Callback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaAsyncTaskSubsystem.IsNeedClear");

	ULuaAsyncTaskSubsystem_IsNeedClear_Params params;
	params.FrontendHUD = FrontendHUD;
	params.Callback = Callback;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.LuaEventBridgeFunction.UnRegisterEventByTarget
// ()
// Parameters:
// class UObject*                 ObjContext                     (Parm, ZeroConstructor, IsPlainOldData)

void ULuaEventBridgeFunction::UnRegisterEventByTarget(class UObject* ObjContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridgeFunction.UnRegisterEventByTarget");

	ULuaEventBridgeFunction_UnRegisterEventByTarget_Params params;
	params.ObjContext = ObjContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventBridgeFunction.UnRegisterEvent
// ()
// Parameters:
// struct FString                 FEventType                     (Parm, ZeroConstructor)
// struct FString                 EventID                        (Parm, ZeroConstructor)
// class UObject*                 ObjContext                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            EventHandle                    (Parm, ZeroConstructor, IsPlainOldData)

void ULuaEventBridgeFunction::UnRegisterEvent(const struct FString& FEventType, const struct FString& EventID, class UObject* ObjContext, int EventHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridgeFunction.UnRegisterEvent");

	ULuaEventBridgeFunction_UnRegisterEvent_Params params;
	params.FEventType = FEventType;
	params.EventID = EventID;
	params.ObjContext = ObjContext;
	params.EventHandle = EventHandle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventBridgeFunction.RegistEvent
// ()
// Parameters:
// struct FString                 EventType                      (Parm, ZeroConstructor)
// struct FString                 EventID                        (Parm, ZeroConstructor)
// class UObject*                 ObjContext                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULuaEventBridgeFunction::RegistEvent(const struct FString& EventType, const struct FString& EventID, class UObject* ObjContext, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridgeFunction.RegistEvent");

	ULuaEventBridgeFunction_RegistEvent_Params params;
	params.EventType = EventType;
	params.EventID = EventID;
	params.ObjContext = ObjContext;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.LuaEventBridge.SyncLuaRegisterEventNum
// ()
// Parameters:
// struct FString                 EventType                      (Parm, ZeroConstructor)
// struct FString                 EventID                        (Parm, ZeroConstructor)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void ULuaEventBridge::SyncLuaRegisterEventNum(const struct FString& EventType, const struct FString& EventID, int Number)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridge.SyncLuaRegisterEventNum");

	ULuaEventBridge_SyncLuaRegisterEventNum_Params params;
	params.EventType = EventType;
	params.EventID = EventID;
	params.Number = Number;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventBridge.GetCurrentParam
// ()
// Parameters:
// TArray<class ULuaTemBPData*>   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class ULuaTemBPData*> ULuaEventBridge::GetCurrentParam()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridge.GetCurrentParam");

	ULuaEventBridge_GetCurrentParam_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.LuaEventBridge.DeactivateEventsByFilterKey
// ()
// Parameters:
// uint32_t                       FilterKey                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ULuaEventBridge::DeactivateEventsByFilterKey(uint32_t FilterKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridge.DeactivateEventsByFilterKey");

	ULuaEventBridge_DeactivateEventsByFilterKey_Params params;
	params.FilterKey = FilterKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventBridge.CheckNeedPostEventWithFilterKey
// ()
// Parameters:
// uint32_t                       FilterKey                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 EventType                      (Parm, ZeroConstructor)
// struct FString                 EventID                        (Parm, ZeroConstructor)
// bool                           bCheckNeedPostLua              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULuaEventBridge::CheckNeedPostEventWithFilterKey(uint32_t FilterKey, const struct FString& EventType, const struct FString& EventID, bool bCheckNeedPostLua)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridge.CheckNeedPostEventWithFilterKey");

	ULuaEventBridge_CheckNeedPostEventWithFilterKey_Params params;
	params.FilterKey = FilterKey;
	params.EventType = EventType;
	params.EventID = EventID;
	params.bCheckNeedPostLua = bCheckNeedPostLua;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.LuaEventBridge.ActiveEventByFilterKey
// ()
// Parameters:
// uint32_t                       FilterKey                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 EventType                      (Parm, ZeroConstructor)
// struct FString                 EventID                        (Parm, ZeroConstructor)
// bool                           bActive                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULuaEventBridge::ActiveEventByFilterKey(uint32_t FilterKey, const struct FString& EventType, const struct FString& EventID, bool bActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridge.ActiveEventByFilterKey");

	ULuaEventBridge_ActiveEventByFilterKey_Params params;
	params.FilterKey = FilterKey;
	params.EventType = EventType;
	params.EventID = EventID;
	params.bActive = bActive;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventSubsystem.UnRegistEvent
// ()
// Parameters:
// int                            EventHandle                    (Parm, ZeroConstructor, IsPlainOldData)

void ULuaEventSubsystem::UnRegistEvent(int EventHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventSubsystem.UnRegistEvent");

	ULuaEventSubsystem_UnRegistEvent_Params params;
	params.EventHandle = EventHandle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventSubsystem.SetBridgeFunction
// ()
// Parameters:
// struct FSluaBPVar              OnRegistEvent                  (Parm)
// struct FSluaBPVar              OnUnRegistEvent                (Parm)
// struct FSluaBPVar              OnPostEvent                    (Parm)
// struct FSluaBPVar              OnPostBlueprintEvent           (Parm)

void ULuaEventSubsystem::SetBridgeFunction(const struct FSluaBPVar& OnRegistEvent, const struct FSluaBPVar& OnUnRegistEvent, const struct FSluaBPVar& OnPostEvent, const struct FSluaBPVar& OnPostBlueprintEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventSubsystem.SetBridgeFunction");

	ULuaEventSubsystem_SetBridgeFunction_Params params;
	params.OnRegistEvent = OnRegistEvent;
	params.OnUnRegistEvent = OnUnRegistEvent;
	params.OnPostEvent = OnPostEvent;
	params.OnPostBlueprintEvent = OnPostBlueprintEvent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventSubsystem.RegistEvent
// ()
// Parameters:
// struct FString                 EventID                        (Parm, ZeroConstructor)
// struct FString                 EventType                      (Parm, ZeroConstructor)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULuaEventSubsystem::RegistEvent(const struct FString& EventID, const struct FString& EventType, class UObject* Object, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventSubsystem.RegistEvent");

	ULuaEventSubsystem_RegistEvent_Params params;
	params.EventID = EventID;
	params.EventType = EventType;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.RenderFunctionLibrary.MarkComponentRenderStateDirty
// ()
// Parameters:
// class UActorComponent*         Comp                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URenderFunctionLibrary::MarkComponentRenderStateDirty(class UActorComponent* Comp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.RenderFunctionLibrary.MarkComponentRenderStateDirty");

	URenderFunctionLibrary_MarkComponentRenderStateDirty_Params params;
	params.Comp = Comp;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffCarrierInterface.SetEndTime
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTime                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::SetEndTime(int InstID, float EndTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.SetEndTime");

	USTBaseBuffCarrierInterface_SetEndTime_Params params;
	params.InstID = InstID;
	params.EndTime = EndTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.RemoveBuffBySkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::RemoveBuffBySkill(int SkillID, int LayerCount, class AActor* Causer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.RemoveBuffBySkill");

	USTBaseBuffCarrierInterface_RemoveBuffBySkill_Params params;
	params.SkillID = SkillID;
	params.LayerCount = LayerCount;
	params.Causer = Causer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.RemoveBuffByID
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::RemoveBuffByID(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.RemoveBuffByID");

	USTBaseBuffCarrierInterface_RemoveBuffByID_Params params;
	params.BuffID = BuffID;
	params.Causer = Causer;
	params.LayerCount = LayerCount;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.HasSkillID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::HasSkillID(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.HasSkillID");

	USTBaseBuffCarrierInterface_HasSkillID_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.HasBuffID
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::HasBuffID(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.HasBuffID");

	USTBaseBuffCarrierInterface_HasBuffID_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.GetBuffIDsBySkillID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<int> USTBaseBuffCarrierInterface::GetBuffIDsBySkillID(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.GetBuffIDsBySkillID");

	USTBaseBuffCarrierInterface_GetBuffIDsBySkillID_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.GetBuffDuration
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTBaseBuffCarrierInterface::GetBuffDuration(int InstID, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.GetBuffDuration");

	USTBaseBuffCarrierInterface_GetBuffDuration_Params params;
	params.InstID = InstID;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.GetBuffComponent
// ()
// Parameters:
// class USTBuffSystemComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuffSystemComponent* USTBaseBuffCarrierInterface::GetBuffComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.GetBuffComponent");

	USTBaseBuffCarrierInterface_GetBuffComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.ChangeBuffDuration
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::ChangeBuffDuration(int InstID, float Duration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.ChangeBuffDuration");

	USTBaseBuffCarrierInterface_ChangeBuffDuration_Params params;
	params.InstID = InstID;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.AddBuffBySkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::AddBuffBySkill(int SkillID, int LayerCount, class AActor* Causer, int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.AddBuffBySkill");

	USTBaseBuffCarrierInterface_AddBuffBySkill_Params params;
	params.SkillID = SkillID;
	params.LayerCount = LayerCount;
	params.Causer = Causer;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.AddBuffByID
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBaseBuffCarrierInterface::AddBuffByID(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID, int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.AddBuffByID");

	USTBaseBuffCarrierInterface_AddBuffByID_Params params;
	params.BuffID = BuffID;
	params.Causer = Causer;
	params.LayerCount = LayerCount;
	params.CauseSkillID = CauseSkillID;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuff.Tick
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeSeconds                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    TickActionList                 (Parm, OutParm, ZeroConstructor)

void USTBuff::Tick(class UActorComponent* BuffSystemComponent, int InstID, float DetalTime, float TimeSeconds, TArray<int>* TickActionList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.Tick");

	USTBuff_Tick_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.DetalTime = DetalTime;
	params.TimeSeconds = TimeSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TickActionList != nullptr)
		*TickActionList = params.TickActionList;
}


// Function Basic.STBuff.ResetActionExecute
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::ResetActionExecute(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.ResetActionExecute");

	USTBuff_ResetActionExecute_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.OnCreate
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::OnCreate(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.OnCreate");

	USTBuff_OnCreate_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.Initialize
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::Initialize(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.Initialize");

	USTBuff_Initialize_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.InitBuffAction
// ()

void USTBuff::InitBuffAction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.InitBuffAction");

	USTBuff_InitBuffAction_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.End
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::End(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.End");

	USTBuff_End_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.Destroy
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::Destroy(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.Destroy");

	USTBuff_Destroy_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.ChangeNotify
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuff::ChangeNotify(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.ChangeNotify");

	USTBuff_ChangeNotify_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffNodeInstanceData.GetBuffInstLevel
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBuffNodeInstanceData::GetBuffInstLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffNodeInstanceData.GetBuffInstLevel");

	USTBuffNodeInstanceData_GetBuffInstLevel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffAction.ToString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USTBuffAction::ToString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.ToString");

	USTBuffAction_ToString_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffAction.Tick2
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::Tick2(class UActorComponent* BuffSystemComponent, int InstID, float DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.Tick2");

	USTBuffAction_Tick2_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.Tick
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::Tick(class UActorComponent* BuffSystemComponent, int InstID, float DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.Tick");

	USTBuffAction_Tick_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.SetEnabled
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::SetEnabled(class UActorComponent* BuffSystemComponent, int InstID, bool Enabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.SetEnabled");

	USTBuffAction_SetEnabled_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.Enabled = Enabled;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.ResetExecute
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreEnd                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::ResetExecute(class UActorComponent* BuffSystemComponent, int InstID, bool IgnoreEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.ResetExecute");

	USTBuffAction_ResetExecute_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.IgnoreEnd = IgnoreEnd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnTick
// ()
// Parameters:
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::OnTick(float DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnTick");

	USTBuffAction_OnTick_Params params;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnResetExecute
// ()
// Parameters:
// bool                           IgnoreEnd                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::OnResetExecute(bool IgnoreEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnResetExecute");

	USTBuffAction_OnResetExecute_Params params;
	params.IgnoreEnd = IgnoreEnd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnInitialize
// ()

void USTBuffAction::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnInitialize");

	USTBuffAction_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnExecute
// ()

void USTBuffAction::OnExecute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnExecute");

	USTBuffAction_OnExecute_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnEnd
// ()

void USTBuffAction::OnEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnEnd");

	USTBuffAction_OnEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnDestroy
// ()

void USTBuffAction::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnDestroy");

	USTBuffAction_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnCheckLinkActionEnabled
// ()

void USTBuffAction::OnCheckLinkActionEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnCheckLinkActionEnabled");

	USTBuffAction_OnCheckLinkActionEnabled_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnChangeNotify
// ()

void USTBuffAction::OnChangeNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnChangeNotify");

	USTBuffAction_OnChangeNotify_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnAsyncLoadSoftPathDone
// ()

void USTBuffAction::OnAsyncLoadSoftPathDone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnAsyncLoadSoftPathDone");

	USTBuffAction_OnAsyncLoadSoftPathDone_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.IsRoleOK
// ()
// Parameters:
// class UActorComponent*         OwnerComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffAction::IsRoleOK(class UActorComponent* OwnerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.IsRoleOK");

	USTBuffAction_IsRoleOK_Params params;
	params.OwnerComponent = OwnerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffAction.Initialize
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::Initialize(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.Initialize");

	USTBuffAction_Initialize_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.GetRealOwnerRole
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> USTBuffAction::GetRealOwnerRole()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.GetRealOwnerRole");

	USTBuffAction_GetRealOwnerRole_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffAction.GetOwner
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBuffAction::GetOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.GetOwner");

	USTBuffAction_GetOwner_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffAction.GetCauser
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBuffAction::GetCauser()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.GetCauser");

	USTBuffAction_GetCauser_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffAction.Execute
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::Execute(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.Execute");

	USTBuffAction_Execute_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.End
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::End(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.End");

	USTBuffAction_End_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.Destroy
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::Destroy(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.Destroy");

	USTBuffAction_Destroy_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.CheckLinkActionEnabled
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::CheckLinkActionEnabled(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.CheckLinkActionEnabled");

	USTBuffAction_CheckLinkActionEnabled_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.ChangeNotify
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::ChangeNotify(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.ChangeNotify");

	USTBuffAction_ChangeNotify_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.ToString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USTBuffAction_Lua::ToString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.ToString");

	USTBuffAction_Lua_ToString_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffAction_Lua.OnTick
// ()
// Parameters:
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction_Lua::OnTick(float DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnTick");

	USTBuffAction_Lua_OnTick_Params params;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnInitialize
// ()

void USTBuffAction_Lua::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnInitialize");

	USTBuffAction_Lua_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnExecute
// ()

void USTBuffAction_Lua::OnExecute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnExecute");

	USTBuffAction_Lua_OnExecute_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnEnd
// ()

void USTBuffAction_Lua::OnEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnEnd");

	USTBuffAction_Lua_OnEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnDestroy
// ()

void USTBuffAction_Lua::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnDestroy");

	USTBuffAction_Lua_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnChangeNotify
// ()

void USTBuffAction_Lua::OnChangeNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnChangeNotify");

	USTBuffAction_Lua_OnChangeNotify_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCheckConditionWrapper.Tick
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffCheckConditionWrapper::Tick(class UActorComponent* BuffSystemComponent, int InstID, float DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.Tick");

	USTBuffCheckConditionWrapper_Tick_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCheckConditionWrapper.ResetExecute
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreEnd                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffCheckConditionWrapper::ResetExecute(class UActorComponent* BuffSystemComponent, int InstID, bool IgnoreEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.ResetExecute");

	USTBuffCheckConditionWrapper_ResetExecute_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.IgnoreEnd = IgnoreEnd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCheckConditionWrapper.OnTick
// ()
// Parameters:
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffCheckConditionWrapper::OnTick(float DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.OnTick");

	USTBuffCheckConditionWrapper_OnTick_Params params;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCheckConditionWrapper.OnInitialize
// ()

void USTBuffCheckConditionWrapper::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.OnInitialize");

	USTBuffCheckConditionWrapper_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCheckConditionWrapper.OnDestroy
// ()

void USTBuffCheckConditionWrapper::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.OnDestroy");

	USTBuffCheckConditionWrapper_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCheckConditionWrapper.OnConditionTrue
// ()

void USTBuffCheckConditionWrapper::OnConditionTrue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.OnConditionTrue");

	USTBuffCheckConditionWrapper_OnConditionTrue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCheckConditionWrapper.OnConditionFalse
// ()

void USTBuffCheckConditionWrapper::OnConditionFalse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.OnConditionFalse");

	USTBuffCheckConditionWrapper_OnConditionFalse_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCheckConditionWrapper.OnChangeNotify
// ()

void USTBuffCheckConditionWrapper::OnChangeNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.OnChangeNotify");

	USTBuffCheckConditionWrapper_OnChangeNotify_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCheckConditionWrapper.IsRoleOK
// ()
// Parameters:
// class UActorComponent*         OwnerComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffCheckConditionWrapper::IsRoleOK(class UActorComponent* OwnerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.IsRoleOK");

	USTBuffCheckConditionWrapper_IsRoleOK_Params params;
	params.OwnerComponent = OwnerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffCheckConditionWrapper.InitLinkActionEnableState
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffCheckConditionWrapper::InitLinkActionEnableState(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.InitLinkActionEnableState");

	USTBuffCheckConditionWrapper_InitLinkActionEnableState_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCheckConditionWrapper.Initialize
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffCheckConditionWrapper::Initialize(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.Initialize");

	USTBuffCheckConditionWrapper_Initialize_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCheckConditionWrapper.GetRealOwnerRole
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> USTBuffCheckConditionWrapper::GetRealOwnerRole()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.GetRealOwnerRole");

	USTBuffCheckConditionWrapper_GetRealOwnerRole_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffCheckConditionWrapper.Execute
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffCheckConditionWrapper::Execute(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.Execute");

	USTBuffCheckConditionWrapper_Execute_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCheckConditionWrapper.End
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffCheckConditionWrapper::End(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.End");

	USTBuffCheckConditionWrapper_End_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCheckConditionWrapper.Destroy
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffCheckConditionWrapper::Destroy(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.Destroy");

	USTBuffCheckConditionWrapper_Destroy_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCheckConditionWrapper.CheckCondition
// ()

void USTBuffCheckConditionWrapper::CheckCondition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.CheckCondition");

	USTBuffCheckConditionWrapper_CheckCondition_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCheckConditionWrapper.ChangeNotify
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffCheckConditionWrapper::ChangeNotify(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCheckConditionWrapper.ChangeNotify");

	USTBuffCheckConditionWrapper_ChangeNotify_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition.OnResetExecute
// ()
// Parameters:
// bool                           IgnoreEnd                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffCondition::OnResetExecute(bool IgnoreEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.OnResetExecute");

	USTBuffCondition_OnResetExecute_Params params;
	params.IgnoreEnd = IgnoreEnd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition.OnInitialize
// ()

void USTBuffCondition::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.OnInitialize");

	USTBuffCondition_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition.OnEnd
// ()

void USTBuffCondition::OnEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.OnEnd");

	USTBuffCondition_OnEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition.OnDestroy
// ()

void USTBuffCondition::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.OnDestroy");

	USTBuffCondition_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition.GetOwner
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBuffCondition::GetOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.GetOwner");

	USTBuffCondition_GetOwner_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffCondition.GetCauser
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBuffCondition::GetCauser()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.GetCauser");

	USTBuffCondition_GetCauser_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffCondition.Copy
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USTBuffCondition*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuffCondition* USTBuffCondition::Copy(class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.Copy");

	USTBuffCondition_Copy_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffCondition.CheckIsTrue
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffCondition::CheckIsTrue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.CheckIsTrue");

	USTBuffCondition_CheckIsTrue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffCondition.ChangeNotify
// ()

void USTBuffCondition::ChangeNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.ChangeNotify");

	USTBuffCondition_ChangeNotify_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionComplex.OnInitialize
// ()

void USTBuffConditionComplex::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionComplex.OnInitialize");

	USTBuffConditionComplex_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionComplex.OnDestroy
// ()

void USTBuffConditionComplex::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionComplex.OnDestroy");

	USTBuffConditionComplex_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionComplex.Copy
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USTBuffCondition*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuffCondition* USTBuffConditionComplex::Copy(class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionComplex.Copy");

	USTBuffConditionComplex_Copy_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffConditionComplex.CheckIsTrue
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffConditionComplex::CheckIsTrue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionComplex.CheckIsTrue");

	USTBuffConditionComplex_CheckIsTrue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffConditionNot.OnInitialize
// ()

void USTBuffConditionNot::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionNot.OnInitialize");

	USTBuffConditionNot_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionNot.OnDestroy
// ()

void USTBuffConditionNot::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionNot.OnDestroy");

	USTBuffConditionNot_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionNot.Copy
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USTBuffCondition*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuffCondition* USTBuffConditionNot::Copy(class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionNot.Copy");

	USTBuffConditionNot_Copy_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffConditionNot.CheckIsTrue
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffConditionNot::CheckIsTrue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionNot.CheckIsTrue");

	USTBuffConditionNot_CheckIsTrue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffCondition_Lua.OnInitialize
// ()

void USTBuffCondition_Lua::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition_Lua.OnInitialize");

	USTBuffCondition_Lua_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition_Lua.OnDestroy
// ()

void USTBuffCondition_Lua::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition_Lua.OnDestroy");

	USTBuffCondition_Lua_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition_Lua.CheckIsTrue
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffCondition_Lua::CheckIsTrue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition_Lua.CheckIsTrue");

	USTBuffCondition_Lua_CheckIsTrue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffConditionAction.OnTick
// ()
// Parameters:
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffConditionAction::OnTick(float DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnTick");

	USTBuffConditionAction_OnTick_Params params;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.OnInitialize
// ()

void USTBuffConditionAction::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnInitialize");

	USTBuffConditionAction_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.OnDestroy
// ()

void USTBuffConditionAction::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnDestroy");

	USTBuffConditionAction_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.OnConditionTrue
// ()

void USTBuffConditionAction::OnConditionTrue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnConditionTrue");

	USTBuffConditionAction_OnConditionTrue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.OnConditionFalse
// ()

void USTBuffConditionAction::OnConditionFalse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnConditionFalse");

	USTBuffConditionAction_OnConditionFalse_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.OnChangeNotify
// ()

void USTBuffConditionAction::OnChangeNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnChangeNotify");

	USTBuffConditionAction_OnChangeNotify_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.CheckCondition
// ()

void USTBuffConditionAction::CheckCondition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.CheckCondition");

	USTBuffConditionAction_CheckCondition_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffEvent.TriggerEvent
// ()

void USTBuffEvent::TriggerEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent.TriggerEvent");

	USTBuffEvent_TriggerEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffEvent.ToString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USTBuffEvent::ToString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent.ToString");

	USTBuffEvent_ToString_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffEvent.SetTimer
// ()
// Parameters:
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRate                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InbLoop                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InFirstDelay                   (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffEvent::SetTimer(const struct FName& FunctionName, float InRate, bool InbLoop, float InFirstDelay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent.SetTimer");

	USTBuffEvent_SetTimer_Params params;
	params.FunctionName = FunctionName;
	params.InRate = InRate;
	params.InbLoop = InbLoop;
	params.InFirstDelay = InFirstDelay;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffEvent.OnInitialize
// ()

void USTBuffEvent::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent.OnInitialize");

	USTBuffEvent_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffEvent.OnEnd
// ()

void USTBuffEvent::OnEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent.OnEnd");

	USTBuffEvent_OnEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffEvent.OnDestroy
// ()

void USTBuffEvent::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent.OnDestroy");

	USTBuffEvent_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffEvent.IsRoleOK
// ()
// Parameters:
// class UActorComponent*         OwnerComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffEvent::IsRoleOK(class UActorComponent* OwnerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent.IsRoleOK");

	USTBuffEvent_IsRoleOK_Params params;
	params.OwnerComponent = OwnerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffEvent.GetRealOwnerRole
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> USTBuffEvent::GetRealOwnerRole()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent.GetRealOwnerRole");

	USTBuffEvent_GetRealOwnerRole_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffEvent.GetOwner
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBuffEvent::GetOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent.GetOwner");

	USTBuffEvent_GetOwner_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffEvent.GetCauser
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBuffEvent::GetCauser()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent.GetCauser");

	USTBuffEvent_GetCauser_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffEvent.Copy
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USTBuffEvent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuffEvent* USTBuffEvent::Copy(class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent.Copy");

	USTBuffEvent_Copy_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffEvent.ClearTimer
// ()
// Parameters:
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffEvent::ClearTimer(const struct FName& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent.ClearTimer");

	USTBuffEvent_ClearTimer_Params params;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffEvent.ClearAllTimer
// ()

void USTBuffEvent::ClearAllTimer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent.ClearAllTimer");

	USTBuffEvent_ClearAllTimer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffEvent_Lua.ToString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USTBuffEvent_Lua::ToString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent_Lua.ToString");

	USTBuffEvent_Lua_ToString_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffEvent_Multi.OnInitialize
// ()

void USTBuffEvent_Multi::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent_Multi.OnInitialize");

	USTBuffEvent_Multi_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffEvent_Multi.OnEnd
// ()

void USTBuffEvent_Multi::OnEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent_Multi.OnEnd");

	USTBuffEvent_Multi_OnEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffEvent_Multi.OnDestroy
// ()

void USTBuffEvent_Multi::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent_Multi.OnDestroy");

	USTBuffEvent_Multi_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffEvent_Multi.Copy
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USTBuffEvent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuffEvent* USTBuffEvent_Multi::Copy(class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffEvent_Multi.Copy");

	USTBuffEvent_Multi_Copy_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSharedInterface.SetVectorShared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// struct FVector                 InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USTBuffSharedInterface::SetVectorShared(const struct FString& SharedName, const struct FVector& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.SetVectorShared");

	USTBuffSharedInterface_SetVectorShared_Params params;
	params.SharedName = SharedName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSharedInterface.SetUInt8Shared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// unsigned char                  InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSharedInterface::SetUInt8Shared(const struct FString& SharedName, unsigned char InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.SetUInt8Shared");

	USTBuffSharedInterface_SetUInt8Shared_Params params;
	params.SharedName = SharedName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSharedInterface.SetTargetShared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// TArray<class AActor*>          InActors                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USTBuffSharedInterface::SetTargetShared(const struct FString& SharedName, TArray<class AActor*> InActors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.SetTargetShared");

	USTBuffSharedInterface_SetTargetShared_Params params;
	params.SharedName = SharedName;
	params.InActors = InActors;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSharedInterface.SetStringShared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// struct FString                 InValue                        (Parm, ZeroConstructor)

void USTBuffSharedInterface::SetStringShared(const struct FString& SharedName, const struct FString& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.SetStringShared");

	USTBuffSharedInterface_SetStringShared_Params params;
	params.SharedName = SharedName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSharedInterface.SetRotatorShared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// struct FRotator                InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USTBuffSharedInterface::SetRotatorShared(const struct FString& SharedName, const struct FRotator& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.SetRotatorShared");

	USTBuffSharedInterface_SetRotatorShared_Params params;
	params.SharedName = SharedName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSharedInterface.SetNameShared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// struct FName                   InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSharedInterface::SetNameShared(const struct FString& SharedName, const struct FName& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.SetNameShared");

	USTBuffSharedInterface_SetNameShared_Params params;
	params.SharedName = SharedName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSharedInterface.SetInt32Shared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSharedInterface::SetInt32Shared(const struct FString& SharedName, int InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.SetInt32Shared");

	USTBuffSharedInterface_SetInt32Shared_Params params;
	params.SharedName = SharedName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSharedInterface.SetFloatShared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSharedInterface::SetFloatShared(const struct FString& SharedName, float InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.SetFloatShared");

	USTBuffSharedInterface_SetFloatShared_Params params;
	params.SharedName = SharedName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSharedInterface.SetBooleanShared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSharedInterface::SetBooleanShared(const struct FString& SharedName, bool InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.SetBooleanShared");

	USTBuffSharedInterface_SetBooleanShared_Params params;
	params.SharedName = SharedName;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSharedInterface.RemoveShared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)

void USTBuffSharedInterface::RemoveShared(const struct FString& SharedName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.RemoveShared");

	USTBuffSharedInterface_RemoveShared_Params params;
	params.SharedName = SharedName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSharedInterface.GetVectorShared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// struct FVector                 OutValue                       (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSharedInterface::GetVectorShared(const struct FString& SharedName, struct FVector* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.GetVectorShared");

	USTBuffSharedInterface_GetVectorShared_Params params;
	params.SharedName = SharedName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function Basic.STBuffSharedInterface.GetUInt8Shared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// unsigned char                  OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSharedInterface::GetUInt8Shared(const struct FString& SharedName, unsigned char* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.GetUInt8Shared");

	USTBuffSharedInterface_GetUInt8Shared_Params params;
	params.SharedName = SharedName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function Basic.STBuffSharedInterface.GetTargetShared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSharedInterface::GetTargetShared(const struct FString& SharedName, TArray<class AActor*>* OutActors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.GetTargetShared");

	USTBuffSharedInterface_GetTargetShared_Params params;
	params.SharedName = SharedName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

	return params.ReturnValue;
}


// Function Basic.STBuffSharedInterface.GetStringShared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// struct FString                 OutValue                       (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSharedInterface::GetStringShared(const struct FString& SharedName, struct FString* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.GetStringShared");

	USTBuffSharedInterface_GetStringShared_Params params;
	params.SharedName = SharedName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function Basic.STBuffSharedInterface.GetRotatorShared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// struct FRotator                OutValue                       (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSharedInterface::GetRotatorShared(const struct FString& SharedName, struct FRotator* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.GetRotatorShared");

	USTBuffSharedInterface_GetRotatorShared_Params params;
	params.SharedName = SharedName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function Basic.STBuffSharedInterface.GetNameShared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// struct FName                   OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSharedInterface::GetNameShared(const struct FString& SharedName, struct FName* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.GetNameShared");

	USTBuffSharedInterface_GetNameShared_Params params;
	params.SharedName = SharedName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function Basic.STBuffSharedInterface.GetInt32Shared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// int                            OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSharedInterface::GetInt32Shared(const struct FString& SharedName, int* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.GetInt32Shared");

	USTBuffSharedInterface_GetInt32Shared_Params params;
	params.SharedName = SharedName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function Basic.STBuffSharedInterface.GetFloatShared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// float                          OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSharedInterface::GetFloatShared(const struct FString& SharedName, float* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.GetFloatShared");

	USTBuffSharedInterface_GetFloatShared_Params params;
	params.SharedName = SharedName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function Basic.STBuffSharedInterface.GetBooleanShared
// ()
// Parameters:
// struct FString                 SharedName                     (Parm, ZeroConstructor)
// bool                           OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSharedInterface::GetBooleanShared(const struct FString& SharedName, bool* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSharedInterface.GetBooleanShared");

	USTBuffSharedInterface_GetBooleanShared_Params params;
	params.SharedName = SharedName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.UpdateClientBuff
// ()
// Parameters:
// struct FBuffSyncBrief          Brief                          (Parm, OutParm)

void USTBuffSystemComponent::UpdateClientBuff(struct FBuffSyncBrief* Brief)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.UpdateClientBuff");

	USTBuffSystemComponent_UpdateClientBuff_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Brief != nullptr)
		*Brief = params.Brief;
}


// Function Basic.STBuffSystemComponent.SetEndTime
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTime                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::SetEndTime(int InstID, float EndTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.SetEndTime");

	USTBuffSystemComponent_SetEndTime_Params params;
	params.InstID = InstID;
	params.EndTime = EndTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.SetBuffReplaceData
// ()
// Parameters:
// struct FBuffReplaceData        From                           (Parm)
// struct FBuffReplaceData        To                             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::SetBuffReplaceData(const struct FBuffReplaceData& From, const struct FBuffReplaceData& To)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.SetBuffReplaceData");

	USTBuffSystemComponent_SetBuffReplaceData_Params params;
	params.From = From;
	params.To = To;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.RemoveBuffBySkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::RemoveBuffBySkill(int SkillID, int LayerCount, class AActor* Causer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.RemoveBuffBySkill");

	USTBuffSystemComponent_RemoveBuffBySkill_Params params;
	params.SkillID = SkillID;
	params.LayerCount = LayerCount;
	params.Causer = Causer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.RemoveBuff
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::RemoveBuff(int BuffID, int LayerCount, class AActor* Causer, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.RemoveBuff");

	USTBuffSystemComponent_RemoveBuff_Params params;
	params.BuffID = BuffID;
	params.LayerCount = LayerCount;
	params.Causer = Causer;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.RemoveAllBuffsWithExcludeArray
// ()
// Parameters:
// TArray<int>                    InExcludeArry                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USTBuffSystemComponent::RemoveAllBuffsWithExcludeArray(TArray<int> InExcludeArry)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.RemoveAllBuffsWithExcludeArray");

	USTBuffSystemComponent_RemoveAllBuffsWithExcludeArray_Params params;
	params.InExcludeArry = InExcludeArry;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.RemoveAllBuffs
// ()
// Parameters:
// bool                           bClearAll                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::RemoveAllBuffs(bool bClearAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.RemoveAllBuffs");

	USTBuffSystemComponent_RemoveAllBuffs_Params params;
	params.bClearAll = bClearAll;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBuffSystemComponent.OnUpdateBuffEvent__DelegateSignature
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::OnUpdateBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBuffSystemComponent.OnUpdateBuffEvent__DelegateSignature");

	USTBuffSystemComponent_OnUpdateBuffEvent__DelegateSignature_Params params;
	params.BuffID = BuffID;
	params.SkillID = SkillID;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.OnRep_SyncBriefs
// ()

void USTBuffSystemComponent::OnRep_SyncBriefs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.OnRep_SyncBriefs");

	USTBuffSystemComponent_OnRep_SyncBriefs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.OnRep_OwnerSyncBriefs
// ()

void USTBuffSystemComponent::OnRep_OwnerSyncBriefs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.OnRep_OwnerSyncBriefs");

	USTBuffSystemComponent_OnRep_OwnerSyncBriefs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBuffSystemComponent.OnRemoveBuffEvent__DelegateSignature
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::OnRemoveBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBuffSystemComponent.OnRemoveBuffEvent__DelegateSignature");

	USTBuffSystemComponent_OnRemoveBuffEvent__DelegateSignature_Params params;
	params.BuffID = BuffID;
	params.SkillID = SkillID;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBuffSystemComponent.OnClientUpdateBuffEvent__DelegateSignature
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::OnClientUpdateBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBuffSystemComponent.OnClientUpdateBuffEvent__DelegateSignature");

	USTBuffSystemComponent_OnClientUpdateBuffEvent__DelegateSignature_Params params;
	params.BuffID = BuffID;
	params.SkillID = SkillID;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBuffSystemComponent.OnClientRemoveBuffEvent__DelegateSignature
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::OnClientRemoveBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBuffSystemComponent.OnClientRemoveBuffEvent__DelegateSignature");

	USTBuffSystemComponent_OnClientRemoveBuffEvent__DelegateSignature_Params params;
	params.BuffID = BuffID;
	params.SkillID = SkillID;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBuffSystemComponent.OnClientAddBuffEvent__DelegateSignature
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::OnClientAddBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBuffSystemComponent.OnClientAddBuffEvent__DelegateSignature");

	USTBuffSystemComponent_OnClientAddBuffEvent__DelegateSignature_Params params;
	params.BuffID = BuffID;
	params.SkillID = SkillID;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBuffSystemComponent.OnAddBuffEvent__DelegateSignature
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsExist                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::OnAddBuffEvent__DelegateSignature(int BuffID, int SkillID, bool IsExist, class AActor* Causer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBuffSystemComponent.OnAddBuffEvent__DelegateSignature");

	USTBuffSystemComponent_OnAddBuffEvent__DelegateSignature_Params params;
	params.BuffID = BuffID;
	params.SkillID = SkillID;
	params.IsExist = IsExist;
	params.Causer = Causer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.IsCDOK
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::IsCDOK(int InstID, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.IsCDOK");

	USTBuffSystemComponent_IsCDOK_Params params;
	params.InstID = InstID;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.IsBuffInstExist
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::IsBuffInstExist(int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.IsBuffInstExist");

	USTBuffSystemComponent_IsBuffInstExist_Params params;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.HasSkillID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::HasSkillID(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.HasSkillID");

	USTBuffSystemComponent_HasSkillID_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.HasBuff
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::HasBuff(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.HasBuff");

	USTBuffSystemComponent_HasBuff_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetSubsystem
// ()
// Parameters:
// class UBuffConfigSubsystem*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBuffConfigSubsystem* USTBuffSystemComponent::GetSubsystem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetSubsystem");

	USTBuffSystemComponent_GetSubsystem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetSTBuffByBuffID
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class USTBuff*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuff* USTBuffSystemComponent::GetSTBuffByBuffID(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetSTBuffByBuffID");

	USTBuffSystemComponent_GetSTBuffByBuffID_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetRealOwnerRoleSafety
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> USTBuffSystemComponent::GetRealOwnerRoleSafety()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetRealOwnerRoleSafety");

	USTBuffSystemComponent_GetRealOwnerRoleSafety_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffReplaceDataByID
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBuffInst                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBuffReplaceData        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBuffReplaceData USTBuffSystemComponent::GetBuffReplaceDataByID(int ID, bool bBuffInst)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffReplaceDataByID");

	USTBuffSystemComponent_GetBuffReplaceDataByID_Params params;
	params.ID = ID;
	params.bBuffInst = bBuffInst;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffLayerCount
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBuffSystemComponent::GetBuffLayerCount(int InstID, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffLayerCount");

	USTBuffSystemComponent_GetBuffLayerCount_Params params;
	params.InstID = InstID;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffInfoBySkillID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBuffSyncBrief>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBuffSyncBrief> USTBuffSystemComponent::GetBuffInfoBySkillID(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffInfoBySkillID");

	USTBuffSystemComponent_GetBuffInfoBySkillID_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffInfoByBuffID
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBuffSyncBrief>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBuffSyncBrief> USTBuffSystemComponent::GetBuffInfoByBuffID(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffInfoByBuffID");

	USTBuffSystemComponent_GetBuffInfoByBuffID_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffInfo
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FBuffSyncBrief          OutBuff                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::GetBuffInfo(int InstID, struct FBuffSyncBrief* OutBuff)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffInfo");

	USTBuffSystemComponent_GetBuffInfo_Params params;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutBuff != nullptr)
		*OutBuff = params.OutBuff;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffIDsBySkillID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<int> USTBuffSystemComponent::GetBuffIDsBySkillID(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffIDsBySkillID");

	USTBuffSystemComponent_GetBuffIDsBySkillID_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffDuration
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTBuffSystemComponent::GetBuffDuration(int InstID, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffDuration");

	USTBuffSystemComponent_GetBuffDuration_Params params;
	params.InstID = InstID;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffDSEndTime
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTBuffSystemComponent::GetBuffDSEndTime(int InstID, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffDSEndTime");

	USTBuffSystemComponent_GetBuffDSEndTime_Params params;
	params.InstID = InstID;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffCDInfo
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<float> USTBuffSystemComponent::GetBuffCDInfo(int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffCDInfo");

	USTBuffSystemComponent_GetBuffCDInfo_Params params;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetAllBuffInfo
// ()
// Parameters:
// TArray<struct FBuffSyncBrief>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBuffSyncBrief> USTBuffSystemComponent::GetAllBuffInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetAllBuffInfo");

	USTBuffSystemComponent_GetAllBuffInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.DoCooldown
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::DoCooldown(int InstID, int Index, bool bReset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.DoCooldown");

	USTBuffSystemComponent_DoCooldown_Params params;
	params.InstID = InstID;
	params.Index = Index;
	params.bReset = bReset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.ClearBuffs
// ()

void USTBuffSystemComponent::ClearBuffs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.ClearBuffs");

	USTBuffSystemComponent_ClearBuffs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.ChangeLevel
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewLevel                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::ChangeLevel(int InstID, int NewLevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.ChangeLevel");

	USTBuffSystemComponent_ChangeLevel_Params params;
	params.InstID = InstID;
	params.NewLevel = NewLevel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.ChangeDuration
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::ChangeDuration(int InstID, float Duration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.ChangeDuration");

	USTBuffSystemComponent_ChangeDuration_Params params;
	params.InstID = InstID;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.AddBuffBySkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::AddBuffBySkill(int SkillID, int LayerCount, class AActor* Causer, int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.AddBuffBySkill");

	USTBuffSystemComponent_AddBuffBySkill_Params params;
	params.SkillID = SkillID;
	params.LayerCount = LayerCount;
	params.Causer = Causer;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.AddBuff
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBuffSystemComponent::AddBuff(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID, int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.AddBuff");

	USTBuffSystemComponent_AddBuff_Params params;
	params.BuffID = BuffID;
	params.Causer = Causer;
	params.LayerCount = LayerCount;
	params.CauseSkillID = CauseSkillID;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffTriggerBase.Tick
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffTriggerBase::Tick(class UActorComponent* BuffSystemComponent, int InstID, float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffTriggerBase.Tick");

	USTBuffTriggerBase_Tick_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffTriggerBase.ResetExecute
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffTriggerBase::ResetExecute(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffTriggerBase.ResetExecute");

	USTBuffTriggerBase_ResetExecute_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffTriggerBase.OnTriggerCreate
// ()

void USTBuffTriggerBase::OnTriggerCreate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffTriggerBase.OnTriggerCreate");

	USTBuffTriggerBase_OnTriggerCreate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffTriggerBase.OnTick
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffTriggerBase::OnTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffTriggerBase.OnTick");

	USTBuffTriggerBase_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffTriggerBase.OnInitialize
// ()

void USTBuffTriggerBase::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffTriggerBase.OnInitialize");

	USTBuffTriggerBase_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffTriggerBase.OnEnd
// ()

void USTBuffTriggerBase::OnEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffTriggerBase.OnEnd");

	USTBuffTriggerBase_OnEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffTriggerBase.OnDestroy
// ()

void USTBuffTriggerBase::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffTriggerBase.OnDestroy");

	USTBuffTriggerBase_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffTriggerBase.OnCreate
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffTriggerBase::OnCreate(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffTriggerBase.OnCreate");

	USTBuffTriggerBase_OnCreate_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffTriggerBase.IsRoleOK
// ()
// Parameters:
// class UActorComponent*         OwnerComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffTriggerBase::IsRoleOK(class UActorComponent* OwnerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffTriggerBase.IsRoleOK");

	USTBuffTriggerBase_IsRoleOK_Params params;
	params.OwnerComponent = OwnerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffTriggerBase.IsNeedTick
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffTriggerBase::IsNeedTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffTriggerBase.IsNeedTick");

	USTBuffTriggerBase_IsNeedTick_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffTriggerBase.InitLinkActionEnableState
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffTriggerBase::InitLinkActionEnableState(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffTriggerBase.InitLinkActionEnableState");

	USTBuffTriggerBase_InitLinkActionEnableState_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffTriggerBase.Initialize
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffTriggerBase::Initialize(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffTriggerBase.Initialize");

	USTBuffTriggerBase_Initialize_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffTriggerBase.GetRealOwnerRole
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> USTBuffTriggerBase::GetRealOwnerRole()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffTriggerBase.GetRealOwnerRole");

	USTBuffTriggerBase_GetRealOwnerRole_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffTriggerBase.End
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffTriggerBase::End(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffTriggerBase.End");

	USTBuffTriggerBase_End_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffTriggerBase.Destroy
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffTriggerBase::Destroy(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffTriggerBase.Destroy");

	USTBuffTriggerBase_Destroy_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TableManagerSubsystem.SetTableStringDataField
// ()
// Parameters:
// struct FName                   tableName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Field                          (Parm, ZeroConstructor)
// struct FString                 NewValue                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTableManagerSubsystem::SetTableStringDataField(const struct FName& tableName, const struct FString& Key, const struct FString& Field, const struct FString& NewValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TableManagerSubsystem.SetTableStringDataField");

	UTableManagerSubsystem_SetTableStringDataField_Params params;
	params.tableName = tableName;
	params.Key = Key;
	params.Field = Field;
	params.NewValue = NewValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TableManagerSubsystem.SetModName
// ()
// Parameters:
// struct FString                 ModName                        (Parm, ZeroConstructor)

void UTableManagerSubsystem::SetModName(const struct FString& ModName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TableManagerSubsystem.SetModName");

	UTableManagerSubsystem_SetModName_Params params;
	params.ModName = ModName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TableManagerSubsystem.GetTableProxy
// ()
// Parameters:
// struct FName                   tableName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTempory                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SystemName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SubModName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreLoadPathCompression        (Parm, ZeroConstructor, IsPlainOldData)
// class UDataTableProxy*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDataTableProxy* UTableManagerSubsystem::GetTableProxy(const struct FName& tableName, bool bTempory, const struct FName& SystemName, const struct FName& SubModName, bool bPreLoadPathCompression)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TableManagerSubsystem.GetTableProxy");

	UTableManagerSubsystem_GetTableProxy_Params params;
	params.tableName = tableName;
	params.bTempory = bTempory;
	params.SystemName = SystemName;
	params.SubModName = SubModName;
	params.bPreLoadPathCompression = bPreLoadPathCompression;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TableManagerSubsystem.GetTableDataField
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// struct FTableRowBase           Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Field                          (Parm, ZeroConstructor)
// struct FTableRowBase           Out                            (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTableManagerSubsystem::GetTableDataField(const struct FString& tableName, const struct FTableRowBase& Key, const struct FString& Field, struct FTableRowBase* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TableManagerSubsystem.GetTableDataField");

	UTableManagerSubsystem_GetTableDataField_Params params;
	params.tableName = tableName;
	params.Key = Key;
	params.Field = Field;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

	return params.ReturnValue;
}


// Function Basic.TableManagerSubsystem.GetTableData
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FTableRowBase           OutRow                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTableManagerSubsystem::GetTableData(const struct FString& tableName, const struct FString& Key, struct FTableRowBase* OutRow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TableManagerSubsystem.GetTableData");

	UTableManagerSubsystem_GetTableData_Params params;
	params.tableName = tableName;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRow != nullptr)
		*OutRow = params.OutRow;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationAnimComponent.ShouldForceEnableAnimUpdateRateOptimizations
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTickOptimizationAnimComponent::ShouldForceEnableAnimUpdateRateOptimizations()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationAnimComponent.ShouldForceEnableAnimUpdateRateOptimizations");

	UTickOptimizationAnimComponent_ShouldForceEnableAnimUpdateRateOptimizations_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationAnimComponent.SetNonRenderedFramesSkipped
// ()
// Parameters:
// int                            InNonRenderedFramesSkipped     (Parm, ZeroConstructor, IsPlainOldData)

void UTickOptimizationAnimComponent::SetNonRenderedFramesSkipped(int InNonRenderedFramesSkipped)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationAnimComponent.SetNonRenderedFramesSkipped");

	UTickOptimizationAnimComponent_SetNonRenderedFramesSkipped_Params params;
	params.InNonRenderedFramesSkipped = InNonRenderedFramesSkipped;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationAnimComponent.SetMaxFramesSkippedForInterpolation
// ()
// Parameters:
// int                            InMaxFramesSkippedForInterpolation (Parm, ZeroConstructor, IsPlainOldData)

void UTickOptimizationAnimComponent::SetMaxFramesSkippedForInterpolation(int InMaxFramesSkippedForInterpolation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationAnimComponent.SetMaxFramesSkippedForInterpolation");

	UTickOptimizationAnimComponent_SetMaxFramesSkippedForInterpolation_Params params;
	params.InMaxFramesSkippedForInterpolation = InMaxFramesSkippedForInterpolation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationAnimComponent.SetLODToFramesSkipped
// ()
// Parameters:
// TArray<int>                    InLODToFramesSkipped           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTickOptimizationAnimComponent::SetLODToFramesSkipped(TArray<int> InLODToFramesSkipped)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationAnimComponent.SetLODToFramesSkipped");

	UTickOptimizationAnimComponent_SetLODToFramesSkipped_Params params;
	params.InLODToFramesSkipped = InLODToFramesSkipped;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationAnimComponent.SetFramesSkippedScreenSizeThresholds
// ()
// Parameters:
// TArray<float>                  InFramesSkippedScreenSizeThresholds (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTickOptimizationAnimComponent::SetFramesSkippedScreenSizeThresholds(TArray<float> InFramesSkippedScreenSizeThresholds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationAnimComponent.SetFramesSkippedScreenSizeThresholds");

	UTickOptimizationAnimComponent_SetFramesSkippedScreenSizeThresholds_Params params;
	params.InFramesSkippedScreenSizeThresholds = InFramesSkippedScreenSizeThresholds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationAnimComponent.SetForceEnableAnimUpdateRateOptimizations
// ()
// Parameters:
// bool                           bInForceEnableAnimUpdateRateOptimizations (Parm, ZeroConstructor, IsPlainOldData)

void UTickOptimizationAnimComponent::SetForceEnableAnimUpdateRateOptimizations(bool bInForceEnableAnimUpdateRateOptimizations)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationAnimComponent.SetForceEnableAnimUpdateRateOptimizations");

	UTickOptimizationAnimComponent_SetForceEnableAnimUpdateRateOptimizations_Params params;
	params.bInForceEnableAnimUpdateRateOptimizations = bInForceEnableAnimUpdateRateOptimizations;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationAnimComponent.SetAnimUpdateRateOptimizationsMode
// ()
// Parameters:
// ETickOptimizationAnimUROMode   InAnimUpdateRateOptimizationsMode (Parm, ZeroConstructor, IsPlainOldData)

void UTickOptimizationAnimComponent::SetAnimUpdateRateOptimizationsMode(ETickOptimizationAnimUROMode InAnimUpdateRateOptimizationsMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationAnimComponent.SetAnimUpdateRateOptimizationsMode");

	UTickOptimizationAnimComponent_SetAnimUpdateRateOptimizationsMode_Params params;
	params.InAnimUpdateRateOptimizationsMode = InAnimUpdateRateOptimizationsMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationAnimComponent.RegisterDynamicSkinnedMeshComponent
// ()
// Parameters:
// class USkinnedMeshComponent*   SkinnedMeshComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTickOptimizationAnimComponent::RegisterDynamicSkinnedMeshComponent(class USkinnedMeshComponent* SkinnedMeshComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationAnimComponent.RegisterDynamicSkinnedMeshComponent");

	UTickOptimizationAnimComponent_RegisterDynamicSkinnedMeshComponent_Params params;
	params.SkinnedMeshComponent = SkinnedMeshComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationAnimComponent.GetNonRenderedFramesSkipped
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTickOptimizationAnimComponent::GetNonRenderedFramesSkipped()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationAnimComponent.GetNonRenderedFramesSkipped");

	UTickOptimizationAnimComponent_GetNonRenderedFramesSkipped_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationAnimComponent.GetMaxFramesSkippedForInterpolation
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTickOptimizationAnimComponent::GetMaxFramesSkippedForInterpolation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationAnimComponent.GetMaxFramesSkippedForInterpolation");

	UTickOptimizationAnimComponent_GetMaxFramesSkippedForInterpolation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationAnimComponent.GetLODToFramesSkipped
// ()
// Parameters:
// TArray<int>                    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<int> UTickOptimizationAnimComponent::GetLODToFramesSkipped()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationAnimComponent.GetLODToFramesSkipped");

	UTickOptimizationAnimComponent_GetLODToFramesSkipped_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationAnimComponent.GetFramesSkippedScreenSizeThresholds
// ()
// Parameters:
// TArray<float>                  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<float> UTickOptimizationAnimComponent::GetFramesSkippedScreenSizeThresholds()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationAnimComponent.GetFramesSkippedScreenSizeThresholds");

	UTickOptimizationAnimComponent_GetFramesSkippedScreenSizeThresholds_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationAnimComponent.GetAnimUpdateRateOptimizationsMode
// ()
// Parameters:
// ETickOptimizationAnimUROMode   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ETickOptimizationAnimUROMode UTickOptimizationAnimComponent::GetAnimUpdateRateOptimizationsMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationAnimComponent.GetAnimUpdateRateOptimizationsMode");

	UTickOptimizationAnimComponent_GetAnimUpdateRateOptimizationsMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationFocusComponent.ShouldTrack
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTickOptimizationFocusComponent::ShouldTrack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationFocusComponent.ShouldTrack");

	UTickOptimizationFocusComponent_ShouldTrack_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationTargetComponent.ShouldForceExecuteFirstTick
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTickOptimizationTargetComponent::ShouldForceExecuteFirstTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.ShouldForceExecuteFirstTick");

	UTickOptimizationTargetComponent_ShouldForceExecuteFirstTick_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationTargetComponent.SetTickSettings
// ()
// Parameters:
// TArray<struct FTickOptimizationTickSettings> InTickSettings                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTickOptimizationTargetComponent::SetTickSettings(TArray<struct FTickOptimizationTickSettings> InTickSettings)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.SetTickSettings");

	UTickOptimizationTargetComponent_SetTickSettings_Params params;
	params.InTickSettings = InTickSettings;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationTargetComponent.SetSphereRadius
// ()
// Parameters:
// float                          InRadius                       (Parm, ZeroConstructor, IsPlainOldData)

void UTickOptimizationTargetComponent::SetSphereRadius(float InRadius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.SetSphereRadius");

	UTickOptimizationTargetComponent_SetSphereRadius_Params params;
	params.InRadius = InRadius;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationTargetComponent.SetMidZoneSizes
// ()
// Parameters:
// TArray<float>                  InMidZoneSizes                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTickOptimizationTargetComponent::SetMidZoneSizes(TArray<float> InMidZoneSizes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.SetMidZoneSizes");

	UTickOptimizationTargetComponent_SetMidZoneSizes_Params params;
	params.InMidZoneSizes = InMidZoneSizes;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationTargetComponent.SetForceExecuteFirstTick
// ()
// Parameters:
// bool                           bInForceExecuteFirstTick       (Parm, ZeroConstructor, IsPlainOldData)

void UTickOptimizationTargetComponent::SetForceExecuteFirstTick(bool bInForceExecuteFirstTick)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.SetForceExecuteFirstTick");

	UTickOptimizationTargetComponent_SetForceExecuteFirstTick_Params params;
	params.bInForceExecuteFirstTick = bInForceExecuteFirstTick;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationTargetComponent.SetDistanceMode
// ()
// Parameters:
// ETickOptimizationDistanceMode  InDistanceMode                 (Parm, ZeroConstructor, IsPlainOldData)

void UTickOptimizationTargetComponent::SetDistanceMode(ETickOptimizationDistanceMode InDistanceMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.SetDistanceMode");

	UTickOptimizationTargetComponent_SetDistanceMode_Params params;
	params.InDistanceMode = InDistanceMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationTargetComponent.SetComponentsTickControl
// ()
// Parameters:
// bool                           bInComponentsTickControl       (Parm, ZeroConstructor, IsPlainOldData)

void UTickOptimizationTargetComponent::SetComponentsTickControl(bool bInComponentsTickControl)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.SetComponentsTickControl");

	UTickOptimizationTargetComponent_SetComponentsTickControl_Params params;
	params.bInComponentsTickControl = bInComponentsTickControl;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationTargetComponent.SetBufferSize
// ()
// Parameters:
// float                          InBufferSize                   (Parm, ZeroConstructor, IsPlainOldData)

void UTickOptimizationTargetComponent::SetBufferSize(float InBufferSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.SetBufferSize");

	UTickOptimizationTargetComponent_SetBufferSize_Params params;
	params.InBufferSize = InBufferSize;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationTargetComponent.SetActorTickControl
// ()
// Parameters:
// bool                           bInActorTickControl            (Parm, ZeroConstructor, IsPlainOldData)

void UTickOptimizationTargetComponent::SetActorTickControl(bool bInActorTickControl)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.SetActorTickControl");

	UTickOptimizationTargetComponent_SetActorTickControl_Params params;
	params.bInActorTickControl = bInActorTickControl;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationTargetComponent.RemoveComponentTickControl
// ()
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTickOptimizationTargetComponent::RemoveComponentTickControl(class UActorComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.RemoveComponentTickControl");

	UTickOptimizationTargetComponent_RemoveComponentTickControl_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationTargetComponent.Release
// ()

void UTickOptimizationTargetComponent::Release()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.Release");

	UTickOptimizationTargetComponent_Release_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationTargetComponent.IsForced
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTickOptimizationTargetComponent::IsForced()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.IsForced");

	UTickOptimizationTargetComponent_IsForced_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationTargetComponent.IsComponentsTickControl
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTickOptimizationTargetComponent::IsComponentsTickControl()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.IsComponentsTickControl");

	UTickOptimizationTargetComponent_IsComponentsTickControl_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationTargetComponent.IsActorTickControl
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTickOptimizationTargetComponent::IsActorTickControl()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.IsActorTickControl");

	UTickOptimizationTargetComponent_IsActorTickControl_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationTargetComponent.GetTickZone
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTickOptimizationTargetComponent::GetTickZone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.GetTickZone");

	UTickOptimizationTargetComponent_GetTickZone_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationTargetComponent.GetTickSettings
// ()
// Parameters:
// TArray<struct FTickOptimizationTickSettings> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FTickOptimizationTickSettings> UTickOptimizationTargetComponent::GetTickSettings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.GetTickSettings");

	UTickOptimizationTargetComponent_GetTickSettings_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationTargetComponent.GetSphereRadius
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTickOptimizationTargetComponent::GetSphereRadius()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.GetSphereRadius");

	UTickOptimizationTargetComponent_GetSphereRadius_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationTargetComponent.GetMidZoneSizes
// ()
// Parameters:
// TArray<float>                  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<float> UTickOptimizationTargetComponent::GetMidZoneSizes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.GetMidZoneSizes");

	UTickOptimizationTargetComponent_GetMidZoneSizes_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationTargetComponent.GetDistanceMode
// ()
// Parameters:
// ETickOptimizationDistanceMode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ETickOptimizationDistanceMode UTickOptimizationTargetComponent::GetDistanceMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.GetDistanceMode");

	UTickOptimizationTargetComponent_GetDistanceMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationTargetComponent.GetBufferSize
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTickOptimizationTargetComponent::GetBufferSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.GetBufferSize");

	UTickOptimizationTargetComponent_GetBufferSize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TickOptimizationTargetComponent.Force
// ()
// Parameters:
// int                            InZone                         (Parm, ZeroConstructor, IsPlainOldData)

void UTickOptimizationTargetComponent::Force(int InZone)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.Force");

	UTickOptimizationTargetComponent_Force_Params params;
	params.InZone = InZone;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TickOptimizationTargetComponent.AddComponentTickControl
// ()
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTickOptimizationTargetComponent::AddComponentTickControl(class UActorComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TickOptimizationTargetComponent.AddComponentTickControl");

	UTickOptimizationTargetComponent_AddComponentTickControl_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BPTable.GetWrapperPath
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPTable::GetWrapperPath(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetWrapperPath");

	UBPTable_GetWrapperPath_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetWrapperClass
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPTable::GetWrapperClass(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetWrapperClass");

	UBPTable_GetWrapperClass_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetPath
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceLobby                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPTable::GetPath(int ID, bool IsLobby, bool bForceLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetPath");

	UBPTable_GetPath_Params params;
	params.ID = ID;
	params.IsLobby = IsLobby;
	params.bForceLobby = bForceLobby;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetObject
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLowDevice                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBPTable::GetObject(int ID, class UObject* Outer, bool IsLobby, bool IsLowDevice)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetObject");

	UBPTable_GetObject_Params params;
	params.ID = ID;
	params.Outer = Outer;
	params.IsLobby = IsLobby;
	params.IsLowDevice = IsLowDevice;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetModObject
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBPTable::GetModObject(int ID, class UObject* Outer, bool IsLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetModObject");

	UBPTable_GetModObject_Params params;
	params.ID = ID;
	params.Outer = Outer;
	params.IsLobby = IsLobby;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetModClass
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPTable::GetModClass(int ID, bool IsLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetModClass");

	UBPTable_GetModClass_Params params;
	params.ID = ID;
	params.IsLobby = IsLobby;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetCustom1Class
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPTable::GetCustom1Class(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetCustom1Class");

	UBPTable_GetCustom1Class_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetClass
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLowDevice                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPTable::GetClass(int ID, bool IsLobby, bool IsLowDevice)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetClass");

	UBPTable_GetClass_Params params;
	params.ID = ID;
	params.IsLobby = IsLobby;
	params.IsLowDevice = IsLowDevice;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.ConvertPath
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UBPTable::ConvertPath(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.ConvertPath");

	UBPTable_ConvertPath_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.InitTableData
// ()

void UUAELoadedClassManager::InitTableData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.InitTableData");

	UUAELoadedClassManager_InitTableData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.InitialModTableItemMap
// ()

void UUAELoadedClassManager::InitialModTableItemMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.InitialModTableItemMap");

	UUAELoadedClassManager_InitialModTableItemMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.InitBPTableMap_Mod
// ()

void UUAELoadedClassManager::InitBPTableMap_Mod()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.InitBPTableMap_Mod");

	UUAELoadedClassManager_InitBPTableMap_Mod_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.InitBPTableMap
// ()

void UUAELoadedClassManager::InitBPTableMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.InitBPTableMap");

	UUAELoadedClassManager_InitBPTableMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.HandleTableModNameChanged
// ()
// Parameters:
// struct FString                 InModName                      (Parm, ZeroConstructor)

void UUAELoadedClassManager::HandleTableModNameChanged(const struct FString& InModName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.HandleTableModNameChanged");

	UUAELoadedClassManager_HandleTableModNameChanged_Params params;
	params.InModName = InModName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.GetWrapperPath
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAELoadedClassManager::GetWrapperPath(const struct FString& BPTableName, int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetWrapperPath");

	UUAELoadedClassManager_GetWrapperPath_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetWrapperClass
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUAELoadedClassManager::GetWrapperClass(const struct FString& BPTableName, int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetWrapperClass");

	UUAELoadedClassManager_GetWrapperClass_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetPath
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceLobby                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAELoadedClassManager::GetPath(const struct FString& BPTableName, int ID, bool IsLobby, bool bForceLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetPath");

	UUAELoadedClassManager_GetPath_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;
	params.IsLobby = IsLobby;
	params.bForceLobby = bForceLobby;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetObject
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLowDevice                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUAELoadedClassManager::GetObject(const struct FString& BPTableName, int ID, class UObject* Outer, bool IsLobby, bool IsLowDevice)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetObject");

	UUAELoadedClassManager_GetObject_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;
	params.Outer = Outer;
	params.IsLobby = IsLobby;
	params.IsLowDevice = IsLowDevice;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetExactDeviceLevel
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAELoadedClassManager::GetExactDeviceLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetExactDeviceLevel");

	UUAELoadedClassManager_GetExactDeviceLevel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetDeviceLevel
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAELoadedClassManager::GetDeviceLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetDeviceLevel");

	UUAELoadedClassManager_GetDeviceLevel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetCustom1Class
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUAELoadedClassManager::GetCustom1Class(const struct FString& BPTableName, int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetCustom1Class");

	UUAELoadedClassManager_GetCustom1Class_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetClassLoadingPath
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAELoadedClassManager::GetClassLoadingPath(const struct FString& BPTableName, int ID, bool IsLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetClassLoadingPath");

	UUAELoadedClassManager_GetClassLoadingPath_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;
	params.IsLobby = IsLobby;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetClass
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLowDevice                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUAELoadedClassManager::GetClass(const struct FString& BPTableName, int ID, bool IsLobby, bool IsLowDevice)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetClass");

	UUAELoadedClassManager_GetClass_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;
	params.IsLobby = IsLobby;
	params.IsLowDevice = IsLowDevice;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetBPTableName
// ()
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAELoadedClassManager::GetBPTableName(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetBPTableName");

	UUAELoadedClassManager_GetBPTableName_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetAssetByAssetReferenceAsync
// ()
// Parameters:
// struct FSoftObjectPath         AssetReference                 (Parm)
// struct FScriptDelegate         AssetLoadSuccessDelegate       (Parm, ZeroConstructor)

void UUAELoadedClassManager::GetAssetByAssetReferenceAsync(const struct FSoftObjectPath& AssetReference, const struct FScriptDelegate& AssetLoadSuccessDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetAssetByAssetReferenceAsync");

	UUAELoadedClassManager_GetAssetByAssetReferenceAsync_Params params;
	params.AssetReference = AssetReference;
	params.AssetLoadSuccessDelegate = AssetLoadSuccessDelegate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.GetAssetAsyncWithStringForManage
// ()
// Parameters:
// struct FSoftObjectPath         AssetReference                 (Parm)
// struct FString                 InputString                    (Parm, ZeroConstructor)
// struct FScriptDelegate         AssetLoadSuccessDelegate       (Parm, ZeroConstructor)

void UUAELoadedClassManager::GetAssetAsyncWithStringForManage(const struct FSoftObjectPath& AssetReference, const struct FString& InputString, const struct FScriptDelegate& AssetLoadSuccessDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetAssetAsyncWithStringForManage");

	UUAELoadedClassManager_GetAssetAsyncWithStringForManage_Params params;
	params.AssetReference = AssetReference;
	params.InputString = InputString;
	params.AssetLoadSuccessDelegate = AssetLoadSuccessDelegate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.Get
// ()
// Parameters:
// class UUAELoadedClassManager*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAELoadedClassManager* UUAELoadedClassManager::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.Get");

	UUAELoadedClassManager_Get_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.CreateAndAddBPTable_Mod
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// class UBPTable*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBPTable* UUAELoadedClassManager::CreateAndAddBPTable_Mod(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.CreateAndAddBPTable_Mod");

	UUAELoadedClassManager_CreateAndAddBPTable_Mod_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.CreateAndAddBPTable
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// class UBPTable*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBPTable* UUAELoadedClassManager::CreateAndAddBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.CreateAndAddBPTable");

	UUAELoadedClassManager_CreateAndAddBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.ClearModTableItemMap
// ()

void UUAELoadedClassManager::ClearModTableItemMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearModTableItemMap");

	UUAELoadedClassManager_ClearModTableItemMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.ClearBPTable_Mod
// ()

void UUAELoadedClassManager::ClearBPTable_Mod()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearBPTable_Mod");

	UUAELoadedClassManager_ClearBPTable_Mod_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.ClearBPTable
// ()

void UUAELoadedClassManager::ClearBPTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearBPTable");

	UUAELoadedClassManager_ClearBPTable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.ClearAssetByAssetReferenceAsync
// ()
// Parameters:
// struct FScriptDelegate         AssetLoadSuccessDelegate       (Parm, ZeroConstructor)

void UUAELoadedClassManager::ClearAssetByAssetReferenceAsync(const struct FScriptDelegate& AssetLoadSuccessDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearAssetByAssetReferenceAsync");

	UUAELoadedClassManager_ClearAssetByAssetReferenceAsync_Params params;
	params.AssetLoadSuccessDelegate = AssetLoadSuccessDelegate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.ClearAllHandle
// ()

void UUAELoadedClassManager::ClearAllHandle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearAllHandle");

	UUAELoadedClassManager_ClearAllHandle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.ClearAllData
// ()

void UUAELoadedClassManager::ClearAllData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearAllData");

	UUAELoadedClassManager_ClearAllData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEMeshComponent.TriggerCacheMaterialParameterNameIndices
// ()

void UUAEMeshComponent::TriggerCacheMaterialParameterNameIndices()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEMeshComponent.TriggerCacheMaterialParameterNameIndices");

	UUAEMeshComponent_TriggerCacheMaterialParameterNameIndices_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEMeshComponent.RemoveDisableClothRequest
// ()
// Parameters:
// struct FString                 InSource                       (Parm, ZeroConstructor)

void UUAEMeshComponent::RemoveDisableClothRequest(const struct FString& InSource)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEMeshComponent.RemoveDisableClothRequest");

	UUAEMeshComponent_RemoveDisableClothRequest_Params params;
	params.InSource = InSource;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEMeshComponent.GetPredictedLODLevel
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEMeshComponent::GetPredictedLODLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEMeshComponent.GetPredictedLODLevel");

	UUAEMeshComponent_GetPredictedLODLevel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEMeshComponent.GetAnimUpdateParamsInfo
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEMeshComponent::GetAnimUpdateParamsInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEMeshComponent.GetAnimUpdateParamsInfo");

	UUAEMeshComponent_GetAnimUpdateParamsInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEMeshComponent.AddDisableClothRequest
// ()
// Parameters:
// struct FString                 InSource                       (Parm, ZeroConstructor)

void UUAEMeshComponent::AddDisableClothRequest(const struct FString& InSource)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEMeshComponent.AddDisableClothRequest");

	UUAEMeshComponent_AddDisableClothRequest_Params params;
	params.InSource = InSource;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAENetConnection.IsClosed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAENetConnection::IsClosed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAENetConnection.IsClosed");

	UUAENetConnection_IsClosed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAENetConnection.HasSameRegion
// ()
// Parameters:
// struct FVector                 OldLoc                         (Parm, IsPlainOldData)
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAENetConnection::HasSameRegion(const struct FVector& OldLoc, const struct FVector& NewLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAENetConnection.HasSameRegion");

	UUAENetConnection_HasSameRegion_Params params;
	params.OldLoc = OldLoc;
	params.NewLoc = NewLoc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAENetConnection.ForceRefreshRegionWeakNetUpdateObjects
// ()
// Parameters:
// float                          WeakNetConsiderFrequency       (Parm, ZeroConstructor, IsPlainOldData)

void UUAENetConnection::ForceRefreshRegionWeakNetUpdateObjects(float WeakNetConsiderFrequency)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAENetConnection.ForceRefreshRegionWeakNetUpdateObjects");

	UUAENetConnection_ForceRefreshRegionWeakNetUpdateObjects_Params params;
	params.WeakNetConsiderFrequency = WeakNetConsiderFrequency;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAETableManager.ReleaseTable
// ()
// Parameters:
// struct FName                   TableFName                     (Parm, ZeroConstructor, IsPlainOldData)

void UUAETableManager::ReleaseTable(const struct FName& TableFName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.ReleaseTable");

	UUAETableManager_ReleaseTable_Params params;
	params.TableFName = TableFName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAETableManager.GetTablePtr_Mod
// ()
// Parameters:
// struct FName                   tableName                      (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAETableManager::GetTablePtr_Mod(const struct FName& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetTablePtr_Mod");

	UUAETableManager_GetTablePtr_Mod_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetTablePtr
// ()
// Parameters:
// struct FName                   tableName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCheckModTable                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAETableManager::GetTablePtr(const struct FName& tableName, bool bCheckModTable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetTablePtr");

	UUAETableManager_GetTablePtr_Params params;
	params.tableName = tableName;
	params.bCheckModTable = bCheckModTable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetTableMap
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// class UBaseTableResMap*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBaseTableResMap* UUAETableManager::GetTableMap(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetTableMap");

	UUAETableManager_GetTableMap_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetTableData
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FTableRowBase           OutRow                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAETableManager::GetTableData(const struct FString& tableName, const struct FString& Key, struct FTableRowBase* OutRow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetTableData");

	UUAETableManager_GetTableData_Params params;
	params.tableName = tableName;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRow != nullptr)
		*OutRow = params.OutRow;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetInstance
// ()
// Parameters:
// class UUAETableManager*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAETableManager* UUAETableManager::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetInstance");

	UUAETableManager_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetDomainByID
// ()
// Parameters:
// int                            ID                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAETableManager::GetDomainByID(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetDomainByID");

	UUAETableManager_GetDomainByID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetDataTableStatic_Mod
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAETableManager::GetDataTableStatic_Mod(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetDataTableStatic_Mod");

	UUAETableManager_GetDataTableStatic_Mod_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetDataTableStatic
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAETableManager::GetDataTableStatic(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetDataTableStatic");

	UUAETableManager_GetDataTableStatic_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetDataTableProxy
// ()
// Parameters:
// struct FName                   tableName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTempory                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SystemName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SubModName                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataTableProxy*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDataTableProxy* UUAETableManager::GetDataTableProxy(const struct FName& tableName, bool bTempory, const struct FName& SystemName, const struct FName& SubModName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetDataTableProxy");

	UUAETableManager_GetDataTableProxy_Params params;
	params.tableName = tableName;
	params.bTempory = bTempory;
	params.SystemName = SystemName;
	params.SubModName = SubModName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.SetDownLoadLanguageName
// ()
// Parameters:
// struct FString                 Language                       (Parm, ZeroConstructor)

void UUELanguageUtilityMethods::SetDownLoadLanguageName(const struct FString& Language)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.SetDownLoadLanguageName");

	UUELanguageUtilityMethods_SetDownLoadLanguageName_Params params;
	params.Language = Language;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UELanguageUtilityMethods.IsJaguar
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUELanguageUtilityMethods::IsJaguar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.IsJaguar");

	UUELanguageUtilityMethods_IsJaguar_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.GetPublishRegion
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUELanguageUtilityMethods::GetPublishRegion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.GetPublishRegion");

	UUELanguageUtilityMethods_GetPublishRegion_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.GetDownLoadLanguageName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUELanguageUtilityMethods::GetDownLoadLanguageName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.GetDownLoadLanguageName");

	UUELanguageUtilityMethods_GetDownLoadLanguageName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.GetCurrentLanguageName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUELanguageUtilityMethods::GetCurrentLanguageName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.GetCurrentLanguageName");

	UUELanguageUtilityMethods_GetCurrentLanguageName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.ConvertLanguageName
// ()
// Parameters:
// struct FString                 prelanguage                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUELanguageUtilityMethods::ConvertLanguageName(const struct FString& prelanguage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.ConvertLanguageName");

	UUELanguageUtilityMethods_ConvertLanguageName_Params params;
	params.prelanguage = prelanguage;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.CheckLocalizationExist
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUELanguageUtilityMethods::CheckLocalizationExist()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.CheckLocalizationExist");

	UUELanguageUtilityMethods_CheckLocalizationExist_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEMathUtilityMethods.VectorNormalizeMultiple
// ()
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 v1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Multiple                       (Parm, ZeroConstructor, IsPlainOldData)

void UUEMathUtilityMethods::VectorNormalizeMultiple(const struct FVector& v1, float Multiple, struct FVector* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.VectorNormalizeMultiple");

	UUEMathUtilityMethods_VectorNormalizeMultiple_Params params;
	params.v1 = v1;
	params.Multiple = Multiple;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Basic.UEMathUtilityMethods.VectorMultiple
// ()
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 v1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Multiple                       (Parm, ZeroConstructor, IsPlainOldData)

void UUEMathUtilityMethods::VectorMultiple(const struct FVector& v1, float Multiple, struct FVector* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.VectorMultiple");

	UUEMathUtilityMethods_VectorMultiple_Params params;
	params.v1 = v1;
	params.Multiple = Multiple;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Basic.UEMathUtilityMethods.VectorMinus
// ()
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 v1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 v2                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUEMathUtilityMethods::VectorMinus(const struct FVector& v1, const struct FVector& v2, struct FVector* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.VectorMinus");

	UUEMathUtilityMethods_VectorMinus_Params params;
	params.v1 = v1;
	params.v2 = v2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Basic.UEMathUtilityMethods.VectorAdditive
// ()
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 v1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 v2                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUEMathUtilityMethods::VectorAdditive(const struct FVector& v1, const struct FVector& v2, struct FVector* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.VectorAdditive");

	UUEMathUtilityMethods_VectorAdditive_Params params;
	params.v1 = v1;
	params.v2 = v2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Basic.UEMathUtilityMethods.FilterOKForCurrentMode
// ()
// Parameters:
// unsigned char                  ModeType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModeOpenFlag                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModeTypes                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUEMathUtilityMethods::FilterOKForCurrentMode(unsigned char ModeType, int ModeOpenFlag, const struct FString& ModeTypes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.FilterOKForCurrentMode");

	UUEMathUtilityMethods_FilterOKForCurrentMode_Params params;
	params.ModeType = ModeType;
	params.ModeOpenFlag = ModeOpenFlag;
	params.ModeTypes = ModeTypes;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEMathUtilityMethods.Conv_VectorToRotator
// ()
// Parameters:
// struct FRotator                Out                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 Vec                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUEMathUtilityMethods::Conv_VectorToRotator(const struct FVector& Vec, struct FRotator* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.Conv_VectorToRotator");

	UUEMathUtilityMethods_Conv_VectorToRotator_Params params;
	params.Vec = Vec;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Basic.UEMathUtilityMethods.CalculateAngleToTargetAngle
// ()
// Parameters:
// float                          StartAngle                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          targetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          StepAngle                      (Parm, ZeroConstructor, IsPlainOldData)
// EAngleRotationDirectionType    Dir                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUEMathUtilityMethods::CalculateAngleToTargetAngle(float StartAngle, float targetAngle, float StepAngle, EAngleRotationDirectionType Dir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.CalculateAngleToTargetAngle");

	UUEMathUtilityMethods_CalculateAngleToTargetAngle_Params params;
	params.StartAngle = StartAngle;
	params.targetAngle = targetAngle;
	params.StepAngle = StepAngle;
	params.Dir = Dir;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEMathUtilityMethods.BKDRHash
// ()
// Parameters:
// struct FString                 StrToHash                      (Parm, ZeroConstructor)
// int                            Mod                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUEMathUtilityMethods::BKDRHash(const struct FString& StrToHash, int Mod)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.BKDRHash");

	UUEMathUtilityMethods_BKDRHash_Params params;
	params.StrToHash = StrToHash;
	params.Mod = Mod;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEMathUtilityMethods.AngleDis
// ()
// Parameters:
// float                          angleA                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          angleB                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUEMathUtilityMethods::AngleDis(float angleA, float angleB)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.AngleDis");

	UUEMathUtilityMethods_AngleDis_Params params;
	params.angleA = angleA;
	params.angleB = angleB;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.IsPathExist
// ()
// Parameters:
// struct FString                 HandlePath                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUEPathUtilityMethods::IsPathExist(const struct FString& HandlePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.IsPathExist");

	UUEPathUtilityMethods_IsPathExist_Params params;
	params.HandlePath = HandlePath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.IsAvatarResPathExistRetODPakName
// ()
// Parameters:
// struct FString                 HandlePath                     (Parm, ZeroConstructor)
// struct FString                 OutODPakName                   (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUEPathUtilityMethods::IsAvatarResPathExistRetODPakName(const struct FString& HandlePath, struct FString* OutODPakName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.IsAvatarResPathExistRetODPakName");

	UUEPathUtilityMethods_IsAvatarResPathExistRetODPakName_Params params;
	params.HandlePath = HandlePath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutODPakName != nullptr)
		*OutODPakName = params.OutODPakName;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.IsAvatarResPathExist
// ()
// Parameters:
// struct FString                 HandlePath                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUEPathUtilityMethods::IsAvatarResPathExist(const struct FString& HandlePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.IsAvatarResPathExist");

	UUEPathUtilityMethods_IsAvatarResPathExist_Params params;
	params.HandlePath = HandlePath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.GetPassiveDownloadResourcePaths
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UUEPathUtilityMethods::GetPassiveDownloadResourcePaths()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.GetPassiveDownloadResourcePaths");

	UUEPathUtilityMethods_GetPassiveDownloadResourcePaths_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.GetPassiveDownloadResourceIDList
// ()
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UUEPathUtilityMethods::GetPassiveDownloadResourceIDList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.GetPassiveDownloadResourceIDList");

	UUEPathUtilityMethods_GetPassiveDownloadResourceIDList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.GetODPakFileName
// ()
// Parameters:
// struct FString                 InODPakPath                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUEPathUtilityMethods::GetODPakFileName(const struct FString& InODPakPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.GetODPakFileName");

	UUEPathUtilityMethods_GetODPakFileName_Params params;
	params.InODPakPath = InODPakPath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.GetModName
// ()
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUEPathUtilityMethods::GetModName(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.GetModName");

	UUEPathUtilityMethods_GetModName_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.GetFullModName
// ()
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MainMod                        (Parm, OutParm, ZeroConstructor)
// struct FString                 SubMod                         (Parm, OutParm, ZeroConstructor)

void UUEPathUtilityMethods::GetFullModName(class UObject* WorldContext, struct FString* MainMod, struct FString* SubMod)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.GetFullModName");

	UUEPathUtilityMethods_GetFullModName_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MainMod != nullptr)
		*MainMod = params.MainMod;
	if (SubMod != nullptr)
		*SubMod = params.SubMod;
}


// Function Basic.UEPathUtilityMethods.FilterOKForCurrentModeString
// ()
// Parameters:
// struct FString                 CurrentModeString              (Parm, ZeroConstructor)
// struct FString                 CurrentExtraModeString         (Parm, ZeroConstructor)
// struct FString                 ModStringInfo                  (Parm, ZeroConstructor)
// unsigned char                  ModeType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModeOpenFlag                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUEPathUtilityMethods::FilterOKForCurrentModeString(const struct FString& CurrentModeString, const struct FString& CurrentExtraModeString, const struct FString& ModStringInfo, unsigned char ModeType, int ModeOpenFlag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.FilterOKForCurrentModeString");

	UUEPathUtilityMethods_FilterOKForCurrentModeString_Params params;
	params.CurrentModeString = CurrentModeString;
	params.CurrentExtraModeString = CurrentExtraModeString;
	params.ModStringInfo = ModStringInfo;
	params.ModeType = ModeType;
	params.ModeOpenFlag = ModeOpenFlag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.ClearPassiveDownloadResourcePaths
// ()

void UUEPathUtilityMethods::ClearPassiveDownloadResourcePaths()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.ClearPassiveDownloadResourcePaths");

	UUEPathUtilityMethods_ClearPassiveDownloadResourcePaths_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UEPathUtilityMethods.ClearPassiveDownloadResourceIDList
// ()

void UUEPathUtilityMethods::ClearPassiveDownloadResourceIDList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.ClearPassiveDownloadResourceIDList");

	UUEPathUtilityMethods_ClearPassiveDownloadResourceIDList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UEPathUtilityMethods.AddPassiveResourceDownloadFlag
// ()
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UUEPathUtilityMethods::AddPassiveResourceDownloadFlag(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.AddPassiveResourceDownloadFlag");

	UUEPathUtilityMethods_AddPassiveResourceDownloadFlag_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

