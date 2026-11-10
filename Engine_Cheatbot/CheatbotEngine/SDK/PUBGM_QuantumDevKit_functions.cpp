// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
#include "../SDK.hpp"

namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuantumDevKit.FirebaseHelper.SetConsent
// ()
// Parameters:
// TMap<int, int>                 InConsent                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFirebaseHelper::SetConsent(TMap<int, int> InConsent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.FirebaseHelper.SetConsent");

	UFirebaseHelper_SetConsent_Params params;
	params.InConsent = InConsent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function QuantumDevKit.FirebaseHelper.IsNotificationLaunchApp
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFirebaseHelper::IsNotificationLaunchApp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.FirebaseHelper.IsNotificationLaunchApp");

	UFirebaseHelper_IsNotificationLaunchApp_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.FirebaseHelper.GetNotificationLaunchAppExtraData
// ()
// Parameters:
// struct FString                 InKey                          (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFirebaseHelper::GetNotificationLaunchAppExtraData(const struct FString& InKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.FirebaseHelper.GetNotificationLaunchAppExtraData");

	UFirebaseHelper_GetNotificationLaunchAppExtraData_Params params;
	params.InKey = InKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.FirebaseHelper.GetInstance
// ()
// Parameters:
// class UFirebaseHelper*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFirebaseHelper* UFirebaseHelper::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.FirebaseHelper.GetInstance");

	UFirebaseHelper_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.FirebaseHelper.GetFIRInstallId
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFirebaseHelper::GetFIRInstallId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.FirebaseHelper.GetFIRInstallId");

	UFirebaseHelper_GetFIRInstallId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.FirebaseHelper.GetFIRAppInstanceId
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFirebaseHelper::GetFIRAppInstanceId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.FirebaseHelper.GetFIRAppInstanceId");

	UFirebaseHelper_GetFIRAppInstanceId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.FirebaseHelper.GetFCMToken
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFirebaseHelper::GetFCMToken()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.FirebaseHelper.GetFCMToken");

	UFirebaseHelper_GetFCMToken_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.FirebaseHelper.ConsumeNotificationLaunchApp
// ()

void UFirebaseHelper::ConsumeNotificationLaunchApp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.FirebaseHelper.ConsumeNotificationLaunchApp");

	UFirebaseHelper_ConsumeNotificationLaunchApp_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function QuantumDevKit.PhotoAlbumHelper.Initialize
// ()

void UPhotoAlbumHelper::Initialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.PhotoAlbumHelper.Initialize");

	UPhotoAlbumHelper_Initialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function QuantumDevKit.PhotoAlbumHelper.GetInstance
// ()
// Parameters:
// class UPhotoAlbumHelper*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhotoAlbumHelper* UPhotoAlbumHelper::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.PhotoAlbumHelper.GetInstance");

	UPhotoAlbumHelper_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.PhotoAlbumHelper.GenerateImageFromAlbum
// ()
// Parameters:
// struct FString                 InFilePath                     (Parm, ZeroConstructor)
// struct FString                 InThumbFilePath                (Parm, ZeroConstructor)
// int                            InThumbnailWidth               (Parm, ZeroConstructor, IsPlainOldData)
// int                            InThumbnailHeight              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InForceJPG                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InOverride                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPhotoAlbumHelper::GenerateImageFromAlbum(const struct FString& InFilePath, const struct FString& InThumbFilePath, int InThumbnailWidth, int InThumbnailHeight, bool InForceJPG, bool InOverride)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.PhotoAlbumHelper.GenerateImageFromAlbum");

	UPhotoAlbumHelper_GenerateImageFromAlbum_Params params;
	params.InFilePath = InFilePath;
	params.InThumbFilePath = InThumbFilePath;
	params.InThumbnailWidth = InThumbnailWidth;
	params.InThumbnailHeight = InThumbnailHeight;
	params.InForceJPG = InForceJPG;
	params.InOverride = InOverride;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.PhotoAlbumHelper.FetchAlbumImageInfo
// ()
// Parameters:
// int                            InStartIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            InLimitNum                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            InThumbWidth                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            InThumbHeight                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InThumbPath                    (Parm, ZeroConstructor)
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UPhotoAlbumHelper::FetchAlbumImageInfo(int InStartIndex, int InLimitNum, int InThumbWidth, int InThumbHeight, const struct FString& InThumbPath, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.PhotoAlbumHelper.FetchAlbumImageInfo");

	UPhotoAlbumHelper_FetchAlbumImageInfo_Params params;
	params.InStartIndex = InStartIndex;
	params.InLimitNum = InLimitNum;
	params.InThumbWidth = InThumbWidth;
	params.InThumbHeight = InThumbHeight;
	params.InThumbPath = InThumbPath;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetStatus
// ()
// Parameters:
// EQuantumFirebaseRemoteConfigStatus ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EQuantumFirebaseRemoteConfigStatus UQuantumFirebaseRemoteConfig::GetStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetStatus");

	UQuantumFirebaseRemoteConfig_GetStatus_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetRemoteConfig
// ()
// Parameters:
// struct FString                 ConfigNameToQuery              (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UQuantumFirebaseRemoteConfig::GetRemoteConfig(const struct FString& ConfigNameToQuery)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetRemoteConfig");

	UQuantumFirebaseRemoteConfig_GetRemoteConfig_Params params;
	params.ConfigNameToQuery = ConfigNameToQuery;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetInstance
// ()
// Parameters:
// class UQuantumFirebaseRemoteConfig* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UQuantumFirebaseRemoteConfig* UQuantumFirebaseRemoteConfig::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetInstance");

	UQuantumFirebaseRemoteConfig_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.SystemPermissionHelper.RequestPermissions
// ()
// Parameters:
// int                            InPermissionType               (Parm, ZeroConstructor, IsPlainOldData)
// int                            InRequestCode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USystemPermissionHelper::RequestPermissions(int InPermissionType, int InRequestCode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.SystemPermissionHelper.RequestPermissions");

	USystemPermissionHelper_RequestPermissions_Params params;
	params.InPermissionType = InPermissionType;
	params.InRequestCode = InRequestCode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.SystemPermissionHelper.IsPermissionGranted
// ()
// Parameters:
// int                            InPermissionType               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USystemPermissionHelper::IsPermissionGranted(int InPermissionType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.SystemPermissionHelper.IsPermissionGranted");

	USystemPermissionHelper_IsPermissionGranted_Params params;
	params.InPermissionType = InPermissionType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.SystemPermissionHelper.Initialize
// ()

void USystemPermissionHelper::Initialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.SystemPermissionHelper.Initialize");

	USystemPermissionHelper_Initialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function QuantumDevKit.SystemPermissionHelper.GetInstance
// ()
// Parameters:
// class USystemPermissionHelper* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USystemPermissionHelper* USystemPermissionHelper::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.SystemPermissionHelper.GetInstance");

	USystemPermissionHelper_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.SystemPermissionHelper.AndroidShouldShowRequestPermissionRationale
// ()
// Parameters:
// struct FString                 InPermission                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USystemPermissionHelper::AndroidShouldShowRequestPermissionRationale(const struct FString& InPermission)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.SystemPermissionHelper.AndroidShouldShowRequestPermissionRationale");

	USystemPermissionHelper_AndroidShouldShowRequestPermissionRationale_Params params;
	params.InPermission = InPermission;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.SystemPermissionHelper.AndroidRequestPermissions
// ()
// Parameters:
// struct FString                 InPermission                   (Parm, ZeroConstructor)
// int                            InRequestCode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USystemPermissionHelper::AndroidRequestPermissions(const struct FString& InPermission, int InRequestCode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.SystemPermissionHelper.AndroidRequestPermissions");

	USystemPermissionHelper_AndroidRequestPermissions_Params params;
	params.InPermission = InPermission;
	params.InRequestCode = InRequestCode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.SystemPermissionHelper.AndroidIsPermissionGranted
// ()
// Parameters:
// struct FString                 InPermission                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USystemPermissionHelper::AndroidIsPermissionGranted(const struct FString& InPermission)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.SystemPermissionHelper.AndroidIsPermissionGranted");

	USystemPermissionHelper_AndroidIsPermissionGranted_Params params;
	params.InPermission = InPermission;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.SystemPermissionHelper.AndroidHasDefinePermission
// ()
// Parameters:
// struct FString                 InPermssionName                (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USystemPermissionHelper::AndroidHasDefinePermission(const struct FString& InPermssionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.SystemPermissionHelper.AndroidHasDefinePermission");

	USystemPermissionHelper_AndroidHasDefinePermission_Params params;
	params.InPermssionName = InPermssionName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

