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
//Enums
//---------------------------------------------------------------------------

// Enum AutoRobot.EAutoRunTestFlag
enum class EAutoRunTestFlag : uint8_t
{
	Game4Win                       = 0,
	PVEBattleTest                  = 1,
	EAutoRunTestFlag_MAX           = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AutoRobot.BulletImpactAutoTestData
// 0x001C
struct FBulletImpactAutoTestData
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

}

