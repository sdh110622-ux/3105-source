// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
#include "../SDK.hpp"

namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ClientNet.HDmpveNet.SetTickNetMsgMaxTime
// ()
// Parameters:
// float                          MaxTime                        (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveNet::SetTickNetMsgMaxTime(float MaxTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.SetTickNetMsgMaxTime");

	UHDmpveNet_SetTickNetMsgMaxTime_Params params;
	params.MaxTime = MaxTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnWebviewNotify
// ()
// Parameters:
// struct FWebviewInfoWrapper     webviewinfo                    (ConstParm, Parm, OutParm, ReferenceParm)

void UHDmpveNet::OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnWebviewNotify");

	UHDmpveNet_OnWebviewNotify_Params params;
	params.webviewinfo = webviewinfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnUAAssistantNotify
// ()
// Parameters:
// struct FUAAssistantInfoWrapper uaAssistantInfo                (ConstParm, Parm, OutParm, ReferenceParm)

void UHDmpveNet::OnUAAssistantNotify(const struct FUAAssistantInfoWrapper& uaAssistantInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnUAAssistantNotify");

	UHDmpveNet_OnUAAssistantNotify_Params params;
	params.uaAssistantInfo = uaAssistantInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnTraceCallBack
// ()
// Parameters:
// int                            code                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 dataJson                       (Parm, ZeroConstructor)

void UHDmpveNet::OnTraceCallBack(int code, const struct FString& dataJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnTraceCallBack");

	UHDmpveNet_OnTraceCallBack_Params params;
	params.code = code;
	params.dataJson = dataJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnTConndAuthFailDelegate
// ()

void UHDmpveNet::OnTConndAuthFailDelegate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnTConndAuthFailDelegate");

	UHDmpveNet_OnTConndAuthFailDelegate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnShareNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlatForm                       (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveNet::OnShareNotify(int Result, int PlatForm)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnShareNotify");

	UHDmpveNet_OnShareNotify_Params params;
	params.Result = Result;
	params.PlatForm = PlatForm;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnRequestPermissionsResult
// ()
// Parameters:
// int                            code                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 permission                     (Parm, ZeroConstructor)
// struct FString                 grantResult                    (Parm, ZeroConstructor)

void UHDmpveNet::OnRequestPermissionsResult(int code, const struct FString& permission, const struct FString& grantResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnRequestPermissionsResult");

	UHDmpveNet_OnRequestPermissionsResult_Params params;
	params.code = code;
	params.permission = permission;
	params.grantResult = grantResult;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnReceiveDataNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Msg                            (Parm, ZeroConstructor)

void UHDmpveNet::OnReceiveDataNotify(int Result, TArray<unsigned char> Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnReceiveDataNotify");

	UHDmpveNet_OnReceiveDataNotify_Params params;
	params.Result = Result;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnQuickLoginNotify
// ()
// Parameters:
// struct FWakeupInfoWrapper      wakeupinfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void UHDmpveNet::OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnQuickLoginNotify");

	UHDmpveNet_OnQuickLoginNotify_Params params;
	params.wakeupinfo = wakeupinfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnQRCodeGenQRImg
// ()
// Parameters:
// int                            Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Ret                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 imgPath                        (Parm, ZeroConstructor)

void UHDmpveNet::OnQRCodeGenQRImg(int Tag, int Ret, const struct FString& imgPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnQRCodeGenQRImg");

	UHDmpveNet_OnQRCodeGenQRImg_Params params;
	params.Tag = Tag;
	params.Ret = Ret;
	params.imgPath = imgPath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnMigrateNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveNet::OnMigrateNotify(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnMigrateNotify");

	UHDmpveNet_OnMigrateNotify_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnLaunchInfo
// ()
// Parameters:
// struct FString                 roominfo                       (Parm, ZeroConstructor)

void UHDmpveNet::OnLaunchInfo(const struct FString& roominfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnLaunchInfo");

	UHDmpveNet_OnLaunchInfo_Params params;
	params.roominfo = roominfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnIGShareUploadFinished
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlatForm                       (Parm, ZeroConstructor)

void UHDmpveNet::OnIGShareUploadFinished(int Result, const struct FString& PlatForm)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnIGShareUploadFinished");

	UHDmpveNet_OnIGShareUploadFinished_Params params;
	params.Result = Result;
	params.PlatForm = PlatForm;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnGroupNotify
// ()
// Parameters:
// struct FGroupInfoWrapper       groupInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UHDmpveNet::OnGroupNotify(const struct FGroupInfoWrapper& groupInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnGroupNotify");

	UHDmpveNet_OnGroupNotify_Params params;
	params.groupInfo = groupInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnGetWebviewActionNotify
// ()
// Parameters:
// struct FString                 webviewinfo                    (Parm, ZeroConstructor)

void UHDmpveNet::OnGetWebviewActionNotify(const struct FString& webviewinfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnGetWebviewActionNotify");

	UHDmpveNet_OnGetWebviewActionNotify_Params params;
	params.webviewinfo = webviewinfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnGetTicketNotify
// ()
// Parameters:
// struct FString                 TicketInfo                     (Parm, ZeroConstructor)

void UHDmpveNet::OnGetTicketNotify(const struct FString& TicketInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnGetTicketNotify");

	UHDmpveNet_OnGetTicketNotify_Params params;
	params.TicketInfo = TicketInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnGetShortUrlNotify
// ()
// Parameters:
// struct FShortURLInfoWrapper    shorturlinfo                   (ConstParm, Parm, OutParm, ReferenceParm)

void UHDmpveNet::OnGetShortUrlNotify(const struct FShortURLInfoWrapper& shorturlinfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnGetShortUrlNotify");

	UHDmpveNet_OnGetShortUrlNotify_Params params;
	params.shorturlinfo = shorturlinfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnGetPlatformFriendsNotify
// ()
// Parameters:
// struct FPlatformFriendInfoMap  platformFriends                (ConstParm, Parm, OutParm, ReferenceParm)

void UHDmpveNet::OnGetPlatformFriendsNotify(const struct FPlatformFriendInfoMap& platformFriends)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnGetPlatformFriendsNotify");

	UHDmpveNet_OnGetPlatformFriendsNotify_Params params;
	params.platformFriends = platformFriends;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnGetCountryNoByIMSDK
// ()
// Parameters:
// int                            Country                        (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveNet::OnGetCountryNoByIMSDK(int Country)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnGetCountryNoByIMSDK");

	UHDmpveNet_OnGetCountryNoByIMSDK_Params params;
	params.Country = Country;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnGameMasterEvent
// ()
// Parameters:
// struct FString                 EvenName                       (Parm, ZeroConstructor)
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveNet::OnGameMasterEvent(const struct FString& EvenName, int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnGameMasterEvent");

	UHDmpveNet_OnGameMasterEvent_Params params;
	params.EvenName = EvenName;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnConnectorStateChangeNotify
// ()
// Parameters:
// int                            State                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param1                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param2                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            param3                         (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveNet::OnConnectorStateChangeNotify(int State, int Param1, int Param2, int param3)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnConnectorStateChangeNotify");

	UHDmpveNet_OnConnectorStateChangeNotify_Params params;
	params.State = State;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.param3 = param3;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnConnectorDisconnectedNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveNet::OnConnectorDisconnectedNotify(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnConnectorDisconnectedNotify");

	UHDmpveNet_OnConnectorDisconnectedNotify_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnConnectorConnectedNotify
// ()
// Parameters:
// int                            IsConnected                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            nResult                        (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveNet::OnConnectorConnectedNotify(int IsConnected, int nResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnConnectorConnectedNotify");

	UHDmpveNet_OnConnectorConnectedNotify_Params params;
	params.IsConnected = IsConnected;
	params.nResult = nResult;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnBindIntlNotify
// ()
// Parameters:
// int                            bindEventID                    (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveNet::OnBindIntlNotify(int bindEventID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnBindIntlNotify");

	UHDmpveNet_OnBindIntlNotify_Params params;
	params.bindEventID = bindEventID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnAccountLogoutNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveNet::OnAccountLogoutNotify(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnAccountLogoutNotify");

	UHDmpveNet_OnAccountLogoutNotify_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnAccountLoginNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 resultMsg                      (Parm, ZeroConstructor)
// int                            thirdRetCode                   (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveNet::OnAccountLoginNotify(int Result, const struct FString& OpenID, int Channel, const struct FString& resultMsg, int thirdRetCode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnAccountLoginNotify");

	UHDmpveNet_OnAccountLoginNotify_Params params;
	params.Result = Result;
	params.OpenID = OpenID;
	params.Channel = Channel;
	params.resultMsg = resultMsg;
	params.thirdRetCode = thirdRetCode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnAccountInitializeNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveNet::OnAccountInitializeNotify(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnAccountInitializeNotify");

	UHDmpveNet_OnAccountInitializeNotify_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveNet.OnAccessTokenRefreshedNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveNet::OnAccessTokenRefreshedNotify(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveNet.OnAccessTokenRefreshedNotify");

	UHDmpveNet_OnAccessTokenRefreshedNotify_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveSDK.UploadFile
// ()
// Parameters:
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// int                            shareFileType                  (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveSDK::UploadFile(const struct FString& _imgPath, int shareFileType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveSDK.UploadFile");

	UHDmpveSDK_UploadFile_Params params;
	params._imgPath = _imgPath;
	params.shareFileType = shareFileType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveSDK.ShareWithPhotoByChannel_Simple
// ()
// Parameters:
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// struct FString                 _title                         (Parm, ZeroConstructor)
// struct FString                 _content                       (Parm, ZeroConstructor)
// int                            _channel                       (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveSDK::ShareWithPhotoByChannel_Simple(const struct FString& _imgPath, const struct FString& _title, const struct FString& _content, int _channel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveSDK.ShareWithPhotoByChannel_Simple");

	UHDmpveSDK_ShareWithPhotoByChannel_Simple_Params params;
	params._imgPath = _imgPath;
	params._title = _title;
	params._content = _content;
	params._channel = _channel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveSDK.ShareFacebookLink
// ()
// Parameters:
// struct FString                 ftitle                         (Parm, ZeroConstructor)
// struct FString                 fdesc                          (Parm, ZeroConstructor)
// struct FString                 fsharelink                     (Parm, ZeroConstructor)

void UHDmpveSDK::ShareFacebookLink(const struct FString& ftitle, const struct FString& fdesc, const struct FString& fsharelink)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveSDK.ShareFacebookLink");

	UHDmpveSDK_ShareFacebookLink_Params params;
	params.ftitle = ftitle;
	params.fdesc = fdesc;
	params.fsharelink = fsharelink;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveSDK.SetTestLogin
// ()
// Parameters:
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UHDmpveSDK::SetTestLogin(const struct FString& OpenID, int Channel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveSDK.SetTestLogin");

	UHDmpveSDK_SetTestLogin_Params params;
	params.OpenID = OpenID;
	params.Channel = Channel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveSDK.InviteSystemOfflineFriendsExt2
// ()
// Parameters:
// struct FString                 _title                         (Parm, ZeroConstructor)
// struct FString                 _content                       (Parm, ZeroConstructor)
// struct FString                 _link                          (Parm, ZeroConstructor)

void UHDmpveSDK::InviteSystemOfflineFriendsExt2(const struct FString& _title, const struct FString& _content, const struct FString& _link)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveSDK.InviteSystemOfflineFriendsExt2");

	UHDmpveSDK_InviteSystemOfflineFriendsExt2_Params params;
	params._title = _title;
	params._content = _content;
	params._link = _link;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveSDK.InviteSystemOfflineFriendsExt
// ()
// Parameters:
// struct FString                 _title                         (Parm, ZeroConstructor)
// struct FString                 _content                       (Parm, ZeroConstructor)
// struct FString                 _link                          (Parm, ZeroConstructor)

void UHDmpveSDK::InviteSystemOfflineFriendsExt(const struct FString& _title, const struct FString& _content, const struct FString& _link)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveSDK.InviteSystemOfflineFriendsExt");

	UHDmpveSDK_InviteSystemOfflineFriendsExt_Params params;
	params._title = _title;
	params._content = _content;
	params._link = _link;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveSDK.InviteFBFriendsUnregistered_Link
// ()
// Parameters:
// struct FString                 _title                         (Parm, ZeroConstructor)
// struct FString                 _content                       (Parm, ZeroConstructor)
// struct FString                 _link                          (Parm, ZeroConstructor)
// struct FString                 _extend                        (Parm, ZeroConstructor)

void UHDmpveSDK::InviteFBFriendsUnregistered_Link(const struct FString& _title, const struct FString& _content, const struct FString& _link, const struct FString& _extend)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveSDK.InviteFBFriendsUnregistered_Link");

	UHDmpveSDK_InviteFBFriendsUnregistered_Link_Params params;
	params._title = _title;
	params._content = _content;
	params._link = _link;
	params._extend = _extend;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.HDmpveSDK.GetUploadUrlByFile
// ()
// Parameters:
// struct FString                 file                           (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHDmpveSDK::GetUploadUrlByFile(const struct FString& file)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveSDK.GetUploadUrlByFile");

	UHDmpveSDK_GetUploadUrlByFile_Params params;
	params.file = file;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.HDmpveSDK.GetUploadUrl
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHDmpveSDK::GetUploadUrl()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveSDK.GetUploadUrl");

	UHDmpveSDK_GetUploadUrl_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.HDmpveSDK.GetUploadStatusByFile
// ()
// Parameters:
// struct FString                 file                           (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHDmpveSDK::GetUploadStatusByFile(const struct FString& file)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveSDK.GetUploadStatusByFile");

	UHDmpveSDK_GetUploadStatusByFile_Params params;
	params.file = file;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.HDmpveSDK.GetUploadStatus
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHDmpveSDK::GetUploadStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveSDK.GetUploadStatus");

	UHDmpveSDK_GetUploadStatus_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.HDmpveSDK.ClearFileUpload
// ()
// Parameters:
// struct FString                 file                           (Parm, ZeroConstructor)

void UHDmpveSDK::ClearFileUpload(const struct FString& file)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.HDmpveSDK.ClearFileUpload");

	UHDmpveSDK_ClearFileUpload_Params params;
	params.file = file;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKConfig.PatchMSDKConfigWithAreaConfig
// ()

void UIMSDKConfig::PatchMSDKConfigWithAreaConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKConfig.PatchMSDKConfigWithAreaConfig");

	UIMSDKConfig_PatchMSDKConfigWithAreaConfig_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.Transfer
// ()

void UIMSDKHelper::Transfer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.Transfer");

	UIMSDKHelper_Transfer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.StartWebVerify
// ()
// Parameters:
// struct FString                 InExtraInfo                    (Parm, ZeroConstructor)
// struct FString                 InVerifyAppId                  (Parm, ZeroConstructor)
// struct FString                 InAccount                      (Parm, ZeroConstructor)

void UIMSDKHelper::StartWebVerify(const struct FString& InExtraInfo, const struct FString& InVerifyAppId, const struct FString& InAccount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.StartWebVerify");

	UIMSDKHelper_StartWebVerify_Params params;
	params.InExtraInfo = InExtraInfo;
	params.InVerifyAppId = InVerifyAppId;
	params.InAccount = InAccount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.StartNewGame
// ()

void UIMSDKHelper::StartNewGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.StartNewGame");

	UIMSDKHelper_StartNewGame_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.SetupLoginCacheInfo
// ()
// Parameters:
// int                            InChannelID                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsQuickLogin                 (Parm, ZeroConstructor, IsPlainOldData)

void UIMSDKHelper::SetupLoginCacheInfo(int InChannelID, bool InIsQuickLogin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.SetupLoginCacheInfo");

	UIMSDKHelper_SetupLoginCacheInfo_Params params;
	params.InChannelID = InChannelID;
	params.InIsQuickLogin = InIsQuickLogin;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.SetupAdjustDMA
// ()
// Parameters:
// int                            InEEA                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            InAdPersonalization            (Parm, ZeroConstructor, IsPlainOldData)
// int                            InAdUserData                   (Parm, ZeroConstructor, IsPlainOldData)

void UIMSDKHelper::SetupAdjustDMA(int InEEA, int InAdPersonalization, int InAdUserData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.SetupAdjustDMA");

	UIMSDKHelper_SetupAdjustDMA_Params params;
	params.InEEA = InEEA;
	params.InAdPersonalization = InAdPersonalization;
	params.InAdUserData = InAdUserData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.SetNoAuthOpenid
// ()
// Parameters:
// struct FString                 OpenID                         (Parm, ZeroConstructor)

void UIMSDKHelper::SetNoAuthOpenid(const struct FString& OpenID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.SetNoAuthOpenid");

	UIMSDKHelper_SetNoAuthOpenid_Params params;
	params.OpenID = OpenID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.SetMSDKConfig
// ()
// Parameters:
// TMap<struct FString, struct FString> InConfigMaps                   (Parm, OutParm, ZeroConstructor)
// bool                           InClearLoginData               (Parm, ZeroConstructor, IsPlainOldData)

void UIMSDKHelper::SetMSDKConfig(bool InClearLoginData, TMap<struct FString, struct FString>* InConfigMaps)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.SetMSDKConfig");

	UIMSDKHelper_SetMSDKConfig_Params params;
	params.InClearLoginData = InClearLoginData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InConfigMaps != nullptr)
		*InConfigMaps = params.InConfigMaps;
}


// Function ClientNet.IMSDKHelper.SetIMSDKEnv
// ()
// Parameters:
// int                            iEnv                           (Parm, ZeroConstructor, IsPlainOldData)

void UIMSDKHelper::SetIMSDKEnv(int iEnv)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.SetIMSDKEnv");

	UIMSDKHelper_SetIMSDKEnv_Params params;
	params.iEnv = iEnv;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.SetChannel
// ()
// Parameters:
// struct FString                 InIMSDKChannelName             (Parm, ZeroConstructor)

void UIMSDKHelper::SetChannel(const struct FString& InIMSDKChannelName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.SetChannel");

	UIMSDKHelper_SetChannel_Params params;
	params.InIMSDKChannelName = InIMSDKChannelName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.SetAdvertiseUserID
// ()
// Parameters:
// struct FString                 userID                         (Parm, ZeroConstructor)

void UIMSDKHelper::SetAdvertiseUserID(const struct FString& userID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.SetAdvertiseUserID");

	UIMSDKHelper_SetAdvertiseUserID_Params params;
	params.userID = userID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.SetAdvertiseCustomData
// ()
// Parameters:
// struct FString                 InCustomData                   (Parm, ZeroConstructor)

void UIMSDKHelper::SetAdvertiseCustomData(const struct FString& InCustomData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.SetAdvertiseCustomData");

	UIMSDKHelper_SetAdvertiseCustomData_Params params;
	params.InCustomData = InCustomData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.SaveLastIMSDKChannelID
// ()
// Parameters:
// int                            channelId                      (Parm, ZeroConstructor, IsPlainOldData)

void UIMSDKHelper::SaveLastIMSDKChannelID(int channelId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.SaveLastIMSDKChannelID");

	UIMSDKHelper_SaveLastIMSDKChannelID_Params params;
	params.channelId = channelId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.RequestVerifyCode
// ()
// Parameters:
// struct FString                 InPhoneOrEmail                 (Parm, ZeroConstructor)
// int                            InAccountType                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            InUseForType                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InPhoneAreaCode                (Parm, ZeroConstructor)
// struct FString                 InLanuageCode                  (Parm, ZeroConstructor)
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UIMSDKHelper::RequestVerifyCode(const struct FString& InPhoneOrEmail, int InAccountType, int InUseForType, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.RequestVerifyCode");

	UIMSDKHelper_RequestVerifyCode_Params params;
	params.InPhoneOrEmail = InPhoneOrEmail;
	params.InAccountType = InAccountType;
	params.InUseForType = InUseForType;
	params.InPhoneAreaCode = InPhoneAreaCode;
	params.InLanuageCode = InLanuageCode;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.ReqBindInfo
// ()

void UIMSDKHelper::ReqBindInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.ReqBindInfo");

	UIMSDKHelper_ReqBindInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.RefreshLogin
// ()

void UIMSDKHelper::RefreshLogin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.RefreshLogin");

	UIMSDKHelper_RefreshLogin_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.RecoverGuest
// ()
// Parameters:
// struct FString                 channelUserId                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::RecoverGuest(const struct FString& channelUserId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.RecoverGuest");

	UIMSDKHelper_RecoverGuest_Params params;
	params.channelUserId = channelUserId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.QuickLogin
// ()

void UIMSDKHelper::QuickLogin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.QuickLogin");

	UIMSDKHelper_QuickLogin_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.QueryQRCodeStatus
// ()
// Parameters:
// struct FString                 InCodeId                       (Parm, ZeroConstructor)
// struct FString                 InRandStr                      (Parm, ZeroConstructor)
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UIMSDKHelper::QueryQRCodeStatus(const struct FString& InCodeId, const struct FString& InRandStr, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.QueryQRCodeStatus");

	UIMSDKHelper_QueryQRCodeStatus_Params params;
	params.InCodeId = InCodeId;
	params.InRandStr = InRandStr;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.PlayAdvertise
// ()

void UIMSDKHelper::PlayAdvertise()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.PlayAdvertise");

	UIMSDKHelper_PlayAdvertise_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.OnCommandLogin
// ()
// Parameters:
// struct FString                 InCmd                          (Parm, ZeroConstructor)
// struct FString                 InExtra                        (Parm, ZeroConstructor)

void UIMSDKHelper::OnCommandLogin(const struct FString& InCmd, const struct FString& InExtra)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.OnCommandLogin");

	UIMSDKHelper_OnCommandLogin_Params params;
	params.InCmd = InCmd;
	params.InExtra = InExtra;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.ModifyAccountInfo
// ()
// Parameters:
// struct FString                 InAccount                      (Parm, ZeroConstructor)
// int                            InAccountType                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            InVerifyType                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InVerifyData                   (Parm, ZeroConstructor)
// struct FString                 InPhoneAreaCode                (Parm, ZeroConstructor)
// struct FString                 InLanuageCode                  (Parm, ZeroConstructor)
// struct FString                 InMondifyToAccount             (Parm, ZeroConstructor)
// int                            InModifyAccountType            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InModifyVerifyCode             (Parm, ZeroConstructor)
// struct FString                 InModifyPhoneAreaCode          (Parm, ZeroConstructor)
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UIMSDKHelper::ModifyAccountInfo(const struct FString& InAccount, int InAccountType, int InVerifyType, const struct FString& InVerifyData, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InMondifyToAccount, int InModifyAccountType, const struct FString& InModifyVerifyCode, const struct FString& InModifyPhoneAreaCode, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.ModifyAccountInfo");

	UIMSDKHelper_ModifyAccountInfo_Params params;
	params.InAccount = InAccount;
	params.InAccountType = InAccountType;
	params.InVerifyType = InVerifyType;
	params.InVerifyData = InVerifyData;
	params.InPhoneAreaCode = InPhoneAreaCode;
	params.InLanuageCode = InLanuageCode;
	params.InMondifyToAccount = InMondifyToAccount;
	params.InModifyAccountType = InModifyAccountType;
	params.InModifyVerifyCode = InModifyVerifyCode;
	params.InModifyPhoneAreaCode = InModifyPhoneAreaCode;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.LogoutWith
// ()
// Parameters:
// int                            InMSDKChannelId                (Parm, ZeroConstructor, IsPlainOldData)

void UIMSDKHelper::LogoutWith(int InMSDKChannelId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.LogoutWith");

	UIMSDKHelper_LogoutWith_Params params;
	params.InMSDKChannelId = InMSDKChannelId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.LoadAdvertise
// ()
// Parameters:
// struct FString                 InAdvertiseUnitId              (Parm, ZeroConstructor)

void UIMSDKHelper::LoadAdvertise(const struct FString& InAdvertiseUnitId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.LoadAdvertise");

	UIMSDKHelper_LoadAdvertise_Params params;
	params.InAdvertiseUnitId = InAdvertiseUnitId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.IsEqualCurLoginPlatform
// ()
// Parameters:
// struct FString                 strChannel                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsEqualCurLoginPlatform(const struct FString& strChannel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsEqualCurLoginPlatform");

	UIMSDKHelper_IsEqualCurLoginPlatform_Params params;
	params.strChannel = strChannel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.isBindFBOrGPGC
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::isBindFBOrGPGC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.isBindFBOrGPGC");

	UIMSDKHelper_isBindFBOrGPGC_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindVK
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindVK()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindVK");

	UIMSDKHelper_IsAlreadyBindVK_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindUnifiedAccount
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindUnifiedAccount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindUnifiedAccount");

	UIMSDKHelper_IsAlreadyBindUnifiedAccount_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindTwitter
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindTwitter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindTwitter");

	UIMSDKHelper_IsAlreadyBindTwitter_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindNosChat
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindNosChat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindNosChat");

	UIMSDKHelper_IsAlreadyBindNosChat_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindLine
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindLine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindLine");

	UIMSDKHelper_IsAlreadyBindLine_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindHMS
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindHMS()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindHMS");

	UIMSDKHelper_IsAlreadyBindHMS_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindGPGC
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindGPGC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindGPGC");

	UIMSDKHelper_IsAlreadyBindGPGC_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindGooglePlay
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindGooglePlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindGooglePlay");

	UIMSDKHelper_IsAlreadyBindGooglePlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindGameCenter
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindGameCenter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindGameCenter");

	UIMSDKHelper_IsAlreadyBindGameCenter_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindFB
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindFB()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindFB");

	UIMSDKHelper_IsAlreadyBindFB_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindDiscord
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindDiscord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindDiscord");

	UIMSDKHelper_IsAlreadyBindDiscord_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindBgBg
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindBgBg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindBgBg");

	UIMSDKHelper_IsAlreadyBindBgBg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindApple
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindApple()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindApple");

	UIMSDKHelper_IsAlreadyBindApple_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.InvalidateQRCode
// ()
// Parameters:
// struct FString                 InCodeId                       (Parm, ZeroConstructor)
// struct FString                 InRandStr                      (Parm, ZeroConstructor)
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UIMSDKHelper::InvalidateQRCode(const struct FString& InCodeId, const struct FString& InRandStr, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.InvalidateQRCode");

	UIMSDKHelper_InvalidateQRCode_Params params;
	params.InCodeId = InCodeId;
	params.InRandStr = InRandStr;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.InitAdvertiseSDK
// ()

void UIMSDKHelper::InitAdvertiseSDK()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.InitAdvertiseSDK");

	UIMSDKHelper_InitAdvertiseSDK_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.GetVerifyAppId4SendCode
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIMSDKHelper::GetVerifyAppId4SendCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetVerifyAppId4SendCode");

	UIMSDKHelper_GetVerifyAppId4SendCode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetShortUrl
// ()
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// struct FString                 Mask                           (Parm, ZeroConstructor)
// struct FString                 Extra                          (Parm, ZeroConstructor)

void UIMSDKHelper::GetShortUrl(const struct FString& URL, const struct FString& Mask, const struct FString& Extra)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetShortUrl");

	UIMSDKHelper_GetShortUrl_Params params;
	params.URL = URL;
	params.Mask = Mask;
	params.Extra = Extra;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.GetPlatformType
// ()
// Parameters:
// EIMSDKPlatformType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EIMSDKPlatformType UIMSDKHelper::GetPlatformType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetPlatformType");

	UIMSDKHelper_GetPlatformType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetOpenId
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIMSDKHelper::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetOpenId");

	UIMSDKHelper_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetLoginResult
// ()
// Parameters:
// struct FIMSDKLoginResult       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FIMSDKLoginResult UIMSDKHelper::GetLoginResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetLoginResult");

	UIMSDKHelper_GetLoginResult_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetLastIMSDKChannelID
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIMSDKHelper::GetLastIMSDKChannelID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetLastIMSDKChannelID");

	UIMSDKHelper_GetLastIMSDKChannelID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetInstance
// ()
// Parameters:
// class UIMSDKHelper*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIMSDKHelper* UIMSDKHelper::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetInstance");

	UIMSDKHelper_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetIMSDKLoginToken
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIMSDKHelper::GetIMSDKLoginToken()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetIMSDKLoginToken");

	UIMSDKHelper_GetIMSDKLoginToken_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetHDmpveChannelID
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIMSDKHelper::GetHDmpveChannelID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetHDmpveChannelID");

	UIMSDKHelper_GetHDmpveChannelID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetCurLoginPlatform
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIMSDKHelper::GetCurLoginPlatform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetCurLoginPlatform");

	UIMSDKHelper_GetCurLoginPlatform_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetChannelNickname
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIMSDKHelper::GetChannelNickname()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetChannelNickname");

	UIMSDKHelper_GetChannelNickname_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetBindInfo
// ()

void UIMSDKHelper::GetBindInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetBindInfo");

	UIMSDKHelper_GetBindInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.GetBindFBRetCode
// ()

void UIMSDKHelper::GetBindFBRetCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetBindFBRetCode");

	UIMSDKHelper_GetBindFBRetCode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.GetBindCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIMSDKHelper::GetBindCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetBindCount");

	UIMSDKHelper_GetBindCount_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GenerateTransferCode
// ()

void UIMSDKHelper::GenerateTransferCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GenerateTransferCode");

	UIMSDKHelper_GenerateTransferCode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.GenerateQRCode
// ()
// Parameters:
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UIMSDKHelper::GenerateQRCode(const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GenerateQRCode");

	UIMSDKHelper_GenerateQRCode_Params params;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.CopyTransferCodeToClipboard
// ()

void UIMSDKHelper::CopyTransferCodeToClipboard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.CopyTransferCodeToClipboard");

	UIMSDKHelper_CopyTransferCodeToClipboard_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.ConvertTConndChannel2IMSDKChannel
// ()
// Parameters:
// int                            InTConndChannelId              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIMSDKHelper::ConvertTConndChannel2IMSDKChannel(int InTConndChannelId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.ConvertTConndChannel2IMSDKChannel");

	UIMSDKHelper_ConvertTConndChannel2IMSDKChannel_Params params;
	params.InTConndChannelId = InTConndChannelId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.ConvertStrToIMSDKChannel
// ()
// Parameters:
// struct FString                 strChannel                     (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIMSDKHelper::ConvertStrToIMSDKChannel(const struct FString& strChannel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.ConvertStrToIMSDKChannel");

	UIMSDKHelper_ConvertStrToIMSDKChannel_Params params;
	params.strChannel = strChannel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.ConvertIMSDKChannelToStr
// ()
// Parameters:
// int                            imsdkChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIMSDKHelper::ConvertIMSDKChannelToStr(int imsdkChannel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.ConvertIMSDKChannelToStr");

	UIMSDKHelper_ConvertIMSDKChannelToStr_Params params;
	params.imsdkChannel = imsdkChannel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.ConvertIMSDKChannel2TConndChannel
// ()
// Parameters:
// int                            InIMSDKChannelId               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIMSDKHelper::ConvertIMSDKChannel2TConndChannel(int InIMSDKChannelId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.ConvertIMSDKChannel2TConndChannel");

	UIMSDKHelper_ConvertIMSDKChannel2TConndChannel_Params params;
	params.InIMSDKChannelId = InIMSDKChannelId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.CheckVerifyCodeValid
// ()
// Parameters:
// struct FString                 InAccount                      (Parm, ZeroConstructor)
// int                            InAccountType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InPhoneAreaCode                (Parm, ZeroConstructor)
// struct FString                 InVerifyCode                   (Parm, ZeroConstructor)
// int                            InCodeType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InLanuageCode                  (Parm, ZeroConstructor)
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UIMSDKHelper::CheckVerifyCodeValid(const struct FString& InAccount, int InAccountType, const struct FString& InPhoneAreaCode, const struct FString& InVerifyCode, int InCodeType, const struct FString& InLanuageCode, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.CheckVerifyCodeValid");

	UIMSDKHelper_CheckVerifyCodeValid_Params params;
	params.InAccount = InAccount;
	params.InAccountType = InAccountType;
	params.InPhoneAreaCode = InPhoneAreaCode;
	params.InVerifyCode = InVerifyCode;
	params.InCodeType = InCodeType;
	params.InLanuageCode = InLanuageCode;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.CheckIsRegisted
// ()
// Parameters:
// struct FString                 InAccount                      (Parm, ZeroConstructor)
// int                            InAccountType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InPhoneAreaCode                (Parm, ZeroConstructor)
// struct FString                 InLanuageCode                  (Parm, ZeroConstructor)
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UIMSDKHelper::CheckIsRegisted(const struct FString& InAccount, int InAccountType, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.CheckIsRegisted");

	UIMSDKHelper_CheckIsRegisted_Params params;
	params.InAccount = InAccount;
	params.InAccountType = InAccountType;
	params.InPhoneAreaCode = InPhoneAreaCode;
	params.InLanuageCode = InLanuageCode;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.ChangePassword
// ()
// Parameters:
// struct FString                 InAccount                      (Parm, ZeroConstructor)
// int                            InAccountType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InVerifyCode                   (Parm, ZeroConstructor)
// struct FString                 InNewPassword                  (Parm, ZeroConstructor)
// struct FString                 InAreaCode                     (Parm, ZeroConstructor)
// struct FString                 InLangType                     (Parm, ZeroConstructor)
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UIMSDKHelper::ChangePassword(const struct FString& InAccount, int InAccountType, const struct FString& InVerifyCode, const struct FString& InNewPassword, const struct FString& InAreaCode, const struct FString& InLangType, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.ChangePassword");

	UIMSDKHelper_ChangePassword_Params params;
	params.InAccount = InAccount;
	params.InAccountType = InAccountType;
	params.InVerifyCode = InVerifyCode;
	params.InNewPassword = InNewPassword;
	params.InAreaCode = InAreaCode;
	params.InLangType = InLangType;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindVK
// ()

void UIMSDKHelper::BindVK()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindVK");

	UIMSDKHelper_BindVK_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindUnifiedAccount
// ()
// Parameters:
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UIMSDKHelper::BindUnifiedAccount(const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindUnifiedAccount");

	UIMSDKHelper_BindUnifiedAccount_Params params;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindTwitter
// ()

void UIMSDKHelper::BindTwitter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindTwitter");

	UIMSDKHelper_BindTwitter_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindNosChat
// ()

void UIMSDKHelper::BindNosChat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindNosChat");

	UIMSDKHelper_BindNosChat_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindLine
// ()

void UIMSDKHelper::BindLine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindLine");

	UIMSDKHelper_BindLine_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindHMS
// ()

void UIMSDKHelper::BindHMS()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindHMS");

	UIMSDKHelper_BindHMS_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindGPGC
// ()

void UIMSDKHelper::BindGPGC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindGPGC");

	UIMSDKHelper_BindGPGC_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindFB
// ()

void UIMSDKHelper::BindFB()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindFB");

	UIMSDKHelper_BindFB_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindDiscord
// ()

void UIMSDKHelper::BindDiscord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindDiscord");

	UIMSDKHelper_BindDiscord_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindBgBg
// ()

void UIMSDKHelper::BindBgBg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindBgBg");

	UIMSDKHelper_BindBgBg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindApple
// ()

void UIMSDKHelper::BindApple()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindApple");

	UIMSDKHelper_BindApple_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

