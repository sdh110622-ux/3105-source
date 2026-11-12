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

// Enum UIParticleSystem2.UIMeshProjectionMethod
enum class EUIMeshProjectionMethod : uint8_t
{
	YOZOrtho                       = 0,
	XOYOrtho                       = 1,
	YOZPerspectiveFullScreen       = 2,
	YOZPerspectiveLocal            = 3,
	UIMeshProjectionMethod_MAX     = 4
};



}

