// PUBG (4.3.0) Created by @JokerRepo and for pattern @enen
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Skill.PrivateNodeLuaInterface.SetPrivateUniqueKey
// ()
// Parameters:
// struct FString                 NewKey                         (Parm, ZeroConstructor)

void UPrivateNodeLuaInterface::SetPrivateUniqueKey(const struct FString& NewKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.PrivateNodeLuaInterface.SetPrivateUniqueKey");

	UPrivateNodeLuaInterface_SetPrivateUniqueKey_Params params;
	params.NewKey = NewKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.PrivateNodeLuaInterface.GetPrivateUniqueKey
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPrivateNodeLuaInterface::GetPrivateUniqueKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.PrivateNodeLuaInterface.GetPrivateUniqueKey");

	UPrivateNodeLuaInterface_GetPrivateUniqueKey_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.SharedDelegate.EventTrigger
// ()

void USharedDelegate::EventTrigger()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.SharedDelegate.EventTrigger");

	USharedDelegate_EventTrigger_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBaseWidget.IsSetValueAsNewDataWhenNotExist
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBaseWidget::IsSetValueAsNewDataWhenNotExist(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.IsSetValueAsNewDataWhenNotExist");

	UUTSkillBaseWidget_IsSetValueAsNewDataWhenNotExist_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBaseWidget.GetUAEBlackboard
// ()
// Parameters:
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UUTSkillBaseWidget::GetUAEBlackboard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetUAEBlackboard");

	UUTSkillBaseWidget_GetUAEBlackboard_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBaseWidget.GetOwnerSkillManager
// ()
// Parameters:
// class UUTSkillManagerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillManagerComponent* UUTSkillBaseWidget::GetOwnerSkillManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetOwnerSkillManager");

	UUTSkillBaseWidget_GetOwnerSkillManager_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBaseWidget.GetOwnerSkillID
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillBaseWidget::GetOwnerSkillID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetOwnerSkillID");

	UUTSkillBaseWidget_GetOwnerSkillID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBaseWidget.GetOwnerPawn
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUTSkillBaseWidget::GetOwnerPawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetOwnerPawn");

	UUTSkillBaseWidget_GetOwnerPawn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.SkillTriggerData.GetSkillEventType
// ()
// Parameters:
// TEnumAsByte<EUTSkillEventType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EUTSkillEventType> USkillTriggerData::GetSkillEventType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.SkillTriggerData.GetSkillEventType");

	USkillTriggerData_GetSkillEventType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.VerifyServerSkillData
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> InEventType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::VerifyServerSkillData(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> InEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.VerifyServerSkillData");

	AUTSkill_VerifyServerSkillData_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.InEventType = InEventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.StopSkillCoolDown
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CoolDownIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AUTSkill::StopSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.StopSkillCoolDown");

	AUTSkill_StopSkillCoolDown_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CoolDownIndex = CoolDownIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkill.ResetSkillCoolDown
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CoolDownIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AUTSkill::ResetSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.ResetSkillCoolDown");

	AUTSkill_ResetSkillCoolDown_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CoolDownIndex = CoolDownIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkill.OnEvent
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> TheEventType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            PhaseIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::OnEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> TheEventType, int PhaseIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.OnEvent");

	AUTSkill_OnEvent_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.TheEventType = TheEventType;
	params.PhaseIndex = PhaseIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.JumpToPhase
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            PhaseId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::JumpToPhase(class UUTSkillManagerComponent* SkillManagerComponent, int PhaseId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.JumpToPhase");

	AUTSkill_JumpToPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.PhaseId = PhaseId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.IsMeleeSkill
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::IsMeleeSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.IsMeleeSkill");

	AUTSkill_IsMeleeSkill_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.IsEnableSkillCoolDown
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::IsEnableSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.IsEnableSkillCoolDown");

	AUTSkill_IsEnableSkillCoolDown_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.IsCDOK
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CoolDownIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::IsCDOK(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.IsCDOK");

	AUTSkill_IsCDOK_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CoolDownIndex = CoolDownIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.HandleVerifyServerSkillDataFail
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> InEventType                    (Parm, ZeroConstructor, IsPlainOldData)

void AUTSkill::HandleVerifyServerSkillDataFail(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> InEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.HandleVerifyServerSkillDataFail");

	AUTSkill_HandleVerifyServerSkillDataFail_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.InEventType = InEventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkill.GetSpecificSkillManager
// ()
// Parameters:
// class UUTSkillManagerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillManagerComponent* AUTSkill::GetSpecificSkillManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSpecificSkillManager");

	AUTSkill_GetSpecificSkillManager_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSpecificBlackboard
// ()
// Parameters:
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* AUTSkill::GetSpecificBlackboard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSpecificBlackboard");

	AUTSkill_GetSpecificBlackboard_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSkillPhaseByName
// ()
// Parameters:
// struct FString                 PhaseName                      (Parm, ZeroConstructor)
// class UUTSkillPhase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUTSkillPhase* AUTSkill::GetSkillPhaseByName(const struct FString& PhaseName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillPhaseByName");

	AUTSkill_GetSkillPhaseByName_Params params;
	params.PhaseName = PhaseName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSkillPhase
// ()
// Parameters:
// int                            PhaseIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class UUTSkillPhase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUTSkillPhase* AUTSkill::GetSkillPhase(int PhaseIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillPhase");

	AUTSkill_GetSkillPhase_Params params;
	params.PhaseIndex = PhaseIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSkillID
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUTSkill::GetSkillID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillID");

	AUTSkill_GetSkillID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSkillEffectByPhaseName
// ()
// Parameters:
// struct FString                 PhaseName                      (Parm, ZeroConstructor)
// struct FString                 EffectName                     (Parm, ZeroConstructor)
// class UUTSkillBaseWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUTSkillBaseWidget* AUTSkill::GetSkillEffectByPhaseName(const struct FString& PhaseName, const struct FString& EffectName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillEffectByPhaseName");

	AUTSkill_GetSkillEffectByPhaseName_Params params;
	params.PhaseName = PhaseName;
	params.EffectName = EffectName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSkillEffectByPhaseIndex
// ()
// Parameters:
// int                            PhaseIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EffectName                     (Parm, ZeroConstructor)
// class UUTSkillBaseWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUTSkillBaseWidget* AUTSkill::GetSkillEffectByPhaseIndex(int PhaseIndex, const struct FString& EffectName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillEffectByPhaseIndex");

	AUTSkill_GetSkillEffectByPhaseIndex_Params params;
	params.PhaseIndex = PhaseIndex;
	params.EffectName = EffectName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSkillDurationScale
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AUTSkill::GetSkillDurationScale(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillDurationScale");

	AUTSkill_GetSkillDurationScale_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetCurSkillPhaseIndex
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUTSkill::GetCurSkillPhaseIndex(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetCurSkillPhaseIndex");

	AUTSkill_GetCurSkillPhaseIndex_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetCurSkillPhase
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUTSkillPhase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUTSkillPhase* AUTSkill::GetCurSkillPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetCurSkillPhase");

	AUTSkill_GetCurSkillPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetCoolDownTime
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CoolDownIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AUTSkill::GetCoolDownTime(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetCoolDownTime");

	AUTSkill_GetCoolDownTime_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CoolDownIndex = CoolDownIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.DoSkillCoolDown
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CoolDownIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AUTSkill::DoSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.DoSkillCoolDown");

	AUTSkill_DoSkillCoolDown_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CoolDownIndex = CoolDownIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkill.CanBePlayed
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESkillCanBePlayedResult        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESkillCanBePlayedResult AUTSkill::CanBePlayed(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.CanBePlayed");

	AUTSkill_CanBePlayed_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillEffect.UpdateAction
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::UpdateAction(class UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.UpdateAction");

	UUTSkillEffect_UpdateAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.UndoAction
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillEffect::UndoAction(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.UndoAction");

	UUTSkillEffect_UndoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.PreCloseSkill
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.PreCloseSkill");

	UUTSkillEffect_PreCloseSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.PostInitSkill
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.PostInitSkill");

	UUTSkillEffect_PostInitSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.PostActiveSkill
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.PostActiveSkill");

	UUTSkillEffect_PostActiveSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.OnAsyncLoadSoftPathDone
// ()

void UUTSkillEffect::OnAsyncLoadSoftPathDone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.OnAsyncLoadSoftPathDone");

	UUTSkillEffect_OnAsyncLoadSoftPathDone_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.GetOwnerSkill
// ()
// Parameters:
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillEffect::GetOwnerSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.GetOwnerSkill");

	UUTSkillEffect_GetOwnerSkill_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillEffect.DoHurtAppearance
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::DoHurtAppearance(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.DoHurtAppearance");

	UUTSkillEffect_DoHurtAppearance_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.DoAction
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bCheckSkillStopped             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillEffect::DoAction(class UUTSkillManagerComponent* SkillManagerComponent, bool bCheckSkillStopped)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.DoAction");

	UUTSkillEffect_DoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.bCheckSkillStopped = bCheckSkillStopped;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillAction.UpdateAction_Internal
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::UpdateAction_Internal(float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.UpdateAction_Internal");

	UUTSkillAction_UpdateAction_Internal_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.UpdateAction
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::UpdateAction(class UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.UpdateAction");

	UUTSkillAction_UpdateAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.UndoAction_Internal
// ()

void UUTSkillAction::UndoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.UndoAction_Internal");

	UUTSkillAction_UndoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.UndoAction
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAction::UndoAction(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.UndoAction");

	UUTSkillAction_UndoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.TimerRealDoAction
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bCheckSkillStopped             (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::TimerRealDoAction(class UUTSkillManagerComponent* SkillManagerComponent, bool bCheckSkillStopped)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.TimerRealDoAction");

	UUTSkillAction_TimerRealDoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.bCheckSkillStopped = bCheckSkillStopped;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.Reset_Internal
// ()

void UUTSkillAction::Reset_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.Reset_Internal");

	UUTSkillAction_Reset_Internal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.Reset
// ()
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAction::Reset(class UActorComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.Reset");

	UUTSkillAction_Reset_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.RealDoHurtAppearance_Internal
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::RealDoHurtAppearance_Internal(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.RealDoHurtAppearance_Internal");

	UUTSkillAction_RealDoHurtAppearance_Internal_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.RealDoHurtAppearance
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::RealDoHurtAppearance(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.RealDoHurtAppearance");

	UUTSkillAction_RealDoHurtAppearance_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.RealDoAction_Internal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction::RealDoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.RealDoAction_Internal");

	UUTSkillAction_RealDoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillAction.RealDoAction
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bCheckSkillStopped             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction::RealDoAction(class UUTSkillManagerComponent* SkillManagerComponent, bool bCheckSkillStopped)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.RealDoAction");

	UUTSkillAction_RealDoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.bCheckSkillStopped = bCheckSkillStopped;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillAction.OnAsyncLoadAssetDone
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  SkillAppearanceVictim          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSkillAppearance               (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::OnAsyncLoadAssetDone(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* SkillAppearanceVictim, bool bSkillAppearance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.OnAsyncLoadAssetDone");

	UUTSkillAction_OnAsyncLoadAssetDone_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.SkillAppearanceVictim = SkillAppearanceVictim;
	params.bSkillAppearance = bSkillAppearance;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.JudgeNeedPhaseWait
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction::JudgeNeedPhaseWait()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.JudgeNeedPhaseWait");

	UUTSkillAction_JudgeNeedPhaseWait_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillAction.DoHurtAppearance
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::DoHurtAppearance(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.DoHurtAppearance");

	UUTSkillAction_DoHurtAppearance_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.DoAction
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bCheckSkillStopped             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction::DoAction(class UUTSkillManagerComponent* SkillManagerComponent, bool bCheckSkillStopped)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.DoAction");

	UUTSkillAction_DoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.bCheckSkillStopped = bCheckSkillStopped;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillAction_LuaContainer.UpdateActionInContainer
// ()
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction_LuaContainer::UpdateActionInContainer(class UActorComponent* SkillManagerComponent, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction_LuaContainer.UpdateActionInContainer");

	UUTSkillAction_LuaContainer_UpdateActionInContainer_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction_LuaContainer.UndoActionInContainer
// ()
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAction_LuaContainer::UndoActionInContainer(class UActorComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction_LuaContainer.UndoActionInContainer");

	UUTSkillAction_LuaContainer_UndoActionInContainer_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction_LuaContainer.ResetActionInContainer
// ()
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAction_LuaContainer::ResetActionInContainer(class UActorComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction_LuaContainer.ResetActionInContainer");

	UUTSkillAction_LuaContainer_ResetActionInContainer_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction_LuaContainer.RealDoActionInContainer
// ()
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction_LuaContainer::RealDoActionInContainer(class UActorComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction_LuaContainer.RealDoActionInContainer");

	UUTSkillAction_LuaContainer_RealDoActionInContainer_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsWeakObject
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsWeakObject(int SkillID, const struct FName& KeyName, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsWeakObject");

	UUTSkillBlackboardInterface_SetValueAsWeakObject_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsVector
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 VectorValue                    (Parm, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsVector(int SkillID, const struct FName& KeyName, const struct FVector& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsVector");

	UUTSkillBlackboardInterface_SetValueAsVector_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsUInt
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// uint32_t                       UIntValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsUInt(int SkillID, const struct FName& KeyName, uint32_t UIntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsUInt");

	UUTSkillBlackboardInterface_SetValueAsUInt_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.UIntValue = UIntValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsString
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 StringValue                    (Parm, ZeroConstructor)

void UUTSkillBlackboardInterface::SetValueAsString(int SkillID, const struct FName& KeyName, const struct FString& StringValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsString");

	UUTSkillBlackboardInterface_SetValueAsString_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.StringValue = StringValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsRotator
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                VectorValue                    (Parm, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsRotator(int SkillID, const struct FName& KeyName, const struct FRotator& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsRotator");

	UUTSkillBlackboardInterface_SetValueAsRotator_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsObject
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsObject(int SkillID, const struct FName& KeyName, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsObject");

	UUTSkillBlackboardInterface_SetValueAsObject_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsName
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   NameValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsName(int SkillID, const struct FName& KeyName, const struct FName& NameValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsName");

	UUTSkillBlackboardInterface_SetValueAsName_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.NameValue = NameValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsInt
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            IntValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsInt(int SkillID, const struct FName& KeyName, int IntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsInt");

	UUTSkillBlackboardInterface_SetValueAsInt_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsFloat
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsFloat(int SkillID, const struct FName& KeyName, float FloatValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsFloat");

	UUTSkillBlackboardInterface_SetValueAsFloat_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.FloatValue = FloatValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsEnum
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  EnumValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsEnum(int SkillID, const struct FName& KeyName, unsigned char EnumValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsEnum");

	UUTSkillBlackboardInterface_SetValueAsEnum_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.EnumValue = EnumValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsClass
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  ClassValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsClass(int SkillID, const struct FName& KeyName, class UClass* ClassValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsClass");

	UUTSkillBlackboardInterface_SetValueAsClass_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.ClassValue = ClassValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsBool
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           BoolValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsBool(int SkillID, const struct FName& KeyName, bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsBool");

	UUTSkillBlackboardInterface_SetValueAsBool_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.IsExistWeakObject
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistWeakObject(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistWeakObject");

	UUTSkillBlackboardInterface_IsExistWeakObject_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistVector
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistVector(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistVector");

	UUTSkillBlackboardInterface_IsExistVector_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistUInt
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistUInt(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistUInt");

	UUTSkillBlackboardInterface_IsExistUInt_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistString
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistString(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistString");

	UUTSkillBlackboardInterface_IsExistString_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistRotator
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistRotator(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistRotator");

	UUTSkillBlackboardInterface_IsExistRotator_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistObject
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistObject(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistObject");

	UUTSkillBlackboardInterface_IsExistObject_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistName
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistName(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistName");

	UUTSkillBlackboardInterface_IsExistName_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistInt
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistInt(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistInt");

	UUTSkillBlackboardInterface_IsExistInt_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistFloat
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistFloat(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistFloat");

	UUTSkillBlackboardInterface_IsExistFloat_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistEnum
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistEnum(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistEnum");

	UUTSkillBlackboardInterface_IsExistEnum_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistClass
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistClass(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistClass");

	UUTSkillBlackboardInterface_IsExistClass_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistBool
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistBool(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistBool");

	UUTSkillBlackboardInterface_IsExistBool_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsWeakObject
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUTSkillBlackboardInterface::GetValueAsWeakObject(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsWeakObject");

	UUTSkillBlackboardInterface_GetValueAsWeakObject_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsWeakActor
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUTSkillBlackboardInterface::GetValueAsWeakActor(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsWeakActor");

	UUTSkillBlackboardInterface_GetValueAsWeakActor_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsVector
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UUTSkillBlackboardInterface::GetValueAsVector(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsVector");

	UUTSkillBlackboardInterface_GetValueAsVector_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsUInt
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UUTSkillBlackboardInterface::GetValueAsUInt(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsUInt");

	UUTSkillBlackboardInterface_GetValueAsUInt_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsString
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUTSkillBlackboardInterface::GetValueAsString(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsString");

	UUTSkillBlackboardInterface_GetValueAsString_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsRotator
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UUTSkillBlackboardInterface::GetValueAsRotator(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsRotator");

	UUTSkillBlackboardInterface_GetValueAsRotator_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsObject
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUTSkillBlackboardInterface::GetValueAsObject(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsObject");

	UUTSkillBlackboardInterface_GetValueAsObject_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsName
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UUTSkillBlackboardInterface::GetValueAsName(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsName");

	UUTSkillBlackboardInterface_GetValueAsName_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsInt
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillBlackboardInterface::GetValueAsInt(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsInt");

	UUTSkillBlackboardInterface_GetValueAsInt_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsFloat
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillBlackboardInterface::GetValueAsFloat(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsFloat");

	UUTSkillBlackboardInterface_GetValueAsFloat_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsEnum
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UUTSkillBlackboardInterface::GetValueAsEnum(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsEnum");

	UUTSkillBlackboardInterface_GetValueAsEnum_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsClass
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUTSkillBlackboardInterface::GetValueAsClass(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsClass");

	UUTSkillBlackboardInterface_GetValueAsClass_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsBool
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::GetValueAsBool(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsBool");

	UUTSkillBlackboardInterface_GetValueAsBool_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsActor
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUTSkillBlackboardInterface::GetValueAsActor(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsActor");

	UUTSkillBlackboardInterface_GetValueAsActor_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetUAEBlackboardBySkillID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UUTSkillBlackboardInterface::GetUAEBlackboardBySkillID(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetUAEBlackboardBySkillID");

	UUTSkillBlackboardInterface_GetUAEBlackboardBySkillID_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillCDBase.BindLua
// ()
// Parameters:
// struct FString                 luaPath                        (Parm, ZeroConstructor)

void UUTSkillCDBase::BindLua(const struct FString& luaPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCDBase.BindLua");

	UUTSkillCDBase_BindLua_Params params;
	params.luaPath = luaPath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillCondition.PreCloseSkill
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillCondition::PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.PreCloseSkill");

	UUTSkillCondition_PreCloseSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillCondition.PostInitSkill
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillCondition::PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.PostInitSkill");

	UUTSkillCondition_PostInitSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillCondition.PostActiveSkill
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillCondition::PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.PostActiveSkill");

	UUTSkillCondition_PostActiveSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillCondition.IsTargetOK
// ()
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCondition::IsTargetOK(class UActorComponent* SkillManagerComponent, class AActor* Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.IsTargetOK");

	UUTSkillCondition_IsTargetOK_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillCondition.IsOK_Internal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCondition::IsOK_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.IsOK_Internal");

	UUTSkillCondition_IsOK_Internal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillCondition.IsOK
// ()
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCondition::IsOK(class UActorComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.IsOK");

	UUTSkillCondition_IsOK_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillCondition.GetOwnerSkill
// ()
// Parameters:
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillCondition::GetOwnerSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.GetOwnerSkill");

	UUTSkillCondition_GetOwnerSkill_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillInstancedNodeInterface.PostOverrideLua
// ()

void UUTSkillInstancedNodeInterface::PostOverrideLua()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInstancedNodeInterface.PostOverrideLua");

	UUTSkillInstancedNodeInterface_PostOverrideLua_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillInterface.IsNeedCheckAutoSkill
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillInterface::IsNeedCheckAutoSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.IsNeedCheckAutoSkill");

	UUTSkillInterface_IsNeedCheckAutoSkill_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillInterface.HasSkillToken
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillInterface::HasSkillToken(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.HasSkillToken");

	UUTSkillInterface_HasSkillToken_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillInterface.HandleSkillStart
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillInterface::HandleSkillStart(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.HandleSkillStart");

	UUTSkillInterface_HandleSkillStart_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillInterface.HandleSkillEnd
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillInterface::HandleSkillEnd(int SkillID, EUTSkillStopReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.HandleSkillEnd");

	UUTSkillInterface_HandleSkillEnd_Params params;
	params.SkillID = SkillID;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillInterface.GetSkillManager
// ()
// Parameters:
// class UUTSkillManagerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillManagerComponent* UUTSkillInterface::GetSkillManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.GetSkillManager");

	UUTSkillInterface_GetSkillManager_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillInterface.ClearSkillToken
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillInterface::ClearSkillToken(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.ClearSkillToken");

	UUTSkillInterface_ClearSkillToken_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillInterface.ClearAllSkillToken
// ()

void UUTSkillInterface::ClearAllSkillToken()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.ClearAllSkillToken");

	UUTSkillInterface_ClearAllSkillToken_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillInterface.AddSkillToken
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillInterface::AddSkillToken(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.AddSkillToken");

	UUTSkillInterface_AddSkillToken_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillLocationPickerFilter.CheckAdjustLocation
// ()
// Parameters:
// struct FSkillLocationFilterContext Context                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 InLocation                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillLocationPickerFilter::CheckAdjustLocation(const struct FSkillLocationFilterContext& Context, const struct FVector& InLocation, struct FVector* OutLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillLocationPickerFilter.CheckAdjustLocation");

	UUTSkillLocationPickerFilter_CheckAdjustLocation_Params params;
	params.Context = Context;
	params.InLocation = InLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.UpdateSyncSkillCDData
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::UpdateSyncSkillCDData(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.UpdateSyncSkillCDData");

	UUTSkillManagerComponent_UpdateSyncSkillCDData_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.UnRegisterActorBlackBorad
// ()
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::UnRegisterActorBlackBorad(class AActor* InActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.UnRegisterActorBlackBorad");

	UUTSkillManagerComponent_UnRegisterActorBlackBorad_Params params;
	params.InActor = InActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.TryDeleteOneSkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsImmediately                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResetCD                       (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::TryDeleteOneSkill(int SkillID, bool IsImmediately, bool bResetCD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TryDeleteOneSkill");

	UUTSkillManagerComponent_TryDeleteOneSkill_Params params;
	params.SkillID = SkillID;
	params.IsImmediately = IsImmediately;
	params.bResetCD = bResetCD;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.TryAddOneSkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ButtonSlot                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::TryAddOneSkill(int SkillID, bool bActive, int ButtonSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TryAddOneSkill");

	UUTSkillManagerComponent_TryAddOneSkill_Params params;
	params.SkillID = SkillID;
	params.bActive = bActive;
	params.ButtonSlot = ButtonSlot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.TriggerSkillWithParams
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         InKeyStrings                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::TriggerSkillWithParams(int SkillID, TArray<struct FString> InKeyStrings, bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TriggerSkillWithParams");

	UUTSkillManagerComponent_TriggerSkillWithParams_Params params;
	params.SkillID = SkillID;
	params.InKeyStrings = InKeyStrings;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.TriggerSkillWithID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::TriggerSkillWithID(int SkillID, bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TriggerSkillWithID");

	UUTSkillManagerComponent_TriggerSkillWithID_Params params;
	params.SkillID = SkillID;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.TriggerLocalEventWithID
// ()
// Parameters:
// TEnumAsByte<EUTSkillEventType> SkillEventType                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::TriggerLocalEventWithID(TEnumAsByte<EUTSkillEventType> SkillEventType, int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TriggerLocalEventWithID");

	UUTSkillManagerComponent_TriggerLocalEventWithID_Params params;
	params.SkillEventType = SkillEventType;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.TriggerEventWithID
// ()
// Parameters:
// TEnumAsByte<EUTSkillEventType> SkillEventType                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::TriggerEventWithID(TEnumAsByte<EUTSkillEventType> SkillEventType, int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TriggerEventWithID");

	UUTSkillManagerComponent_TriggerEventWithID_Params params;
	params.SkillEventType = SkillEventType;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.TriggerEvent
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::TriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TriggerEvent");

	UUTSkillManagerComponent_TriggerEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.TraceTarget
// ()
// Parameters:
// struct FVector                 StartTrace                     (Parm, IsPlainOldData)
// struct FVector                 EndTrace                       (Parm, IsPlainOldData)
// EUTPickerTargetType            TargetType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::TraceTarget(const struct FVector& StartTrace, const struct FVector& EndTrace, EUTPickerTargetType TargetType, float Radius, class AActor** TargetActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TraceTarget");

	UUTSkillManagerComponent_TraceTarget_Params params;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;
	params.TargetType = TargetType;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TargetActor != nullptr)
		*TargetActor = params.TargetActor;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.SyncOneSkillState
// ()
// Parameters:
// bool                           RepSkillCD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RepSkillActiveState            (Parm, ZeroConstructor, IsPlainOldData)
// int                            RequestID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SyncOneSkillState(bool RepSkillCD, bool RepSkillActiveState, int RequestID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SyncOneSkillState");

	UUTSkillManagerComponent_SyncOneSkillState_Params params;
	params.RepSkillCD = RepSkillCD;
	params.RepSkillActiveState = RepSkillActiveState;
	params.RequestID = RequestID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.StopSkillAll
// ()
// Parameters:
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::StopSkillAll(EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.StopSkillAll");

	UUTSkillManagerComponent_StopSkillAll_Params params;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.StopSkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::StopSkill(int SkillID, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.StopSkill");

	UUTSkillManagerComponent_StopSkill_Params params;
	params.SkillID = SkillID;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.StopCurSkill
// ()
// Parameters:
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::StopCurSkill(EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.StopCurSkill");

	UUTSkillManagerComponent_StopCurSkill_Params params;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.StopAllMonopolizeSkill
// ()
// Parameters:
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::StopAllMonopolizeSkill(EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.StopAllMonopolizeSkill");

	UUTSkillManagerComponent_StopAllMonopolizeSkill_Params params;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.SetupOwnerAndSystem
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::SetupOwnerAndSystem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetupOwnerAndSystem");

	UUTSkillManagerComponent_SetupOwnerAndSystem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.SetSkillTagsLimit
// ()
// Parameters:
// TArray<int>                    SkillTags                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bLimit                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TriggerKey                     (Parm, ZeroConstructor)

void UUTSkillManagerComponent::SetSkillTagsLimit(TArray<int> SkillTags, bool bLimit, const struct FString& TriggerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillTagsLimit");

	UUTSkillManagerComponent_SetSkillTagsLimit_Params params;
	params.SkillTags = SkillTags;
	params.bLimit = bLimit;
	params.TriggerKey = TriggerKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.SetSkillTagsDisable
// ()
// Parameters:
// TArray<int>                    SkillTags                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TriggerKey                     (Parm, ZeroConstructor)

void UUTSkillManagerComponent::SetSkillTagsDisable(TArray<int> SkillTags, bool bDisable, const struct FString& TriggerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillTagsDisable");

	UUTSkillManagerComponent_SetSkillTagsDisable_Params params;
	params.SkillTags = SkillTags;
	params.bDisable = bDisable;
	params.TriggerKey = TriggerKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.SetSkillSkinID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSkillSkinID                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::SetSkillSkinID(int SkillID, int InSkillSkinID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillSkinID");

	UUTSkillManagerComponent_SetSkillSkinID_Params params;
	params.SkillID = SkillID;
	params.InSkillSkinID = InSkillSkinID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.SetSkillOwner
// ()
// Parameters:
// class AActor*                  tempActor                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SetSkillOwner(class AActor* tempActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillOwner");

	UUTSkillManagerComponent_SetSkillOwner_Params params;
	params.tempActor = tempActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.SetSkillLevel
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillLevel                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::SetSkillLevel(int SkillID, int SkillLevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillLevel");

	UUTSkillManagerComponent_SetSkillLevel_Params params;
	params.SkillID = SkillID;
	params.SkillLevel = SkillLevel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.SetSkillIDsLimit
// ()
// Parameters:
// TArray<int>                    SkillIDs                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bLimit                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TriggerKey                     (Parm, ZeroConstructor)

void UUTSkillManagerComponent::SetSkillIDsLimit(TArray<int> SkillIDs, bool bLimit, const struct FString& TriggerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillIDsLimit");

	UUTSkillManagerComponent_SetSkillIDsLimit_Params params;
	params.SkillIDs = SkillIDs;
	params.bLimit = bLimit;
	params.TriggerKey = TriggerKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.SetSkillIDsDisable
// ()
// Parameters:
// TArray<int>                    SkillIDs                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TriggerKey                     (Parm, ZeroConstructor)

void UUTSkillManagerComponent::SetSkillIDsDisable(TArray<int> SkillIDs, bool bDisable, const struct FString& TriggerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillIDsDisable");

	UUTSkillManagerComponent_SetSkillIDsDisable_Params params;
	params.SkillIDs = SkillIDs;
	params.bDisable = bDisable;
	params.TriggerKey = TriggerKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.SetSkillCDTimeScale
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ScaleType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SetSkillCDTimeScale(int SkillID, float Scale, int ScaleType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillCDTimeScale");

	UUTSkillManagerComponent_SetSkillCDTimeScale_Params params;
	params.SkillID = SkillID;
	params.Scale = Scale;
	params.ScaleType = ScaleType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.SetSkillCDIndexTimeScale
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillCDIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ScaleType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SetSkillCDIndexTimeScale(int SkillID, int SkillCDIndex, float Scale, int ScaleType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillCDIndexTimeScale");

	UUTSkillManagerComponent_SetSkillCDIndexTimeScale_Params params;
	params.SkillID = SkillID;
	params.SkillCDIndex = SkillCDIndex;
	params.Scale = Scale;
	params.ScaleType = ScaleType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.SetSkillActive
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceSet                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ButtonSlot                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::SetSkillActive(int SkillID, bool bActive, bool bForceSet, int ButtonSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillActive");

	UUTSkillManagerComponent_SetSkillActive_Params params;
	params.SkillID = SkillID;
	params.bActive = bActive;
	params.bForceSet = bForceSet;
	params.ButtonSlot = ButtonSlot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.SetAutoSkillID
// ()
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SetAutoSkillID(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetAutoSkillID");

	UUTSkillManagerComponent_SetAutoSkillID_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.SetAllSkillCDTimeScale
// ()
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SetAllSkillCDTimeScale(float Scale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetAllSkillCDTimeScale");

	UUTSkillManagerComponent_SetAllSkillCDTimeScale_Params params;
	params.Scale = Scale;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithParamsAndTssData
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          TssData                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// uint64_t                       PackageIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerTriggerEvent_WithParamsAndTssData(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, uint64_t InstID, TArray<unsigned char> Content, TArray<unsigned char> TssData, uint64_t PackageIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithParamsAndTssData");

	UUTSkillManagerComponent_ServerTriggerEvent_WithParamsAndTssData_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;
	params.InstID = InstID;
	params.Content = Content;
	params.TssData = TssData;
	params.PackageIndex = PackageIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithParams
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// uint64_t                       PackageIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerTriggerEvent_WithParams(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, uint64_t InstID, TArray<unsigned char> Content, uint64_t PackageIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithParams");

	UUTSkillManagerComponent_ServerTriggerEvent_WithParams_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;
	params.InstID = InstID;
	params.Content = Content;
	params.PackageIndex = PackageIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithIDAndTssData
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          TssData                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// uint64_t                       PackageIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerTriggerEvent_WithIDAndTssData(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, uint64_t InstID, TArray<unsigned char> TssData, uint64_t PackageIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithIDAndTssData");

	UUTSkillManagerComponent_ServerTriggerEvent_WithIDAndTssData_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;
	params.InstID = InstID;
	params.TssData = TssData;
	params.PackageIndex = PackageIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       PackageIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerTriggerEvent_WithID(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, uint64_t InstID, uint64_t PackageIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithID");

	UUTSkillManagerComponent_ServerTriggerEvent_WithID_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;
	params.InstID = InstID;
	params.PackageIndex = PackageIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerTriggerEvent
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerTriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerTriggerEvent");

	UUTSkillManagerComponent_ServerTriggerEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerStopSkillCombo
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerStopSkillCombo(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerStopSkillCombo");

	UUTSkillManagerComponent_ServerStopSkillCombo_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerStopSkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerStopSkill(int SkillID, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerStopSkill");

	UUTSkillManagerComponent_ServerStopSkill_Params params;
	params.SkillID = SkillID;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerStopAllSkill
// ()
// Parameters:
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerStopAllSkill(EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerStopAllSkill");

	UUTSkillManagerComponent_ServerStopAllSkill_Params params;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerStopAllMonopolizeSkill
// ()
// Parameters:
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerStopAllMonopolizeSkill(EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerStopAllMonopolizeSkill");

	UUTSkillManagerComponent_ServerStopAllMonopolizeSkill_Params params;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerStartSkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoCast                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::ServerStartSkill(int SkillID, bool bAutoCast)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerStartSkill");

	UUTSkillManagerComponent_ServerStartSkill_Params params;
	params.SkillID = SkillID;
	params.bAutoCast = bAutoCast;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.ServerNotifyRandomSeed
// ()
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerNotifyRandomSeed(int Seed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerNotifyRandomSeed");

	UUTSkillManagerComponent_ServerNotifyRandomSeed_Params params;
	params.Seed = Seed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ResetTeammateSkillCDData
// ()

void UUTSkillManagerComponent::ResetTeammateSkillCDData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ResetTeammateSkillCDData");

	UUTSkillManagerComponent_ResetTeammateSkillCDData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ResetSkillCoolDown
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            CDIndex                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ResetSkillCoolDown(int SkillID, int CDIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ResetSkillCoolDown");

	UUTSkillManagerComponent_ResetSkillCoolDown_Params params;
	params.SkillID = SkillID;
	params.CDIndex = CDIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ResetSkill
// ()
// Parameters:
// bool                           bStopAllSkill                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDeactivateAllSkill            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResetSkillCD                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ResetSkill(bool bStopAllSkill, bool bDeactivateAllSkill, bool bResetSkillCD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ResetSkill");

	UUTSkillManagerComponent_ResetSkill_Params params;
	params.bStopAllSkill = bStopAllSkill;
	params.bDeactivateAllSkill = bDeactivateAllSkill;
	params.bResetSkillCD = bResetSkillCD;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ResetAllSkillCoolDown
// ()

void UUTSkillManagerComponent::ResetAllSkillCoolDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ResetAllSkillCoolDown");

	UUTSkillManagerComponent_ResetAllSkillCoolDown_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RequestSkillStates
// ()
// Parameters:
// bool                           RepSkillCD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RepSkillActiveState            (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::RequestSkillStates(bool RepSkillCD, bool RepSkillActiveState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RequestSkillStates");

	UUTSkillManagerComponent_RequestSkillStates_Params params;
	params.RepSkillCD = RepSkillCD;
	params.RepSkillActiveState = RepSkillActiveState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RepSkillHitInfo
// ()

void UUTSkillManagerComponent::RepSkillHitInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RepSkillHitInfo");

	UUTSkillManagerComponent_RepSkillHitInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RepLastCastTime
// ()

void UUTSkillManagerComponent::RepLastCastTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RepLastCastTime");

	UUTSkillManagerComponent_RepLastCastTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ReplaceSkill
// ()
// Parameters:
// int                            OldSkillID                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewSkillID                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ReplaceSkill(int OldSkillID, int NewSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ReplaceSkill");

	UUTSkillManagerComponent_ReplaceSkill_Params params;
	params.OldSkillID = OldSkillID;
	params.NewSkillID = NewSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RemoveReplacedSkill
// ()
// Parameters:
// int                            OldSkillID                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::RemoveReplacedSkill(int OldSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RemoveReplacedSkill");

	UUTSkillManagerComponent_RemoveReplacedSkill_Params params;
	params.OldSkillID = OldSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RemoveAllSkillUIWidget
// ()

void UUTSkillManagerComponent::RemoveAllSkillUIWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RemoveAllSkillUIWidget");

	UUTSkillManagerComponent_RemoveAllSkillUIWidget_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RegisterActorBlackBorad
// ()
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEBlackboard*          RegisterBlackboard             (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::RegisterActorBlackBorad(class AActor* InActor, class UUAEBlackboard* RegisterBlackboard)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RegisterActorBlackBorad");

	UUTSkillManagerComponent_RegisterActorBlackBorad_Params params;
	params.InActor = InActor;
	params.RegisterBlackboard = RegisterBlackboard;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RefreshSkillRepData
// ()

void UUTSkillManagerComponent::RefreshSkillRepData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RefreshSkillRepData");

	UUTSkillManagerComponent_RefreshSkillRepData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RecordSkillException
// ()
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>          InRole                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InNetMode                      (Parm, ZeroConstructor)
// struct FString                 InFuncName                     (Parm, ZeroConstructor)

void UUTSkillManagerComponent::RecordSkillException(class AActor* InActor, int InSkillID, TEnumAsByte<ENetRole> InRole, const struct FString& InNetMode, const struct FString& InFuncName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RecordSkillException");

	UUTSkillManagerComponent_RecordSkillException_Params params;
	params.InActor = InActor;
	params.InSkillID = InSkillID;
	params.InRole = InRole;
	params.InNetMode = InNetMode;
	params.InFuncName = InFuncName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RandRangeSyn
// ()
// Parameters:
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::RandRangeSyn(int StartIndex, int EndIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RandRangeSyn");

	UUTSkillManagerComponent_RandRangeSyn_Params params;
	params.StartIndex = StartIndex;
	params.EndIndex = EndIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.QuerySkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::QuerySkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.QuerySkill");

	UUTSkillManagerComponent_QuerySkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.QueryOrNewSkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::QueryOrNewSkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.QueryOrNewSkill");

	UUTSkillManagerComponent_QueryOrNewSkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.PreTriggerSkillEvent
// ()
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::PreTriggerSkillEvent(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.PreTriggerSkillEvent");

	UUTSkillManagerComponent_PreTriggerSkillEvent_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.PostTriggerSkillEvent
// ()
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::PostTriggerSkillEvent(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.PostTriggerSkillEvent");

	UUTSkillManagerComponent_PostTriggerSkillEvent_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.PlayHurtSkillEffect
// ()
// Parameters:
// struct FUTSkillHitInfo         TheSkillHitInfo                (Parm)

void UUTSkillManagerComponent::PlayHurtSkillEffect(const struct FUTSkillHitInfo& TheSkillHitInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.PlayHurtSkillEffect");

	UUTSkillManagerComponent_PlayHurtSkillEffect_Params params;
	params.TheSkillHitInfo = TheSkillHitInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnStopSkill
// ()
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::OnStopSkill(class AUTSkill* Skill, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnStopSkill");

	UUTSkillManagerComponent_OnStopSkill_Params params;
	params.Skill = Skill;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRespawned
// ()

void UUTSkillManagerComponent::OnRespawned()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRespawned");

	UUTSkillManagerComponent_OnRespawned_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_SkillHitInfo
// ()

void UUTSkillManagerComponent::OnRep_SkillHitInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_SkillHitInfo");

	UUTSkillManagerComponent_OnRep_SkillHitInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_SkillCDDatas
// ()

void UUTSkillManagerComponent::OnRep_SkillCDDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_SkillCDDatas");

	UUTSkillManagerComponent_OnRep_SkillCDDatas_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_SkillAttrRepData
// ()

void UUTSkillManagerComponent::OnRep_SkillAttrRepData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_SkillAttrRepData");

	UUTSkillManagerComponent_OnRep_SkillAttrRepData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_SkillActiveState
// ()

void UUTSkillManagerComponent::OnRep_SkillActiveState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_SkillActiveState");

	UUTSkillManagerComponent_OnRep_SkillActiveState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_ReplaceSkill
// ()

void UUTSkillManagerComponent::OnRep_ReplaceSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_ReplaceSkill");

	UUTSkillManagerComponent_OnRep_ReplaceSkill_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_NewSkillSynData
// ()

void UUTSkillManagerComponent::OnRep_NewSkillSynData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_NewSkillSynData");

	UUTSkillManagerComponent_OnRep_NewSkillSynData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_NewSkillSinglePhaseData
// ()

void UUTSkillManagerComponent::OnRep_NewSkillSinglePhaseData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_NewSkillSinglePhaseData");

	UUTSkillManagerComponent_OnRep_NewSkillSinglePhaseData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_NetClientSimulateInstID
// ()

void UUTSkillManagerComponent::OnRep_NetClientSimulateInstID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_NetClientSimulateInstID");

	UUTSkillManagerComponent_OnRep_NetClientSimulateInstID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_NetAutoSkillID
// ()

void UUTSkillManagerComponent::OnRep_NetAutoSkillID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_NetAutoSkillID");

	UUTSkillManagerComponent_OnRep_NetAutoSkillID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_EnableSkillEncrypt
// ()

void UUTSkillManagerComponent::OnRep_EnableSkillEncrypt()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_EnableSkillEncrypt");

	UUTSkillManagerComponent_OnRep_EnableSkillEncrypt_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_DynamicRepData
// ()

void UUTSkillManagerComponent::OnRep_DynamicRepData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_DynamicRepData");

	UUTSkillManagerComponent_OnRep_DynamicRepData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_AsyncSkillComboSkillID
// ()

void UUTSkillManagerComponent::OnRep_AsyncSkillComboSkillID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_AsyncSkillComboSkillID");

	UUTSkillManagerComponent_OnRep_AsyncSkillComboSkillID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRecycled
// ()

void UUTSkillManagerComponent::OnRecycled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRecycled");

	UUTSkillManagerComponent_OnRecycled_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnInterruptSkill
// ()
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::OnInterruptSkill(class AUTSkill* Skill, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnInterruptSkill");

	UUTSkillManagerComponent_OnInterruptSkill_Params params;
	params.Skill = Skill;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.NewUAEBlackboard
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::NewUAEBlackboard(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.NewUAEBlackboard");

	UUTSkillManagerComponent_NewUAEBlackboard_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.NeedSimulateStoppedNewSkill
// ()
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::NeedSimulateStoppedNewSkill(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.NeedSimulateStoppedNewSkill");

	UUTSkillManagerComponent_NeedSimulateStoppedNewSkill_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.LocalTriggerNewSkillFail
// ()
// Parameters:
// class AUTSkill*                InNewSkill                     (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::LocalTriggerNewSkillFail(class AUTSkill* InNewSkill, uint64_t InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.LocalTriggerNewSkillFail");

	UUTSkillManagerComponent_LocalTriggerNewSkillFail_Params params;
	params.InNewSkill = InNewSkill;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.LocalStopSkillAllWithExcludeArray
// ()
// Parameters:
// TArray<int>                    InExcludeArry                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::LocalStopSkillAllWithExcludeArray(TArray<int> InExcludeArry, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.LocalStopSkillAllWithExcludeArray");

	UUTSkillManagerComponent_LocalStopSkillAllWithExcludeArray_Params params;
	params.InExcludeArry = InExcludeArry;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.IsSkillNeedPackageVerify
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsSkillNeedPackageVerify(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsSkillNeedPackageVerify");

	UUTSkillManagerComponent_IsSkillNeedPackageVerify_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsSkillInit
// ()
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsSkillInit(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsSkillInit");

	UUTSkillManagerComponent_IsSkillInit_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsSkillIDDisable
// ()
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsSkillIDDisable(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsSkillIDDisable");

	UUTSkillManagerComponent_IsSkillIDDisable_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsSkillCanUse
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsSkillCanUse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsSkillCanUse");

	UUTSkillManagerComponent_IsSkillCanUse_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsSkillActived
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsSkillActived(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsSkillActived");

	UUTSkillManagerComponent_IsSkillActived_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsReadyToCastSkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsReadyToCastSkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsReadyToCastSkill");

	UUTSkillManagerComponent_IsReadyToCastSkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsPendingCastSkillID
// ()
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsPendingCastSkillID(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsPendingCastSkillID");

	UUTSkillManagerComponent_IsPendingCastSkillID_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsPendingCastSkill
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsPendingCastSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsPendingCastSkill");

	UUTSkillManagerComponent_IsPendingCastSkill_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsEnableSkillCoolDown
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsEnableSkillCoolDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsEnableSkillCoolDown");

	UUTSkillManagerComponent_IsEnableSkillCoolDown_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsCurrentUseSkillID
// ()
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsCurrentUseSkillID(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsCurrentUseSkillID");

	UUTSkillManagerComponent_IsCurrentUseSkillID_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsCastingSkillTag
// ()
// Parameters:
// int                            InSkillTag                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsCastingSkillTag(int InSkillTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsCastingSkillTag");

	UUTSkillManagerComponent_IsCastingSkillTag_Params params;
	params.InSkillTag = InSkillTag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsCastingSkillID
// ()
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsCastingSkillID(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsCastingSkillID");

	UUTSkillManagerComponent_IsCastingSkillID_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsCastingSkill
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsCastingSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsCastingSkill");

	UUTSkillManagerComponent_IsCastingSkill_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.HasSkillEventFromLastCast
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::HasSkillEventFromLastCast(int SkillID, TEnumAsByte<EUTSkillEventType> EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.HasSkillEventFromLastCast");

	UUTSkillManagerComponent_HasSkillEventFromLastCast_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.HandleTriggerParamsEventFail
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::HandleTriggerParamsEventFail(int SkillID, TEnumAsByte<EUTSkillEventType> EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.HandleTriggerParamsEventFail");

	UUTSkillManagerComponent_HandleTriggerParamsEventFail_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.HandleTriggerParamsEvent
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::HandleTriggerParamsEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.HandleTriggerParamsEvent");

	UUTSkillManagerComponent_HandleTriggerParamsEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.HandleSkillStop
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class AUTSkill*                InSkill                        (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::HandleSkillStop(int SkillID, class AUTSkill* InSkill, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.HandleSkillStop");

	UUTSkillManagerComponent_HandleSkillStop_Params params;
	params.SkillID = SkillID;
	params.InSkill = InSkill;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.HandleSkillStart
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class AUTSkill*                InSkill                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::HandleSkillStart(int SkillID, class AUTSkill* InSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.HandleSkillStart");

	UUTSkillManagerComponent_HandleSkillStart_Params params;
	params.SkillID = SkillID;
	params.InSkill = InSkill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.HandleGMDirectTriggerSkillEvent
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillPlayRet                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::HandleGMDirectTriggerSkillEvent(int SkillID, int SkillPlayRet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.HandleGMDirectTriggerSkillEvent");

	UUTSkillManagerComponent_HandleGMDirectTriggerSkillEvent_Params params;
	params.SkillID = SkillID;
	params.SkillPlayRet = SkillPlayRet;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetUAEBlackboardBySkillID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UUTSkillManagerComponent::GetUAEBlackboardBySkillID(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetUAEBlackboardBySkillID");

	UUTSkillManagerComponent_GetUAEBlackboardBySkillID_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetUAEBlackboard
// ()
// Parameters:
// class AUTSkill*                InSkill                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UUTSkillManagerComponent::GetUAEBlackboard(class AUTSkill* InSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetUAEBlackboard");

	UUTSkillManagerComponent_GetUAEBlackboard_Params params;
	params.InSkill = InSkill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillWidget
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUTSkillWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillWidget* UUTSkillManagerComponent::GetSkillWidget(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillWidget");

	UUTSkillManagerComponent_GetSkillWidget_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillSynDataString
// ()
// Parameters:
// struct FString                 PrefixText                     (Parm, ZeroConstructor)
// bool                           bWithLastData                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UUTSkillManagerComponent::GetSkillSynDataString(const struct FString& PrefixText, bool bWithLastData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillSynDataString");

	UUTSkillManagerComponent_GetSkillSynDataString_Params params;
	params.PrefixText = PrefixText;
	params.bWithLastData = bWithLastData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillSlotBySkillID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillSlotBySkillID(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillSlotBySkillID");

	UUTSkillManagerComponent_GetSkillSlotBySkillID_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillSlotBySkill
// ()
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillSlotBySkill(class AUTSkill* Skill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillSlotBySkill");

	UUTSkillManagerComponent_GetSkillSlotBySkill_Params params;
	params.Skill = Skill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillSkinID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillSkinID(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillSkinID");

	UUTSkillManagerComponent_GetSkillSkinID_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillSinglePhaseDataString
// ()
// Parameters:
// struct FString                 PrefixText                     (Parm, ZeroConstructor)
// bool                           bWithLastData                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UUTSkillManagerComponent::GetSkillSinglePhaseDataString(const struct FString& PrefixText, bool bWithLastData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillSinglePhaseDataString");

	UUTSkillManagerComponent_GetSkillSinglePhaseDataString_Params params;
	params.PrefixText = PrefixText;
	params.bWithLastData = bWithLastData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillsByGroup
// ()
// Parameters:
// struct FName                   SkillGroup                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AUTSkill*>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AUTSkill*> UUTSkillManagerComponent::GetSkillsByGroup(const struct FName& SkillGroup)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillsByGroup");

	UUTSkillManagerComponent_GetSkillsByGroup_Params params;
	params.SkillGroup = SkillGroup;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillLevel
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillLevel(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillLevel");

	UUTSkillManagerComponent_GetSkillLevel_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillIDByClass
// ()
// Parameters:
// class UClass*                  SkillClass                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillIDByClass(class UClass* SkillClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillIDByClass");

	UUTSkillManagerComponent_GetSkillIDByClass_Params params;
	params.SkillClass = SkillClass;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillExecString
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UUTSkillManagerComponent::GetSkillExecString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillExecString");

	UUTSkillManagerComponent_GetSkillExecString_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillEventTimestamp
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutTimestamp                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::GetSkillEventTimestamp(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, float* OutTimestamp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillEventTimestamp");

	UUTSkillManagerComponent_GetSkillEventTimestamp_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutTimestamp != nullptr)
		*OutTimestamp = params.OutTimestamp;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillCurPhase
// ()
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillCurPhase(class AUTSkill* Skill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillCurPhase");

	UUTSkillManagerComponent_GetSkillCurPhase_Params params;
	params.Skill = Skill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillByName
// ()
// Parameters:
// struct FString                 SkillName                      (Parm, ZeroConstructor)
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetSkillByName(const struct FString& SkillName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillByName");

	UUTSkillManagerComponent_GetSkillByName_Params params;
	params.SkillName = SkillName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillByClassName
// ()
// Parameters:
// struct FString                 SkillClassName                 (Parm, ZeroConstructor)
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetSkillByClassName(const struct FString& SkillClassName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillByClassName");

	UUTSkillManagerComponent_GetSkillByClassName_Params params;
	params.SkillClassName = SkillClassName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillButtonSlot
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillButtonSlot(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillButtonSlot");

	UUTSkillManagerComponent_GetSkillButtonSlot_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillBaseData
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUTSkillRuntimeData     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUTSkillRuntimeData UUTSkillManagerComponent::GetSkillBaseData(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillBaseData");

	UUTSkillManagerComponent_GetSkillBaseData_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetSkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkill");

	UUTSkillManagerComponent_GetSkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetReplacedSkill
// ()
// Parameters:
// int                            OldSkillID                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetReplacedSkill(int OldSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetReplacedSkill");

	UUTSkillManagerComponent_GetReplacedSkill_Params params;
	params.OldSkillID = OldSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetRealOwnerRoleSafety
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> UUTSkillManagerComponent::GetRealOwnerRoleSafety()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetRealOwnerRoleSafety");

	UUTSkillManagerComponent_GetRealOwnerRoleSafety_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetMutexRelation
// ()
// Parameters:
// class AUTSkill*                CurSkill                       (Parm, ZeroConstructor, IsPlainOldData)
// class AUTSkill*                NewSkill                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESkillMutexType>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESkillMutexType> UUTSkillManagerComponent::GetMutexRelation(class AUTSkill* CurSkill, class AUTSkill* NewSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetMutexRelation");

	UUTSkillManagerComponent_GetMutexRelation_Params params;
	params.CurSkill = CurSkill;
	params.NewSkill = NewSkill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetLastCastTime
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillManagerComponent::GetLastCastTime(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetLastCastTime");

	UUTSkillManagerComponent_GetLastCastTime_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetLastCastFinishTime
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillManagerComponent::GetLastCastFinishTime(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetLastCastFinishTime");

	UUTSkillManagerComponent_GetLastCastFinishTime_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurSkills
// ()
// Parameters:
// TArray<class AUTSkill*>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AUTSkill*> UUTSkillManagerComponent::GetCurSkills()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkills");

	UUTSkillManagerComponent_GetCurSkills_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurSkillPhase
// ()
// Parameters:
// class UUTSkillPhase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUTSkillPhase* UUTSkillManagerComponent::GetCurSkillPhase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkillPhase");

	UUTSkillManagerComponent_GetCurSkillPhase_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurSkillID
// ()
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetCurSkillID(class AUTSkill* Skill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkillID");

	UUTSkillManagerComponent_GetCurSkillID_Params params;
	params.Skill = Skill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurSkill
// ()
// Parameters:
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetCurSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkill");

	UUTSkillManagerComponent_GetCurSkill_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurMonopolizeSkills
// ()
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UUTSkillManagerComponent::GetCurMonopolizeSkills()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurMonopolizeSkills");

	UUTSkillManagerComponent_GetCurMonopolizeSkills_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurMonopolizedSkillPhase
// ()
// Parameters:
// class UUTSkillPhase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUTSkillPhase* UUTSkillManagerComponent::GetCurMonopolizedSkillPhase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurMonopolizedSkillPhase");

	UUTSkillManagerComponent_GetCurMonopolizedSkillPhase_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurMonopolizedSkill
// ()
// Parameters:
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetCurMonopolizedSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurMonopolizedSkill");

	UUTSkillManagerComponent_GetCurMonopolizedSkill_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurAllSkillIDs
// ()
// Parameters:
// TArray<int>                    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UUTSkillManagerComponent::GetCurAllSkillIDs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurAllSkillIDs");

	UUTSkillManagerComponent_GetCurAllSkillIDs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCoolDownTime
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            CoolDownIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillManagerComponent::GetCoolDownTime(int SkillID, int CoolDownIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCoolDownTime");

	UUTSkillManagerComponent_GetCoolDownTime_Params params;
	params.SkillID = SkillID;
	params.CoolDownIndex = CoolDownIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCastingSkillIDs
// ()
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UUTSkillManagerComponent::GetCastingSkillIDs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCastingSkillIDs");

	UUTSkillManagerComponent_GetCastingSkillIDs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetButtonSlotSkillID
// ()
// Parameters:
// int                            ButtonSlot                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetButtonSlotSkillID(int ButtonSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetButtonSlotSkillID");

	UUTSkillManagerComponent_GetButtonSlotSkillID_Params params;
	params.ButtonSlot = ButtonSlot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.DynamicRemoveSkill
// ()
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::DynamicRemoveSkill(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.DynamicRemoveSkill");

	UUTSkillManagerComponent_DynamicRemoveSkill_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.DynamicAddSkill
// ()
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::DynamicAddSkill(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.DynamicAddSkill");

	UUTSkillManagerComponent_DynamicAddSkill_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClientTriggerEventSuccess_WithID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       PackageIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ClientTriggerEventSuccess_WithID(int SkillID, uint64_t PackageIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClientTriggerEventSuccess_WithID");

	UUTSkillManagerComponent_ClientTriggerEventSuccess_WithID_Params params;
	params.SkillID = SkillID;
	params.PackageIndex = PackageIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClientTriggerEventFailed_WithID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// ETriggerSkillFailed            FailedReason                   (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       PackageIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ClientTriggerEventFailed_WithID(int SkillID, ETriggerSkillFailed FailedReason, uint64_t PackageIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClientTriggerEventFailed_WithID");

	UUTSkillManagerComponent_ClientTriggerEventFailed_WithID_Params params;
	params.SkillID = SkillID;
	params.FailedReason = FailedReason;
	params.PackageIndex = PackageIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClientStopPreActionSkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ClientStopPreActionSkill(int SkillID, uint64_t InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClientStopPreActionSkill");

	UUTSkillManagerComponent_ClientStopPreActionSkill_Params params;
	params.SkillID = SkillID;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClientStopOneSkill
// ()
// Parameters:
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSinglePhaseRep                (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ClientStopOneSkill(uint64_t InstID, bool bSinglePhaseRep, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClientStopOneSkill");

	UUTSkillManagerComponent_ClientStopOneSkill_Params params;
	params.InstID = InstID;
	params.bSinglePhaseRep = bSinglePhaseRep;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClientStartSkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoCast                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ClientStartSkill(int SkillID, bool bAutoCast)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClientStartSkill");

	UUTSkillManagerComponent_ClientStartSkill_Params params;
	params.SkillID = SkillID;
	params.bAutoCast = bAutoCast;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClientSimulateOneSkill
// ()
// Parameters:
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            PhaseIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSinglePhaseRep                (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ClientSimulateOneSkill(uint64_t InstID, int SkillID, int PhaseIndex, bool bSinglePhaseRep)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClientSimulateOneSkill");

	UUTSkillManagerComponent_ClientSimulateOneSkill_Params params;
	params.InstID = InstID;
	params.SkillID = SkillID;
	params.PhaseIndex = PhaseIndex;
	params.bSinglePhaseRep = bSinglePhaseRep;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClearSkill
// ()
// Parameters:
// bool                           bStopAllSkill                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDeactivateAllSkill            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResetSkillCD                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ClearSkill(bool bStopAllSkill, bool bDeactivateAllSkill, bool bResetSkillCD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClearSkill");

	UUTSkillManagerComponent_ClearSkill_Params params;
	params.bStopAllSkill = bStopAllSkill;
	params.bDeactivateAllSkill = bDeactivateAllSkill;
	params.bResetSkillCD = bResetSkillCD;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClearRepParams
// ()

void UUTSkillManagerComponent::ClearRepParams()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClearRepParams");

	UUTSkillManagerComponent_ClearRepParams_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClearInitParams
// ()

void UUTSkillManagerComponent::ClearInitParams()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClearInitParams");

	UUTSkillManagerComponent_ClearInitParams_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.CheckAIIsCDOKBySkillID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            CoolDownIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::CheckAIIsCDOKBySkillID(int SkillID, int CoolDownIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.CheckAIIsCDOKBySkillID");

	UUTSkillManagerComponent_CheckAIIsCDOKBySkillID_Params params;
	params.SkillID = SkillID;
	params.CoolDownIndex = CoolDownIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.CacheSkillWidget
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUTSkillWidget*          Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillManagerComponent::CacheSkillWidget(int SkillID, class UUTSkillWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.CacheSkillWidget");

	UUTSkillManagerComponent_CacheSkillWidget_Params params;
	params.SkillID = SkillID;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.AddOrRemoveIngoreSkillIDWhenStopAllSkills
// ()
// Parameters:
// EUTSkillStopReason             InStopReason                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAdd                           (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::AddOrRemoveIngoreSkillIDWhenStopAllSkills(EUTSkillStopReason InStopReason, int InSkillID, bool bAdd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.AddOrRemoveIngoreSkillIDWhenStopAllSkills");

	UUTSkillManagerComponent_AddOrRemoveIngoreSkillIDWhenStopAllSkills_Params params;
	params.InStopReason = InStopReason;
	params.InSkillID = InSkillID;
	params.bAdd = bAdd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsWeakObject
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsWeakObject(const struct FName& KeyName, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsWeakObject");

	UUTSkillNodeBlackboardInterface_SetValueAsWeakObject_Params params;
	params.KeyName = KeyName;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsVector
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 VectorValue                    (Parm, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsVector");

	UUTSkillNodeBlackboardInterface_SetValueAsVector_Params params;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsUInt
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// uint32_t                       UIntValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsUInt(const struct FName& KeyName, uint32_t UIntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsUInt");

	UUTSkillNodeBlackboardInterface_SetValueAsUInt_Params params;
	params.KeyName = KeyName;
	params.UIntValue = UIntValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsString
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 StringValue                    (Parm, ZeroConstructor)

void UUTSkillNodeBlackboardInterface::SetValueAsString(const struct FName& KeyName, const struct FString& StringValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsString");

	UUTSkillNodeBlackboardInterface_SetValueAsString_Params params;
	params.KeyName = KeyName;
	params.StringValue = StringValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsRotator
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                VectorValue                    (Parm, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsRotator");

	UUTSkillNodeBlackboardInterface_SetValueAsRotator_Params params;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsObject
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsObject");

	UUTSkillNodeBlackboardInterface_SetValueAsObject_Params params;
	params.KeyName = KeyName;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsName
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   NameValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsName(const struct FName& KeyName, const struct FName& NameValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsName");

	UUTSkillNodeBlackboardInterface_SetValueAsName_Params params;
	params.KeyName = KeyName;
	params.NameValue = NameValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsInt
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            IntValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsInt(const struct FName& KeyName, int IntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsInt");

	UUTSkillNodeBlackboardInterface_SetValueAsInt_Params params;
	params.KeyName = KeyName;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsFloat
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsFloat(const struct FName& KeyName, float FloatValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsFloat");

	UUTSkillNodeBlackboardInterface_SetValueAsFloat_Params params;
	params.KeyName = KeyName;
	params.FloatValue = FloatValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsEnum
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  EnumValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsEnum");

	UUTSkillNodeBlackboardInterface_SetValueAsEnum_Params params;
	params.KeyName = KeyName;
	params.EnumValue = EnumValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsClass
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  ClassValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsClass");

	UUTSkillNodeBlackboardInterface_SetValueAsClass_Params params;
	params.KeyName = KeyName;
	params.ClassValue = ClassValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsBool
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           BoolValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsBool(const struct FName& KeyName, bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsBool");

	UUTSkillNodeBlackboardInterface_SetValueAsBool_Params params;
	params.KeyName = KeyName;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsSetValueAsNewDataWhenNotExist
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsSetValueAsNewDataWhenNotExist(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsSetValueAsNewDataWhenNotExist");

	UUTSkillNodeBlackboardInterface_IsSetValueAsNewDataWhenNotExist_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistWeakObject
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistWeakObject(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistWeakObject");

	UUTSkillNodeBlackboardInterface_IsExistWeakObject_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistVector
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistVector(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistVector");

	UUTSkillNodeBlackboardInterface_IsExistVector_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistUInt
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistUInt(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistUInt");

	UUTSkillNodeBlackboardInterface_IsExistUInt_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistString
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistString(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistString");

	UUTSkillNodeBlackboardInterface_IsExistString_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistRotator
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistRotator(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistRotator");

	UUTSkillNodeBlackboardInterface_IsExistRotator_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistObject
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistObject(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistObject");

	UUTSkillNodeBlackboardInterface_IsExistObject_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistName
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistName(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistName");

	UUTSkillNodeBlackboardInterface_IsExistName_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistInt
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistInt(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistInt");

	UUTSkillNodeBlackboardInterface_IsExistInt_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistFloat
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistFloat(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistFloat");

	UUTSkillNodeBlackboardInterface_IsExistFloat_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistEnum
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistEnum(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistEnum");

	UUTSkillNodeBlackboardInterface_IsExistEnum_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistClass
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistClass(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistClass");

	UUTSkillNodeBlackboardInterface_IsExistClass_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistBool
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistBool(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistBool");

	UUTSkillNodeBlackboardInterface_IsExistBool_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsWeakObject
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUTSkillNodeBlackboardInterface::GetValueAsWeakObject(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsWeakObject");

	UUTSkillNodeBlackboardInterface_GetValueAsWeakObject_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsWeakActor
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUTSkillNodeBlackboardInterface::GetValueAsWeakActor(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsWeakActor");

	UUTSkillNodeBlackboardInterface_GetValueAsWeakActor_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsVector
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UUTSkillNodeBlackboardInterface::GetValueAsVector(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsVector");

	UUTSkillNodeBlackboardInterface_GetValueAsVector_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsUInt
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UUTSkillNodeBlackboardInterface::GetValueAsUInt(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsUInt");

	UUTSkillNodeBlackboardInterface_GetValueAsUInt_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsString
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUTSkillNodeBlackboardInterface::GetValueAsString(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsString");

	UUTSkillNodeBlackboardInterface_GetValueAsString_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsRotator
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UUTSkillNodeBlackboardInterface::GetValueAsRotator(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsRotator");

	UUTSkillNodeBlackboardInterface_GetValueAsRotator_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsObject
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUTSkillNodeBlackboardInterface::GetValueAsObject(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsObject");

	UUTSkillNodeBlackboardInterface_GetValueAsObject_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsName
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UUTSkillNodeBlackboardInterface::GetValueAsName(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsName");

	UUTSkillNodeBlackboardInterface_GetValueAsName_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsInt
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillNodeBlackboardInterface::GetValueAsInt(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsInt");

	UUTSkillNodeBlackboardInterface_GetValueAsInt_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsFloat
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillNodeBlackboardInterface::GetValueAsFloat(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsFloat");

	UUTSkillNodeBlackboardInterface_GetValueAsFloat_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsEnum
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UUTSkillNodeBlackboardInterface::GetValueAsEnum(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsEnum");

	UUTSkillNodeBlackboardInterface_GetValueAsEnum_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsClass
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUTSkillNodeBlackboardInterface::GetValueAsClass(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsClass");

	UUTSkillNodeBlackboardInterface_GetValueAsClass_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsBool
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::GetValueAsBool(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsBool");

	UUTSkillNodeBlackboardInterface_GetValueAsBool_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsActor
// ()
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUTSkillNodeBlackboardInterface::GetValueAsActor(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsActor");

	UUTSkillNodeBlackboardInterface_GetValueAsActor_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetUAEBlackboard
// ()
// Parameters:
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UUTSkillNodeBlackboardInterface::GetUAEBlackboard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetUAEBlackboard");

	UUTSkillNodeBlackboardInterface_GetUAEBlackboard_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.AddValueByKeySelector
// ()
// Parameters:
// TEnumAsByte<EUAEBlackboardType> BBType                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)

void UUTSkillNodeBlackboardInterface::AddValueByKeySelector(TEnumAsByte<EUAEBlackboardType> BBType, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.AddValueByKeySelector");

	UUTSkillNodeBlackboardInterface_AddValueByKeySelector_Params params;
	params.BBType = BBType;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.AddValueByKeName
// ()
// Parameters:
// TEnumAsByte<EUAEBlackboardType> BBType                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::AddValueByKeName(TEnumAsByte<EUAEBlackboardType> BBType, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.AddValueByKeName");

	UUTSkillNodeBlackboardInterface_AddValueByKeName_Params params;
	params.BBType = BBType;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillPhase.TryJumpToPhase
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            PhaseId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::TryJumpToPhase(class UUTSkillManagerComponent* SkillManagerComponent, int PhaseId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.TryJumpToPhase");

	UUTSkillPhase_TryJumpToPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.PhaseId = PhaseId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.StopPhase
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillPhase::StopPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.StopPhase");

	UUTSkillPhase_StopPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillPhase.StartPhase
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillPhase::StartPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.StartPhase");

	UUTSkillPhase_StartPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillPhase.RepeatPhase
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillPhase::RepeatPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.RepeatPhase");

	UUTSkillPhase_RepeatPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillPhase.PlaySkillHurtEffect
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::PlaySkillHurtEffect(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.PlaySkillHurtEffect");

	UUTSkillPhase_PlaySkillHurtEffect_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.PlaySkillHurtAppearances
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::PlaySkillHurtAppearances(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.PlaySkillHurtAppearances");

	UUTSkillPhase_PlaySkillHurtAppearances_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.PickTargets
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillPhase::PickTargets(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.PickTargets");

	UUTSkillPhase_PickTargets_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillPhase.OnEvent
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> TheEventType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::OnEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> TheEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.OnEvent");

	UUTSkillPhase_OnEvent_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.TheEventType = TheEventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.OnCustomEvent
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> TheEventType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::OnCustomEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> TheEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.OnCustomEvent");

	UUTSkillPhase_OnCustomEvent_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.TheEventType = TheEventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.ForceStopPhase
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::ForceStopPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.ForceStopPhase");

	UUTSkillPhase_ForceStopPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.ClearAttachments
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::ClearAttachments()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.ClearAttachments");

	UUTSkillPhase_ClearAttachments_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPickerFilter.IsValidFilterActor
// ()
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPickerFilter::IsValidFilterActor(class AActor* InActor, class AActor* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPickerFilter.IsValidFilterActor");

	UUTSkillPickerFilter_IsValidFilterActor_Params params;
	params.InActor = InActor;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPickerFilter.HandleFilterArray
// ()
// Parameters:
// TArray<struct FUTSkillPickedTarget> inArray                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillPickerFilter::HandleFilterArray(class AActor* Owner, TArray<struct FUTSkillPickedTarget>* inArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPickerFilter.HandleFilterArray");

	UUTSkillPickerFilter_HandleFilterArray_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (inArray != nullptr)
		*inArray = params.inArray;
}


// Function Skill.UTSkillPicker.PickTargetsInner
// ()
// Parameters:
// struct FVector                 OriginPoint                    (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPicker::PickTargetsInner(const struct FVector& OriginPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPicker.PickTargetsInner");

	UUTSkillPicker_PickTargetsInner_Params params;
	params.OriginPoint = OriginPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPicker.PickTargets
// ()
// Parameters:
// struct FVector                 OriginPoint                    (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPicker::PickTargets(const struct FVector& OriginPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPicker.PickTargets");

	UUTSkillPicker_PickTargets_Params params;
	params.OriginPoint = OriginPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillSpecificAction.UpdateAction_Internal
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillSpecificAction::UpdateAction_Internal(float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.UpdateAction_Internal");

	UUTSkillSpecificAction_UpdateAction_Internal_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillSpecificAction.UndoAction_Internal
// ()

void UUTSkillSpecificAction::UndoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.UndoAction_Internal");

	UUTSkillSpecificAction_UndoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillSpecificAction.Reset_Internal
// ()

void UUTSkillSpecificAction::Reset_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.Reset_Internal");

	UUTSkillSpecificAction_Reset_Internal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillSpecificAction.RealDoAction_Internal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillSpecificAction::RealDoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.RealDoAction_Internal");

	UUTSkillSpecificAction_RealDoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillSpecificAction.PreCloseSkill
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillSpecificAction::PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.PreCloseSkill");

	UUTSkillSpecificAction_PreCloseSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillSpecificAction.PostInitSkill
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillSpecificAction::PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.PostInitSkill");

	UUTSkillSpecificAction_PostInitSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillSpecificAction.PostActiveSkill
// ()
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillSpecificAction::PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.PostActiveSkill");

	UUTSkillSpecificAction_PostActiveSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillWidget.SetSkillManager
// ()
// Parameters:
// class UUTSkillManagerComponent* Manager                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillWidget::SetSkillManager(class UUTSkillManagerComponent* Manager)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.SetSkillManager");

	UUTSkillWidget_SetSkillManager_Params params;
	params.Manager = Manager;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillWidget.SetSkillID
// ()
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillWidget::SetSkillID(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.SetSkillID");

	UUTSkillWidget_SetSkillID_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillWidget.RemoveSelf
// ()

void UUTSkillWidget::RemoveSelf()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.RemoveSelf");

	UUTSkillWidget_RemoveSelf_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillWidget.GetSkillManager
// ()
// Parameters:
// class UUTSkillManagerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillManagerComponent* UUTSkillWidget::GetSkillManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetSkillManager");

	UUTSkillWidget_GetSkillManager_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillWidget.GetSkillID
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillWidget::GetSkillID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetSkillID");

	UUTSkillWidget_GetSkillID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillWidget.GetSkillCDBases
// ()
// Parameters:
// TArray<class UUTSkillCDBase*>  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UUTSkillCDBase*> UUTSkillWidget::GetSkillCDBases()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetSkillCDBases");

	UUTSkillWidget_GetSkillCDBases_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillWidget.GetSkill
// ()
// Parameters:
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillWidget::GetSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetSkill");

	UUTSkillWidget_GetSkill_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillWidget.GetLocalPlayerController
// ()
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UUTSkillWidget::GetLocalPlayerController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetLocalPlayerController");

	UUTSkillWidget_GetLocalPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillWidget.BindLua
// ()
// Parameters:
// struct FString                 luaPath                        (Parm, ZeroConstructor)

void UUTSkillWidget::BindLua(const struct FString& luaPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.BindLua");

	UUTSkillWidget_BindLua_Params params;
	params.luaPath = luaPath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

