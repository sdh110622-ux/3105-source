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

// Class Gamelet.Gamelet
// 0x0028 (0x0050 - 0x0028)
class UGamelet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.Gamelet");
		return pStaticClass;
	}


	int UpdateProductConfig();
	void StopTick();
	void StartTick();
	void SetTickIntervalSec(float TickIntervalSec);
	int SetScriptExternalLoadDir(const struct FString& ExternalLoadDir);
	int SetFont(const struct FString& FontName, const struct FString& FontPath);
	int SetDefaultFont(const struct FString& FontName);
	int SetBuiltinResConfig(const struct FString& ResConfig);
	int SetAppVisibility(const struct FString& AppID, bool Visible);
	int SetAppPageVisibility(const struct FString& AppID, const struct FString& AppPage, bool Visible);
	int SendMessageToSdk(const struct FString& Msg);
	int SendMessageToApp(const struct FString& AppID, const struct FString& Msg);
	int RefreshUserdata(TMap<struct FString, struct FString> UserData);
	int OpenBeforeLoginWithGameVersion(TEnumAsByte<EGameletEnvironment> Environment, const struct FString& GameVersion);
	int OpenBeforeLogin(TEnumAsByte<EGameletEnvironment> Environment);
	int OpenApp(const struct FString& AppID, const struct FString& OpenArgs);
	int Open(TEnumAsByte<EGameletEnvironment> Environment, TMap<struct FString, struct FString> UserData);
	int Initialize(class UGameletSettings* Settings);
	struct FString GetProductConfig();
	bool GetIsProductEnvironment();
	class UGameletSettings* GetGlobalSettings();
	int GetBackTrace(struct FString* TraceInfo);
	class UGamelet* Get();
	int ExecOnSDKMessage(const struct FString& Msg);
	int ExecOnReportData(const struct FString& EventName, const struct FString& Data);
	int ExecOnRefreshUserdata();
	void EnableLog(bool Enable);
	int Deinitialize();
	void CollectPixUILogOutput(EPxLogGroups PixUILogType, EPxLogLevels PixUILogLevel, const struct FString& logContent);
	int CloseAppPage(const struct FString& AppID, const struct FString& AppPage);
	int CloseApp(const struct FString& AppID);
	int Close();
	int AllAssetsGC();
};


// Class Gamelet.GameletMatBrush
// 0x0008 (0x0040 - 0x0038)
class UGameletMatBrush : public UPixUIBrushWrapper
{
public:
	class UMaterialInstanceDynamic*                    MatInstance;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletMatBrush");
		return pStaticClass;
	}

};


// Class Gamelet.GameletEnvMgr
// 0x0070 (0x0098 - 0x0028)
class UGameletEnvMgr : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletEnvMgr");
		return pStaticClass;
	}


	int OnEnvToGameMessage(const struct FString& Msg);
	int OnEnvToEntryMessage(const struct FString& Msg);
	int OnEnvReportData(const struct FString& EventName, const struct FString& Data);
	int OnEnvRefreshUserdata();
	void OnEnvLoaded(const struct FString& URL, int ErrorCode);
	void OnEnvInternalError(int ErrorCode, const struct FString& ErrorMsg);
	struct FString GetBackTrace();
};


// Class Gamelet.GameletFile
// 0x0000 (0x0028 - 0x0028)
class UGameletFile : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletFile");
		return pStaticClass;
	}


	bool WriteFile(const struct FString& Path, const struct FGameletArrayBuffer& ArrayBuffer);
	bool SaveStringToFile(const struct FString& Path, const struct FString& Content);
	struct FGameletArrayBuffer ReadFile(const struct FString& Path);
	struct FString LoadFileToString(const struct FString& Path);
	struct FString GetFileMd5(const struct FString& Path);
	int64_t FileSize(const struct FString& Path);
	bool FileExists(const struct FString& Path);
	bool DirectoryExists(const struct FString& Path);
	bool DeleteFile(const struct FString& Path);
	bool DeleteDirectory(const struct FString& Path);
	bool CreateDirectory(const struct FString& Path);
};


// Class Gamelet.GameletPaths
// 0x0000 (0x0028 - 0x0028)
class UGameletPaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletPaths");
		return pStaticClass;
	}


	struct FString ToAbsolutePathForWrite(const struct FString& Path);
	struct FString ToAbsolutePathForRead(const struct FString& Path);
	struct FString RootDir();
	struct FString ProjectUserDir();
	struct FString ProjectSavedDir();
	struct FString ProjectModsDir();
	struct FString ProjectIntermediateDir();
	struct FString ProjectDir();
	struct FString ProjectContentDir();
	struct FString ProjectConfigDir();
	struct FString LaunchDir();
	struct FString GetPuertsScriptFolderName();
	struct FString GetPuertsEntrancePath(const struct FString& PakName);
	struct FString GetPuertsAppScriptPath(const struct FString& AppFolderName);
	struct FString GetPuertsAppNameByPakName(const struct FString& PakName);
	struct FString GetPuertsAppIndexPath(const struct FString& AppFolderName);
	struct FString GameletSavedRoot();
	struct FString GameletFolderName();
	struct FString GameletContentRoot();
	struct FString GameletAppArchiveRoot(const struct FString& AppID);
};


// Class Gamelet.GameletPuertsEnvMgr
// 0x0070 (0x0098 - 0x0028)
class UGameletPuertsEnvMgr : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPostMessage;                                            // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletPuertsEnvMgr");
		return pStaticClass;
	}


	void OnEnvScriptStateInit();
	void OnEnvMessage(const struct FString& Msg);
	void OnEnvLoaded(const struct FString& URL, int ErrorCode);
	class UGameletPuertsEnvMgr* Get();
};


// Class Gamelet.GameletPuertsUtilities
// 0x0000 (0x0028 - 0x0028)
class UGameletPuertsUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletPuertsUtilities");
		return pStaticClass;
	}


	void UpdateTextureResources(class UTexture2D* Texture);
	int UnmountPak(const struct FString& pakPath);
	void RemoveUserWidgetFromGame(class UUserWidget* UserWidget, const struct FString& PanelInfo);
	void ReleaseTextureResource(class UTexture2D* Texture);
	int MountPak(const struct FString& pakPath);
	class UUserWidget* LoadUI(const struct FString& Ref, class UObject* Obj);
	class UTexture2D* LoadImageToTexture2D(const struct FString& Path, TEnumAsByte<ETextureGroup> LODGroup, unsigned char IsSRGB);
	bool IsWithEditor();
	void HelloWorld();
	class UWidgetAnimation* GetWidgetAnimationByName(class UUserWidget* Widget, const struct FString& Name);
	struct FString GetSDKVersion();
	struct FString GetPlatformDesc();
	unsigned char GetNetworkType();
	bool GetIsProductEnvironment();
	struct FString GetHardwareInfo();
	struct FString GetEngineVersion();
	void FlushPuertsVMMessages();
	void CallCommonFunc(const struct FString& Type, const struct FString& ParamJson, class UWidget* Widget, const struct FScriptDelegate& Callback);
	void AddUserWidgetToGame(class UUserWidget* UserWidget, const struct FString& PanelInfo);
};


// Class Gamelet.GameletSettings
// 0x0088 (0x00B0 - 0x0028)
class UGameletSettings : public UObject
{
public:
	struct FScriptDelegate                             OnSDKMessage;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRefreshUserdata;                                        // 0x0038(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnViewCreated;                                            // 0x0048(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnViewAboutToDestroy;                                     // 0x0058(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnReportData;                                             // 0x0068(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnProfileJSSDKMessage;                                    // 0x0078(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnPuertsCommonFuncDelegate;                               // 0x0088(0x0010) (Edit, ZeroConstructor, InstancedReference)
	bool                                               DisableJsErrReport;                                       // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableGetBackTrace;                                      // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DelayWndCallMsg;                                          // 0x009A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SupportUseEngineFont;                                     // 0x009B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseSRGB;                                                  // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForbiddenSyncServerLogConf;                               // 0x009D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x009E(0x0002) MISSED OFFSET
	struct FScriptDelegate                             OnCoreCodeLoad;                                           // 0x00A0(0x0010) (Edit, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletSettings");
		return pStaticClass;
	}


	bool IsValidSetting();
	class UGameletSettings* Get();
};


// Class Gamelet.GameletWidget
// 0x0028 (0x0158 - 0x0130)
class UGameletWidget : public UCanvasPanel
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0130(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletWidget");
		return pStaticClass;
	}


	void SetWidgetOffset(const struct FMargin& OffsetData);
	void SetWidgetAnchor(const struct FAnchors& AnchorData);
	void SetUseSRGB(bool EnableSRGB);
	void SetRHIConfigured(bool Configured);
	void SetBackgroundWidgetOffset(const struct FMargin& OffsetData);
	void SetBackgroundWidgetAnchor(const struct FAnchors& AnchorData);
	void SetBackgroundImage(const struct FString& ImagePath);
	TWeakObjectPtr<class UPixUIWidget> GetPixUIWidget();
};


// Class Gamelet.GameletWindow
// 0x0148 (0x0170 - 0x0028)
class UGameletWindow : public UObject
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0028(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletWindow");
		return pStaticClass;
	}


	void OnPxWidgetScriptStateInit();
	void OnPxWidgetScriptStateDone();
	bool OnPxWidgetRequestOpen(const struct FString& URL, const struct FString& Name, const struct FString& Features, bool bReplace);
	void OnPxWidgetMessage(const struct FString& Msg);
	void OnPxWidgetLoaded(const struct FString& URL, int ErrorCode);
	void OnPxWidgetInternalError(int ErrorCode, const struct FString& ErrorMsg);
	void OnPxWidgetClose();
};


}

