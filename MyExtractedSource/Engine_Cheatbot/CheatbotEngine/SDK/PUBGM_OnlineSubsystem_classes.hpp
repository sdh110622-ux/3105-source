#pragma once

// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystem.NamedInterfaces
// 0x0038 (0x0060 - 0x0028)
class UNamedInterfaces : public UObject
{
public:
	TArray<struct FNamedInterface>                     NamedInterfaces;                                          // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FNamedInterfaceDef>                  NamedInterfaceDefs;                                       // 0x0038(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystem.NamedInterfaces");
		return pStaticClass;
	}

};


// Class OnlineSubsystem.TurnBasedMatchInterface
// 0x0000 (0x0028 - 0x0028)
class UTurnBasedMatchInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystem.TurnBasedMatchInterface");
		return pStaticClass;
	}


	void OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive);
	void OnMatchEnded(const struct FString& Match);
};


}

