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

// Enum PixUILog.EPxLogLevels
enum class EPxLogLevels : uint8_t
{
	EPxLogLevels__Log              = 0,
	EPxLogLevels__Warning          = 1,
	EPxLogLevels__Error            = 2,
	EPxLogLevels__Debug            = 3,
	EPxLogLevels__Count            = 4,
	EPxLogLevels__EPxLogLevels_MAX = 5
};


// Enum PixUILog.EPxLogGroups
enum class EPxLogGroups : uint8_t
{
	EPxLogGroups__Core             = 0,
	EPxLogGroups__Plugin           = 1,
	EPxLogGroups__Script           = 2,
	EPxLogGroups__Profiler         = 3,
	EPxLogGroups__Count            = 4,
	EPxLogGroups__EPxLogGroups_MAX = 5
};



}

