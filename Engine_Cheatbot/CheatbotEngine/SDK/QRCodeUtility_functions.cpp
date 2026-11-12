// PUBG (4.3.0) Created by @JokerRepo and for pattern @enen
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QRCodeUtility.VideoThumbnailGenerator.GenerateVideoThumbnailAsync
// ()
// Parameters:
// struct FString                 videoPath                      (Parm, ZeroConstructor)
// int                            thumbnailSize                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnThumbnailGenerated           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UVideoThumbnailGenerator::GenerateVideoThumbnailAsync(const struct FString& videoPath, int thumbnailSize, const struct FScriptDelegate& OnThumbnailGenerated)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QRCodeUtility.VideoThumbnailGenerator.GenerateVideoThumbnailAsync");

	UVideoThumbnailGenerator_GenerateVideoThumbnailAsync_Params params;
	params.videoPath = videoPath;
	params.thumbnailSize = thumbnailSize;
	params.OnThumbnailGenerated = OnThumbnailGenerated;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function QRCodeUtility.ZXingScanner.Encode
// ()
// Parameters:
// struct FString                 Text                           (Parm, ZeroConstructor)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UZXingScanner::Encode(const struct FString& Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QRCodeUtility.ZXingScanner.Encode");

	UZXingScanner_Encode_Params params;
	params.Text = Text;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QRCodeUtility.ZXingScanner.Decode
// ()
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FZXingScanResult        OutResult                      (Parm, OutParm)
// struct FVector4                InRect                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UZXingScanner::Decode(class UTexture2D* Texture, const struct FVector4& InRect, struct FZXingScanResult* OutResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QRCodeUtility.ZXingScanner.Decode");

	UZXingScanner_Decode_Params params;
	params.Texture = Texture;
	params.InRect = InRect;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;

	return params.ReturnValue;
}


}

