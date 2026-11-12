// PUBG (4.3.0) Created by @JokerRepo and for pattern @enen
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UgcLua.CreativeLuaVM.Step
// ()

void UCreativeLuaVM::Step()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.Step");

	UCreativeLuaVM_Step_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.SetUGCLuaMemoryProfile
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::SetUGCLuaMemoryProfile(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetUGCLuaMemoryProfile");

	UCreativeLuaVM_SetUGCLuaMemoryProfile_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.SetUGCLuaMemoryAllocDebugPrint
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::SetUGCLuaMemoryAllocDebugPrint(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetUGCLuaMemoryAllocDebugPrint");

	UCreativeLuaVM_SetUGCLuaMemoryAllocDebugPrint_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.SetPerformanceLog
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::SetPerformanceLog(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetPerformanceLog");

	UCreativeLuaVM_SetPerformanceLog_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.SetNowRC
// ()
// Parameters:
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::SetNowRC(int idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetNowRC");

	UCreativeLuaVM_SetNowRC_Params params;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.SetCodeOutputDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void UCreativeLuaVM::SetCodeOutputDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetCodeOutputDelegate");

	UCreativeLuaVM_SetCodeOutputDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.SetCodeFinishDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void UCreativeLuaVM::SetCodeFinishDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetCodeFinishDelegate");

	UCreativeLuaVM_SetCodeFinishDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.ResetUGCLuaMemoryProfile
// ()

void UCreativeLuaVM::ResetUGCLuaMemoryProfile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.ResetUGCLuaMemoryProfile");

	UCreativeLuaVM_ResetUGCLuaMemoryProfile_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.Reset
// ()

void UCreativeLuaVM::Reset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.Reset");

	UCreativeLuaVM_Reset_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.RequireMain
// ()

void UCreativeLuaVM::RequireMain()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RequireMain");

	UCreativeLuaVM_RequireMain_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.RegisterLuaFunctions
// ()
// Parameters:
// struct FString                 ModuleName                     (Parm, ZeroConstructor)
// TArray<struct FString>         OpenFunctions                  (Parm, ZeroConstructor)

void UCreativeLuaVM::RegisterLuaFunctions(const struct FString& ModuleName, TArray<struct FString> OpenFunctions)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RegisterLuaFunctions");

	UCreativeLuaVM_RegisterLuaFunctions_Params params;
	params.ModuleName = ModuleName;
	params.OpenFunctions = OpenFunctions;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.RegisterLuaAPIStringValue
// ()
// Parameters:
// struct FString                 ModuleName                     (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UCreativeLuaVM::RegisterLuaAPIStringValue(const struct FString& ModuleName, const struct FString& Name, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RegisterLuaAPIStringValue");

	UCreativeLuaVM_RegisterLuaAPIStringValue_Params params;
	params.ModuleName = ModuleName;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.RegisterLuaAPINumberValue
// ()
// Parameters:
// struct FString                 ModuleName                     (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::RegisterLuaAPINumberValue(const struct FString& ModuleName, const struct FString& Name, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RegisterLuaAPINumberValue");

	UCreativeLuaVM_RegisterLuaAPINumberValue_Params params;
	params.ModuleName = ModuleName;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.RegisterLuaAPIBoolValue
// ()
// Parameters:
// struct FString                 ModuleName                     (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::RegisterLuaAPIBoolValue(const struct FString& ModuleName, const struct FString& Name, bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RegisterLuaAPIBoolValue");

	UCreativeLuaVM_RegisterLuaAPIBoolValue_Params params;
	params.ModuleName = ModuleName;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.RefreshLastCommentInfo
// ()

void UCreativeLuaVM::RefreshLastCommentInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RefreshLastCommentInfo");

	UCreativeLuaVM_RefreshLastCommentInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.PostInit
// ()

void UCreativeLuaVM::PostInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.PostInit");

	UCreativeLuaVM_PostInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.LogBlockExecuteTime
// ()
// Parameters:
// struct FString                 blockId                        (Parm, ZeroConstructor)

void UCreativeLuaVM::LogBlockExecuteTime(const struct FString& blockId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.LogBlockExecuteTime");

	UCreativeLuaVM_LogBlockExecuteTime_Params params;
	params.blockId = blockId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.KillJob
// ()
// Parameters:
// int                            JobId                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::KillJob(int JobId, bool bReset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.KillJob");

	UCreativeLuaVM_KillJob_Params params;
	params.JobId = JobId;
	params.bReset = bReset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.InitEditMods
// ()
// Parameters:
// TArray<struct FString>         mods                           (Parm, OutParm, ZeroConstructor)

void UCreativeLuaVM::InitEditMods(TArray<struct FString>* mods)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.InitEditMods");

	UCreativeLuaVM_InitEditMods_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (mods != nullptr)
		*mods = params.mods;
}


// Function UgcLua.CreativeLuaVM.Init
// ()
// Parameters:
// int                            MemLimit                       (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::Init(int MemLimit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.Init");

	UCreativeLuaVM_Init_Params params;
	params.MemLimit = MemLimit;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.GetUGCLuaBlockMemoryLiveBytes
// ()
// Parameters:
// struct FString                 blockId                        (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeLuaVM::GetUGCLuaBlockMemoryLiveBytes(const struct FString& blockId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.GetUGCLuaBlockMemoryLiveBytes");

	UCreativeLuaVM_GetUGCLuaBlockMemoryLiveBytes_Params params;
	params.blockId = blockId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UgcLua.CreativeLuaVM.GetNowRC
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeLuaVM::GetNowRC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.GetNowRC");

	UCreativeLuaVM_GetNowRC_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UgcLua.CreativeLuaVM.GetMemoryUsed
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeLuaVM::GetMemoryUsed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.GetMemoryUsed");

	UCreativeLuaVM_GetMemoryUsed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UgcLua.CreativeLuaVM.GetLastCommentInfo
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeLuaVM::GetLastCommentInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.GetLastCommentInfo");

	UCreativeLuaVM_GetLastCommentInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UgcLua.CreativeLuaVM.FreezeGameTime
// ()
// Parameters:
// bool                           bCond                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::FreezeGameTime(bool bCond)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.FreezeGameTime");

	UCreativeLuaVM_FreezeGameTime_Params params;
	params.bCond = bCond;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.ExtractCurrentCode
// ()
// Parameters:
// int                            CodeIdx                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 code                           (Parm, OutParm, ZeroConstructor)

void UCreativeLuaVM::ExtractCurrentCode(int* CodeIdx, struct FString* code)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.ExtractCurrentCode");

	UCreativeLuaVM_ExtractCurrentCode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CodeIdx != nullptr)
		*CodeIdx = params.CodeIdx;
	if (code != nullptr)
		*code = params.code;
}


// Function UgcLua.CreativeLuaVM.ExportUGCLuaMemoryProfileAsSluaStat
// ()
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// struct FString                 outFilePath                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeLuaVM::ExportUGCLuaMemoryProfileAsSluaStat(const struct FString& FilePath, struct FString* outFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.ExportUGCLuaMemoryProfileAsSluaStat");

	UCreativeLuaVM_ExportUGCLuaMemoryProfileAsSluaStat_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (outFilePath != nullptr)
		*outFilePath = params.outFilePath;

	return params.ReturnValue;
}


// Function UgcLua.CreativeLuaVM.ExeCodeUntilSuspended
// ()

void UCreativeLuaVM::ExeCodeUntilSuspended()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.ExeCodeUntilSuspended");

	UCreativeLuaVM_ExeCodeUntilSuspended_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.EnqueueCode
// ()
// Parameters:
// struct FString                 RuntimeCode                    (Parm, OutParm, ZeroConstructor)
// int                            CodeUID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeLuaVM::EnqueueCode(struct FString* RuntimeCode, int* CodeUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.EnqueueCode");

	UCreativeLuaVM_EnqueueCode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RuntimeCode != nullptr)
		*RuntimeCode = params.RuntimeCode;
	if (CodeUID != nullptr)
		*CodeUID = params.CodeUID;

	return params.ReturnValue;
}


// Function UgcLua.CreativeLuaVM.DumpUGCLuaBlockMemoryProfile
// ()
// Parameters:
// int                            TopN                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeLuaVM::DumpUGCLuaBlockMemoryProfile(int TopN)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.DumpUGCLuaBlockMemoryProfile");

	UCreativeLuaVM_DumpUGCLuaBlockMemoryProfile_Params params;
	params.TopN = TopN;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UgcLua.CreativeLuaVM.DescribeLuaThread
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeLuaVM::DescribeLuaThread()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.DescribeLuaThread");

	UCreativeLuaVM_DescribeLuaThread_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UgcLua.CreativeLuaVM.Close
// ()

void UCreativeLuaVM::Close()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.Close");

	UCreativeLuaVM_Close_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.AllowRequire
// ()
// Parameters:
// bool                           bAllow                         (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::AllowRequire(bool bAllow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.AllowRequire");

	UCreativeLuaVM_AllowRequire_Params params;
	params.bAllow = bAllow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeEntityInterface.UUID2UObject
// ()
// Parameters:
// int64_t                        UUID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeEntityInterface::UUID2UObject(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.UUID2UObject");

	UCreativeEntityInterface_UUID2UObject_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}


// Function UgcLua.CreativeEntityInterface.UUID2Type
// ()
// Parameters:
// int64_t                        UUID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EEntityType                    Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SubType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeEntityInterface::UUID2Type(int64_t* UUID, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.UUID2Type");

	UCreativeEntityInterface_UUID2Type_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}


// Function UgcLua.CreativeEntityInterface.UUID2Key
// ()
// Parameters:
// int64_t                        UUID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UCreativeEntityInterface::UUID2Key(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.UUID2Key");

	UCreativeEntityInterface_UUID2Key_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}


// Function UgcLua.CreativeEntityInterface.RemoveUUID
// ()
// Parameters:
// int64_t                        UUID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreativeEntityInterface::RemoveUUID(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.RemoveUUID");

	UCreativeEntityInterface_RemoveUUID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
}


// Function UgcLua.CreativeEntityInterface.GetInstanceObjectUUID
// ()
// Parameters:
// int64_t                        UUID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UCreativeEntityInterface::GetInstanceObjectUUID(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.GetInstanceObjectUUID");

	UCreativeEntityInterface_GetInstanceObjectUUID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}


// Function UgcLua.CreativeEntityInterface.CreateEntityIfNotExistsFromUObject
// ()
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// EEntityType                    Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SubType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UCreativeEntityInterface::CreateEntityIfNotExistsFromUObject(class UObject* Object, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.CreateEntityIfNotExistsFromUObject");

	UCreativeEntityInterface_CreateEntityIfNotExistsFromUObject_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}


// Function UgcLua.CreativeEntityInterface.CreateEntityIfNotExistsFromKey
// ()
// Parameters:
// uint32_t                       Key                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EEntityType                    Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SubType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UCreativeEntityInterface::CreateEntityIfNotExistsFromKey(uint32_t* Key, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.CreateEntityIfNotExistsFromKey");

	UCreativeEntityInterface_CreateEntityIfNotExistsFromKey_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}


}

