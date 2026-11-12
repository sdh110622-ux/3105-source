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
//Classes
//---------------------------------------------------------------------------

// Class Client.AppBaseConfig
// 0x0128 (0x0150 - 0x0028)
class UAppBaseConfig : public UObject
{
public:
	int                                                PUBLISH_REGION_ID;                                        // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     PUBLISH_AREA;                                             // 0x0030(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_GAME_ID;                                            // 0x0040(0x0010) (ZeroConstructor, Config)
	struct FString                                     GEMAppID;                                                 // 0x0050(0x0010) (ZeroConstructor, Config)
	uint32_t                                           TSSGameId;                                                // 0x0060(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	uint64_t                                           GameID;                                                   // 0x0068(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     GameKey;                                                  // 0x0070(0x0010) (ZeroConstructor, Config)
	uint64_t                                           VoiceSdkGameId;                                           // 0x0080(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     VoiceSdkGameKey;                                          // 0x0088(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_FACEBOOK;                                           // 0x0098(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_APPLE;                                              // 0x00A8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_GOOGLE;                                             // 0x00B8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_TWITTER;                                            // 0x00C8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_NosCHAT;                                            // 0x00D8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_VK;                                                 // 0x00E8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_LINE;                                               // 0x00F8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_BgBg;                                               // 0x0108(0x0010) (ZeroConstructor, Config)
	struct FString                                     GUID_GAMEMASTER;                                          // 0x0118(0x0010) (ZeroConstructor, Config)
	struct FString                                     GEMCtrlURL;                                               // 0x0128(0x0010) (ZeroConstructor, Config)
	struct FString                                     TMFPCtrlURL;                                              // 0x0138(0x0010) (ZeroConstructor, Config)
	int                                                SubsideFeatureLevel;                                      // 0x0148(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x014C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AppBaseConfig");
		return pStaticClass;
	}

};


// Class Client.AsyncLoadHelper
// 0x00B8 (0x00E0 - 0x0028)
class UAsyncLoadHelper : public UObject
{
public:
	TMap<struct FString, class UObject*>               PreloadObjectMap;                                         // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0078(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncLoadHelper");
		return pStaticClass;
	}


	void SetMaxTaskNum(int Num);
	void RunNextTask();
	void OnLoadCallBack(const struct FSoftObjectPath& softObjPath);
	void ClearOneTask(const struct FString& ObjectPath);
	void ClearAllTask();
	void AddTask(const struct FString& ObjectPath, int LoadPriority);
};


// Class Client.AsyncLoadWidgetBlueprint
// 0x0058 (0x0080 - 0x0028)
class UAsyncLoadWidgetBlueprint : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    BeforeLoad;                                               // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AfterLoad;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancelled;                                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0058(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncLoadWidgetBlueprint");
		return pStaticClass;
	}


	void Cancel();
	class UAsyncLoadWidgetBlueprint* AsyncLoadWidgetBlueprint(const struct FString& BlueprintPath, int Priority);
	void AfterLoadCallback(struct FSoftObjectPath* SoftObjectPath);
	void Activate();
};


// Class Client.AsyncTaskCDNDownloader
// 0x0070 (0x0098 - 0x0028)
class UAsyncTaskCDNDownloader : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	struct FScriptMulticastDelegate                    onRequestHandler;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0068(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncTaskCDNDownloader");
		return pStaticClass;
	}


	class UAsyncTaskCDNDownloader* DownloadCDNContent(const struct FString& URL, int loaderType, const struct FString& savedDir, bool breakpointContinualTransfer);
};


// Class Client.AsyncTaskDownloader
// 0x0070 (0x0098 - 0x0028)
class UAsyncTaskDownloader : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	struct FScriptMulticastDelegate                    onRequestHandler;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0068(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncTaskDownloader");
		return pStaticClass;
	}


	class UAsyncTaskDownloader* DownloadContent(const struct FString& URL, int loaderType, const struct FString& savedDir, bool breakpointContinualTransfer);
};


// Class Client.BattleScriptHelper
// 0x0000 (0x0028 - 0x0028)
class UBattleScriptHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleScriptHelper");
		return pStaticClass;
	}


	uint32_t SyncNewBattlePlayer(class UBattleUtils* Utils, uint64_t UID, const struct FPlayerInfoData& Info);
	void SyncGameInfo(class UBattleUtils* Utils, const struct FBattleGameInfo& Info);
	void SyncGameExit(class UBattleUtils* Utils);
	void SyncBattlePlayerExit(class UBattleUtils* Utils, uint64_t UID, const struct FName& PlayerType, const struct FString& Reason);
	void ResponPlayerWeaponDIYData(class UBattleUtils* Utils, uint64_t PlayerUID, const struct FWeaponDIYData& InWeaponDIYData);
	void GenerateAIPlayerParams(class UBattleUtils* Utils, const struct FPlayerInfoData& Info);
};


// Class Client.BattlePlayer
// 0x0160 (0x0188 - 0x0028)
class UBattlePlayer : public UObject
{
public:
	uint64_t                                           UID;                                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPlayerInfoData                             PlayerInfoData;                                           // 0x0030(0x00E8)
	struct FPlayerAvatarData                           PlayerAvatarData;                                         // 0x0118(0x0018)
	TMap<int, struct FWeaponDIYData>                   WeaponDIYData;                                            // 0x0130(0x0050) (ZeroConstructor)
	class UBattleUtils*                                OwningBattleUtils;                                        // 0x0180(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattlePlayer");
		return pStaticClass;
	}


	struct FGameModePlayerParams ExtractGameModePlayerParams();
};


// Class Client.BattleAIPlayer
// 0x0000 (0x0188 - 0x0188)
class UBattleAIPlayer : public UBattlePlayer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleAIPlayer");
		return pStaticClass;
	}


	struct FGameModeAIPlayerParams ExtractGameModeAIPlayerParams();
};


// Class Client.BattleUtils
// 0x0528 (0x0550 - 0x0028)
class UBattleUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	class UGameFrontendHUD*                            OwningFrontendHUD;                                        // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
	class AUAEGameMode*                                BattleGameMode;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UBattlePlayer*>                       BattlePlayerList;                                         // 0x00A0(0x0010) (ZeroConstructor)
	struct FBattleGameInfo                             CachedBattleGameInfo;                                     // 0x00B0(0x0038)
	struct FGameModeAIPlayerParams                     CachedAIPlayerParams;                                     // 0x00E8(0x0408)
	struct FString                                     LuaFilePath;                                              // 0x04F0(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0500(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleUtils");
		return pStaticClass;
	}


	uint32_t SyncNewBattlePlayer(uint64_t UID, const struct FPlayerInfoData& Info);
	void SyncGameInfo(const struct FBattleGameInfo& Info);
	void SyncGameExit();
	void SyncBattlePlayerExit(uint64_t UID, const struct FName& PlayerType, const struct FString& Reason);
	struct FGameModePlayerParams RetrievePlayerParams(const struct FPlayerID& PlayerID);
	struct FGameModeAIPlayerParams RetrieveAIPlayerParams(const struct FPlayerID& PlayerID);
	void ResponPlayerWeaponDIYData(uint64_t PlayerUID, const struct FWeaponDIYData& InWeaponDIYData);
	void RequestSomePlayersBattleData(TArray<uint64_t> PlayerUIDList, unsigned char DataType);
	void RequestPlayerWeaponDIYData(uint64_t PlayerUID, int WeaponSkinID, int PlanID);
	void RequestOnePlayersBattleData(uint64_t PlayerUID, unsigned char DataType);
	void RequestAllPlayersBattleData(unsigned char DataType);
	void OnPostLoadMapWithWorld(class UWorld* World);
	class UBattlePlayer* NewBattlePlayer();
	class UBattleAIPlayer* NewBattleAIPlayer();
	void HandleGameModeStateChanged(const struct FGameModeStateChangedParams& Params);
	class AUAEGameMode* GetBattleGameMode();
	void GenerateAIPlayerParams(const struct FPlayerInfoData& Info);
	class UBattlePlayer* FindPlayerByUID(uint64_t UID, const struct FName& PlayerType);
	class UBattlePlayer* FindPlayerByPlayerName(const struct FString& PlayerName, const struct FName& PlayerType);
	class UBattlePlayer* FindPlayerByPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType);
};


// Class Client.BattleWindowMgr
// 0x0000 (0x0028 - 0x0028)
class UBattleWindowMgr : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleWindowMgr");
		return pStaticClass;
	}


	void ShowUI(class UObject* WorldContextObject, const struct FString& WindowName, class UObject* ObjectParam);
	void SetInstance(class UBattleWindowMgrLuaUtils* InInstance, class ULuaStateWrapper* InLuaStateWrapper);
	void HideUI(class UObject* WorldContextObject, const struct FString& WindowName);
	bool CheckWindowOpen(class UObject* WorldContextObject, const struct FString& WindowName);
};


// Class Client.BattleWindowMgrLuaUtils
// 0x0048 (0x0070 - 0x0028)
class UBattleWindowMgrLuaUtils : public UObject
{
public:
	TWeakObjectPtr<class ULuaStateWrapper>             LuaStateWrapper;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     LuaManagerName;                                           // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     ShowUI;                                                   // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     HideUI;                                                   // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     CheckWindowOpen;                                          // 0x0060(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleWindowMgrLuaUtils");
		return pStaticClass;
	}

};


// Class Client.BugReporter
// 0x0078 (0x00A0 - 0x0028)
class UBugReporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BugReporter");
		return pStaticClass;
	}


	void SendScreenShot(const struct FString& ErrorReason, const struct FString& errorDescription, const struct FString& ImagePath, float X, float Y, float Z);
	void SendLog(const struct FString& ErrorReason, const struct FString& errorDescription, float X, float Y, float Z, bool pullAll, bool zipLogUpload);
	void ReadZipLog(const struct FString& Filename);
	TArray<unsigned char> CompressLog(bool pullAllLog);
};


// Class Client.BuildConfig
// 0x0030 (0x0058 - 0x0028)
class UBuildConfig : public UObject
{
public:
	struct FString                                     branch_name;                                              // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FString                                     build_no;                                                 // 0x0038(0x0010) (ZeroConstructor, Config)
	struct FString                                     build_url;                                                // 0x0048(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BuildConfig");
		return pStaticClass;
	}

};


// Class Client.BusinessHelper
// 0x0000 (0x0028 - 0x0028)
class UBusinessHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BusinessHelper");
		return pStaticClass;
	}


	struct FString XorEncryptDecrypt(const struct FString& Data, bool bEncrypt, const struct FString& Key);
	class UObject* UIGetResWithPath(const struct FString& DesManagerName);
	class ALuaClassObj* UIGetLuaManagerByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName);
	class ALuaClassObj* UIGetLuaManager(class UUAEUserWidget* pUIClass);
	void StopUIStat(const struct FString& UIName, bool bReport);
	float StopTimeWatch();
	void StartUIStat(const struct FString& UIName);
	void StartTimeWatch();
	struct FString SpecialBase64Encode(const struct FString& Data);
	struct FString SpecialBase64Decode(const struct FString& Data);
	void SetUIStatMaxClickTimes(int Times);
	class UObject* LoadAssetFromPath(const struct FString& DesManagerName);
	bool IsSplitMiniPakVersion();
	bool IsSplitMapPakVersion();
	bool IsFit();
	bool IsFirstGaming();
	bool IsClassOf(class UObject* Object, class UClass* Class);
	bool IsChildOf(class UClass* ChildClass, class UClass* Class);
	bool IsCEVersion();
	bool IsAppFromStore();
	bool HasDownloadedBasePak();
	struct FString GetXORKey();
	class UUAEUserWidget* GetWidgetByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName, const struct FString& InWidgtName);
	uint64_t GetVoiceSdkGameId();
	int GetTSSGameId();
	float GetTime();
	struct FString GetSplitMapConfigInfo();
	int GetPublishRegionID();
	struct FString GetPublishRegion();
	struct FString GetPathFromUserWidgetToViewport(class UUserWidget* UserWidget, bool withObjectNum);
	struct FString GetPackChannel();
	struct FString GetOpenId();
	struct FString GetObjectClassName(class UObject* Object);
	struct FString GetMobileBasePath(const struct FString& InPath);
	class ALuaClassObj* GetLuaManagerByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName);
	struct FString GetITopGameId();
	struct FString GetInGameLocalConnectURL();
	int GetIMSDKEnv();
	int GetDeviceQualityLevel();
	int GetDeviceOrientation();
	class UUAEDataTable* GetDataTable(const struct FString& tableName);
	int GetCurrentNetworkState();
	class UWidget* GetChildByName(class UUserWidget* pParent, const struct FString& Name);
	struct FString GetBuildURL();
	struct FString GetBuildNo();
	struct FString GetBranchName();
	struct FString GetBase64Key();
	struct FString GetAppVersion();
	int GetAOSSHOPID();
	struct FString GetAOSSHOP();
	void FullGC();
	void ClearDisplayLookupTable();
	void BroadCastMSG(class UFrontendHUD* FrontendHUD, const struct FString& DesManagerName, const struct FString& Msg);
	struct FString Base64Encode(const struct FString& Data);
	struct FString Base64Decode(const struct FString& Data);
};


// Class Client.IntlHelper
// 0x0000 (0x0028 - 0x0028)
class UIntlHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.IntlHelper");
		return pStaticClass;
	}


	void UpdateXGPushNightTag(bool bInit);
	void UpdateXGPushDayTag(bool bInit);
	void UpdateVoiceUrl(const struct FString& regionVoiceUrl);
	void UnInitTweenMaker();
	struct FString TimeFormatString(const struct FString& Format, int hours, int Mins, int secs);
	void SaveXGTags(const struct FString& Language, const struct FString& timezone, const struct FString& Region);
	void OnSwitchLanguage();
	void OnChoosingZone(int ZoneID, const struct FString& AddrIP, const struct FString& regionVoiceUrl);
	bool IsRemoteNotificationsEnabled();
	bool IsHelpshiftEnable4CurrentChannel();
	bool IsHelpshiftEnable();
	bool IsAwakedByAdjust();
	void InitTweenMaker();
	void HelpshiftUploadLog();
	void HelpshiftShowSingleFAQWithInfo(const struct FString& publishID, TMap<struct FString, struct FString> hsMetaInfo, const struct FString& ExtraTags, const struct FString& hsIssueFieldsJson);
	void HelpshiftShowFAQsWithInfo(TMap<struct FString, struct FString> hsMetaInfo, const struct FString& ExtraTags, const struct FString& hsIssueFieldsJson);
	void HelpshiftShowFAQs();
	void HelpshiftShowConversionWithInfo(TMap<struct FString, struct FString> hsMetaInfo, const struct FString& hsIssueFieldsJson);
	void HelpshiftShowConversion();
	void HelpshiftRequestUnreadMessagesCount();
	int HelpshiftGetUnreadMessgesCount();
	void HelpshiftClearUnreadMessgesCount();
	struct FString GetTranslationText(const struct FString& Key);
	struct FString GetSavedXGTimezoneTag();
	struct FString GetSavedXGRegionTag();
	struct FString GetSavedXGPushNightTag();
	struct FString GetSavedXGPushDayTag();
	struct FString GetSavedXGLanguageTag();
	struct FString GetPlayerUCLevel();
	int GetLocalTimezone();
	struct FString GetLocalizeStringWithString(const struct FString& sourceString, int numStringIndex, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	struct FString GetLocalizeStringWithNum(int ID, int numStringIndex, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	struct FString GetLocalizeStrByStr(const struct FString& Source, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	struct FString GetLocalizeStrByID(int ID, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	struct FString GetLocalizationStringWithID(int ID);
	struct FString GetLocalizationString(const struct FString& Key);
	struct FString GetLocalizationBattleStringWithID(int ID);
	struct FString GetHistoryErrorCode();
	struct FString GetGameMasterVID();
	struct FString GetDeepLinkUrl();
	int GetCurrentZoneID();
	struct FString FormatLocalizeStrByStr(const struct FString& Source, TArray<struct FString> stringArr);
	void DirectToNotificationSetup();
	void ClearAdjustDeepLink();
	void AdjustParaAnalysis();
	void AddErrorCodeToHistory(const struct FString& InErrorCode);
};


// Class Client.TestHUD
// 0x0000 (0x04B0 - 0x04B0)
class ATestHUD : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.TestHUD");
		return pStaticClass;
	}


	void TestFunctionNOParam();
	float TestFunctionBP_LUA();
	float TestFunctionBP();
	float Function_Lua();
	float Function_CPlus_Call();
	float Function_CPlus();
	float Function_BP_CPP();
	float Function_BP_Call_LUA();
	float Function_BP_Call_CPP();
	float Function_BP_Call_CPlus();
	float Function_BP_Call();
	float Function_BP();
};


// Class Client.CDNUpdate
// 0x0340 (0x0368 - 0x0028)
class UCDNUpdate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2A8];                                     // 0x00C0(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CDNUpdate");
		return pStaticClass;
	}


	void StartUpdateApp();
	void StartAppUpdate(bool StartGrayUpdate);
	void OnRequestProgress(const struct FCDNDownloaderInfo& Info);
	void OnRequestComplete(const struct FCDNDownloaderInfo& Info);
	bool IsUpdating();
	bool IsGrayUpdate();
	int GetCurStage(float* percent, int* GetCurVal, int* GetMaxVal);
	void FinishUpdate();
	void ContinueUpdate();
	void CancelUpdate();
};


// Class Client.CentauriManager
// 0x01C8 (0x01F0 - 0x0028)
class UCentauriManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	struct FString                                     payChannel;                                               // 0x0050(0x0010) (ZeroConstructor, Config)
	struct FString                                     ZoneID;                                                   // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     goodsZoneID;                                              // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     offerID;                                                  // 0x0080(0x0010) (ZeroConstructor, Config)
	int                                                iAOSShop;                                                 // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FString                                     offerID_H5;                                               // 0x0098(0x0010) (ZeroConstructor, Config)
	struct FString                                     offerID_WOW;                                              // 0x00A8(0x0010) (ZeroConstructor, Config)
	struct FString                                     offerID_WOWH5;                                            // 0x00B8(0x0010) (ZeroConstructor, Config)
	struct FString                                     payChannel_H5;                                            // 0x00C8(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x58];                                      // 0x00D8(0x0058) MISSED OFFSET
	struct FString                                     IDCInfo;                                                  // 0x0130(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0140(0x0018) MISSED OFFSET
	struct FString                                     PAY_TYPE_UC;                                              // 0x0158(0x0010) (ZeroConstructor)
	struct FString                                     PAY_TYPE_GOODS;                                           // 0x0168(0x0010) (ZeroConstructor)
	struct FString                                     PAY_TYPE_SUBSCRIBE;                                       // 0x0178(0x0010) (ZeroConstructor)
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0188(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x60];                                      // 0x0190(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CentauriManager");
		return pStaticClass;
	}


	void TickCentauriPackage();
	void Tick(float DeltaTime);
	void SwitchPayChannel(ECentauriMultiPayChannelSwitch switchChannel);
	void Subscribe(const struct FString& productid, const struct FString& InPayItem, const struct FString& Country, const struct FString& currency, const struct FString& serviceCode, const struct FString& serviceName, bool autoPay, const struct FString& basePlanId, const struct FString& gwOfferId, const struct FString& InChannelExtras, const struct FString& InAppExtends);
	void SetZoneID(const struct FString& inZoneID, const struct FString& inGoodsZoneID);
	void SetRoleInfo(int InChannel, const struct FString& OpenID);
	void SetPayEnvironment(const struct FString& InPayEnvironment);
	void SetInIDC(const struct FString& InInIDC);
	void SetIDCInfo(const struct FString& InIDCInfo);
	void SetFrontendHUD(class UGameFrontendHUD* InFrontendHUD);
	void Reprovide();
	void Pay(const struct FString& productid, const struct FString& InPayItem, const struct FString& Country, const struct FString& currency, const struct FString& InChannelExtras, const struct FString& InAppExtends, const struct FString& InPayChannel, const struct FString& InURL, bool bUseWOW);
	void ModifySubscribe(const struct FString& newProductid, const struct FString& Country, const struct FString& currency, const struct FString& serviceCode, const struct FString& serviceName, bool autoPay, const struct FString& basePlanId, const struct FString& gwOfferId, const struct FString& InChannelExtras, const struct FString& InAppExtends);
	bool IsH5PayEnable();
	void Initialize(ECentauriMultiPayChannelSwitch envior, bool bUseWOW);
	void H5Pay(const struct FString& Country, const struct FString& InChannelExtras, const struct FString& InAppExtends, bool bUseWOW);
	void GoodsPresent(const struct FString& productid, const struct FString& InPayItem, const struct FString& Price, const struct FString& Country, const struct FString& currency, const struct FString& MetaData, const struct FString& InChannelExtras, const struct FString& InAppExtends, const struct FString& InPayChannel, const struct FString& InURL, bool bUseWOW);
	void Goods(const struct FString& productid, const struct FString& InPayItem, const struct FString& Price, const struct FString& Country, const struct FString& currency, const struct FString& InChannelExtras, const struct FString& InAppExtends, const struct FString& InPayChannel, const struct FString& InURL, bool bUseWOW);
	void GetProductInfo(TMap<struct FString, struct FString> listProductID, bool bUseWOW);
	struct FString getPF();
	struct FString GetPaymentProductId();
	struct FString GetPayChannel();
	struct FString GetPackChannel();
	struct FString GetOfferIDForWOWH5();
	struct FString GetOfferIDForWOW();
	struct FString GetOfferID();
	struct FString GetNativePackageTag();
	void GetMPInfo(const struct FString& Country, const struct FString& currency, const struct FString& InAppExtends, const struct FString& InDrmInfo, bool bUseWOW);
	void GetIntroPrice(TMap<struct FString, struct FString> listProductID, bool bUseWOW);
	class UCentauriManager* GetInstance();
	int GetAOSSHOP();
};


// Class Client.ClientNetInterface
// 0x0000 (0x0028 - 0x0028)
class UClientNetInterface : public UNetInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ClientNetInterface");
		return pStaticClass;
	}

};


// Class Client.CommonItemBase
// 0x0000 (0x02C8 - 0x02C8)
class UCommonItemBase : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CommonItemBase");
		return pStaticClass;
	}

};


// Class Client.CompressTextureHelper
// 0x0000 (0x0028 - 0x0028)
class UCompressTextureHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CompressTextureHelper");
		return pStaticClass;
	}


	class UTexture2D* TestGetTexture2DFromDisk_KTX2(const struct FString& PathName);
};


// Class Client.DataTunnel
// 0x0000 (0x0028 - 0x0028)
class UDataTunnel : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.DataTunnel");
		return pStaticClass;
	}

};


// Class Client.DragDropTextBox
// 0x0000 (0x0CB0 - 0x0CB0)
class UDragDropTextBox : public UEditableTextBox
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.DragDropTextBox");
		return pStaticClass;
	}

};


// Class Client.GameBackendUtils
// 0x0000 (0x0030 - 0x0030)
class UGameBackendUtils : public UBackendUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameBackendUtils");
		return pStaticClass;
	}


	class UUAETableManager* GetTableManager();
};


// Class Client.GameBackendHUD
// 0x0000 (0x00B0 - 0x00B0)
class UGameBackendHUD : public UBackendHUD
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameBackendHUD");
		return pStaticClass;
	}


	class UGameBackendUtils* GetUtils();
	class UGameBackendHUD* GetInstance();
	class UGameFrontendHUD* GetGameFrontendHUDByGameInstance(class UGameInstance* GameInstance);
	class UGameFrontendHUD* GetFirstGameFrontendHUD(class UObject* WorldContextObject);
};


// Class Client.GameBusinessManager
// 0x0078 (0x0180 - 0x0108)
class UGameBusinessManager : public ULogicManagerBase
{
public:
	TArray<struct FGameWidgetConfig>                   WidgetConfigList;                                         // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0118(0x0050) MISSED OFFSET
	class AUAEPlayerController*                        OwningController;                                         // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0170(0x0008) MISSED OFFSET
	class ALuaClassObj*                                LuaObject;                                                // 0x0178(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameBusinessManager");
		return pStaticClass;
	}


	class UUAEUserWidget* GetWidget(int Index);
	class ALuaClassObj* GetLuaObject();
	class UGameFrontendHUD* GetGameFrontendHUD();
};


// Class Client.GameFrontendHUD
// 0x0958 (0x0B88 - 0x0230)
class UGameFrontendHUD : public UFrontendHUD
{
public:
	struct FScriptMulticastDelegate                    OnHandleWebviewActionDelegate;                            // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetTicketNotifyDelegate;                                // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHandleServerListDownload;                               // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUIStatReport;                                           // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCloudGMReceive;                                         // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReportClientTool;                                       // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bDuringLobbyEntry;                                        // 0x0290(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	uint64_t                                           LastDuringLobbyEntryFrame;                                // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     LobbyEntryOptions;                                        // 0x02A0(0x0010) (ZeroConstructor)
	struct FString                                     LobbyEntryLastGameStatus;                                 // 0x02B0(0x0010) (ZeroConstructor)
	struct FString                                     CSVTableRelativeDir;                                      // 0x02C0(0x0010) (ZeroConstructor, Config)
	TMap<struct FString, struct FString>               GameStatusMap;                                            // 0x02D0(0x0050) (ZeroConstructor)
	bool                                               EnableTickLog;                                            // 0x0320(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0321(0x0001) MISSED OFFSET
	bool                                               bEnableReportMemory;                                      // 0x0322(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0323(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDeleteFileNotifyEvent;                                  // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLoadODPaksBinFinishNotifyEvent;                         // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x58];                                      // 0x0350(0x0058) MISSED OFFSET
	class UVoiceSDKInterface*                          VoiceSDK;                                                 // 0x03A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBugReporter*                                GameBugReporter;                                          // 0x03B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGMLogShare*                                 LogShare;                                                 // 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxUpdateRetryTimes;                                      // 0x03C0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x03C4(0x000C) MISSED OFFSET
	class UGDolphinUpdater*                            GDolphin;                                                 // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTranslator*                                 Translator;                                               // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UHttpWrapper*                                HttpWrapper;                                              // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGCPufferDownloader*                         GPuffer;                                                  // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULaggingReporter*                            LaggingReporter;                                          // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x03F8(0x0008) MISSED OFFSET
	class UAsyncTaskDownloader*                        DownloadTask;                                             // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x44];                                      // 0x0408(0x0044) MISSED OFFSET
	bool                                               bUseDolphinUpdateFirst;                                   // 0x044C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableUseDolphinUpdate;                                  // 0x044D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableUseCDNUpdate;                                      // 0x044E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseDolphinUpdateAfterCDNFailed;                          // 0x044F(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseCDNUpdateAfterDolphinFailed;                          // 0x0450(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableEditorPufferDownload;                              // 0x0451(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsWaitingUpdateStateData;                                // 0x0452(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingDolphinUpdate;                                     // 0x0453(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingCDNUpdate;                                         // 0x0454(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x13];                                      // 0x0455(0x0013) MISSED OFFSET
	class UCDNUpdate*                                  CDNUpdater;                                               // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ODPaksPoolSize;                                           // 0x0470(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ODPaksPoolSizeLowend;                                     // 0x0474(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ODPaksPoolSizeLowendThreshold;                            // 0x0478(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               ODPaksEnable;                                             // 0x047C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData09[0x23];                                      // 0x047D(0x0023) MISSED OFFSET
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // 0x04A0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       UnrealNetworkStatus;                                      // 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x18];                                      // 0x04B8(0x0018) MISSED OFFSET
	float                                              UnrealNetworkConnectingTimer;                             // 0x04D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x18];                                      // 0x04D4(0x0018) MISSED OFFSET
	float                                              UnrealNetworkConnectingTime;                              // 0x04EC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UnrealNetworkConnectingTimeAsan;                          // 0x04F0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseDynamicCreateLuaManager;                              // 0x04F4(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	TArray<struct FString>                             PersistentLuaManager;                                     // 0x04F8(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData13[0x10];                                      // 0x0508(0x0010) MISSED OFFSET
	bool                                               bPatchReInitSequence;                                     // 0x0518(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0519(0x0007) MISSED OFFSET
	class ULuaStateWrapper*                            LuaStateWrapper;                                          // 0x0520(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULuaEventBridge*                             LuaEventBridgeInstace;                                    // 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBattleWindowMgrLuaUtils*                    LuaBattleWindowMgr;                                       // 0x0530(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULuaBlueprintMgr*                            LuaBlueprintSysMgr;                                       // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x8];                                       // 0x0540(0x0008) MISSED OFFSET
	struct FString                                     ScriptBPRelativeDir;                                      // 0x0548(0x0010) (ZeroConstructor, Config)
	struct FString                                     ScriptRelativeDir;                                        // 0x0558(0x0010) (ZeroConstructor, Config)
	struct FString                                     InGameLuaDir;                                             // 0x0568(0x0010) (ZeroConstructor, Config)
	struct FString                                     PreloadLuaFileRelativePath;                               // 0x0578(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             LuaDirList;                                               // 0x0588(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             NoGCPackage;                                              // 0x0598(0x0010) (ZeroConstructor, Config)
	float                                              LuaTickTime;                                              // 0x05A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCallLuaTick;                                             // 0x05AC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoLoginEnable;                                         // 0x05AD(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2A];                                      // 0x05AE(0x002A) MISSED OFFSET
	int                                                PingFirstReportIntervalSecond;                            // 0x05D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PingReportIntervalSecond;                                 // 0x05DC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                LossSyncIntervalSecond;                                   // 0x05E0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PlayerStatusReportIntervalSecond;                         // 0x05E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                LossArraySyncIntervalSecond;                              // 0x05E8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x05EC(0x0004) MISSED OFFSET
	int                                                vmInstrumentOptimization;                                 // 0x05F0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x05F4(0x0004) MISSED OFFSET
	class UTssManager*                                 TssMgr;                                                   // 0x05F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1C];                                      // 0x0600(0x001C) MISSED OFFSET
	float                                              PingReportInterval;                                       // 0x061C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData20[0x110];                                     // 0x0620(0x0110) MISSED OFFSET
	int64_t                                            DeactivatedThreshold;                                     // 0x0730(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	int64_t                                            TimePassThreshold;                                        // 0x0738(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ImageDownloadClearDayCount;                               // 0x0740(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    UIStackChangeDelegate;                                    // 0x0748(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIStackRecoverDelegate;                                   // 0x0758(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFRefreshAdaptationUIEvent;                              // 0x0768(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFRefreshAdaptationExUIEvent;                            // 0x0778(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EnterBattleStageDelegate;                                 // 0x0788(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnAfterInitedDolphinDelegate;                             // 0x0798(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDolphinVersionInfoDelegate;                             // 0x07A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDolphinNoticeInstallApkDelegate;                        // 0x07B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDolphinProgressDelegate;                                // 0x07C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDolphinErrorDelegate;                                   // 0x07D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRepairOverMaxTimesDelegate;                             // 0x07E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateFinishedDelegate;                                 // 0x07F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRestartGameDelegate;                                    // 0x0808(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInitIMSDKEnvDelegate;                                   // 0x0818(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetEnableCDNGetVersionDelegate;                         // 0x0828(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAfterLoadedEditorLoginDelegate;                         // 0x0838(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClearUIBeforeReInitLuaStateDelegate;                    // 0x0848(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInitStateDelegate;                                      // 0x0858(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStartPufferUpdateDelegage;                              // 0x0868(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetUpdateStateCDNConfigUrlDelegate;                     // 0x0878(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetCDNUpdateInfoDelegate;                               // 0x0888(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQuickLoginDelegate;                                     // 0x0898(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetRegionNoByCountryNoDelegate;                         // 0x08A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPhoneMailLoginCallbackDelegate;                         // 0x08B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLoginSDKCallbackDelegate;                               // 0x08C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFileModifiedDelegate;                                   // 0x08D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLauncherEventCallback;                                  // 0x08E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData22[0xC8];                                      // 0x08F8(0x00C8) MISSED OFFSET
	class UImageDownloader*                            ImageDownloaderInGame;                                    // 0x09C0(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                FpsForWindowClient;                                       // 0x09C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x09CC(0x0004) MISSED OFFSET
	class UUDPPingCollector*                           UDPPingCollector;                                         // 0x09D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UIElemLayoutJsonConfigSwitch;                             // 0x09D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               NationAllSwitch;                                          // 0x09D9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               NationBattleSwitch;                                       // 0x09DA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               NationRankSwitch;                                         // 0x09DB(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelfieSwitch;                                             // 0x09DC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ReportBugSwitch;                                          // 0x09DD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               FirstVoicePopupSwitch;                                    // 0x09DE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               GDPRForbidVoiceSwitch;                                    // 0x09DF(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               GDPRSettingSwitch;                                        // 0x09E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x09E1(0x0003) MISSED OFFSET
	int                                                GDPRUserType;                                             // 0x09E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldShowAdaptTipInLobby;                               // 0x09E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x09E9(0x0003) MISSED OFFSET
	float                                              fLaggingFPSDiffThreshold;                                 // 0x09EC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFPSDiffThresholdMin;                              // 0x09F0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFPSDiffThresholdMax;                              // 0x09F4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFrameTimeThreshold;                               // 0x09F8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFrameTimeThresholdMin;                            // 0x09FC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFrameTimeThresholdMax;                            // 0x0A00(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fFPSReportInterval;                                       // 0x0A04(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData26[0x10];                                      // 0x0A08(0x0010) MISSED OFFSET
	bool                                               bUnLoadNoGcPackage;                                       // 0x0A18(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x0A19(0x0007) MISSED OFFSET
	TArray<class UPackage*>                            NoGcPackages;                                             // 0x0A20(0x0010) (ZeroConstructor)
	bool                                               bFlushAsyncLoadingBeforeGC;                               // 0x0A30(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableJMLog;                                             // 0x0A31(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData28[0xB6];                                      // 0x0A32(0x00B6) MISSED OFFSET
	bool                                               bEnableH5Cache;                                           // 0x0AE8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCheckWorldNameForLoadConfig;                             // 0x0AE9(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData29[0x6];                                       // 0x0AEA(0x0006) MISSED OFFSET
	class UColorBlindnessMgr*                          ColorBlindnessMgrInstace;                                 // 0x0AF0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNativeHUDTickContainer>             NativeHUDTickList;                                        // 0x0AF8(0x0010) (ZeroConstructor)
	bool                                               IsNativeHUDTickLock;                                      // 0x0B08(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsShutDown;                                               // 0x0B09(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x2];                                       // 0x0B0A(0x0002) MISSED OFFSET
	int                                                NativeHUDTickIndex;                                       // 0x0B0C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAsyncLoadHelper*                            AsyncLoadHelper;                                          // 0x0B10(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BattleUtilsClassName;                                     // 0x0B18(0x0010) (ZeroConstructor, Config)
	class UBattleUtils*                                BattleUtils;                                              // 0x0B28(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x8];                                       // 0x0B30(0x0008) MISSED OFFSET
	struct FScriptDelegate                             OnImagePickDetectEvent;                                   // 0x0B38(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnVideoPickEvent;                                         // 0x0B48(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnPermissionResultEvent;                                  // 0x0B58(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnDeviceRotationChangedEvent;                             // 0x0B68(0x0010) (ZeroConstructor, InstancedReference)
	struct FString                                     CurrentMapName;                                           // 0x0B78(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameFrontendHUD");
		return pStaticClass;
	}


	void UnRegisterUIShowHideEventDelegate(const struct FString& Source);
	void TimeStatisticStop(int Type, const struct FString& Name);
	void TimeStatisticStart(int Type);
	void TickUdpCollector(float DeltaTime);
	void StatisVisibilityWidget(class UWidget* Widget);
	void StatisLoadedTexture(class UTexture* Texture);
	bool StartUpdate();
	bool StartGrayUpdate();
	void StartDolphinUpdateAfterCDNUpdateFailed();
	void StartCDNUpdateAfterDolphinUpdateFailed();
	void ShutdownUnrealNetwork();
	void SetShouldShowAdaptTipInLobby(bool bShoudShow);
	void SetGameSubMode(const struct FString& SubMode);
	void SetGameStatusMap(TMap<struct FString, struct FString>* InGameStatusMap);
	void SetClientEnterBattleStage(const struct FString& InStageStr);
	void SetAccountByWebLogin(int Channel, const struct FString& OpenID, const struct FString& UserId, const struct FString& TokenID, int expireTime);
	void RetryDownload();
	void RetryCDNDownload();
	void RequestPhotoPermission(const struct FScriptDelegate& PermissionResultEvent);
	void RequestCameraPermission(const struct FScriptDelegate& PermissionResultEvent);
	void ReportNetContinuousSaturate();
	void RemoveSuppotAdaptationBind(class UPanelSlot* PanelSlot);
	void ReleaseLuaBlueprintSysMgr();
	void ReleaseInGameUIManager();
	void ReleaseBattleUtils();
	void RegisterUserSettingsDelegate(const struct FScriptDelegate& Delegate);
	void RegisterUIShowHideEventDelegate(const struct FString& Source, const struct FScriptDelegate& Delegate);
	void PickVideo(const struct FScriptDelegate& VideoPickEvent, int MaxSize, float MaxDuration);
	void PickImageDetectQRCode(const struct FScriptDelegate& ImagePickDetectEvent);
	void OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo);
	void OnWebviewActionNotify(const struct FString& URL);
	void OnUAAssistantEvent(const struct FUAAssistantInfoWrapper& UAAssistentInfo);
	void OnSDKCallbackEvent(const struct FSDKCallbackInfoWrapper& sdkCallbackInfo);
	void OnRequestComplete(const struct FCDNDownloaderInfo& Info);
	void OnRefreshAccountInfo(bool Result, int InChannel, const struct FString& InOpenid);
	void OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo);
	void OnPlatformFriendNotify(const struct FPlatformFriendInfoMap& PlatformFriendInfoMap);
	void OnNotUpdateFinished();
	void OnLoginFlowNotify(int _Flow, int _Param, const struct FString& ExtraData);
	void OnHttpImgResponse(class UTexture2D* Texture, class UImageDownloader* downloader);
	void OnGroupNotify(const struct FGroupInfoWrapper& groupInfo);
	void OnGetTicketNotify(const struct FString& Ticket);
	void OnGetShortUrlNotify(int Ret, const struct FString& shortUrl);
	void OnGetCountryNoNotify(int Country);
	void OnGenQRImgNotify(int Ret, int Size, const struct FString& imgPath);
	void OnGameMasterEvent(const struct FString& EventName, int Ret);
	void OnConnectorNetStateChangeNotify(int State, int EventParam1, int EventParam2, int EventParam3);
	void OnCheckUpdateStateFinished(const struct FDownloaderInfo& Info);
	void OnAreaChanged(const struct FString& InArea);
	void NotifyLoadingUIOperation(int OperationType);
	void MakeToSuppotAdaptation(class UPanelSlot* PanelSlot);
	void LuaDoString(const struct FString& LuaString);
	bool IsWindowOB();
	bool IsODPaksBinLoaded();
	bool IsInstallPlatform(const struct FString& Platform);
	bool IsCEHideLobbyUI();
	bool HasAnyNetMsgToHandle();
	bool GetWidgetRenderCanChange();
	class UVoiceSDKInterface* GetVoiceSDKInterface();
	class USaveGame* GetUserSettings();
	class UGDolphinUpdater* GetUpdater();
	class UTranslator* GetTranslator();
	bool GetShouldShowAdaptTipInLobby();
	class USettingSubsystem* GetSettingSubsystem();
	class UGCPufferDownloader* GetPufferDownloader();
	struct FString GetPlayerStatusReportInfo();
	struct FString GetPingReportInfo();
	int GetPhotoPermission();
	struct FString GetPacketLossReportInfo();
	class ULuaStateWrapper* GetLuaStateWrapper();
	class ULuaEventBridge* GetLuaEventBridge();
	class ULuaBlueprintMgr* GetLuaBlueprintSysMgr();
	class UHttpWrapper* GetHttpWrapper();
	struct FString GetGameSubMode();
	class AGameStateBase* GetGameState();
	struct FString GetFPSReportInfo();
	class UEffectSettingMgr* GetEffectSettingMgr();
	int GetDetailNetInfoFromDPM();
	class UColorBlindnessMgr* GetColorBlindnessMgr();
	class UObject* GetClientNetObj();
	struct FString GetClientEnterBattleStageCostTime();
	struct FString GetClientEnterBattleStage();
	int GetCameraPermission();
	class UBugReporter* GetBugReporter();
	class UBattleUtils* GetBattleUtils();
	struct FString GetBattleIDHexStr();
	class UAsyncLoadHelper* GetAsyncLoadHelper();
	void FinishModifyUserSettings();
	bool EnableLobbyEntry();
	void EnableFPSAndMemoryLog(bool bEnable);
	void DispatchLongTimeNoOperation(int TimeOutCounter);
	void DestroyDolphin();
	float CvmRotateClockwise(float Yaw, float DeltaTime);
	class UTexture2D* CreateQRCodeTexture(const struct FString& Text);
	void CreateInGameUIManager();
	void CreateBattleUtils();
	void CallGlobalScriptFunctionWithString(const struct FString& InFunctionName, const struct FString& Arg1);
	void CallGlobalScriptFunction(const struct FString& InFunctionName);
	void BeginModifyUserSettings();
	void BattleUtilsGameEnd();
	void AfterLoadedEditorLogin();
	void AddAdaptationWidgetDelegateEx(class UPanelSlot* PanelSlot);
	void AddAdaptationWidgetDelegate(class UPanelSlot* PanelSlot);
};


// Class Client.GameFrontendUtils
// 0x0000 (0x0378 - 0x0378)
class UGameFrontendUtils : public UFrontendUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameFrontendUtils");
		return pStaticClass;
	}

};


// Class Client.GameJoyInterface
// 0x0020 (0x0048 - 0x0028)
class UGameJoyInterface : public UObject
{
public:
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameJoyInterface");
		return pStaticClass;
	}


	void ShareVideo(int Channel);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void OnVideoShare(const struct FString& Msg);
	void OnShowVideoPlayer(int IsShow);
	void OnRecordingStart(int status);
	void OnRecordingEnd(int64_t Duration);
	void OnManualRecordingStart(int status);
	void OnCheckSDKPermission(bool IsSuccess);
	void OnCheckSDKFeature(int sdkFeatureInt);
	bool IsSDKFeatureSupport();
	class UGameJoyInterface* GetInstance();
};


// Class Client.GDolphinUpdater
// 0x02C0 (0x02E8 - 0x0028)
class UGDolphinUpdater : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET
	TMap<struct FString, struct FString>               pakHashList;                                              // 0x0078(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x88];                                      // 0x00C8(0x0088) MISSED OFFSET
	bool                                               AllowIOSBGDownload;                                       // 0x0150(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               AllowIOSBGDownloadPush;                                   // 0x0151(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DisableJPKRBGDownloadNightPush;                           // 0x0152(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0153(0x0001) MISSED OFFSET
	int                                                DisableJPKRBGDownloadNightPushAfterHour;                  // 0x0154(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DisableJPKRBGDownloadNightPushBeforeHour;                 // 0x0158(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                IOSBGDownloadPushDelaySeconds;                            // 0x015C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableRandomBackupURL;                                    // 0x0160(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnablePufferUpdate;                                       // 0x0161(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               UseLocalSrcVersionWhenUpdateFailed;                       // 0x0162(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x15];                                      // 0x0163(0x0015) MISSED OFFSET
	struct FString                                     UpdateInfoPath;                                           // 0x0178(0x0010) (ZeroConstructor, Config)
	bool                                               OpenDebugLog;                                             // 0x0188(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x15F];                                     // 0x0189(0x015F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GDolphinUpdater");
		return pStaticClass;
	}


	void StartAppUpdate();
	void SetEnableCDNGetVersion(bool Enable);
	void OnUpdateError(int curVersionStage, int ErrorCode);
	void OnDolphinBGDownloadDone();
	void OnAreaChanged(const struct FString& InArea);
	bool IsUpdating();
	bool IsGrayUpdate();
	bool IsExamine();
	void Install();
	int GetTotalValue();
	int GetCurValue();
	int GetCurStage(float* percent, int* GetCurVal, int* GetMaxVal);
	float GetCurPercent();
	uint32_t GetChannelIDWithHUD(class UGameFrontendHUD* InGameFrontendHUD);
	uint32_t GetChannelID();
	void FinishUpdate();
	void FinishPufferUpdate();
	void EnableIOSBGDownload4G(bool bEnableCellularAccess);
	bool EnableCDNGetVersion();
	void DynamicAdjustDolphinSystemParameter(TMap<int, struct FString> InConiguration);
	void ContinueUpdate();
	void CancelUpdate();
	void CancelAppUpdate();
};


// Class Client.AvatarItemDownloadPuffer
// 0x0000 (0x0030 - 0x0030)
class UAvatarItemDownloadPuffer : public UAvatarItemDownload
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AvatarItemDownloadPuffer");
		return pStaticClass;
	}


	void StartDownloadItem(uint32_t ItemId, uint32_t Priority, const struct FScriptDelegate& OnItemDownloadDelegate);
	void StartBatchDownloadItem(TArray<uint32_t> ItemIDs, uint32_t Priority, const struct FScriptDelegate& OnBatchItemDownloadDelegate);
};


// Class Client.GCPufferDownloader
// 0x0508 (0x0530 - 0x0028)
class UGCPufferDownloader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3A8];                                     // 0x0028(0x03A8) MISSED OFFSET
	bool                                               Disable;                                                  // 0x03D0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x97];                                      // 0x03D1(0x0097) MISSED OFFSET
	struct FString                                     DownloadDir;                                              // 0x0468(0x0010) (ZeroConstructor, Config)
	struct FString                                     PufferTmpDir;                                             // 0x0478(0x0010) (ZeroConstructor, Config)
	uint32_t                                           CleanFlagVer;                                             // 0x0488(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	TArray<struct FString>                             CleanFileNamePattern;                                     // 0x0490(0x0010) (ZeroConstructor, Config)
	bool                                               PreFetchPakEnable;                                        // 0x04A0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               PreFetchFileClearEnable;                                  // 0x04A1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               PreFetchConvertEnable;                                    // 0x04A2(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x04A3(0x0005) MISSED OFFSET
	TArray<struct FString>                             PreFetchPakNames;                                         // 0x04A8(0x0010) (ZeroConstructor, Config)
	uint32_t                                           PreFetchReserveredDiskSpace;                              // 0x04B8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               PreFetchODPak_Enable;                                     // 0x04BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04BD(0x0003) MISSED OFFSET
	int                                                PreFetchODPaks_MaxNum;                                    // 0x04C0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PreFetchODPaks_BatchSize;                                 // 0x04C4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PreFetchODPaks_FetchedNum;                                // 0x04C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PreFetchODPaks_FetchedIndex;                              // 0x04CC(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             PreFetchODPaks_Filenames;                                 // 0x04D0(0x0010) (ZeroConstructor, Config)
	bool                                               AllowIOSBGDownload;                                       // 0x04E0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               AllowIOSBGDownloadPush;                                   // 0x04E1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DisableJPKRBGDownloadNightPush;                           // 0x04E2(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x04E3(0x0001) MISSED OFFSET
	int                                                DisableJPKRBGDownloadNightPushAfterHour;                  // 0x04E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DisableJPKRBGDownloadNightPushBeforeHour;                 // 0x04E8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                IOSBGDownloadPushDelaySeconds;                            // 0x04EC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DisableBGDownloadNotification;                            // 0x04F0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	int                                                OptiHttpConfig_uEnableAverageShardingStrategy;            // 0x04F4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                OptiHttpConfig_uAverageShardingSize;                      // 0x04F8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                OptiHttpConfig_uEnableDynamicExpansionMaxTask;            // 0x04FC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PreFetchODPaks_StartTime;                                 // 0x0500(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	struct FString                                     PreFetchODPaks_ConfigName;                                // 0x0508(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData08[0x18];                                      // 0x0518(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GCPufferDownloader");
		return pStaticClass;
	}


	bool StopTask(uint64_t TaskID);
	int StopMergeBinDiffPak(int outterTaskID);
	bool StopCheckDownloadFileFraming(int outterTaskID);
	void StopBGDownloadNotification();
	bool StopAllTask();
	void StartDownloadItem(uint32_t ItemId, uint32_t Priority, const struct FScriptDelegate& downloadDelegate);
	void StartBGDownloadNotification(uint64_t InDownloadedSize);
	void StartBatchDownloadItem(TArray<uint32_t> ItemIDs, uint32_t Priority, const struct FScriptDelegate& OnBatchItemDownloadDelegate);
	void SetTempProductIdBase(int ProductIdRaw);
	void SetPrefetchConfig(bool pakEnable, bool fileClearEnable, bool convertEnable, int reserveredDiskSpace, const struct FString& FileList, int InPreFetchODPaksMaxNum, int InPreFetchODPaksBatchSize);
	void SetIOSBGDownloadAttribute(bool bEnableCellularAccess, bool bEnableResumeData, int nMinFileSize, int nMaxTasks);
	bool SetImmDLPollingTime(int InPollingTime);
	bool SetImmDLMaxTask(int InMaxTask);
	bool SetImmDLMaxSpeed(uint64_t MaxSpeed);
	bool SetImmDLMaxDownloadsPerTask(int InMaxDownloadsPerTask);
	bool SetImmDLGapSize(int InGapSize);
	void SetBattleDownloadSwitch(bool Enable);
	int ReturnSplitMiniPakFilelist_LuaState();
	int ReturnSplitLobbyPakFileList_LuaState();
	int ReturnLocalFiles_LuaState();
	uint64_t RequestFile(const struct FString& FilePath, bool ForceUpdate, const struct FString& InUA);
	bool RemountPakFiles();
	struct FString ReadFile(const struct FString& Filename);
	bool PreFetchPakFiles();
	int PreFetchODPakFilesUpdate();
	bool PreFetchODPakFilesPreProcess(bool Start);
	bool PreFetchODPakFilesPostProcess(int ErrorCode);
	bool PreFetchODPakFiles(bool Start);
	void OnItemDownloadedInFighting(const struct FString& PackHash, const struct FString& ErrorCode);
	void OnHashGenerateFinished(int outterTaskID, const struct FString& hashCode);
	int MoveFileTo(const struct FString& Filename, const struct FString& From, const struct FString& To);
	int MoveFile(const struct FString& From, const struct FString& To);
	int MergeBinDiffPak(int outterTaskID, const struct FString& PakFilenameOld, const struct FString& PakFilenameDiff, const struct FString& PakFilenameNew, bool fast);
	bool IsODPaks(const struct FString& FilePath);
	bool IsODFileExists(const struct FString& Path);
	bool IsInitSuccess();
	bool IsFileReady(const struct FString& FilePath);
	bool IsFileExist(const struct FString& Filename, const struct FString& extension);
	bool InitializeODPaks();
	struct FString GetTempWorkPath();
	void GetProductIDBase(TArray<int>* ProductIDs);
	void GetProductID(TArray<int>* ProductIDs);
	int GetODPakNum();
	struct FString GetODPakName(const struct FString& Path);
	uint32_t GetInitErrcode();
	uint64_t GetFileSizeCompressed(const struct FString& FilePath);
	float GetFileSize(const struct FString& Filename);
	struct FString GetDownloadPath();
	float GetCurrentSpeed();
	int GetBatchODPaksDownloadList_LuaState();
	void EnableUseOldInterface(bool Enable);
	void DynamicAdjustPufferSystemParameter(int InPufferParameterKey, const struct FString& InPufferParameterValue);
	bool DeleteFileEvenIfUnfinished(const struct FString& FilePath);
	bool DeleteFile(const struct FString& fullPath);
	bool ConvertPreFetchFiles();
	struct FString ConvertItemIdToPakName(uint32_t ItemId);
	bool ClearUselessODPaks();
	bool ClearPreFetchODPaksFiles();
	bool ClearPreFetchFiles();
	bool CheckDownloadFileFraming(int outterTaskID, const struct FString& Filename, int chunkSize);
};


// Class Client.GMLogShare
// 0x0008 (0x0030 - 0x0028)
class UGMLogShare : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GMLogShare");
		return pStaticClass;
	}


	void ShareLogFile(const struct FString& InLogFileName);
	void Init();
};


// Class Client.IMSDKNotice
// 0x0080 (0x00A8 - 0x0028)
class UIMSDKNotice : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.IMSDKNotice");
		return pStaticClass;
	}


	TArray<struct FIMSDKNoticeInfo> GetNotice(const struct FString& Scene);
	class UIMSDKNotice* GetInstance();
	void ClearNotice();
};


// Class Client.HttpWrapper
// 0x0088 (0x00B0 - 0x0028)
class UHttpWrapper : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnResponseEvent;                                          // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnImageDownloadResponseEvent;                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0048(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.HttpWrapper");
		return pStaticClass;
	}


	void SimplePostForLua(const struct FString& URL, const struct FString& Content, int Priority, int QueueType);
	void SetQueueSize(int QueueType, int InSize);
	void SetQueueEnable(bool InEnableQueue);
	void SetPoolEnable(bool InEnablePool);
	int RequestForLua(const struct FString& URL, const struct FString& Verb, const struct FString& Content, int Priority, int QueueType, TMap<struct FString, struct FString>* Headers);
	int ImageDownloadRequestForLua(const struct FString& URL, const struct FString& Verb, const struct FString& Content, int Priority, TMap<struct FString, struct FString>* Headers);
	bool GetQueueEnable();
	bool GetPoolEnable();
	int GetInternalIndex();
	void CancelRequestAll(int QueueType);
	void CancelRequest(int QueueType, int ReqIndex);
};


// Class Client.ImageDownloader
// 0x0088 (0x00B0 - 0x0028)
class UImageDownloader : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     FileURL;                                                  // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CompreesedFileUrl;                                        // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     FileSavePath;                                             // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CompreesedFileSavePath;                                   // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     UrlHash;                                                  // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CompreesedUrlHash;                                        // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               InvalidImageFormat;                                       // 0x00A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SaveDiskFile;                                             // 0x00A9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceUpdate;                                              // 0x00AA(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00AB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ImageDownloader");
		return pStaticClass;
	}


	void Start(const struct FString& URL);
	class UImageDownloader* MakeDownloaderInGame();
	class UImageDownloader* MakeDownloader();
	class UTexture2D* GetTextureFromUrlWithoutDownload(const struct FString& URL);
	struct FString CheckAndGetEncryptUrl(struct FString* InURL);
};


// Class Client.ImageDownloadUtil
// 0x0000 (0x0028 - 0x0028)
class UImageDownloadUtil : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ImageDownloadUtil");
		return pStaticClass;
	}


	void SaveImageDownloadDiskFile(TArray<unsigned char> OutArray, const struct FString& SavePath);
	class UTexture2D* GetTextureFromMemory(const struct FString& PathName);
	class UTexture2D* GetTexture2DFromDisk(const struct FString& SavePath, bool IsCompressed);
	class UTexture2D* GetTexture2DFromArrayWithSRGB(TArray<unsigned char> OutArray, bool IsCompressed, bool bSRGB);
	class UTexture2D* GetTexture2DFromArray(TArray<unsigned char> OutArray, bool IsCompressed);
	int GetLocalImageFormat(const struct FString& Path);
	void CheckDiskFile(const struct FString& ImgDir, const struct FString& SubDir);
};


// Class Client.InGameUIManager
// 0x01F8 (0x0378 - 0x0180)
class UInGameUIManager : public UGameBusinessManager
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0180(0x0008) MISSED OFFSET
	TArray<class UClass*>                              InGameUIList;                                             // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0198(0x0068) MISSED OFFSET
	TMap<struct FString, TWeakObjectPtr<class UUAEUserWidget>> WidgetsMap;                                               // 0x0200(0x0050) (ExportObject, ZeroConstructor)
	TMap<int, struct FDynamicWidgetAsyncLoadData>      PendingAsyncLoadRequests;                                 // 0x0250(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xD8];                                      // 0x02A0(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.InGameUIManager");
		return pStaticClass;
	}


	void SubUIWidgetListWithMountData(TArray<struct FInGameWidgetData> InGameWidgetDataList, TArray<struct FString> GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly, int inUIControlState);
	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly);
	void SubDynamicUIWidgetList(TArray<struct FDynamicWidgetData> DynamicWidgetMap);
	void OnAsyncLoadWidgetClassObj(class UObject* InClassObj, int RequestID);
	void HandleUIMessage(const struct FString& UIMessage);
	void HandleMountWidget(class UInGameUIManager* IngameManager);
	void HandleDynamicDestroy();
	void HandleDynamicCreation(bool isAsyncLoad);
	void GetWidgetHandleAsyncWithCallBack(const struct FString& WidgetKey, const struct FScriptDelegate& InCallback);
	class UUAEUserWidget* GetWidgetHandle(const struct FString& WidgetKey);
	class UCanvasPanel* GetMountCanvasPanel(const struct FString& MountOuterName, const struct FString& MountName);
	void ChangeSubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList);
	void ChangeInvalidWorldNameList(TArray<struct FString> InList);
};


// Class Client.IntlSDKComplianceHelper
// 0x0068 (0x0090 - 0x0028)
class UIntlSDKComplianceHelper : public UObject
{
public:
	struct FString                                     IntlSdkGameId;                                            // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FString                                     IntlSdkUrl;                                               // 0x0038(0x0010) (ZeroConstructor, Config)
	struct FString                                     IntlSdkUrlDebug;                                          // 0x0048(0x0010) (ZeroConstructor, Config)
	struct FString                                     IntlSdkKey;                                               // 0x0058(0x0010) (ZeroConstructor, Config)
	bool                                               IntlSdkEnable;                                            // 0x0068(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               IntlLogEnable;                                            // 0x0069(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
	struct FString                                     IntlHttpDnsIP;                                            // 0x0070(0x0010) (ZeroConstructor, Config)
	struct FString                                     IntlPf;                                                   // 0x0080(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.IntlSDKComplianceHelper");
		return pStaticClass;
	}


	bool SetUserProfile(const struct FString& InRegion);
	void SetParentStatus(int ParentCertificateStatus);
	void SetLogConfig(bool enableConsoleLog, bool enableFileLog, int LogLevel);
	void SetEUAgreeStatus(int AgreeStatus);
	void SetAdulthood(int AgeStatus);
	void SendVoiceControlEmail(const struct FString& InEmail, const struct FString& InUserName);
	void SendEmail(const struct FString& InEmail, const struct FString& UserName, int InScene);
	void QueryUserStatus();
	void QueryIsEEA(const struct FString& InRegion);
	void QueryConfig();
	void OpenConsentSocial(const struct FString& InBaseUrl, const struct FString& InParamJson, const struct FString& InExtraJson);
	void OpenAgeGate(const struct FString& InBaseUrl, const struct FString& InParamJson, const struct FString& InExtraJson);
	void OnMSDKEvnSwitched(int Env);
	class UIntlSDKComplianceHelper* GetInstance();
	void ComplianceInit();
	void CommitBirthday(const struct FString& InBirthday);
	void ClearUserStatus();
	void ChangeRegion(const struct FString& InRegion);
};


// Class Client.LaggingReporter
// 0x0070 (0x0098 - 0x0028)
class ULaggingReporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0050(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LaggingReporter");
		return pStaticClass;
	}

};


// Class Client.LiveBroadcast
// 0x0010 (0x0038 - 0x0028)
class ULiveBroadcast : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LiveBroadcast");
		return pStaticClass;
	}


	void SetFullScreen(bool FullScreen);
	void OpenLiveBroadcast(const struct FString& URL, float Margin);
	class ULiveBroadcast* GetInstance();
	void CloseWebView();
	void C2JSetString(const struct FString& str);
	void C2JSetIndex(int Index);
};


// Class Client.LoadTexture
// 0x0000 (0x0028 - 0x0028)
class ULoadTexture : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LoadTexture");
		return pStaticClass;
	}


	class UTexture2D* LoadTexture2D(const struct FString& ImagePath, bool* IsValid, int* OutWidth, int* OutHeight);
	class UTexture2D* GetTexture2DFromDiskFile(const struct FString& FilePath);
};


// Class Client.LobbyChatSecurity
// 0x0000 (0x0028 - 0x0028)
class ULobbyChatSecurity : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbyChatSecurity");
		return pStaticClass;
	}


	struct FString GetKey(const struct FString& OpenID);
};


// Class Client.LobbyDecalBakingComponent
// 0x0030 (0x03D0 - 0x03A0)
class ULobbyDecalBakingComponent : public USceneComponent
{
public:
	TArray<struct FDecalParameter>                     DecalParams;                                              // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UTextureRenderTarget2D*                      DecalRenderTarget;                                        // 0x03B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADecalBakingActor*                           DecalBakingActor;                                         // 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RTSize;                                                   // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x03C4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbyDecalBakingComponent");
		return pStaticClass;
	}


	void SwitchDecalParam(int From, int To);
	bool SavePng(class USceneCaptureComponent2D* SceneCapComp, const struct FString& ImagePath, const struct FLinearColor& ClearColor);
	void ReplaceOneDecalParam(class UStaticMeshComponent* MeshComp, int Index, class UDecalBakingParameterComponent* DecalParamComponent);
	void Init();
	void DelOneDecalParam(int Index);
	void Baking(class UStaticMeshComponent* MeshComp, class UMaterial* DecaledMaterial, bool Async);
	void AddOneDecalParam(class UStaticMeshComponent* MeshComp, class UDecalBakingParameterComponent* DecalParamComponent);
};


// Class Client.LobbyMatChgActor
// 0x0018 (0x04C8 - 0x04B0)
class ALobbyMatChgActor : public AActor
{
public:
	class UStaticMeshComponent*                        stMesh;                                                   // 0x04B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FLobbyBgMatData>                     matWaitToChangeList;                                      // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbyMatChgActor");
		return pStaticClass;
	}


	void ChangeMaterialToIdx(int idx);
};


// Class Client.LobbyModelUtils
// 0x0000 (0x0028 - 0x0028)
class ULobbyModelUtils : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbyModelUtils");
		return pStaticClass;
	}


	void TickAndRefreshBoneForGivenSkMeshComp(class USkeletalMeshComponent* InSkMesh);
	struct FAABBBox GetActorBoundingBox(class AActor* InActor, bool EnableDrawDebugBox);
	bool DeprojectScreenToWorldFast(class APlayerController* Player, const struct FVector2D& ScreenPosition, struct FVector* WorldPosition, struct FVector* WorldDirection);
};


// Class Client.LobbySceneCaptureActor
// 0x0070 (0x0520 - 0x04B0)
class ALobbySceneCaptureActor : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnCaptureError;                                           // 0x04B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     PicturePath;                                              // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector2D                                   RTSize;                                                   // 0x04D0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               AlphaFullCorrect;                                         // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlphaReverse;                                             // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04DA(0x0002) MISSED OFFSET
	float                                              AlphaRate;                                                // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlphaChannelEnable;                                       // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GammaCorrect;                                             // 0x04E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HSSave;                                                   // 0x04E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ClearDrawRT;                                              // 0x04E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	class UMaterialInstance*                           WriteMat;                                                 // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      DrawRT;                                                   // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneCaptureComponent2D*                    Capture2D;                                                // 0x04F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D*                    AlphaCapture2D;                                           // 0x0500(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScreenWidth;                                              // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenHeight;                                             // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   AABBBoxLeftPoint;                                         // 0x0510(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   AABBBoxRightPoint;                                        // 0x0518(0x0008) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbySceneCaptureActor");
		return pStaticClass;
	}


	void ResizeRT();
	void LogError(const struct FString& FilePath);
	void Capture();
};


// Class Client.LuaBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULuaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaBlueprintLibrary");
		return pStaticClass;
	}


	struct FLuaBPVar StringToLVar(class UObject* WorldContextObject, const struct FString& Value);
	void RequireAndCallLuaWithArgs(class UObject* WorldContextObject, const struct FLuaBPVar& InD, const struct FLuaBPVar& InC, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, struct FString* FunctionName, struct FString* ModulePath, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	struct FLuaBPVar ObjectToLVar(class UObject* WorldContextObject, class UObject* O);
	struct FString LVarToString(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	class UObject* LVarToObject(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	int LVarToInt(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	float LVarToFloat(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	bool LVarToBool(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	struct FLuaBPVar IntToLVar(class UObject* WorldContextObject, int Value);
	struct FLuaBPVar FloatToLVar(class UObject* WorldContextObject, float Value);
	void CallLuaWithMultiArgs(class UObject* WorldContextObject, const struct FLuaBPVar& InF, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, const struct FLuaBPVar& InC, const struct FLuaBPVar& InD, const struct FLuaBPVar& InE, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	void CallLuaWithHUD(class UObject* WorldContextObject, class UGameFrontendHUD* GameFrontendHUD, const struct FLuaBPVar& InD, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, const struct FLuaBPVar& InC, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	void CallLuaWithArgs(class UObject* WorldContextObject, const struct FLuaBPVar& InD, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, const struct FLuaBPVar& InC, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	void CallLua(class UObject* WorldContextObject, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	struct FLuaBPVar BoolToLVar(class UObject* WorldContextObject, bool Value);
};


// Class Client.LuaBlueprintMgr
// 0x0058 (0x0080 - 0x0028)
class ULuaBlueprintMgr : public UObject
{
public:
	TMap<struct FString, class ULuaBluepirntSys*>      SystemMap;                                                // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaBlueprintMgr");
		return pStaticClass;
	}


	class ULuaBluepirntSys* GetSystemByName(const struct FString& SystemName);
	void AddSystem(const struct FString& SystemName, const struct FString& BPPath);
};


// Class Client.LuaBluepirntSys
// 0x0070 (0x0098 - 0x0028)
class ULuaBluepirntSys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaBluepirntSys");
		return pStaticClass;
	}


	void Init();
};


// Class Client.LuaClassObj
// 0x0050 (0x0518 - 0x04C8)
class ALuaClassObj : public ALuaContext
{
public:
	class UGameBusinessManager*                        pManager;                                                 // 0x04C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04D0(0x0002) MISSED OFFSET
	bool                                               bClearSourceCodeAfterInitialized;                         // 0x04D2(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x45];                                      // 0x04D3(0x0045) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaClassObj");
		return pStaticClass;
	}


	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool bPersistentUI, bool InStatusConcern, bool bDynamicWidget, bool bKeepDynamicWidget);
	void SubShowHideEvent(TArray<struct FString> WidgetPathList);
	void SubDefaultSceneCamera(int sceneCameraIndex);
	void SubDefaultChildUI(TArray<struct FString> childList);
	void SubDefaultBaseUI(const struct FString& baseUI);
	void SubCollapseWidgetList(const struct FString& RootWidgetName, TArray<struct FString>* ChildWidgetNames);
	void SetWidgetZorder(int Index, int ZOrder);
	void RestoreWidgetZorder(int Index);
	void RestoreAllWidgetZorder();
	bool IsTopStackPanel();
	bool IsPushedPanel();
	void HandleUIMessageNoFetch(const struct FString& UIMessage);
	void HandleUIMessage(const struct FString& UIMessage);
	void HandleStopAsyncLoad();
	void HandleDynamicDestroy();
	void HandleDynamicCreationInternal(bool isAsyncLoad);
	void HandleDynamicCreation(bool isAsyncLoad);
	void HandleCollapseWidgetList(const struct FString& RootWidgetName);
	struct FString GetTopStackPanelSrcTag();
	struct FString GetTopStackPanelDstTag();
	struct FString GetGameStatus();
	void ChangeSubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList);
	void AddToTopStackPanel();
};


// Class Client.MaskBox
// 0x0048 (0x0160 - 0x0118)
class UMaskBox : public UContentWidget
{
public:
	int                                                Phase;                                                    // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PhaseCount;                                               // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreStretch;                                            // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateRenderTarget;                                       // 0x0121(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0122(0x0002) MISSED OFFSET
	int                                                MaskType;                                                 // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MaskTransformPivot;                                       // 0x0128(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   MaskTransformScale;                                       // 0x0130(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MaskTransformAngle;                                       // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          MaskMaterial;                                             // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MaskTexture;                                              // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0150(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.MaskBox");
		return pStaticClass;
	}


	void SetMaskTransformScale(const struct FVector2D& Scale);
	void SetMaskTransformPivot(const struct FVector2D& Pivot);
	void SetMaskTransformAngle(float Angle);
	void SetMaskMaterial(class UMaterialInterface* EffectMaterial);
	void SetBrushFromTexture(class UTexture2D* Texture);
	struct FVector2D GetVector2D__DelegateSignature();
	class UMaterialInstanceDynamic* GetMaskMaterial();
};


// Class Client.MaskImage
// 0x0038 (0x02C0 - 0x0288)
class UMaskImage : public UImage
{
public:
	int                                                MaskType;                                                 // 0x0288(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MaskTransformPivot;                                       // 0x028C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   MaskTransformScale;                                       // 0x0294(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MaskTransformAngle;                                       // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaskMaterial;                                             // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MaskTexture;                                              // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.MaskImage");
		return pStaticClass;
	}


	void SetMaskTransformScale(const struct FVector2D& Scale);
	void SetMaskTransformPivot(const struct FVector2D& Pivot);
	void SetMaskTransformAngle(float Angle);
	void SetMaskTexture(class UTexture2D* Texture);
	void SetMaskMaterial(class UMaterialInterface* InEffectMaterial);
	class UMaterialInstanceDynamic* GetMaskMaterial();
};


// Class Client.NewButton
// 0x0000 (0x0520 - 0x0520)
class UNewButton : public UButton
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.NewButton");
		return pStaticClass;
	}


	void SetClickSound(EButtonClickSoundTypes inSoundType);
};


// Class Client.PandoraV2Helper
// 0x00A8 (0x00D0 - 0x0028)
class UPandoraV2Helper : public UObject
{
public:
	struct FScriptMulticastDelegate                    CallGameDelegate;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    JumpDelegate;                                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    AddUserWidgetToGameDelegate;                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    RemoveUserWidgetFromGameDelegate;                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    PlaySoundDelegate;                                        // 0x0068(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    GetAccountTokenDelegate;                                  // 0x0078(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    GetCurrencyDelegate;                                      // 0x0088(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ShowItemTipsDelegate;                                     // 0x0098(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ShowItemIconDelegate;                                     // 0x00A8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ShowItemDelegate;                                         // 0x00B8(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.PandoraV2Helper");
		return pStaticClass;
	}


	void SetUserData(TMap<struct FString, struct FString> InUserdata);
	void SetSDKVersion(int InSDKVer);
	void SetSDKCoreDataPath(const struct FString& InPath);
	void SetPandoraEnable(bool Enable);
	bool SetLuaCoreData(const struct FString& InFilePath);
	void SetLogEnable(bool Enable);
	void ResumeLuaGC();
	void RefreshUserDataTokens();
	void PauseLuaGC();
	void Init(bool InEnable, int InEnv, bool InEnablePixUI);
	int GetSDKVersion();
	class UPandoraV2Helper* Get();
	void Do(const struct FString& InCmdJson, int InMsgType);
	void Deinit();
	void Close();
};


// Class Client.PublishAreaMgr
// 0x0000 (0x0028 - 0x0028)
class UPublishAreaMgr : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.PublishAreaMgr");
		return pStaticClass;
	}


	void SelectArea(const struct FString& InArea);
	bool IsMultiAreaBuild();
	struct FString GetString(const struct FString& InKey, const struct FString& InDefaultValue);
	struct FString GetPublishAreas();
	int GetInt(const struct FString& InKey, int InDefaultValue);
	bool GetBool(const struct FString& InKey, bool InDefaultValue);
	struct FString GetArea();
};


// Class Client.SavedFileUtil
// 0x0000 (0x0028 - 0x0028)
class USavedFileUtil : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.SavedFileUtil");
		return pStaticClass;
	}


	int LoadFileToArrayAsync(const struct FString& AssetPath, const struct FSluaBPVar& Callback);
	int64_t GetFileCreationTime(const struct FString& Filename);
	void GetDirSizeAsync(const struct FString& Dir, bool Recursive, const struct FSluaBPVar& Callback);
	int64_t GetDirSize(const struct FString& Dir, bool Recursive);
	void FindFilesAsync(const struct FString& Dir, const struct FString& Pattern, bool Recursive, const struct FSluaBPVar& Callback);
	TArray<struct FString> FindFiles(const struct FString& dirPath, const struct FString& extension, bool Recursive);
	void DeleteDirectoryAsync(const struct FString& Dir, const struct FSluaBPVar& Callback);
	bool CleanupDirectoryBySize(const struct FString& Dir, int MaxSize, const struct FString& extension);
	bool CancelLoadSavedFile(int Handle);
};


// Class Client.ScatterPlot
// 0x00E8 (0x01E8 - 0x0100)
class UScatterPlot : public UWidget
{
public:
	struct FSlateBrush                                 PointBrush;                                               // 0x0100(0x00B8) (Edit, BlueprintVisible)
	TArray<struct FScatterPlotPoint>                   Points;                                                   // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UCurveFloat*                                 WeightToScaleCurve;                                       // 0x01C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           WeightToColorCurve;                                       // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScatterPlot");
		return pStaticClass;
	}


	void SetPoints(TArray<struct FScatterPlotPoint> InPoints);
	void SetPointBrush(const struct FSlateBrush& InBrush);
	void Empty(int Slack);
	void Apply();
	void Add(const struct FScatterPlotPoint& InPoint);
};


// Class Client.ScreenInput
// 0x0058 (0x0080 - 0x0028)
class UScreenInput : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnScreenTouch;                                            // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseButtonUp;                                          // 0x0038(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseButtonDown;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMotionDetected;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScreenInput");
		return pStaticClass;
	}


	void Shutdown();
	void OnScreenTouch__DelegateSignature();
	void OnMouseButtonDown__DelegateSignature(const struct FVector2D& ContainerPos);
	void OnMotionDetected__DelegateSignature(const struct FVector& Tilt, const struct FVector& RotationRate, const struct FVector& Gravity, const struct FVector& Acceleration);
	void Init();
};


// Class Client.ScreenshotMaker
// 0x0000 (0x0028 - 0x0028)
class UScreenshotMaker : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScreenshotMaker");
		return pStaticClass;
	}


	void SetDefaultShowUI(bool ShowUI);
	bool SaveToPhotosAlbumEx(const struct FString& pathStr);
	bool SaveToPhotosAlbum(const struct FString& pathStr);
	void ResizePicture(const struct FString& pathStr, float Scale, const struct FString& savePathStr);
	void ReMakePicture(const struct FString& pathStr, const struct FVector4& Vector4);
	struct FString ReMakeMomentPicture(const struct FString& srcPath, const struct FVector4& Vector4);
	bool MosaicPictureByLocalImage(TArray<struct FString> Paths, const struct FString& toPath, int Width, float Scale);
	class UTextureRenderTarget2D* MakeWidgetScreenshot(class UWidget* Widget, const struct FVector2D& DrawSize, float Scale);
	struct FString MakePictureWithName(const struct FString& PicName);
	struct FString MakePictureToLua(class UGameFrontendHUD* InFrontendHUD, const struct FString& tableName, const struct FString& FunctionName, bool isShowUI);
	struct FString MakePictureByName(const struct FString& PicName, bool ShowUI);
	struct FString MakePicture(bool isShowUI);
	struct FString MakeBugReprotPic(bool isShowUI);
	bool HasCaptured(const struct FString& pathStr);
	int GetSaveStatus();
	int GetPhotoHash(const struct FString& pathStr, int algorithmVersion);
	TArray<struct FString> GetMomentThumbPictureFullPathFiles();
	TArray<struct FString> GetMomentPictureFullPathFiles();
	int GetHashFromArray(TArray<unsigned char> inArray, int algorithmVersion);
	void CropAndResizePicture(const struct FString& pathStr, float Scale, float cropWidthScale, float cropHeightScale, const struct FString& savePathStr);
};


// Class Client.ScriptHelperClient
// 0x0000 (0x0028 - 0x0028)
class UScriptHelperClient : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScriptHelperClient");
		return pStaticClass;
	}


	bool WriteFileAtPath(const struct FString& FilePath, const struct FString& Content);
	void WakeupFromSuspendSound();
	int VPNTearDown();
	int VPNSetUserInfo(const struct FString& InUserId, const struct FString& InUserToken, const struct FString& InAppId);
	int VPNSetPortRange(int Min, int Max);
	int VPNSetNodelist(const struct FString& InNodelist);
	int VPNPrepare();
	int VPNHandUp();
	struct FString VPNGetNodeRegionList();
	int VPNDialUp(const struct FString& InRegion);
	void Vibrate(int Param);
	bool VerifySavFileData(int CompressedSize, int UncompressedSize, int ToCheckEndWithCDLength, TArray<unsigned char>* ByteArray);
	bool USFSIsNewestVersion();
	TArray<struct FString> USFSGetUpgradeDiffList();
	void USFSDeletePkg_V2(const struct FString& PkgOrig);
	void USFSDeletePkg(const struct FString& PkgOrig);
	void USFSCacheSysContextUpdatePkgPatch(TMap<struct FString, int> PkgPaths);
	void USFSCacheSysContextUpdatePkgDiff(TArray<struct FString> PkgDiffPaths);
	void USFSCacheSysContextUpdatePkgBinDiff(TArray<struct FString> PkgDiffPaths);
	void USFSCacheSysContextUpdatePkg(TArray<struct FString> PkgPaths);
	void USFSCacheSysContextSwitchWrite(bool bSwitch);
	void USFSCacheSysContextSwitchAll(bool bSwitch);
	void USFSCacheSysContextStart();
	void USFSCacheSysContextChangePkgName(TArray<struct FString> PkgChgInfo);
	void USFSCacheSysContexInit(TMap<struct FString, struct FString> PkgNameToConHash);
	struct FString UserName();
	struct FString UrlEncode(const struct FString& UnencodedString);
	void UQMSetAppVersion(const struct FString& Version);
	void UQMCrashReportStuck(int threadId, int maxChecks, int64_t CheckInterval, const struct FString& Name, const struct FString& Message, const struct FString& ExtraInfo, int dumpNativeType);
	void UQMCrashPutUserData(const struct FString& Key, const struct FString& Value);
	void UQMCrashPostExceptionWithCustomData(int Category, const struct FString& stack, TMap<struct FString, struct FString> customData, int dumpNativeType);
	void UQMCrashPostExceptionFullWithCustomData(int Category, const struct FString& Name, const struct FString& Reason, const struct FString& stack, TMap<struct FString, struct FString> customData, int dumpNativeType);
	void UQMCrashPostExceptionFull(int Category, const struct FString& Name, const struct FString& Msg, const struct FString& stack, int dumpNativeType);
	void UQMCrashPostException(int Category, const struct FString& Reason, int dumpNativeType);
	void UQMCrashLog(int Level, const struct FString& Tag, const struct FString& Log, bool needDump);
	void UploadGainCrashLogBackground();
	void UpdateServerTimeInSec();
	void UpdatePublishRegionForBattle();
	bool UpdatePkgCompressionInfo(TArray<struct FString> PkgList, const struct FString& CompressMethod);
	void UpdateMemResource(const struct FString& ResType, const struct FString& Keyword);
	void UpdateAkAudioDeviceBluetoothDelay(int InDelayTime);
	void UnsubscribeFromTopic(const struct FString& Topic);
	bool UnmountPakFile(const struct FString& InPakFilename);
	void UnmapUnusedMap();
	void UnitTestODPaksOpen(int fileCount, int Times, int threadNum);
	void TVMacroTesting();
	void TrimEngineMemory();
	void TriggerTouchEvent(float X, float Y, int event_type);
	void TriggerTestCmd(const struct FString& Cmd);
	void TriggerOOMCrash();
	void TriggerNativeDump(int DumpCount, double Timespan, int NativeDumpType);
	void TriggerLoginCrashTest(int Type);
	void TriggerLobbyCrashTest(int Type);
	void TriggerBlockAndroidANR();
	void TPerforPlatReport(int Type, const struct FString& ExtraInfo, bool Send);
	void TPerforPlatPostLargeValueS(const struct FString& catgory, const struct FString& Key, const struct FString& Value);
	void TPerforPlatMarkTime(int Type);
	void TPerforPlatMarkLevelLoad(const struct FString& SceneName, int DeviceLevel);
	void TPerforPlatMarkLevelFin();
	void TPerforPlatDisconnectReport(class UGameFrontendHUD* GameFrontendHUD, int EventID);
	void TPerforPlatDataReport(class UGameFrontendHUD* GameFrontendHUD, int EventID, const struct FString& EventInfo);
	void TMFPSwitchRichTapMode(const struct FString& Mode);
	void TMFPStopRichTap();
	void TMFPStartRichTapWithData(const struct FString& InKey, TMap<struct FString, struct FString> InMapData);
	void TMFPStartRichTap(const struct FString& Filename);
	struct FString TMFPLoadHeFile(const struct FString& StrFilePath);
	struct FString TMFPGetRichTapSupport();
	struct FString TMFPGetRichTapAmplitudeSupport();
	void TestSaveStringToFile(const struct FString& String, const struct FString& TargetDir, const struct FString& FullPathName);
	void TestLoadGameSlotMultiThread();
	void TestLoadGameSlot();
	uint64_t TestCallCvmFuncWithVarArg(int FuncID, TArray<struct FString> Arguments);
	int Tea2Encrypt_LuaState();
	int Tea2Decrypt_LuaState();
	int TakeHighResScreenshot_LuaState();
	bool TakeHighResScreenshot(const struct FString& Filename, int ResolutionX, int ResolutionY, float ResolutionScale);
	struct FString SystemLanguageId();
	void SyncLoadPackageUpdateCurrentWorldStage(const struct FString& WorldStage);
	void SyncLoadPackageUpdateCurrentWorldName(const struct FString& WorldName);
	void SyncLoadPackageInfoCollect(const struct FString& PackageName, const struct FString& WorldName);
	TArray<struct FString> SyncLoadPackageGetPackageListForWorld(const struct FString& WorldName);
	void SyncLoadInfoCollector_Reset();
	void SyncLoadInfoCollector_OnLevelStart();
	void SyncLoadInfoCollector_OnLevelEnd();
	void SwitchUser(bool useExternalAccount, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void SwitchSceneCamera(class UGameFrontendHUD* GameFrontendHUD, const struct FString& SceneCameraName, float BlendTime, bool bForce);
	void SwitchOutputDeviceFileLog();
	void SwitchMapMangedTickProfile(int MapID);
	void SuspendSound();
	void SuppressSwap();
	void SubscribeToTopic(const struct FString& Topic);
	struct FString StringToJsonString(const struct FString& String);
	void StopUIStat(const struct FString& UIName, bool bReport);
	struct FTouchInputRecord StopTouchRecord();
	bool StopTask(class UGameFrontendHUD* GameFrontendHUD, uint64_t TaskID);
	bool StopShaderPrecompile();
	void StopPuffer(class UGameFrontendHUD* GameFrontendHUD);
	void StopMonitorFileModified();
	void StopHapticsEngine();
	void StopH5Downloading();
	void StopBluetoothMonitor();
	void StartUIStat(const struct FString& UIName);
	void StartTrace(const struct FString& InHost, int InStartTTL, int InMaxTTL, int InCount, const struct FString& InExtraData);
	void StartTouchRecord();
	bool StartShaderPrecompile();
	void StartOpenReadCollect(class UGameFrontendHUD* GameFrontendHUD, bool bStart);
	void StartMonitorFileModified(const struct FString& Filename, int Mask);
	void StartHapticsEngine(const struct FScriptDelegate& Callback);
	bool StartGrayUpdate(class UGameFrontendHUD* GameFrontendHUD);
	void StartDownloadItem(uint32_t ItemId, uint32_t Priority, const struct FScriptDelegate& OnItemDownloadDelegate);
	void StartDolphinResourceUpdate(class UGameFrontendHUD* GameFrontendHUD);
	void StartCDNUpdateAfterDolphinUpdateFailed(class UGameFrontendHUD* GameFrontendHUD);
	void StartBluetoothMonitor(int DelayMs);
	void StartBatchDownloadItem(uint32_t Priority, const struct FScriptDelegate& OnBatchItemDownloadDelegate, TArray<uint32_t>* ItemIDs);
	void SnapshotLobbyUObjects(const struct FString& Tag);
	void SimpleXOREncryptDecrypt(unsigned char Key, TArray<unsigned char>* Data);
	void ShutdownUnrealNetwork(class UGameFrontendHUD* GameFrontendHUD);
	void ShutdownPuffer(class UGameFrontendHUD* GameFrontendHUD);
	void ShrinkUObjectHashTables();
	void ShrinkDrawBuffer();
	void ShowWebView(bool Show);
	void ShowVLink(const struct FString& jsonString, const struct FString& signString);
	void ShowVideoListDialog();
	void ShowScreenDebugMessage(const struct FString& Message);
	void ShowH5WebView();
	void ShorterStreamingDistanceWhenGameEnd(uint32_t Distance);
	void ShareWithPhotoByChannel(const struct FString& _messageExt, const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _url, const struct FString& _messageAction, int _channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void ShareLogFile(const struct FString& InLogFileName);
	struct FString SHA256Bytes(TArray<unsigned char> inArray);
	struct FString SHA256(const struct FString& str);
	struct FString SHA1(const struct FString& str);
	void SetWebviewPosition(int X, int Y, int W, int H);
	void SetWebViewCacheInfoDelegate(const struct FScriptDelegate& Delegate);
	bool SetVpnServiceStrategy(const struct FString& InKey, int InValue);
	void SetVoiceSwitch(class UGameFrontendHUD* GameFrontendHUD, bool FirstVoicePopupSwitch, bool GDPRForbidVoiceSwitch, bool GDPRSettingSwitch);
	void SetVoiceReEneterInfo(class UGameFrontendHUD* GameFrontendHUD, float Duration, int MaxCount);
	void SetUserVulkanSetting(bool Enable);
	void SetUserTMFPTapEnableFlag(int EnableFlag);
	void SetUserProperty(const struct FString& propertyKey, const struct FString& propertyValue);
	void SetUseMouseForTouch(bool bUse);
	bool SetUpdatedSoPatchFile(const struct FString& InSourceFile, int InABI);
	void SetupAkAudioDeviceListener();
	void SetUIStatMaxClickTimes(int Times);
	void SetUIConfigTMFPTapEnableFlag(int uiEnable);
	void SetUDPPingControlFlag(int Lock, int BindType);
	void SetTssNetworkStatus(class UGameFrontendHUD* GameFrontendHUD, int status);
	void SetTMFPTapWhiteListFlag(int TapWhiteList);
	void SetTextureGroupLODBias(unsigned char GroupID, int MipBias);
	void SetTestEditorNum(int PlayerCount, const struct FString& Num, const struct FString& SceneName, int Platform);
	bool SetSoundEffectQuality(int Type);
	void SetShowFriendObservers(class UGameFrontendHUD* GameFrontendHUD, bool bShow);
	void SetServerTimeInSec(int64_t InServerTimeInSec);
	void SetSelfieSwitch(class UGameFrontendHUD* GameFrontendHUD, bool SelfieSwitch);
	int SetSdkIoctl(class UGameFrontendHUD* GameFrontendHUD, int Request, struct FString* Token);
	void SetScreenPadding(const struct FMargin& InPadding);
	void SetReportBugSwitch(class UGameFrontendHUD* GameFrontendHUD, bool ReportBugSwitch);
	void SetRemoteResource(class UObject* DescObj, struct FString* AssetId);
	void SetRegionNoByLua(int regionNo, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void SetRedBloodSwitch(bool redBloodSwitch);
	void SetPufferBuildInfo(const struct FString& PipeLineID, const struct FString& BuildNo);
	void SetPublishRegion(const struct FString& Region);
	void SetPlayerBaseInfo(class UGameFrontendHUD* GameFrontendHUD, const struct FString& OpenID, uint64_t RoleID, const struct FString& PlayerName, const struct FString& HeadIconUrl);
	void SetNationSwitch(class UGameFrontendHUD* GameFrontendHUD, bool NationAllSwitch, bool NationBattleSwitch, bool NationRankSwitch);
	void SetMyFriendObserversDetail(class UGameFrontendHUD* GameFrontendHUD, TArray<struct FFriendObserver>* FriendObserversDetails);
	void SetMiniGameFinalAwardResId(class UGameFrontendHUD* GameFrontendHUD, int AwardResId);
	void SetMatchNoAuthMode(bool bUsingNoAuth);
	void SetLuaFastGCMode(int Mode);
	bool SetLinkStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool ShowUnderline, const struct FString& PathHyperLinkNormalBrush, const struct FString& PathHyperLinkHoveredrBrush);
	void SetLevelStreamingUnloadTimeslice(bool Enabled);
	void SetLevelGamePlayLoadPriority(class ULevelStreaming* TargetLevel, int Priority);
	void SetiTOPLbsDelay(int Delay);
	void SetIPRegion(int region_no);
	void SetIosStuckEnableByServerConfig(int bEnable);
	void SetIOSBGDownloadAttribute(class UGameFrontendHUD* GameFrontendHUD, bool bEnableCellularAccess, bool bEnableResumeData, int nMinFileSize, int nMaxTasks);
	void SetImageVersionString(const struct FString& oldVersion, const struct FString& newVersion);
	bool SetImageStyle(const struct FString& StyleName, int ImageSize, const struct FString& ImagePath, const struct FString& ImageColor, bool bPreLoad);
	void SetIGProxyData(const struct FString& InJsonData);
	void SetHapticsEngineEnable(bool bEnable);
	void SetGlobalRedBloodSwitch(bool redBloodSwitch);
	void SetGDPRUserType(class UGameFrontendHUD* GameFrontendHUD, int GDPRUserType);
	void SetGameThreadPriority(int NewPriority);
	void SetGameThreadName(const struct FString& GameThreadName);
	void SetGameStatusMap(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FString, struct FString>* GameStatusMap);
	void SetGameSrvID(class UGameFrontendHUD* GameFrontendHUD, int GameSrvID);
	void SetForceVulkanAvailable(bool Enable);
	bool SetFontStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool UseShadow, bool IsBold);
	void SetFixPostLoadSubojbectsBugEnable(int Option);
	void SetFileHideKeywords(TArray<struct FString> Keywords);
	void SetExtraLocalizationMap(TMap<struct FString, struct FString> translationMap);
	void SetExtraItemTableMappingByFix(TMap<int, struct FItemFixTableItem> ItemFixMap);
	void SetEncryptKey(int KeyChainId, int KeyIndex, const struct FString& Key);
	void SetDynamicLevels(class UGameFrontendHUD* GameFrontendHUD, TArray<struct FString>* DynamicLevels);
	void SetDumpShaderCompile(int iDumpVal);
	void SetDownLoadLanguageName(const struct FString& Language);
	bool SetDisableGyrSensor(bool InDisableSensor);
	int SetDeviceQualityLevel_LuaState();
	bool SetDeviceQualityLevel(int NewLevel);
	void SetCrashContextReportLevel(int Level);
	void SetConfigString(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName, const struct FString& Value);
	void SetConfigInt(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName, int Value);
	void SetConfigBool(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName, bool Value);
	void SetCanWatchEnemy(class UGameFrontendHUD* GameFrontendHUD, bool bCan);
	void SetBtnClickInCdFunc();
	void SetAppDetailInfo(const struct FString& AppInfo);
	void SetAllTextureGroupBiasFromQuality();
	void SetAllLinkStyle();
	void SetAllImageStyle();
	void SetAllFontStyle();
	void SetActivePufferTick(class UGameFrontendHUD* GameFrontendHUD, bool ActivePufferTick);
	void SetAccountRegion(const struct FString& Region);
	void SendRecordFinishedGuideReq(class UGameFrontendHUD* GameFrontendHUD, const struct FString& TipsID);
	void SendPlayEmote(class UGameFrontendHUD* GameFrontendHUD, int EmoteIndex);
	void SendLobbyChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Content);
	void SendClientLog(class UGameFrontendHUD* GameFrontendHUD, const struct FString& ErrorReason, const struct FString& errorDescription, bool pullAll);
	void ScheduleLocalNotificationAtTime(int Year, int Month, int Day, int Hour, int Minute, int Second, bool LocalTime, const struct FString& Title, const struct FString& Body, const struct FString& Action, int NotificationID);
	void SaveToSharedPreferences(const struct FString& Key, const struct FString& Value);
	void SaveStringToIntermediateFile(const struct FString& String, const struct FString& Filename);
	void SaveStringToFileWithEncoding(const struct FString& String, const struct FString& Filename, int EncodingOptions);
	void SaveStringToFile(const struct FString& String, const struct FString& Filename);
	void SaveStringArrayToFile(TArray<struct FString> Lines, const struct FString& Filename);
	void SaveSMapsFile();
	bool SaveSavFileByByteArray(const struct FString& Filename, int CompressedSize, int UncompressedSize, TArray<unsigned char>* ByteArray);
	void SaveLuaMemoryFile(const struct FString& Filename, const struct FString& InputContent, bool RmExistFile);
	void SaveLoadGameSlotCrashFlag();
	void SaveGameSlotMultiThread();
	bool SaveArrayToFileByFullPath(TArray<unsigned char> Content, const struct FString& FullPathName);
	bool SaveArrayToFile(TArray<unsigned char> Content, const struct FString& Filename);
	void SaveAOSMemMapsInfo();
	void RunTestCreateLobbyActor();
	void RunFileLockHelper();
	uint64_t RunCvmTestCases();
	struct FString RunConsoleCommondAndGetString(const struct FString& commond);
	void RunConsoleCommond(const struct FString& commond);
	int RSAPubEncrypt_LuaState();
	int RSAPubDecrypt_LuaState();
	int RSAPriEncrypt_LuaState();
	int RSAPriDecrypt_LuaState();
	void RoomOwnerInterruptGame(class UGameFrontendHUD* GameFrontendHUD);
	void ReturnToLobby(class UGameFrontendHUD* GameFrontendHUD);
	void RestartShaderPrecompileBackend();
	void RestartShaderPrecompile();
	void RestartPuffer(class UGameFrontendHUD* GameFrontendHUD, bool needCheck, int maxDownloadsPerTask, int maxDownTask, int maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, int versionType, const struct FString& InDownloadFuncDict, int InDnsType, int InDownloadStage, int InDownloadEngine);
	void RestartGame();
	TArray<struct FString> ResolveDNSWithServerIP(const struct FString& DomainName, const struct FString& ServerIP);
	TArray<struct FString> ResolveDNS(const struct FString& DomainName);
	void ResetSlateTickEveryFrame(int SlateUIID);
	void ResetAllTextureGroupBiasFromQuality();
	void ResetAllSlateTickEveryFrame();
	void RequireSlateTickEveryFrameBeforeTargetFrame(int FrameNum);
	void RequireSlateTickEveryFrame(int SlateUIID);
	uint64_t RequestFile(class UGameFrontendHUD* GameFrontendHUD, const struct FString& FilePath, bool ForceUpdate, const struct FString& InUA);
	void ReportFirebaseEventWithString(const struct FString& eventTypeString, const struct FString& bundleExtraKey, const struct FString& bundleExtraValue, bool isUnique);
	void ReportFirebaseEventWithParam(const struct FString& eventTypeString, TMap<struct FString, struct FString> _params, bool isUnique);
	void ReportEventRegisterCompleted();
	void ReportEventPurchaseConsider();
	void ReportEventLoadingCompleted();
	void ReportCrashLogWithFDNum(const struct FString& baseLogInfo);
	void ReportContextValuesOnCrash(const struct FString& Json);
	void ReportBattleChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Msg, int msgExtraParam);
	void ReplyInvite(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, bool bReply);
	bool RemoveWebView();
	void RemoveKnownMissingPackageRefObjectByObj(class UObject* BindObj);
	void RemoveKnownMissingPackage(const struct FString& PackageName);
	void RemoveBPClassManager();
	bool RemountPakFiles(class UGameFrontendHUD* GameFrontendHUD);
	void RemapMemMap(const struct FString& Name, int NewSize);
	void ReleaseWifiLock();
	void ReleaseSplashScreenImage();
	void ReleaseSlateTickEveryFrame(int SlateUIID);
	void ReleaseRTPoolSnapShots();
	void ReleaseRTPoolResources();
	void ReleaseGameEnginePlaybackComp(int Option);
	void ReleaseAllTables();
	void ReInitializePuffer(class UGameFrontendHUD* GameFrontendHUD, bool needCheck, int maxDownloadsPerTask, int maxDownTask, int maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, int versionType, const struct FString& InDownloadFuncDict, int InDnsType, int InDownloadStage, int InDownloadEngine);
	bool ReInitializeCvm();
	void RegisterMemoryWarningHandle(const struct FScriptDelegate& OnMemoryWarning);
	void RefershAllManagedTickConfigWhenFPSChanged();
	void ReduceVirMem(int Low, int Dec);
	bool RecoverWebView();
	bool RecoverShrunkODPaksBins(TMap<uint32_t, struct FString> Keys);
	void RecordVirMemInfo();
	void RecordThreadIndexByGameThreadIOS();
	void RecordLuaExceptionInfo(const struct FString& exception);
	void RebuildHISM(class UHierarchicalInstancedStaticMeshComponent* Comp, bool Async, bool ForceUpdate);
	void ReadManagedTickMapSwitchers();
	void QuitFightChat(class UGameFrontendHUD* GameFrontendHUD);
	void QuickLogin(int refreshTokenBeforeExpDays, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	int PurgePackageByKeyword(const struct FString& Keyword);
	struct FString ProjectUserDir();
	struct FString ProjectSavedDir();
	struct FString ProjectDir();
	struct FString ProjectContentDir();
	bool ProcessSoPatch(const struct FString& InAppVerStr);
	void ProcessServerRelationChainError(const struct FString& ErrorMsg, int iForceLoginInterval, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void PrintUAEDataTableManagerMemDetail();
	void PostGameStatusToTMFPSMap(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Key, TMap<struct FString, struct FString>* mapData);
	void PlayHapticsFile(const struct FString& FilePath, int Duration, const struct FScriptDelegate& Callback);
	void PerfReportSetLabel(struct FString* str);
	void PerfReportAddNote(struct FString* str);
	void OpenWebviewInGameProcess(const struct FString& URL, int Left, int Top, int Right, int Bottom);
	void OpenURLInSDK(const struct FString& InURL, bool InVisibleToolbar, bool InSystemWebBrowser, bool InFullScreen, const struct FString& ExtraJson);
	void OpenSystemStorage();
	void OpenSystemSettings();
	bool OpenShaderCodeLibrary(const struct FString& Path, const struct FString& VersionNum, bool bForceOpen);
	void OpenH5FromCache(class UGameFrontendHUD* GameFrontendHUD, const struct FString& ModuleName, const struct FString& Language, int netType, int Top, int Left, int Right, const struct FString& ViewParam);
	void OnWebViewCacheInfoDelegate__DelegateSignature(int code);
	void OnWebViewCache(int code);
	void OnPakFileCRCCheck(const struct FString& PakFileName);
	void OnNotifyFightFriendChat(class UGameFrontendHUD* GameFrontendHUD, const struct FFightFriendChat& Data);
	void OnIslandPlayerInfoNotify(class UGameFrontendHUD* GameFrontendHUD, int LandId);
	bool OnInviteNextBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Name);
	void OnGetUpdateStateCDNConfigUrl(class UGameFrontendHUD* GameFrontendHUD, const struct FString& URL);
	struct FString OnGetItemBigIcon__DelegateSignature(const struct FString& strPath);
	bool OneUp_GLauncherSetLogger();
	bool OneUp_GLauncherSetLauncherEventCallback();
	void OneUp_GLauncherSendEditorHWND(const struct FString& HWNDStr);
	bool OneUp_GLauncherInitialize(const struct FString& GameID, const struct FString& gameChannelId, const struct FString& launcherChannelId, const struct FString& Port, const struct FString& loginFrom);
	bool OneUp_GLauncherGetMsdkWebTokenEncodeUrl();
	bool OneUp_GLauncherGetLoginInfoJsonStr();
	bool OneUp_GLauncherAsyncGetMsdkWebTokenEncodeUrl(const struct FString& URL);
	bool OneUp_GLauncherAsyncGameEventNotify(const struct FString& Event_Code, const struct FString& Event_Msg);
	void OnEnterLobbyReloadLocalizationResource(class UGameFrontendHUD* GameFrontendHUD);
	void OnEnterGameReleaseLocalizationResource(class UGameFrontendHUD* GameFrontendHUD);
	void OnDolphinAppUpdateFinished(class UGameFrontendHUD* GameFrontendHUD);
	void OnCombatHitFeedback(class UGameFrontendHUD* GameFrontendHUD, bool bCombatHitFeedbackEnable);
	void OnBattleResultCallBack(class UGameFrontendHUD* GameFrontendHUD, struct FBattleResultData* BattleResultData);
	void OnBattleResult(class UGameFrontendHUD* GameFrontendHUD, struct FBattleResultData* BattleResultData);
	void ObjectPoolServerSwitch(bool bSwitchOn);
	void NotifyBeginnerFinishedGuideUpdated(class UGameFrontendHUD* GameFrontendHUD, bool GuideSwitch, TArray<struct FPlayerFinishedGuide> finished_guide, int player_level, int player_exp_type);
	void NoschatShareWithUrlInfo(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _url, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void NoschatShareToFriend(const struct FString& mediaId, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& msdkExtInfo, const struct FString& messageExt, const struct FString& mediaTagName, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void NoschatShare(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _messageExt, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void MSDKWebViewCallJS(const struct FString& strJS);
	void MoveFollowTarget(class UGameFrontendHUD* GameFrontendHUD, int FollowType, uint64_t UID);
	bool MoveFile(const struct FString& SrcFullPath, const struct FString& DesFullPath);
	bool MountPakFile(const struct FString& InPakFilename, const struct FString& Key);
	void MountDecompressedShaderLibrary(const struct FString& GroupName);
	void MessageBoxExt(const struct FString& Caption, const struct FString& Text);
	void MemOptSetGameState(int State);
	void MemOption(int Option);
	bool MediaCopyFromPakToLocal(const struct FString& From, bool bForce);
	int MD5LuaString_LuaState();
	struct FString MD5HashAnsiString(const struct FString& str);
	void ManualSleep(float Seconds);
	int LuaSnapShot_LuaState();
	struct FString LuaLoadFileToString(const struct FString& InFileName);
	int LowMemoryInGB();
	void LogoutAllDevices(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void Logout(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void LoginWithExtraInfo(uint32_t Channel, const struct FString& InExtraJson, bool SkipLocalCacheCheck, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void Login(uint32_t Channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void LobbySetUserRegion(int InRegion);
	void LobbySetProxyPortlist(const struct FString& InNodePortList);
	void LobbySetProxyNodelist(const struct FString& InNodeIpList);
	void LobbySetEchoPortlist(const struct FString& InEchoPortList);
	bool LobbyIsLinkProxy(const struct FString& InIp, int InPort);
	void LobbyAddAddress(const struct FString& InProtocol, const struct FString& InIp, int InPort);
	bool LoadSOFromOBB();
	bool LoadSideLoadSOFromOBB();
	struct FSavFileData LoadSavFileAsByteArray(const struct FString& Filename);
	TArray<struct FString> LoadSavedFileToStringArray(const struct FString& Filename);
	bool LoadLibraryAdditional(const struct FString& UsageVariant);
	struct FString LoadIntermediateFileToString(const struct FString& Filename);
	void LoadH5FromCache(class UGameFrontendHUD* GameFrontendHUD, const struct FString& ModuleName, const struct FString& Language, int netType, int Top, int Left, int Right, const struct FString& ViewParam);
	struct FString LoadFileToStringByFullPath(const struct FString& FullPathName);
	struct FString LoadFileToString(const struct FString& Filename);
	TArray<unsigned char> LoadFileToArrayByFullPath(const struct FString& FullPathName);
	TArray<unsigned char> LoadFileToArray(const struct FString& Filename);
	bool LoadAmendODs(TMap<uint32_t, struct FString> Keys);
	void LoadAFDTranslation();
	TArray<struct FString> ListDirectoryFiles(const struct FString& DirectoryPath);
	void ListAllLoadedSymbols();
	void LaunchUrl(const struct FString& URL);
	bool IsWoWEditor();
	bool IsWindowsClientReplay(class UGameFrontendHUD* GameFrontendHUD);
	bool IsWindows();
	bool IsWindowOB(class UGameFrontendHUD* GameFrontendHUD);
	bool IsUsingBluetooth();
	bool IsUseTypicalResultFlowMode(class UGameFrontendHUD* GameFrontendHUD);
	bool IsUpdateSkip(class UGameFrontendHUD* GameFrontendHUD);
	bool IsUEPUBGM();
	bool IsTypicalMode(class UGameFrontendHUD* GameFrontendHUD);
	bool IsTest();
	bool IsSystemVPNOpened();
	bool IsSupportVulkan();
	bool IsSplitMiniPakVersion();
	bool IsSplitMapPakVersion();
	bool isSkipUpdateByRepair(class UGameFrontendHUD* GameFrontendHUD);
	bool IsShowingWatermark();
	bool IsShipping();
	bool IsRuningOnVulkan(class UGameFrontendHUD* GameFrontendHUD);
	bool IsReleaseVersion(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsPVEMode(class UGameFrontendHUD* GameFrontendHUD);
	bool IsPerformanceLimitedStat();
	bool IsOpenAOS90FPSConfig();
	int IsOpenAOS120FPSConfig();
	bool IsODPakMonted(const struct FString& Filename);
	bool IsNotificationEnabled();
	bool IsNoAuthMode();
	bool IsNetworkReachable();
	bool IsMounted(const struct FString& Filename);
	bool IsMlAIDebug();
	bool IsMatchVersion();
	bool IsMatchNoAuthMode();
	bool IsLowMemoryDevice();
	bool IsLaunchedByLocalNotification();
	bool IsLastSessionCrash();
	bool IsJaguar();
	bool IsIPhoneFiveSOriginal();
	bool IsIPhoneFiveS(class UGameFrontendHUD* GameFrontendHUD);
	bool IsIOSVersionAbove13();
	bool IsInstallWX(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallWhatsapp(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallVK(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallTwitter(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallTikTok(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallOpenRec(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallMirrativ(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallMessenger(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallLite(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallLine(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallFaceBook(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallDiscord(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallBgBgByiTOP(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInReplayState(class UGameFrontendHUD* GameFrontendHUD);
	bool IsHOS();
	bool IsHapticsEngineEnable();
	bool IsGameFileExistsWithPakCheck(const struct FString& Filename);
	bool IsForwardPlusShaderLibraryLoaded();
	bool IsForCE();
	bool IsFileReady(class UGameFrontendHUD* GameFrontendHUD, const struct FString& FilePath);
	bool IsFileExistsWithPakCheckMatchExt(const struct FString& Filename);
	bool IsFileExistsWithPakCheck(const struct FString& Filename);
	bool IsFileExistsWithOutPakCheck(const struct FString& Path);
	bool IsFileExistInCSCWithCheckRaw(const struct FString& PkgName);
	bool IsFileExistInCSCWithCheck(const struct FString& Path);
	bool IsFileExistByFileName(const struct FString& Filename);
	bool IsFileExistByExtension(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Filename, const struct FString& fileExtension);
	bool IsFileExist(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Filename);
	bool IsEnableDSGrayPublishFlag(uint64_t nGrayPublishFlag);
	bool IsEmulatorWhenInit();
	bool IsEmulator();
	bool IsEditorDedicatedServer();
	bool IsEditor();
	int IsEarlyZPassEnable();
	bool IsDolbyAtmosSupported();
	bool IsDeviceSupportsViberation();
	bool IsDeviceSupportsHapticsEngine();
	bool IsDeviceSupportGyrSensor();
	bool IsDeviceOverheat();
	bool IsDeviceHWSupportVulkan();
	bool IsDevelopment();
	bool IsCPUArchMisMatch();
	bool IsConnected(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsCloudVersion();
	bool IsCEVersion();
	bool IsCEHideLobbyUI(class UGameFrontendHUD* GameFrontendHUD);
	bool IsBlueprintEnum(const struct FString& Path);
	bool IsBasePrefecthOpen();
	bool IsAsanVersion();
	bool IsAos32Bit();
	bool IsAndroidHasGyr();
	void InviteWhatsappOfflineFriends(const struct FString& Title, const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void InviteSystemOfflineFriends(const struct FString& Title, const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void InviteSMSOfflineFriends(const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void InviteLineOfflineFriends(const struct FString& Title, const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void InviteFBOfflineFriends(const struct FString& Title, const struct FString& Content, const struct FString& link, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void InstallNewApp(class UGameFrontendHUD* GameFrontendHUD);
	void InitWebViewManager();
	int InitVPN(const struct FString& InVPNGUID, const struct FString& InClientVersion);
	void InitVlink();
	void InitQPlatformMisc();
	void InitLoginAccount(uint64_t AccUin, const struct FString& AccPswd, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void InitJavaFunctions();
	void InitIOSNotchSize();
	void InitIMSDKEnv(uint32_t iEnv, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void InitializePuffer(class UGameFrontendHUD* GameFrontendHUD, bool needCheck, int maxDownloadsPerTask, int maxDownTask, int maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, int versionType, const struct FString& InDownloadFuncDict, int InDnsType, int InDownloadStage, int InDownloadEngine);
	void InitializeLaggingReporter(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	void InitializeCvmWithRunPhase(int RunPhase);
	void InitHF();
	void InitHDmpveRemoteConfig();
	int InitDH(const struct FString& gen, const struct FString& prime, int v_srand);
	void InfinityGauntletWithPrefix(const struct FString& ClsName, const struct FString& Prefix);
	void InfinityGauntlet(const struct FString& ClsName);
	struct FString HtmlEncode(const struct FString& UnencodedString);
	void HideH5WebView();
	void HDmpveRemoteConfigStartOnce();
	void HDmpveRemoteConfigSetUrl(const struct FString& InRemoteConfigUrl);
	struct FString HDmpveRemoteConfigGetStringNotDefalut(const struct FString& InKey);
	struct FString HDmpveRemoteConfigGetString(const struct FString& InKey, const struct FString& InDefaultValue);
	int HDmpveRemoteConfigGetIntNotDefalut(const struct FString& InKe);
	int HDmpveRemoteConfigGetInt(const struct FString& InKey, int InDefaultValue);
	bool HDmpveRemoteConfigGetBoolNotDefalut(const struct FString& InKey);
	bool HDmpveRemoteConfigGetBool(const struct FString& InKey, bool InDefaultValue);
	void HDmpveRemoteConfigClear();
	bool HaveReceivedNoticeCallback();
	bool HasRemoteConfigReady();
	bool HasNotice(int Type, const struct FString& Scene);
	bool HasNotchInScreen();
	bool HasLoadGameSlotCrashFlag();
	bool HasDownloadedBasePak();
	bool HasActiveWifi();
	void GuestLogin();
	int GRromelinkRecreateGameSocket();
	void GMTestAllocUObjs(class UGameFrontendHUD* GameFrontendHUD, int Num);
	void GMH5Enable(bool flag);
	int GetZddc_Check();
	int GetYYXDeviceModel();
	void GetWidgetsByClass(class UWidget* Parent, class UClass* Type, TArray<class UWidget*>* Children);
	struct FString GetWebViewTicket(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString GetWebviewFullScreenSize(int* OutSurfaceWidth, int* OutSurfaceHeight);
	struct FString GetWeaponDIYIconPath(const struct FString& PlayerUID, int WeaponId, const struct FString& PlanID, bool relativePath, int Width, int Height);
	int GetVolume(int InStreamType);
	void GetVoiceSdkReconnectInfo(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FString, struct FString> Data);
	bool GetUserVulkanSetting();
	int GetUserTMFPTapEnableFlag();
	bool GetUseMouseForTouch();
	struct FString GetUObjectName(class UObject* uObj);
	struct FString GetUnrealNetworkStatus(class UGameFrontendHUD* GameFrontendHUD);
	struct FString GetUEPUBGMServerName();
	struct FString GetUEPUBGMCPName();
	struct FString GetToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	int GetTMFPTapDeviceSupportFlag();
	struct FString GetTimezoneName();
	float GetTimeInMiliSeconds();
	int GetThreadIndexByThreadIOS(int TargetThread);
	int GetTextureGroupLODBias(unsigned char GroupID);
	struct FString GetTelecomSvr();
	int GetTCDeviceLevel();
	int GetTableCount(const struct FString& tableName);
	struct FString GetSystemProperty(const struct FString& InKey);
	int GetSystemLanguage_LuaState();
	uint32_t GetSubsideFeatureLevel();
	struct FString GetSrcVersion();
	struct FString GetSplitMapConfigInfo();
	struct FString GetSpecialData();
	int GetSoundEffectQuality();
	struct FString GetSOStoredPath();
	TArray<struct FString> GetSlateTouchDebugLogQueue();
	int GetShaderPrecompileProgress();
	int GetServerDelay(const struct FString& ServerAddress);
	int GetScreenWidthForWebview();
	int GetScreenWidth();
	struct FMargin GetScreenPadding();
	int GetScreenHight();
	int GetScreenHeightForWebview();
	int GetScreenDensity();
	struct FString GetRootDir();
	int GetRingMode();
	struct FString GetRemarkNameByGIDWithObj(class UObject* Obj, const struct FString& gid, const struct FString& PlayerName);
	struct FString GetRemarkNameByGID(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& PlayerName);
	struct FString GetRegisterChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool GetRedFlameSwitch();
	bool GetRedBloodSwitch();
	struct FString GetPureIOSTmpDirectory();
	struct FString GetPureIOSLibraryDirectory();
	struct FString GetPureIOSDocumentsDirectory();
	bool GetPufferInitResult(class UGameFrontendHUD* GameFrontendHUD);
	uint32_t GetPufferInitErrCode(class UGameFrontendHUD* GameFrontendHUD);
	struct FString GetPublishRegion();
	struct FString GetPublicKey(const struct FString& cli_pri_key);
	struct FString GetPUBGModuleBaseAddr(const struct FString& ParamModuleName);
	struct FString GetPrivateKey();
	TArray<struct FString> GetPkgsFromDir(bool bUseCheck, const struct FString& InDir);
	struct FString GetPingReportInfo(class UGameFrontendHUD* GameFrontendHUD);
	struct FString GetPingReportData(class UGameFrontendHUD* GameFrontendHUD);
	int GetPhysicalScreenWidth();
	int GetPhysicalScreenHeight();
	int64_t GetPhysicalFileTime(const struct FString& InPath);
	struct FString GetPhoneType();
	struct FString GetPhoneDeviceID();
	struct FString GetPhoneAdvertisingID();
	int64_t GetPandoraAllocatedMemory();
	struct FString GetPackChannel();
	struct FString GetOSVersion();
	struct FString GetOperator();
	TArray<struct FString> GetODPaksFileUseTime(const struct FString& DumpFilename);
	struct FString GetODPakName(const struct FString& Path);
	int GetObjectArrayNum();
	struct FString GetObbFilePath();
	TArray<int> GetNotchSize();
	struct FString GetNetworkType();
	struct FString GetNativeVersion();
	struct FString GetNativePackageTag();
	TArray<struct FString> GetMyFriendObservers(class UGameFrontendHUD* GameFrontendHUD);
	TArray<struct FString> GetMountedPaks();
	int GetMemoryStats_LuaState();
	int GetMemorySize();
	TArray<int> GetMaxFPSConfigByQuality();
	int GetLuaTableSize_LuaState();
	struct FString GetLuaRootDir();
	int GetLoginChannel(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString GetLoadGameSlotCrashInfo();
	struct FString GetLoadCostUseTime();
	struct FString GetLaunchLocalNotificationID();
	struct FString GetLastSessionUserId();
	TArray<struct FString> GetKnownMissingPackage(const struct FString& PackageName, const struct FString& DumpFilename);
	int GetiTOPLbsDelay();
	struct FString GetITopGameId(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	int GetIsSecretVersion();
	bool GetIsPlayerUsingVPN();
	bool GetIsOpenBattlePlayback(class UGameFrontendHUD* GameFrontendHUD);
	int GetIPRegion();
	struct FString GetIpAddrByHost(const struct FString& Host);
	struct FString GetIpAddr();
	struct FString GetInternalFilesDir();
	struct FString GetInstallChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	int GetIMSDKEnv();
	struct FString GetHDmpveInstanceId();
	bool GetH5CacheStatus(const struct FString& ModuleName);
	struct FGroupInfoWrapper GetGroupInfo(int SnsAction, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString GetGPUFamily();
	int GetGoogleServiceVersionCode();
	struct FString GetGLVersion();
	struct FString GetGLType();
	uint32_t GetGameThreadId();
	struct FString GetGameStatus(class UGameFrontendHUD* GameFrontendHUD);
	struct FString GetGameModeID(class UGameFrontendHUD* GameFrontendHUD);
	struct FString GetGameMasterGUID();
	struct FString GetFromSharedPreferences(const struct FString& Key, const struct FString& DefaultValue);
	int64_t GetFrameCounter();
	float GetFPS();
	bool GetForceVulkanAvailable();
	struct FString GetFocusedSlateName();
	struct FString GetFireBaseFCMToken();
	int64_t GetFileSizeOutsideSandbox(const struct FString& FilePath);
	int64_t GetFileSizeOnDiskBytes(const struct FString& FilePath);
	uint32_t GetFileSizeOnDisk(const struct FString& FilePath);
	uint64_t GetFileSizeCompressed(class UGameFrontendHUD* GameFrontendHUD, const struct FString& FilePath);
	struct FString GetFileHash(const struct FString& FilePath);
	struct FString GetFileDirPath(const struct FString& FilePath);
	void GetFBFriendsUnregistered(uint32_t page, uint32_t Count, uint32_t Type, const struct FString& extend, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	TArray<int> GetExpandMaxFPSConfigByQuality();
	int GetExactDeviceLevel();
	struct FString GetEncodeUrl(const struct FString& URL);
	struct FString GetEmulatorName();
	struct FString GetDSVersion(class UGameFrontendHUD* GameFrontendHUD);
	int GetDSConnectionState();
	struct FString GetDSConnectionIP();
	struct FString GetDownLoadLanguageName();
	struct FString GetDownloadDirPath();
	struct FString GetDeviceXID();
	uint64_t GetDeviceTotalSpace();
	int GetDeviceQualityLevel();
	struct FString GetDevicePlatformName();
	struct FString GetDeviceName();
	struct FString GetDeviceModel();
	int GetDeviceMaxSupportSoundEffect();
	struct FString GetDeviceMake();
	struct FString GetDeviceInfo();
	uint64_t GetDeviceFreeSpace();
	struct FString GetDeviceABIInfoJson();
	struct FString GetDeivceNickName();
	struct FString GetDataTime_MDHMS();
	struct FString GetCurrentRHILevel(class UGameFrontendHUD* GameFrontendHUD);
	int GetCurrentLanguage_LuaState();
	int GetCurrentChannel(class UGameFrontendHUD* GameFrontendHUD);
	struct FString GetCrashUserAction();
	struct FString GetCpuType();
	int GetCPUMaxFrequency();
	int GetCPUCoreCount();
	uint64_t GetCPUClockCycles();
	struct FString GetConfigString(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName);
	int GetConfigInt(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName);
	bool GetConfigBool(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName);
	struct FString GetCleanFileName(struct FString* FilePath);
	void GetCDNUpdateInfo(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FString, struct FString> Data);
	struct FString GetCarrierInfo();
	struct FString GetBuildVersion();
	uint32_t GetBlockCRC(const struct FString& Filename, int64_t Offset, uint32_t Size);
	struct FString GetBattleKey(const struct FString& svr_pub_key, const struct FString& cli_pri_key);
	struct FString GetAreaIPNo();
	struct FString GetAppVersion();
	int64_t GetAppStartupStageTime(struct FString* str);
	struct FString GetAppMountHandleInfo();
	struct FString GetApplicationVersion();
	struct FString GetAOSSHOP();
	struct FString GetAndroidVersion();
	struct FString GetAndroidSysInfo();
	int GetAndroidSOVersion();
	uint32_t GetAndroidMaxStackSize();
	uint32_t GetAndroidMaxFDNum();
	uint32_t GetAndroidCurrentFDNum();
	int GetAndroidBuildForArm();
	TArray<int> GetAllLocalNotificationIDs();
	TArray<struct FString> GetAllFilesInDir(const struct FString& Dir, const struct FString& Pattern);
	struct FString GetActiveProfileName();
	struct FString GetAccountRegion();
	struct FString GetAccessToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void GenerateQRImage(int Tag, int Size, const struct FString& Content, const struct FString& logoPath, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void GEMReportSubEvent(class UGameFrontendHUD* GameFrontendHUD, const struct FString& EventName, const struct FString& SubEventName, TArray<struct FString> eventParams);
	void GEMReportLobbyCustomEvent(class UGameFrontendHUD* GameFrontendHUD, int EventID, bool IsSuccess, const struct FString& strDesc);
	void GEMReportEvent(class UGameFrontendHUD* GameFrontendHUD, const struct FString& EventName, TMap<struct FString, struct FString>* eventParams);
	void GEMReportEnterLobbyEvent(class UGameFrontendHUD* GameFrontendHUD, bool IsSuccess, const struct FString& strDesc);
	void GameRegisterGRomeLink();
	void GameMasterSetUserInfo(const struct FString& InPaidInfo, const struct FString& InUserToken, const struct FString& InAppId);
	void GameMasterSetUsableRegion(const struct FString& InRegion);
	void GameMasterSetUdpEchoPort(int InPort);
	void GameMasterSetOnlyWifiAccel(bool InOn);
	void GameMasterSetFreeFlowUser(int InType);
	void GameMasterOnNetDelay(int InMillis);
	bool GameMasterIsAccelOpened();
	int GameMasterInit(int InHookType, const struct FString& InGuid, const struct FString& InLibs, int InEchoPort);
	struct FString GameMasterGetWebUIUrl(int InType);
	struct FString GameMasterGetVIPValidTime();
	struct FString GameMasterGetUserID();
	int GameMasterGetAccelerationStatus();
	void GameMasterClearAccelAddr();
	void GameMasterBeginRound(const struct FString& InOpenid, const struct FString& InPvpId);
	void GameMasterAddNewArenaAddress(const struct FString& InProtocol, const struct FString& InIp, int InPort);
	void GameMasterAddAccelAddr(const struct FString& InProtocol, const struct FString& InIp, int InPort);
	void GameJoySwitchOn(int isOn);
	void GameJoyStopManualRecord();
	void GameJoyStartMomentsRecord();
	void GameJoyStartManualRecord();
	void GameJoySetVideoQuality(int Quality);
	void GameJoySetMomentRecordSwitchOn(int isOn);
	void GameJoySetLuaguage();
	void GameJoySetCurrentRecorderPosition(float X, float Y);
	bool GameJoyIsSDKFeatureSupport();
	void GameJoyEndMomentsRecord();
	void GameJoyClearMomentsVideo();
	int GainSystemLog();
	bool FullPathFileExist(const struct FString& Filename);
	void FullGC(class UGameFrontendHUD* GameFrontendHUD);
	void ForceDecompressShaderLibrary(const struct FString& GroupName);
	void FlushPressedKeys(class UGameFrontendHUD* GameFrontendHUD);
	void FlushKnownMissingPackageRefObject();
	bool FlushAndroidWindowMemory();
	void FinishPufferUpdateInDolphin(class UGameFrontendHUD* GameFrontendHUD, bool IsFinished);
	class UObject* FindObjectByPath(const struct FString& ObjectPath);
	TArray<struct FString> FindFilesRecursiveSkipPakPlatform(const struct FString& Dir, const struct FString& Pattern);
	bool FindFileInPakFiles(const struct FString& Filename);
	class UClass* FindClassByPath(const struct FString& ObjectPath);
	void FileSystemTesting(uint32_t Count);
	int FetchFileFromPAK(const struct FString& InFilePathInPak, const struct FString& InLocalFilePath, bool Override);
	void FeatureGuardSet(const struct FString& FeatureName, bool bEnable);
	void ExportLocalUsage_3(const struct FString& DumpFilePath, struct FString* DestDir);
	void ExportLocalUsage(const struct FString& DumpFilePath);
	void ExitGameForSafety();
	void ExitGame();
	void ExeMemoryWarningHandle();
	void EnterLoading(class UGameFrontendHUD* GameFrontendHUD);
	void EnterFightChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid);
	void EnterBattleStandAlone(class UGameFrontendHUD* GameFrontendHUD, const struct FString& MapPath, uint32_t PlayerKey, const struct FString& PlayerName, const struct FString& DynamicLevelsOp, const struct FString& AdditionalURLSuffixes, uint32_t ModeID);
	void EnterBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& URL, const struct FString& HostnameOrIP, uint32_t Port, uint32_t PlayerKey, const struct FString& PacketKey, uint64_t GameID, bool IsObserver, uint32_t MainModeID, int WaterType, uint32_t WaterUserID, uint32_t ModeID, TMap<int, struct FString>* AdvConfig);
	struct FString EncryptUID(const struct FString& sUid, const struct FString& sKey);
	void EncryptItemData(TArray<int> EncryptionItemList);
	void EnableUseOldInterface(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	void EnableUrlCheck(bool bShouldEnable);
	void EnableTxtCheck();
	bool EnableSubMountPoint();
	bool EnableShaderGroupAsync_New(const struct FString& GroupNames);
	bool EnableShaderGroupAsync(const struct FString& GroupNames);
	bool EnableShaderGroup(const struct FString& GroupName);
	float EnableShaderFinishPersent();
	void EnableReportVoiceSdkEvent(class UGameFrontendHUD* GameFrontendHUD, bool InitVoiceSdkComponentReportEnable, bool VoiceSdkJoinRoomReportEnable, bool VoiceSdkQuitRoomReportEnable, bool VoiceSdkJoinLbsRoomReportEnable, bool VoiceSdkQuitLbsRoomReportEnable, bool VoiceSdkOnJoinTeamRoomReportEnable, bool VoiceSdkOnJoinLbsRoomReportEnable);
	void EnableNativeDump(int EnableDump);
	bool EnableMergeVirtual();
	void EnableLowMemoryDevice(bool bEnable);
	void EnableLocalizationStatus(class UGameFrontendHUD* GameFrontendHUD, bool status);
	bool EnableLobbyEntry();
	void EnableIosStuckWorkWithDelayFrames(class UGameFrontendHUD* GameFrontendHUD, bool bEnable, int DelayFrames);
	void EnableIosStuckWorkNewWithDelayFrames(int WorkType, int DelayFrames);
	void EnableIosStuckWorkNew(int WorkType);
	void EnableIosStuckWork(class UGameFrontendHUD* GameFrontendHUD, bool bEnable);
	void EnableDataTunnelReport(bool InEnable);
	void EnableAutoObjectRefreshStage(bool bEnable);
	void EnableAOSForceAnsiMalloc();
	void EnableAkAudioSilenceMode(bool InEnable);
	void DynamicUpdatePakOrderBackUp(const struct FString& Filename);
	void DynamicUpdatePakOrder(const struct FString& Filename);
	void DumpPhysScene(const struct FString& Filename);
	struct FString DumpPackageMemInfo(TArray<struct FString>* AssetList);
	void DumpOpenReadCollect(class UGameFrontendHUD* GameFrontendHUD, const struct FString& DumpFilename);
	void DumpLogFile(bool backup);
	void DumpConsoleVariables();
	bool DoesPackageExist(const struct FString& Filename);
	void Disconnect(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void DisableSysCache();
	void DisableRepairResource(class UGameFrontendHUD* GameFrontendHUD);
	void DisableAOSForceAnsiMalloc();
	void DisableAndroidHardwareAcceleration();
	void DirectToSetting();
	void DirectToMemoryManagement();
	void DestroyConnector(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool DeleteFile(const struct FString& fullPath);
	void DeleteDirectory(const struct FString& FilePath);
	void DelayInitThirdPartSDK();
	struct FString CSCGetStatInfo();
	void CreateWidgetInfoCollector_Reset();
	void CreateWidgetInfoCollector_OnLevelStart();
	void CreateWidgetInfoCollector_OnLevelEnd();
	class UTexture2D* CreateQRCodeTexture(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Text);
	void CreateHapticsEngine(const struct FScriptDelegate& Callback);
	void CrashSetUserId(const struct FString& UserId);
	void CrashSetAppVersion(const struct FString& Version, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void CrashReportLogInfo(const struct FString& MsgType, const struct FString& Info);
	void CrashPutUserData(const struct FString& Key, const struct FString& Value, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void CrashPostExceptionFull(int Category, const struct FString& Name, const struct FString& Msg, const struct FString& stack, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void CrashPostException(int Category, const struct FString& Reason, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void CrashLog(int Level, const struct FString& Tag, const struct FString& Log, bool needDump, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool CopyFile(const struct FString& SrcFullPath, const struct FString& DesFullPath);
	struct FString ConvertToAbsolutePathForExternalAppForWrite(const struct FString& FilePath);
	struct FString ConvertToAbsolutePathForExternalAppForRead(const struct FString& FilePath);
	struct FString ConvertTMap2JsonStr(TMap<struct FString, struct FString> mapData);
	struct FString ConvertRelativePathToFull(const struct FString& InPath);
	struct FString ConvertGamePathToRelativeFilePath(const struct FString& Path);
	void ConsumeLocalNotificationLaunchApp();
	struct FString ConsoleCommand(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Command);
	void ConnectToURLWithDNSProxy(const struct FString& ProxyIP, const struct FString& URL, int ConnectTimeOutSeconds, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void ConnectToURL(const struct FString& URL, int ConnectTimeOutSeconds, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString ComputerName();
	bool CloudVersionPipe_SendDataWithKey(const struct FString& MsgKey, const struct FString& MsgInfo);
	bool CloudVersionPipe_SendData(const struct FString& MsgInfo);
	bool CloudVersionPipe_RecvDataTest(const struct FString& MsgInfo);
	class UObject* CloudVersionPipe_PipeHelper();
	bool CloudVersionPipe_Log(const struct FString& LogInfo);
	bool CloudVersionInitDataPipeline();
	void CloseWebView();
	void CloseVLink();
	void CloseVideoListDialog();
	void CloseH5WebView(class UGameFrontendHUD* GameFrontendHUD);
	void ClipBoardCopy(const struct FString& Text);
	void ClientKickPlayerFromGame(class UGameFrontendHUD* GameFrontendHUD);
	void ClientEnterWarMode(class UGameFrontendHUD* GameFrontendHUD);
	void ClientConfirmReturnToGame(class UGameFrontendHUD* GameFrontendHUD);
	void ClientConfirmMisKill(class UGameFrontendHUD* GameFrontendHUD, int bConfirm);
	void ClearUpdatedSoPatch();
	void ClearUnknownRT();
	void ClearSyncLoadCacheSystem();
	void ClearSluaClassCache();
	void ClearSlateTouchDebugLogQueue();
	void ClearSlateCache();
	void ClearNotifications();
	void ClearNotice();
	void ClearJankStats();
	void ClearIGProxyData();
	void ClearHasLoadGameSlotCrashFlag();
	void ClearH5WebViewCookie(const struct FString& Domain);
	void ClearChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void ClearAllLocalNotifications();
	void ClearAllAudioBanks();
	void CheckRegisterGestureConflictWithZoom();
	int CheckMetalLibraryUncompressed();
	int CheckMemorySymbolSource();
	bool CheckLocalPakContentHash(const struct FString& Filename);
	bool CheckLocalizationExist();
	TArray<struct FString> CheckFilesInPakWithResult(TArray<struct FString> Files);
	TArray<struct FString> CheckFilesInPakLite(TArray<struct FString> Files);
	TArray<struct FString> CheckFilesInPak(TArray<struct FString> Files);
	bool CheckCanUseUrl(const struct FString& URL);
	void CheckBeforeInitPuffer();
	void ChangeLocalizationReleaseTestStatus(class UGameFrontendHUD* GameFrontendHUD, bool status);
	bool CanUseHapticsEngine();
	bool CanEnableLuaClassIndexCache();
	void CancelLocalNotification(int NotificationID);
	void CallIngameFirstTimeTips(class UGameFrontendHUD* GameFrontendHUD, const struct FString& tableName, const struct FString& FunctionName);
	void CallEngineGC();
	void CacheH5WebView(const struct FString& ModuleName);
	void BqBqShareToFriend(const struct FString& targetUrl, int act, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& msdkExtInfo, const struct FString& imgUrl, const struct FString& previewText, const struct FString& gameTag, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void BqBqShare(const struct FString& _imgPath, const struct FString& _descShare, const struct FString& _titleShare, int _shareScene, const struct FString& _imgUrl, const struct FString& _url, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void BqBqAddFriend(const struct FString& OpenID, const struct FString& Desc, const struct FString& Message, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void BindMotionDetectedDelegate(class ASTExtraPlayerController* PlayerController, class UScreenInput* InScreenInput);
	void AskForNotificationPermission();
	bool AppendForcedKeepODPaks(TArray<struct FString> Filenames);
	bool AndroidShouldShowPermissionRationale();
	bool AndroidCheckPermission();
	void AllocVirMem(int64_t XMiB);
	void AkAudio_UnloadInitBank();
	void AkAudio_UnloadAllFilePackages();
	void AkAudio_StopAllSounds(bool bShouldStopUISounds);
	void AkAudio_LoadInitBank();
	void AkAudio_Flush(class UWorld* WorldToFlush);
	void AkAudio_ClearBanks();
	bool AddStreamingLevel(class UWorld* World, const struct FString& SubLevel, bool bShouldBeLoaded, bool bShouldBeVisible, bool bShouldBlockOnLoad);
	void AddOnScreenDebugMessage(const struct FString& Message, int Key, float TimeToDisplay, const struct FVector2D& TextScale, struct FColor* Color);
	int AddMemoryLogSize(int b_size);
	void AddKnownMissingPackage(class UObject* BindObj, bool bReplace, struct FString* PackageName);
	void AddCrashContextType(int Type, const struct FString& KeyString);
	void AddCrashContextData(int Key, const struct FString& Val, bool bAppendTimeStamp, int reportLevel);
	void AddAttachFileString(const struct FString& Type, bool bClear, const struct FString& strinfo);
	void AddAttachDataString(const struct FString& Type, bool bClear, const struct FString& strinfo);
	int ActivateCameraByName_LuaState();
	bool ActivateCameraByName(const struct FString& CameraName);
	void AcquireWifiLock();
};


// Class Client.ScriptHelperEngine
// 0x0000 (0x0028 - 0x0028)
class UScriptHelperEngine : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScriptHelperEngine");
		return pStaticClass;
	}


	TArray<unsigned char> TestLz4Decompress(TArray<unsigned char> Source, bool bEnable);
	TArray<unsigned char> TestLz4Compress(TArray<unsigned char> Source);
	void StopTGPA();
	void StartTGPA();
	struct FString ReplaceEmoji(const struct FString& Content, int MaxEmojiNum, const struct FString& SpecialCharacter);
	void PrepareTGPA();
	int IsSupportTGPA();
	bool IsSupportADPF();
	bool IsLowMemoryDevice();
	bool Is64BitVersion();
	int GetThermalStatus();
	int GetThermal15sAfter();
	float GetMemoryUsedVirtualInKB();
	float GetMemoryUsedPhysicalInKB();
};


// Class Client.SDKCallbackHelper
// 0x0060 (0x0088 - 0x0028)
class USDKCallbackHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    SDKCallbackDelegate;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.SDKCallbackHelper");
		return pStaticClass;
	}


	void Init();
	class USDKCallbackHelper* GetInstance();
};


// Class Client.SettingSubsystem
// 0x0338 (0x0368 - 0x0030)
class USettingSubsystem : public UGameInstanceSubsystem
{
public:
	bool                                               bUseRegisterDelegateOptimize;                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TMap<struct FString, bool>                         CacheRegisterProperties_Bool;                             // 0x0038(0x0050) (ZeroConstructor)
	TMap<struct FString, int>                          CacheRegisterProperties_Int;                              // 0x0088(0x0050) (ZeroConstructor)
	TMap<struct FString, float>                        CacheRegisterProperties_Float;                            // 0x00D8(0x0050) (ZeroConstructor)
	TMap<unsigned char, struct FString>                ReportSettingConfig;                                      // 0x0128(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0178(0x0050) MISSED OFFSET
	struct FString                                     CachedSaveGameName;                                       // 0x01C8(0x0010) (ZeroConstructor, Config)
	struct FScriptDelegate                             GetUserSettingsDelegate;                                  // 0x01D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	class UEffectSettingMgr*                           EffectSettingMgrInstace;                                  // 0x01E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class USaveGame*                                   UserSettings;                                             // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class USaveGame*                                   UserSettingsShadowData;                                   // 0x01F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0200(0x0008) MISSED OFFSET
	class UClass*                                      UserSettingsClass;                                        // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     UserSettingsClassName;                                    // 0x0210(0x0010) (ZeroConstructor, Config)
	struct FString                                     ActiveSaveGameName;                                       // 0x0220(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0230(0x0008) MISSED OFFSET
	struct FString                                     LanguageSettingsClassName;                                // 0x0238(0x0010) (ZeroConstructor, Config)
	struct FString                                     LanguageSaveGameName;                                     // 0x0248(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData04[0xB0];                                      // 0x0258(0x00B0) MISSED OFFSET
	TMap<struct FString, bool>                         LanguageMap;                                              // 0x0308(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0358(0x0008) MISSED OFFSET
	class UClass*                                      SaveGameUIElemLayoutClass;                                // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.SettingSubsystem");
		return pStaticClass;
	}


	void UnregisterUserSettingDelegate(int Handle);
	bool SetUserSettings_String(const struct FString& PropertyName, const struct FString& Val);
	bool SetUserSettings_Int(const struct FString& PropertyName, int Value);
	bool SetUserSettings_Float(const struct FString& PropertyName, float Value);
	bool SetUserSettings_Bool(const struct FString& PropertyName, bool Value, bool IngoreSave);
	int RegisterUserSettingsDelegate_Int(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	int RegisterUserSettingsDelegate_Float(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	int RegisterUserSettingsDelegate_Bool(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate(const struct FScriptDelegate& Delegate);
	void RefreshSettingDataForReport();
	void OnReportSettingConfigStart();
	void OnRefreshReportSettingConfig();
	class USaveGame* GetUserSettingsByDelegate(const struct FString& LayoutName);
	struct FString GetUserSettings_String(const struct FString& PropertyName);
	int GetUserSettings_Int(const struct FString& PropertyName);
	float GetUserSettings_Float(const struct FString& PropertyName);
	bool GetUserSettings_Bool(const struct FString& PropertyName);
	class USaveGame* GetUserSettings();
	struct FString GetUserLanguageSettingsProperty_String(const struct FString& PropertyName);
	class UEffectSettingMgr* GetEffectSettingMgr();
	void FinishModifyUserSettings();
	void ClearSettingDataForReport();
	void CheckLocalizationLanguage();
	bool CheckChangeWithCache(class UObject* Source, class UProperty* Property, const struct FString& PropertyName);
	void CacheRegisterValue(class UObject* Source, class UProperty* Property, const struct FString& PropertyName);
	void BeginModifyUserSettings();
};


// Class Client.SoundTools
// 0x0138 (0x0160 - 0x0028)
class USoundTools : public UObject
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0028(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.SoundTools");
		return pStaticClass;
	}


	void StopConversionByUser(int Index);
	void SaveWavInIOS(const struct FString& GameFilePath);
	void SaveToAndroidPath(const struct FString& GameFilePath);
	int GetSizeOfWwiseAudioToWav(const struct FString& EventName, const struct FString& BankName, const struct FString& outFilePath);
	float GetConversionPercent(int Index);
	int ConvertWwiseAudioToWavSync(const struct FString& EventName, const struct FString& BankName, const struct FString& outFilePath);
	int ConvertWwiseAudioToWav(const struct FString& EventName, const struct FString& BankName, const struct FString& outFilePath);
	bool CanWwiseAudioToWav();
};


// Class Client.STExtraClientUtils
// 0x0000 (0x0028 - 0x0028)
class USTExtraClientUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.STExtraClientUtils");
		return pStaticClass;
	}


	int IsVolumetricLightmapRegistered(class UObject* WorldContextObject, const struct FName& LevelPackageName);
	void GetWidgetHandleAsyncWithCallBack(class UObject* WorldContext, const struct FString& ModuleName, const struct FString& WidgetKey, const struct FScriptDelegate& Callback);
	class UUAEUserWidget* GetDynamicWidgetHandle(class UObject* WorldContext, const struct FString& ModuleName, const struct FString& WidetKey);
	class USTExtraClientUIBPUtils* GetBPUtils();
	void EnsureVolumetricLightmapRegistered(class UObject* WorldContextObject, const struct FName& LevelPackageName);
	int AsyncLoadAssetInstWithCallback(const struct FString& InPath, const struct FScriptDelegate& Callback);
};


// Class Client.STExtraClientUIBPUtils
// 0x0128 (0x0150 - 0x0028)
class USTExtraClientUIBPUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET
	TMap<int, struct FAssetAsyncRequest>               PendingAsyncAssetRequests;                                // 0x0100(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.STExtraClientUIBPUtils");
		return pStaticClass;
	}


	void OnAsyncAssetLoaded(const struct FSoftObjectPath& InSoftPath, int RequestIdx);
	int AsyncLoadAssetInstWithCallback(const struct FString& InPath, const struct FScriptDelegate& Callback);
};


// Class Client.TPerfPlat
// 0x0000 (0x0028 - 0x0028)
class UTPerfPlat : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.TPerfPlat");
		return pStaticClass;
	}


	void SetQuality(int Quality);
	void requestResourceGuarantee(int Condition, int LoadType, int applyType);
	void PostGameStatusToTMFPIS(int Key, const struct FString& Value);
	int GetDeviceLevel();
};


// Class Client.Translator
// 0x0110 (0x0138 - 0x0028)
class UTranslator : public UObject
{
public:
	struct FString                                     SubscriptionKey;                                          // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	struct FString                                     StoredAccessToken;                                        // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptDelegate                             OnGetAccessTokenDelegate;                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnDetectDelegate;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnTranslateDelegate;                                      // 0x0068(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0078(0x0098) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.Translator");
		return pStaticClass;
	}


	void TranslateV2(int Channel, int ID, const struct FString& Text);
	void Translate(const struct FString& URL, const struct FString& Verb, TMap<struct FString, struct FString> Headers, const struct FString& Content);
	void PostMsg(const struct FString& URL, const struct FString& Content);
	void OnTranslateV2(bool Success, const struct FString& Data);
	void OnTranslate__DelegateSignature(bool IsSuccess, const struct FString& LanguageFrom, const struct FString& Translation);
	void OnTranslate(bool Success, const struct FString& Data);
	void OnGetAccessTokenV2(bool Success, const struct FString& Data);
	void OnGetAccessToken__DelegateSignature(bool IsSuccess, const struct FString& Token);
	void OnGetAccessToken(bool Success, const struct FString& Data);
	void OnDetectV2(bool Success, const struct FString& Data);
	void OnDetect__DelegateSignature(bool IsSuccess, const struct FString& From, const struct FString& To);
	void OnDetect(bool Success, const struct FString& Data);
	bool HasTranslating();
	void GetAccessToken(bool bForceGet, const struct FString& URL, const struct FString& Verb, TMap<struct FString, struct FString> Headers, const struct FString& Content);
	void Detect(const struct FString& URL, const struct FString& Verb, TMap<struct FString, struct FString> Headers, const struct FString& Content);
};


// Class Client.TssManager
// 0x0038 (0x0060 - 0x0028)
class UTssManager : public UObject
{
public:
	struct FString                                     TssHostInfo;                                              // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FString                                     TssCDNHostInfo;                                           // 0x0038(0x0010) (ZeroConstructor, Config)
	struct FString                                     TssBuildInIpInfo;                                         // 0x0048(0x0010) (ZeroConstructor, Config)
	int                                                TssLocal;                                                 // 0x0058(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.TssManager");
		return pStaticClass;
	}


	int SendSkdData_LuaState();
	int SendEigeninfoData_LuaState();
	uint32_t SaveSendEigeninfoCode_LuaState();
	int OnRecvData_LuaState();
	uint32_t InvokeSDKIoctl(int Command, const struct FString& InCmdData);
	int GetUserTag4Lua_LuaState();
	int GetDeviceFeature_LuaState();
	int EigenArrayObfuscationVerify_LuaState();
};


// Class Client.UAEClientGameMode
// 0x0000 (0x0580 - 0x0580)
class AUAEClientGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UAEClientGameMode");
		return pStaticClass;
	}

};


// Class Client.UAELobbyGameMode
// 0x0000 (0x0580 - 0x0580)
class AUAELobbyGameMode : public AUAEClientGameMode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UAELobbyGameMode");
		return pStaticClass;
	}

};


// Class Client.UAELobbyPlayerController
// 0x0000 (0x0828 - 0x0828)
class AUAELobbyPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UAELobbyPlayerController");
		return pStaticClass;
	}

};


// Class Client.UTRichTextBlock
// 0x0A28 (0x0B28 - 0x0100)
class UUTRichTextBlock : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHyperlinkClicked;                                       // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     ContentText;                                              // 0x0118(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0128(0x0010) MISSED OFFSET
	bool                                               AutoCapitalizeText;                                       // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0140(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bSupportHyLink;                                           // 0x0198(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportImage;                                            // 0x0199(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x019A(0x0006) MISSED OFFSET
	TArray<struct FSlateColor>                         ColorSwitchList;                                          // 0x01A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ActiveColorIndex;                                         // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // 0x01B4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x01C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextVerticalJustify>                  TextVerticalJustification;                                // 0x01C5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x01C6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x01C7(0x0001) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x01C8(0x0680) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FMargin                                     HScrollBarPadding;                                        // 0x0848(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FMargin                                     VScrollBarPadding;                                        // 0x0858(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              WrapTextAt;                                               // 0x0868(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x086C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x087C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     HyperlinkDecoratorTag;                                    // 0x0880(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HyperlinkCallBackFunctionName;                            // 0x0890(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HyperlinkCallBackTableName;                               // 0x08A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData05[0x270];                                     // 0x08B0(0x0270) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0B20(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UTRichTextBlock");
		return pStaticClass;
	}


	void SetWrapTextAt(float Val);
	void SetTextJustification(TEnumAsByte<ETextJustify> InJustification);
	void SetText(const struct FText& InText);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetActiveColorIndex(int InIndex);
	void OnHyperlinkClickedEvent__DelegateSignature(const struct FMetaDataHolder& MetaDataHolder);
	TArray<struct FVector2D> GetViewSizes();
	struct FText GetText();
	struct FVector2D EstimateDesiredSize();
};


// Class Client.AEVarButton
// 0x0438 (0x0550 - 0x0118)
class UAEVarButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0118(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FButtonStyle                                WidgetStyle;                                              // 0x0120(0x0338) (Edit, BlueprintVisible)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0458(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0468(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x0478(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x0479(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x047A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassMouseEvent;                                         // 0x047B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	struct FString                                     ButtonVar;                                                // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnButtonClicked;                                          // 0x0490(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonPressed;                                          // 0x04A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonReleased;                                         // 0x04B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonHovered;                                          // 0x04C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonUnhovered;                                        // 0x04D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x04E0(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04F0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0500(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnPressed;                                                // 0x0510(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnReleased;                                               // 0x0520(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x0530(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnUnhovered;                                              // 0x0540(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AEVarButton");
		return pStaticClass;
	}


	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
	void SetStyle(const struct FButtonStyle& InStyle);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool IsPressed();
};


// Class Client.ReuseFallC
// 0x0CC0 (0x0F20 - 0x0260)
class UReuseFallC : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnBeforeNewItem;                                          // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAfterNewItem;                                           // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRefreshItem;                                            // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemCreated;                                            // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemHide;                                               // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTouchFinish;                                            // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOverscrollState;                                        // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x02D0(0x02E8) (Edit)
	EWidgetClipping                                    ScrollBoxClipping;                                        // 0x05B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05B9(0x0007) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x05C0(0x0680) (Edit)
	ESlateVisibility                                   ScrollBarVisibility;                                      // 0x0C40(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C41(0x0003) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x0C44(0x0008) (Edit, IsPlainOldData)
	int                                                ColumnNum;                                                // 0x0C4C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemHeight;                                               // 0x0C50(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemPaddingX;                                             // 0x0C54(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemPaddingY;                                             // 0x0C58(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverscrollLength;                                         // 0x0C5C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // 0x0C60(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UClass*>                OtherItemClass;                                           // 0x0C68(0x0050) (Edit, ZeroConstructor)
	int                                                PreviewCount;                                             // 0x0CB8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemPoolMaxNum;                                           // 0x0CBC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TopSpaceReserved;                                         // 0x0CC0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BottomSpaceReserved;                                      // 0x0CC4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BottomMargin;                                             // 0x0CC8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ViewSizeCmpThreshold;                                     // 0x0CCC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0CD0(0x0038) MISSED OFFSET
	class UClass*                                      CurItemClass;                                             // 0x0D08(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x210];                                     // 0x0D10(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ReuseFallC");
		return pStaticClass;
	}


	void SoftReload(int __ItemCount);
	void SetTopMargin(float Val);
	void SetScrollOffset(float NewScrollOffset);
	void SetItemSize(int __Idx, float __Size);
	void SetItemFullStyle(int idx);
	bool SetCurItemClass(const struct FString& StrName);
	void SetBottomMargin(float Val);
	void ScrollToStart();
	void ScrollToEnd();
	void ResetCurItemClassToDefault();
	void Reload(int __ItemCount);
	void RefreshOne(int __Idx);
	void Refresh();
	void OnUpdateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnTouchFinishDelegate__DelegateSignature();
	void OnTouchFinishCallback();
	void OnOverscrollStateDelegate__DelegateSignature(EReuseFallOverscrollState State);
	void OnHideItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnCreateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnBeforeNewItemDelegate__DelegateSignature(int idx);
	void OnAfterNewItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void JumpByIdx(int __Idx, bool bImmedia);
	struct FVector2D GetViewSize();
	float GetScrollOffset();
	class UScrollBox* GetScrollBox();
	EReuseFallOverscrollState GetOverscrollState();
	struct FVector2D GetContentSize();
	void ClearItemSizeAll();
	void ClearItemSize(int idx);
	void ClearItemFullStyle();
	void Clear();
};


// Class Client.ReuseListC
// 0x0AD0 (0x0D30 - 0x0260)
class UReuseListC : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnUpdateItemParam;                                        // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateItem;                                             // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScrollItem;                                             // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCreateItem;                                             // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x02A0(0x02E8) (Edit)
	EWidgetClipping                                    ScrollBoxClipping;                                        // 0x0588(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   ScrollBoxVisibility;                                      // 0x0589(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x058A(0x0006) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0590(0x0680) (Edit)
	ESlateVisibility                                   ScrollBarVisibility;                                      // 0x0C10(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C11(0x0003) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x0C14(0x0008) (Edit, IsPlainOldData)
	int                                                ItemWidth;                                                // 0x0C1C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemHeight;                                               // 0x0C20(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PaddingX;                                                 // 0x0C24(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PaddingY;                                                 // 0x0C28(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TitleSize;                                                // 0x0C2C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TitlePadding;                                             // 0x0C30(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AutoTitleSize;                                            // 0x0C34(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EReuseListStyle                                    Style;                                                    // 0x0C35(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0C36(0x0002) MISSED OFFSET
	class UClass*                                      ItemClass;                                                // 0x0C38(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PreviewCount;                                             // 0x0C40(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EReuseListNotFullAlignStyle                        NotFullAlignStyle;                                        // 0x0C44(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NotFullScrollBoxHitTestInvisible;                         // 0x0C45(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateForceLayoutPrepass;                                 // 0x0C46(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0C47(0x0001) MISSED OFFSET
	int                                                ItemCacheNum;                                             // 0x0C48(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DelayUpdateTimeLimitMS;                                   // 0x0C4C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xE0];                                      // 0x0C50(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ReuseListC");
		return pStaticClass;
	}


	void SetTitleSlotAutoSize(bool as);
	void SetTitleSize(int sz);
	void SetScrollOffset(float NewScrollOffset);
	void ScrollToStart();
	void ScrollToEnd();
	void Reset(class UClass* __ItemClass, EReuseListStyle __Style, int __ItemWidth, int __ItemHeight, int __PaddingX, int __PaddingY);
	void Reload(int __ItemCount);
	void RefreshParam(const struct FString& _Param);
	void RefreshOneParam(int __Idx, const struct FString& _Param);
	void RefreshOne(int __Idx);
	void Refresh();
	void OnUpdateItemParamDelegate__DelegateSignature(class UUserWidget* Widget, int idx, const struct FString& Param);
	void OnUpdateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnScrollItemDelegate__DelegateSignature(int BeginIdx, int EndIdx);
	void OnCreateItemDelegate__DelegateSignature(class UUserWidget* Widget);
	void JumpByIdxStyle(int __Idx, EReuseListJumpStyle __Style);
	void JumpByIdx(int __Idx);
	struct FVector2D GetViewSize();
	float GetScrollOffset();
	int GetPaddingY();
	int GetPaddingX();
	int GetItemWidthAndPaddingX();
	int GetItemWidth();
	int GetItemHeightAndPaddingY();
	int GetItemHeight();
	struct FVector2D GetContentSize();
	void GetAllWidgetItems(TArray<class UUserWidget*>* ResultItemList);
	class UUserWidget* FindItem(int idx);
	void Clear();
};


// Class Client.ReusePageC
// 0x0138 (0x0398 - 0x0260)
class UReusePageC : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnUpdateItem;                                             // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPageChanged;                                            // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCreateItem;                                             // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginDrag;                                              // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndDrag;                                                // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndScroll;                                              // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UClass*                                      ItemClass;                                                // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsLoopPage : 1;                                           // 0x02C8(0x0001) (Edit)
	unsigned char                                      IsVertical : 1;                                           // 0x02C8(0x0001) (Edit)
	unsigned char                                      CanDrag : 1;                                              // 0x02C8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	int                                                CanDragLimit;                                             // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AutoPlayRate;                                             // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShowPageNum;                                              // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DragPageNum;                                              // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DChgPageParam;                                            // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScrollInertial;                                           // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScrollRate;                                               // 0x02E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x02E8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ReusePageC");
		return pStaticClass;
	}


	void SetAutoPlayRate(float Rate);
	void SelectPage(int __Idx);
	void Reload(int __Count);
	void Play(bool bPlay);
	void OnUpdateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnPageChangedDelegate__DelegateSignature(int PageIdx);
	void OnEndScrollDelegate__DelegateSignature(int PageIdx);
	void OnEndDragDelegate__DelegateSignature(int PageIdx);
	void OnCreateItemDelegate__DelegateSignature(class UUserWidget* Widget);
	void OnBeginDragDelegate__DelegateSignature();
	void MovePrePage();
	void MoveNextPage();
	bool IsDraging();
	int GetPageCount();
	int GetPage();
	float GetOffset();
	float GetAutoPlayRate();
	void GetAllItems(bool OnlyVisible, TArray<class UUserWidget*>* ResultItemList);
	void ClearCache();
};


// Class Client.UDPPingCollector
// 0x0128 (0x0150 - 0x0028)
class UUDPPingCollector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET
	TMap<struct FString, struct FPingServerInfo>       mUDPPingInfoMap;                                          // 0x0060(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x30];                                      // 0x00B0(0x0030) MISSED OFFSET
	struct FScriptMulticastDelegate                    UDPPingShadowResultToLuaDelegate;                         // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x60];                                      // 0x00F0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UDPPingCollector");
		return pStaticClass;
	}


	void TickUDPPing(float DeltaTime);
	void setUDPPingServerAddress(const struct FString& ServerIP, const struct FString& ServerPort, int ZoneID, int WaterMarkType);
	void SetPingSystemControlFlag(int TakeEffectModule, int ThreadReportTlog, int EpollReportTlog);
	void PingServer(const struct FString& address, float Timeout, int WaterMarkType);
	void OnPostSwitchGameStatus(const struct FString& MapName);
	void OnPingServerResultDelegate__DelegateSignature(const struct FString& address, int IsSuccess, float Time, int PingSystemType);
	bool IsChooingZoneAccess();
	bool isAllZoneHasPingValue();
	void Init(float MinPingintervalTime, float pingintervalTime, float pingTimeoutSecond, float normalDelayMilliSecond, float maxAutoChooseZoneDelayMilliSecond);
	float GetZoneServerDelay(const struct FString& ServerAddress);
	int GetMinDealyAddress();
	void ChoosingZone(int ZoneID, const struct FString& AddrIP);
};


// Class Client.ViberateEngine
// 0x0000 (0x0028 - 0x0028)
class UViberateEngine : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ViberateEngine");
		return pStaticClass;
	}

};


// Class Client.VibrateSystemManager
// 0x0468 (0x0498 - 0x0030)
class UVibrateSystemManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FString                                     ClassPath;                                                // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     VibrateAssetTablePath;                                    // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	int                                                MaxAmplitude;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                GroundSpesificMatVibrationMinGrear;                       // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VehicleBreakingMinSpeedThreshold;                         // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VehicleGearMinSpeedThreshold;                             // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<int>                                        TriggerVehicleVibrateGroundPhysicMatList;                 // 0x0070(0x0010) (Edit, ZeroConstructor, Config)
	float                                              TriggerVehicleVibrateMinSlip;                             // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TriggerVehicleVibrateMinSuspensionRaisePercent;           // 0x0084(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VehicleRaiseSuspensionVibrateInerval;                     // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                InitAssetProccessNumFrames;                               // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     LoopTime;                                                 // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00A0(0x0050) MISSED OFFSET
	TMap<int, EVibrateTriggerEventType>                LoadedVibrateAssetIDAndEventTypeMap;                      // 0x00F0(0x0050) (ZeroConstructor)
	TMap<EVibrateStrengthLevel, float>                 VibrateStrengthLevelModifireMap;                          // 0x0140(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<EVibrateTriggerEventType, float>              VibrateEventMinIntervalMap;                               // 0x0190(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   CharacterVibrateEventList;                                // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   WeaponVibrateEventList;                                   // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   VehicleVibrateEventList;                                  // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   SoundUIVibrateEventList;                                  // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   CharacterBeHitVibrateEventList;                           // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   VehicleEngineVibrateEventList;                            // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   VehicleBeHitVibrateEventList;                             // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bEntireVibrationSwitch;                                   // 0x0250(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterVibrationSwitch;                                // 0x0251(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWeaponVibrationSwitch;                                   // 0x0252(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleVibrationSwitch;                                  // 0x0253(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundUIVibrationSwitch;                                  // 0x0254(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	int                                                CharacterVibrationLevel;                                  // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WeaponVibrationLevel;                                     // 0x025C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VehicleVibrationLevel;                                    // 0x0260(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SoundUIVibrationLevel;                                    // 0x0264(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EntireVibrationLevel;                                     // 0x0268(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterVibrate;                                        // 0x026C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWeaponVibrate;                                           // 0x026D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleVibrate;                                          // 0x026E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundUIVibrate;                                          // 0x026F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterBeHitVibrate;                                   // 0x0270(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterClimbVibrate;                                   // 0x0271(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterFallVibrate;                                    // 0x0272(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterSwimVibrate;                                    // 0x0273(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoWeaponVibrate;                                       // 0x0274(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSemiAutoWeaponVibrate;                                   // 0x0275(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBoltWeaponVibrate;                                       // 0x0276(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOtherWeaponVibrate;                                      // 0x0277(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleEngineVibrate;                                    // 0x0278(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleBeHitVibrate;                                     // 0x0279(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleCrashVibrate;                                     // 0x027A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFootstepSoundUIVibrate;                                  // 0x027B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFireShotSoundUIVibrate;                                  // 0x027C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGlassBrokenSoundUIVibrate;                               // 0x027D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleSoundUIVibrate;                                   // 0x027E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x027F(0x0001) MISSED OFFSET
	struct FTimerHandle                                StopVibrateHandle;                                        // 0x0280(0x0008) (BlueprintVisible)
	int                                                CurPlayingVibrateAssetIndex;                              // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurLoopPlayingVibrateAssetIndex;                          // 0x028C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DeviceSupportVibrateType;                                 // 0x0290(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInGameVibration;                                         // 0x0294(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHandBreaking;                                          // 0x0295(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x52];                                      // 0x0296(0x0052) MISSED OFFSET
	bool                                               bHasLastVehicle;                                          // 0x02E8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	int                                                LastVehicleGear;                                          // 0x02EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLastVehicleBreaking;                                   // 0x02F0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLastVehicleSlipping;                                   // 0x02F1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x02F2(0x0002) MISSED OFFSET
	int                                                LastVehicleGroundContactMaterialSurfaceType;              // 0x02F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<int, bool>                                    LastVehicleGearVibrateCache;                              // 0x02F8(0x0050) (BlueprintVisible, ZeroConstructor)
	TMap<EVibrateTriggerEventType, float>              LastVibrateEventTimeMap;                                  // 0x0348(0x0050) (BlueprintVisible, ZeroConstructor)
	float                                              CurVehicleRaiseSuspensionVibrateCD;                       // 0x0398(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7C];                                      // 0x039C(0x007C) MISSED OFFSET
	TArray<struct FVibrateEntity>                      CacheVibrateEntityList;                                   // 0x0418(0x0010) (BlueprintVisible, ZeroConstructor)
	TMap<struct FString, struct FString>               VibratePath2Json;                                         // 0x0428(0x0050) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData08[0x20];                                      // 0x0478(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.VibrateSystemManager");
		return pStaticClass;
	}


	void StopVibrate();
	void SetVibrationLoopTime(const struct FString& InLoopTime);
	void PostVibrateTriggerActionDirectly(int SpesifyID, int Amplitude);
	void PostVibrateTriggerAction(const struct FVibrateTriggerAction& Action, bool bCheckGate, bool bCheckInterval, int SpesifyID);
	void PlayVibrateEntity(const struct FVibrateEntity& Entity);
	void ModifyWeaponVibrationSwitch(bool Val);
	void ModifyWeaponVibrationLevel(int InVal);
	void ModifyVehicleVibrationSwitch(bool Val);
	void ModifyVehicleVibrationLevel(int InVal);
	void ModifyVehicleSoundUIVibrateSetting(bool Val);
	void ModifyVehicleEngineVibrationSetting(bool Val);
	void ModifyVehicleCrashVibrateSetting(bool Val);
	void ModifyVehicleBeHitVibrateSetting(bool Val);
	void ModifySoundUIVibrationSwitch(bool Val);
	void ModifySoundUIVibrationLevel(int InVal);
	void ModifySemiAutoWeaponVibrateSetting(bool Val);
	void ModifyOtherWeaponVibrateSetting(bool Val);
	void ModifyGlassBrokenSoundUIVibrateSetting(bool Val);
	void ModifyFootstepSoundUIVibrateSetting(bool Val);
	void ModifyFireShotSoundUIVibrateSetting(bool Val);
	void ModifyEntireVibrationSwitch(bool Val);
	void ModifyEntireVibrationLevel(int InValue);
	void ModifyCharacterVibrationSwitch(bool Val);
	void ModifyCharacterVibrationLevel(int InVal);
	void ModifyCharacterSwimVibrateSetting(bool Val);
	void ModifyCharacterFallVibrateSetting(bool Val);
	void ModifyCharacterClimbVibrateSetting(bool Val);
	void ModifyCharacterBeHitVibrateSetting(bool Val);
	void ModifyBoltWeaponVibrateSetting(bool Val);
	void ModifyAutoWeaponVibrateSetting(bool Val);
	void LoadUserSettingData(int inCharacterVibrationLevel, int inWeaponVibrationLevel, int inVehicleVibrationLevel, int inSoundUIVibrationLevel, bool binCharacterBeHitVibrate, bool binCharacterClimbVibrate, bool binCharacterFallVibrate, bool binCharacterSwimVibrate, bool binVehicleEngineVibrate, bool binVehicleBeHitVibrate, bool binVehicleCrashVibrate, bool binFootstepSoundUIVibrate, bool binFireShotSoundUIVibrate, bool binGlassBrokenSoundUIVibrate, bool binVehicleSoundUIVibrate, int inEntireVibrationLevel, bool binAutoWeaponVibrate, bool binSemiAutoWeaponVibrate, bool binBoltWeaponVibrate, bool binOtherWeaponVibrate);
	void InvalidateVibrateEntityByEventType(EVibrateTriggerEventType EventType);
	void InitUserSetting();
	void InitSystem();
	void HandleApplicationWillTerminate();
	void HandleApplicationWillEnterBackground();
	void HandleApplicationWillDeactivate();
	void HandleApplicationHasReactivated();
	void HandleApplicationHasEnteredForeground();
	class UVibrateSystemManager* GetInstance(class UObject* WorldContext, bool bAutoCreate);
	int GetEntireVibrationLevel();
	struct FString GetCurrentPlayingVibrationDebugInfo();
	int GetAmplitudeByAlpha(float Alpha);
	void ClearVibratePath2Json();
	void ClearAllVibration();
	bool CheckShootWeaponTypeVibrateGate(class ASTExtraWeapon* Weapon);
	void CheckAndCopyFilesToSavedDir(class UVibrateSystemManager* Mgr);
	void ActiveInGameVibration(bool Inactive);
};


// Class Client.VoiceSDKInterface
// 0x0568 (0x0590 - 0x0028)
class UVoiceSDKInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0028(0x001C) MISSED OFFSET
	int                                                lbsRoomMemberID;                                          // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
	struct FScriptDelegate                             OnSTTReportCallback;                                      // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRSTSCallback;                                           // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRSTSSpeechToTextCallback;                               // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRSTSSubtitleCallback;                                   // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRSTSSubtitleASRStartCallback;                           // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnSessionForAIInfoCallback;                               // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnEnableMagicVoiceCallback;                               // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnEnableRecvMagicVoiceCallback;                           // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnSpeechFileTranslateCallback;                            // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnSpeechTranslateCallback;                                // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnSpeechStreamTranslateCallback;                          // 0x0100(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0110(0x0010) MISSED OFFSET
	struct FString                                     ServerInfo;                                               // 0x0120(0x0010) (ZeroConstructor, Config)
	uint32_t                                           openVoiceSDKLog;                                          // 0x0130(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           MicVolumeMUFactor;                                        // 0x0134(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           SpeekerVolumeMUFactor;                                    // 0x0138(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                RoomOperationTimeout;                                     // 0x013C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x70];                                      // 0x0148(0x0070) MISSED OFFSET
	struct FScriptDelegate                             OpenMicFail;                                              // 0x01B8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OpenMicSuccess;                                           // 0x01C8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CloseMicFail;                                             // 0x01D8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             BeforeOperation;                                          // 0x01E8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CloseMicSuccess;                                          // 0x01F8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OpenSpeakerFail;                                          // 0x0208(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OpenSpeakerSuccess;                                       // 0x0218(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CloseSpeakerFail;                                         // 0x0228(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CloseSpeakerSuccess;                                      // 0x0238(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             JoinRoomFail;                                             // 0x0248(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             JoinRoomNotify;                                           // 0x0258(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             QuitRoomNotify;                                           // 0x0268(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             JoinLbsRoomNotify;                                        // 0x0278(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             QuitLbsRoomNotify;                                        // 0x0288(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             JoinCommonRoomNotify;                                     // 0x0298(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             QuitCommonRoomNotify;                                     // 0x02A8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             RoomStatusUpdatedNotify;                                  // 0x02B8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             SetAppInfoSuccess;                                        // 0x02C8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             SetAppInfoFail;                                           // 0x02D8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             GetReconnectInfo;                                         // 0x02E8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ImSpeakingNotify;                                         // 0x02F8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             TestMicFail;                                              // 0x0308(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             TestMicSuccess;                                           // 0x0318(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             QuitRoomFail;                                             // 0x0328(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DownLoadFileNotify;                                       // 0x0338(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             UploadFileNotify;                                         // 0x0348(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnPlayRecordedFileNotify;                                 // 0x0358(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             KwsNotify;                                                // 0x0368(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ApplyMessageKeyNotify;                                    // 0x0378(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             MemberIsSpeakingNotify;                                   // 0x0388(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             LbsMemberIsSpeakingNotify;                                // 0x0398(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CommonMemberIsSpeakingNotify;                             // 0x03A8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMuteSwitchResult;                                       // 0x03B8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnWakeUpNotify;                                           // 0x03C8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMicOptMuteResultNotify;                                 // 0x03D8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ReportVoiceTimeToServer;                                  // 0x03E8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             RecordSuccess;                                            // 0x03F8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             RecordFail;                                               // 0x0408(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             UploadSuccess;                                            // 0x0418(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             UploadFail;                                               // 0x0428(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             EnableRoomMicrophone;                                     // 0x0438(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ExitInfectionGameMode;                                    // 0x0448(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             JoinInfectionGameMode;                                    // 0x0458(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             RequestPrivacyInSetting;                                  // 0x0468(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnReportPlayerCallback;                                   // 0x0478(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnVoiceSDKEvent;                                          // 0x0488(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             BeforeVoiceSDKInitDelegate;                               // 0x0498(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             AfterVoiceSDKInitDelegate;                                // 0x04A8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             AudioRouteChangedAfterSpeakerDelegate;                    // 0x04B8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             AudioSessionInterruptedDelegate;                          // 0x04C8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRoomMemeberInfoDelegate;                                // 0x04D8(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData04[0x98];                                      // 0x04E8(0x0098) MISSED OFFSET
	struct FScriptDelegate                             OnDeliverDataCallback;                                    // 0x0580(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.VoiceSDKInterface");
		return pStaticClass;
	}


	void UploadRecordFile(bool InPermanent);
	int UploadRecordedFile(const struct FString& InFilePath, int InTimeout, bool InPermanent);
	int UpdateVoiceCoordinate(const struct FString& InRoomName, int64_t X, int64_t Y, int64_t Z, int64_t Radius);
	void TestMic();
	bool TeamSpeakerEnable();
	bool TeamMicphoneEnable();
	void SwitchMode(ECharacterMainType CharMode);
	void SwitchMicphoneWhenCorpsMode();
	int StopRecording();
	void StopRecord();
	void StopPlayRecordFile();
	void StopInterphone();
	int StartRecording(const struct FString& InFilePath, bool InNotVoip);
	void StartRecord();
	void StartInterphone();
	int SpeechTranslate(const struct FString& InFileID, int InSrcLang, int InTargetLang, int InTransType, int InTimeoutMS);
	int SpeechStreamTranslateStart(const struct FString& InFileID, const struct FString& InOutFilePath, int InSrcLang, int InTargetLang, const struct FString& InVoiceType, int InVolume, int InTimeoutMS);
	int SpeechFileTranslate(const struct FString& InFilePath, int InSrcLang, int InTargetLang, int InVoiceType, float InVoiceRate, float InVolume, int InTimeoutMS);
	void ShowOpenSpeakerAtFirstMsg();
	void ShowCorpsModeCannotUseLBSVoice();
	void SetVoiceServer(const struct FString& ServerInfo);
	void SetVoiceSDKSupportBackgroundChat(bool isSupportBGChat);
	void SetVoiceSDKChatServiceEnable(bool IsEnable);
	void SetVoiceMode(int Type);
	int SetUserInfo(const struct FString& InUserInfo);
	void SetTransSecInfo(const struct FString& InTransSecInfo);
	void SetSpeakerVolum(float Value);
	void SetSpeakerStatus(bool flag);
	int SetServerUrl(int InUrlType, const struct FString& InURL);
	int SetServerInfo(const struct FString& URL, const struct FString& InDefaultIpSvr);
	void SetRoomOperationTimeout(int InTimeout);
	int SetResourePath(const struct FString& InResourcePath);
	void SetReportBufferTime(int nTimeSec);
	void SetPlayerVolume(const struct FString& InPlayerId, int InVol);
	int SetNotify();
	int SetMode(int InGVMode);
	void SetMicphoneVolum(float Value);
	void SetMicphoneStatus(bool flag);
	int SetMagicVoiceMsgType(const struct FString& InMagicType);
	void SetLbsVoiceRadius(float Radius);
	void SetLbsRoomEnableStatus(bool flag);
	int SetKwsModelPath(const struct FString& KwsPath);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void SetFeature(int8_t InFeature, bool Inactive);
	int SetDeliverData(int Len, TArray<unsigned char>* pbuf);
	int SetAppInfo(const struct FString& InAppId, const struct FString& InAppKey, const struct FString& InOpenid);
	void SetAllVoiceStatus(bool flag);
	void RSTSStopRecording();
	int RSTSStartRecording(int InSrcLang, TArray<int> InTargetLangs, int InTargetLangCnt, int InTransType, int InTimeoutMS, const struct FString& InRecordFilePath, const struct FString& InSrcLangStr);
	int RSTSSpeechToText(int InSrcLang, const struct FString& InExtraInfo, const struct FString& InRecordFilePath);
	void ResetWhenLogOut();
	bool ReportPlayers(const struct FString& InExtraInfo, TArray<struct FString> InOpenids);
	int ReportFileForAbroad(const struct FString& InFilePath, bool InTranslate, bool InChangeVoice, int InTime);
	void RecoverPlayersVolume(int InVol);
	void ReactiveLbsStatus();
	int QuitVoiceRoom(const struct FString& InRoomName);
	void QuitRoom();
	bool QuitLbsRoom(bool needReenterLbs);
	void QuitCommonRoom(const struct FString& InRoomName);
	int Poll();
	int PlayRecordFileV2(const struct FString& InFileID);
	int PlayRecordedFile(const struct FString& InDownloadInFilePath);
	int OpenVoiceSpeaker();
	int OpenVoiceMic();
	void OpenTeamSpeakerOnly(bool ShowTips);
	int OpenTeamMicphoneOnly(bool ShowTips);
	int OpenTeamInterphone();
	int OpenSpeaker();
	void OpenMicAndSpeakerAfterJoinLbsRoom();
	int OpenMic();
	int OpenLBSInterphone();
	void OpenIngameSpeaker();
	int OpenIngameMicphone();
	void OpenAllSpeaker(bool ShowTips);
	int OpenAllMicphone(bool ShowTips);
	int OpenAllInterphone();
	void OnRoomTypeChanged(const struct FString& itemtext);
	void OnResume();
	void OnPause();
	void OnDeliverData(TArray<unsigned char> pbuf, int Len, const struct FString& OpenID);
	bool LbsSpeakerEnable();
	bool LbsMicphoneEnable();
	int JoinTeamRoom(const struct FString& InRoomName);
	void JoinRoom(const struct FString& Room, const struct FString& UserId);
	int JoinRangeRoom(const struct FString& InRoomName);
	void JoinLbsRoom(const struct FString& lbsRoom, const struct FString& UserId);
	void JoinCommonRoom(const struct FString& InRoomName);
	bool IsVoiceSDKEnable();
	bool IsVoiceRoomHasSpeakDataInLastSeconds(int InRoomType, int InDeltaSeconds);
	bool IsTeamInterphoneOpenned();
	bool IsSpeaking();
	bool IsLbsInterphoneOpenned();
	bool IsInterphoneMode();
	bool IsEnableCivilFile();
	int Invoke(uint32_t InCmd, uint32_t InParam1, uint32_t InParam2, const struct FString& InExterInfo);
	void InstallSystemAudioEventListener(bool InEnable);
	void InitVoiceSDKComponent(const struct FString& UserId);
	int InitVoiceSDK();
	void Init();
	bool HaveTeamRoom();
	bool HaveLbsRoom();
	TArray<struct FString> GetVoiceSpeakerWanters();
	int GetVoiceSpeakerState();
	TArray<struct FString> GetVoiceMicWanters();
	int GetVoiceMicState();
	float GetVoiceLength();
	struct FString GetTeamRoomName();
	int GetRoomStatus(const struct FString& InRoomName);
	int GetRoomMemberVoiceData(const struct FString& InOpenid, int InIndexType, int DataType, bool OnlyIncludeLatest);
	int GetRoomMemberId(const struct FString& InOpenid);
	int GetPlayerVolume(const struct FString& InPlayerId);
	int GetMicState();
	struct FString GetLocalRecordFilePath(const struct FString& InFileName);
	struct FString GetLbsRoomName();
	void GetAuthKey();
	int GetAudioDeviceConnectionState();
	void ForbidTeammateVoiceById(int memberID, bool IsEnable);
	int ForbidMemberVoice(int InMember, bool InEnable, const struct FString& InRoomName);
	void ForbidLbsMemberVoiceById(int memberID, bool IsEnable);
	void EnableVoiceSdk(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	int EnableVoiceRoomMicrophone(const struct FString& InRoomName, bool InEnable);
	void EnableVoiceChat(bool InEnable);
	int EnableRSTSSubtitle(bool InEnable, int InSrcLang, const struct FString& InExtInfo);
	int EnableRoomSpeaker(const struct FString& InRoomName, bool InEnable);
	int EnableReportForAbroad(bool InIsWholeRoundaudit);
	bool EnableReportALLAbroad(bool InEnable, bool InWithEncryption, int InTimeout);
	int EnableRecvMagicVoice(bool InEnable);
	int EnableMultiRoom(bool InEnable);
	int EnableMagicVoice(const struct FString& InMagicType, bool InEnable);
	void EnableLog(bool InEnable);
	int EnableKws(bool bEnable);
	int EnableCommonRoomSpeaker(const struct FString& InRoomName, bool InEnable);
	int EnableCommonRoomMic(const struct FString& InRoomName, bool InEnable);
	int EnableCivilFile(bool Enable);
	void EnableBluetoothSCO(bool InEnable);
	int DownloadRecordFileV2(const struct FString& InFileID, bool InPermanent);
	int DownloadRecordedFile(const struct FString& InFileID, const struct FString& InDownloadInFilePath, int InTimeout, bool InPermanent);
	void CommonTestMic();
	int CloseVoiceSpeaker();
	int CloseVoiceMic();
	void CloseSpeaker();
	void CloseMic();
	void CloseIngameSpeaker();
	void CloseIngameMicphone();
	void CloseAllSpeaker(bool ShowTips);
	void CloseAllMicphone(bool ShowTips);
	int CheckDeviceMuteState();
	void CheckAndEnableRoomSpeaker();
	void ChatShowAgeRestrictionMsgInLobby();
	void ChatShowAgeRestrictionMsgInFighting();
	void ChatShowAgeRestrictionMsgInChat();
	void ChatRequestPrivacyInSetting();
	void ChatRequestPrivacyInGame();
	int ApplyMessageKey();
	void AlwaysDisableRoomMic(const struct FString& InRoomName, bool WithClear);
};


// Class Client.WeaponDIYCaptureActor
// 0x0000 (0x04B0 - 0x04B0)
class AWeaponDIYCaptureActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.WeaponDIYCaptureActor");
		return pStaticClass;
	}


	void ResizeRT(class UTextureRenderTarget2D* RenderTarget, int Width, int Height);
};


// Class Client.WINSDKFBWebLogin
// 0x0030 (0x0130 - 0x0100)
class UWINSDKFBWebLogin : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnUrlChanged;                                             // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHttpResponed;                                           // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     InitialURL;                                               // 0x0120(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.WINSDKFBWebLogin");
		return pStaticClass;
	}


	void OnWINSDKHttpResponed__DelegateSignature(bool requestSucc, const struct FString& txtContent);
	void OnUrlChanged__DelegateSignature(const struct FText& Text);
	void LoadUrl(const struct FString& NewURL);
	void DoHttpRequest(const struct FString& URL);
};


// Class Client.WINWebSocketServer
// 0x0030 (0x0058 - 0x0028)
class UWINWebSocketServer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnWebSocketConnectEvent;                                  // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnWebSocketErrorEvent;                                    // 0x0038(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnWebSocketMessageEvent;                                  // 0x0048(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.WINWebSocketServer");
		return pStaticClass;
	}


	void Tick(int DeltaTime);
	void Stop();
	void Start(int InPort);
	void Send(const struct FString& InMsg);
	class UWINWebSocketServer* GetInstance();
};


}

