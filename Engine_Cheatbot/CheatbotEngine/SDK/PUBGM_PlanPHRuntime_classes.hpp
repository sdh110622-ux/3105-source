#pragma once

// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PlanPHRuntime.BinFileHelper
// 0x0000 (0x0028 - 0x0028)
class UBinFileHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.BinFileHelper");
		return pStaticClass;
	}


	int Init(int z4BufferSize, int zeroListSize);
};


// Class PlanPHRuntime.MapBarrierWidget
// 0x0040 (0x0140 - 0x0100)
class UMapBarrierWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0100(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.MapBarrierWidget");
		return pStaticClass;
	}


	void SetMapSize(struct FVector2D* InMapSize);
	void SetMapBarrierData(TArray<struct FBarrierData> InMapBarrierData);
	void SetLevelBoundExtent(int InLevelBoundExtent);
	void SetGridSize(float InGridSize);
	void SetDecorationData(TArray<struct FDecorationData> InMapDecorationData);
};


// Class PlanPHRuntime.PlanPH_GameMode
// 0x0008 (0x22D8 - 0x22D0)
class APlanPH_GameMode : public ABattleRoyaleGameMode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x22D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameMode");
		return pStaticClass;
	}


	void HandleNavigationInfo(class AController* Controller);
	class ASTExtraPlayerStart* GetPlayerStart(int LandId);
	void DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason);
};


// Class PlanPHRuntime.PlanPH_GameModeState_Active
// 0x0000 (0x00C0 - 0x00C0)
class UPlanPH_GameModeState_Active : public UGameModeStateActive
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameModeState_Active");
		return pStaticClass;
	}

};


// Class PlanPHRuntime.PlanPH_GameModeState_Fighting
// 0x0000 (0x00D0 - 0x00D0)
class UPlanPH_GameModeState_Fighting : public UGameModeStateFightingTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameModeState_Fighting");
		return pStaticClass;
	}

};


// Class PlanPHRuntime.PlanPH_GameState
// 0x0010 (0x1358 - 0x1348)
class APlanPH_GameState : public ASTExtraGameStateBase
{
public:
	struct FScriptMulticastDelegate                    OnIslandPlayerChangeDelegate;                             // 0x1348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameState");
		return pStaticClass;
	}

};


// Class PlanPHRuntime.PlanPH_PlayerState
// 0x0000 (0x1A60 - 0x1A60)
class APlanPH_PlayerState : public ASTExtraPlayerState
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_PlayerState");
		return pStaticClass;
	}


	void OnRep_LandId();
	void InitLandId();
};


// Class PlanPHRuntime.PlanPHDoor
// 0x0018 (0x04D0 - 0x04B8)
class APlanPHDoor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04B8(0x0008) MISSED OFFSET
	struct FVector                                     TransformDirVector;                                       // 0x04C0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHDoor");
		return pStaticClass;
	}


	void Refresh_DoorCollisionChanel(class UStaticMeshComponent* StaticMeshComponent, bool bEnableCollision);
	void DoorAniFinish(class UStaticMeshComponent* InDoorCheckBox, bool Bright);
};


// Class PlanPHRuntime.PlanPHGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UPlanPHGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHGameplayStatics");
		return pStaticClass;
	}


	void ChangeLightChannel(class UPrimitiveComponent* InComponent, int InChannelBitMask);
};


// Class PlanPHRuntime.PlanPHHomeArea
// 0x0038 (0x04F0 - 0x04B8)
class APlanPHHomeArea : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04B8(0x0008) MISSED OFFSET
	struct FIntVector                                  BlockNumXYZ;                                              // 0x04C0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FIntVector                                  MinGridIndexXYZ;                                          // 0x04CC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FIntVector                                  MaxGridIndexXYZ;                                          // 0x04D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	class UPlanPHHomeAreaVisualizationComponent*       VisComponent;                                             // 0x04E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHHomeArea");
		return pStaticClass;
	}


	void UpdateEditableArea(const struct FIntVector& InMinGridIndexXYZ, const struct FIntVector& InMaxGridIndexXYZ);
};


// Class PlanPHRuntime.PlanPHHomeAreaVisualizationComponent
// 0x0010 (0x0800 - 0x07F0)
class UPlanPHHomeAreaVisualizationComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHHomeAreaVisualizationComponent");
		return pStaticClass;
	}


	void ShowGrids(bool InBShow);
};


// Class PlanPHRuntime.PlanPHMapData
// 0x0020 (0x00B8 - 0x0098)
class UPlanPHMapData : public UMapDataBase
{
public:
	TArray<class ASTExtraPlayerCharacter*>             PlayerCharacterArrayC;                                    // 0x0098(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             OffsetLocations;                                          // 0x00A8(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHMapData");
		return pStaticClass;
	}


	bool RemovePlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem);
	bool AddPlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem, class UWidget* PlayerInfoBPItem, class UWidget* PlayerInfoRotWidgetItem, const struct FVector& OffsetLocation);
};


// Class PlanPHRuntime.PlanPHSpectatorPawn
// 0x0070 (0x04F0 - 0x0480)
class APlanPHSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0480(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x04D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              PlaneMoveMaxSpeed;                                        // 0x04E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VerticalMoveMaxSpeed;                                     // 0x04EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHSpectatorPawn");
		return pStaticClass;
	}


	void OnSpectatorRestart();
	void MoveRight(float Val);
	void MoveForward(float Val);
};


}

