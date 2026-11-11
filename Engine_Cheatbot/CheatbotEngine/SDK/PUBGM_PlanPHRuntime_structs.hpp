#pragma once

// PUBG MOBILE (3.1.0) SDKGenerate by @CheatBot_Owner || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @CheatBot_Tele
namespace CHEATBOT
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PlanPHRuntime.EDirectionType
enum class EDirectionType : uint8_t
{
	EDirectionType__Up             = 0,
	EDirectionType__Down           = 1,
	EDirectionType__Left           = 2,
	EDirectionType__Right          = 3,
	EDirectionType__EDirectionType_MAX = 4
};


// Enum PlanPHRuntime.EHomeAssetType
enum class EHomeAssetType : uint8_t
{
	EHomeAssetType__Wall           = 0,
	EHomeAssetType__HalfWall       = 1,
	EHomeAssetType__ArcWall        = 2,
	EHomeAssetType__Door           = 3,
	EHomeAssetType__EHomeAssetType_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlanPHRuntime.BarrierData
// 0x0014
struct FBarrierData
{
	struct FVector2D                                   Position;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      OccupiedX;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OccupiedY;                                                // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PaintNum;                                                 // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              Thickness;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EHomeAssetType                                     AssetType;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDirectionType                                     Direction;                                                // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
};

// ScriptStruct PlanPHRuntime.DecorationData
// 0x00C8
struct FDecorationData
{
	struct FVector2D                                   Position;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              OccupiedX;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OccupiedY;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 AssetBrush;                                               // 0x0010(0x00B8) (Edit, BlueprintVisible)
};

}

