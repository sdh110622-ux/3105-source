#pragma once

// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ClientNet.EIMSDKPlatformType
enum class EIMSDKPlatformType : uint8_t
{
	EIMSDKPlatformType__kIMSDKPlatformTypeUnknow = 0,
	EIMSDKPlatformType__kIMSDKPlatformTypeIOS = 1,
	EIMSDKPlatformType__kIMSDKPlatformTypeAndroid = 2,
	EIMSDKPlatformType__EIMSDKPlatformType_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClientNet.IMSDKLoginResult
// 0x0040
struct FIMSDKLoginResult
{
	int                                                imsdkRetCode;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                thirdRetCode;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     Token;                                                    // 0x0018(0x0010) (ZeroConstructor)
	int64_t                                            tokenExpire;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     retExtraJson;                                             // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct ClientNet.IMSDKExtraInfo
// 0x0050
struct FIMSDKExtraInfo
{
	TMap<struct FString, struct FString>               ExtraInfo;                                                // 0x0000(0x0050) (ZeroConstructor)
};

}

