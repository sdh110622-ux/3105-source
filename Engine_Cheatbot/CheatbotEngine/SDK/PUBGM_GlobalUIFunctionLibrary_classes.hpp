#pragma once

// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C
// 0x0000 (0x0090 - 0x0090)
class UGlobalUIFunctionLibrary_C : public UBlueprintFunctionOverride
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C");
		return pStaticClass;
	}


	void STATIC_SetArenaWeaponLightProperty(class UObject* __WorldContext);
	void STATIC_SetLobbyDefaultLightProperty(class UObject* __WorldContext);
	void SwitchLobbyMeshBg(int BgIdx, class UObject* __WorldContext);
	void STATIC_AddOrUpdateBlendable(class UCameraComponent* CameraComponent, class UMaterialInstanceDynamic* MIDynamic, float BlendWeight, class UObject* __WorldContext);
	void STATIC_ProcessAndroidBack(class UObject* __WorldContext);
	void STATIC_SetSpecialIconWithSprite2DMatchSize(class UImage* Widget, const struct FString& specialIconPath, class UObject* __WorldContext);
	void GetItemTableRow(int ID, class UObject* __WorldContext, struct FBP_STRUCT_Item_type* Item);
	void SecondsToMMSS(int Seconds, class UObject* __WorldContext, struct FString* FormatTime);
	void STATIC_PlaySoundPopup(class UObject* __WorldContext);
	void STATIC_PlaySoundTab(class UObject* __WorldContext);
	void STATIC_GetUIRectOffset(class UObject* __WorldContext, int* Left, int* Right);
	void STATIC_IsConfigGameModeSubType(EGameModeSubType InSubType, class UObject* Context, class UObject* __WorldContext, bool* res);
	void STATIC_IsConfigGameModeType(EGameModeType InGameModeType, class UObject* Context, class UObject* __WorldContext, bool* res);
	void STATIC_GetGlobalLuaUI(class UObject* WorldContextObject, class UObject* __WorldContext, class UGlobalLuaWidget_C** AsGlobal_Lua_Widget);
	void GetVector4(float X, float Y, float W, float H, class UObject* __WorldContext, struct FVector4* Vector);
	void STATIC_InitAmmoDropBox(class UMeshComponent* MeshComponent, int LOD, class UObject* __WorldContext);
	struct FString GetRankIntegralBigIcon(const struct FString& Icon, class UObject* __WorldContext);
	struct FString GetRankIntegralSmallIcon(const struct FString& Icon, class UObject* __WorldContext);
	struct FString GetRankIntegralSubIcon(const struct FString& Icon, class UObject* __WorldContext);
	void STATIC_SetRankInteral(const struct FBP_STRUCT_RankIntegralLevel_type& RankIntegralLevelInfo, class UImage* ImageIcon, class UTextBlock* TextBlock_Rank, class UCanvasPanel* Canvas_Panel_Star, class UImage* Image_Star, class UTextBlock* TextBlock_Star, bool isSegmentStarOpen, class UImage* Image_Quality, class UImage* vx_Image_Quality, class UObject* __WorldContext);
	void STATIC_SetImageFromPath(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext);
	void STATIC_GetBrushFromSprite(const struct FSlateBrush& Brush, const struct FString& Path, class UObject* __WorldContext, struct FSlateBrush* Result);
	void STATIC_LoadSprite(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext);
	void GetXieQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	void GetBgQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	void GetQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	void SetCornerQuality(class UImage* Image, int Quality, class UObject* __WorldContext);
	void GetPingColor(float ms, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_SetImgWithPath(class UImage* ImgRef, const struct FString& imgPath, bool IsMatchSize, class UObject* __WorldContext, bool* Success);
	void GetItemName(const struct FString& Name, int Length, bool chineseSensity, class UObject* __WorldContext, struct FString* OutName);
	void STATIC_UpdateImageByPath(class UImage* Image, const struct FString& Path, class UObject* __WorldContext);
	void STATIC_UpdateImageTint(class UImage* Image, const struct FLinearColor& Color, class UObject* __WorldContext);
	void STATIC_ChangeBrushColor(const struct FSlateBrush& Brush, const struct FLinearColor& Color, class UObject* __WorldContext, struct FSlateBrush* NewBrush);
	void STATIC_GetCameraMod(class UObject* __WorldContext, int* Mod);
	void STATIC_SetHumanLightProperty(class UObject* __WorldContext);
	void STATIC_SetWeaponLightProperty(class UObject* __WorldContext);
	void STATIC_SetSceneSkyLightProperty(const struct FString& lightName, const struct FTransform& Trans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext);
	void STATIC_SetAndroidKeyIsValid(bool bValid, class UObject* __WorldContext);
	void STATIC_numToTimeStrFormat(int timeNum, class UObject* __WorldContext, struct FString* TimeStr);
	void STATIC_numToTimeStr(int timeNum, class UObject* __WorldContext, struct FString* TimeStr);
	void STATIC_UpdateNationImage(class UImage* Image, const struct FString& RoleNation, class UObject* __WorldContext);
	void STATIC_SetScenePointLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius, class UObject* __WorldContext);
	void STATIC_SetSceneDirectionalLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext);
	void STATIC_GetLobbyCorpsIcon(int IconID, class UObject* __WorldContext, class UTexture2D** Value);
	void STATIC_GetLobbyGlobalBp(class UObject* __WorldContext, class UGlobal_Bp_C** AsGlobal_Bp);
	void STATIC_GetLobbyFrameTexture(int frameLevel, class UObject* __WorldContext, class UTexture2D** Output);
	void STATIC_GetNationInfo(const struct FString& NationCode, class UObject* __WorldContext, struct FBP_STRUCT_RegionConfig_type* NationInfo);
	void STATIC_SetImageWithSpriteRes(const struct FString& ResPath, class UImage* Image, class UObject* __WorldContext);
	void STATIC_GetNationSwitch(const struct FString& Name, class UObject* __WorldContext, bool* Ret);
	void STATIC_CheckIfMenuOpen(int MenuId, class UObject* __WorldContext, bool* Ret);
	void STATIC_GetItemTimeS(int res_id, int FirstTimeNum, class UObject* __WorldContext, struct FString* time_s, bool* is_have_limit);
	void STATIC_ShowItemTipsByButton(int ItemId, class UButton* Button, int validHours, bool isShowCloseBtn, class UObject* __WorldContext);
	void STATIC_CloseItemTips(class UObject* __WorldContext);
	void CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget);
	void STATIC_PlaySoundCloseButton(class UObject* __WorldContext);
	void STATIC_ShowEffect(bool IsShow, class UObject* __WorldContext, TArray<class UWidget*>* Widget);
	void STATIC_IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* Visible);
	void STATIC_PlaySoundClickButton(class UObject* __WorldContext);
	void STATIC_SendBAReport(int ButtonType, int Reason, class UObject* __WorldContext);
	void STATIC_IsWhiteSpace(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	void STATIC_GetTextLength(const struct FString& Text, bool chineseSensity, class UObject* __WorldContext, int* Length);
	void STATIC_BoolToVisible(bool Visible, bool collapse, bool isButton, class UObject* __WorldContext, ESlateVisibility* Visibility);
	void STATIC_IsEnglish(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	void STATIC_GetGlobalData(class UObject* __WorldContext, class Abp_global_C** globalObj);
	void STATIC_GetLocalizeString(int ID, const struct FString& string1, const struct FString& string2, const struct FString& string3, class UObject* __WorldContext, struct FString* TextValue);
};


}

