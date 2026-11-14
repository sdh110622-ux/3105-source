#import "JHCJDrawView.h"
#import <CoreText/CoreText.h>
#import <UIKit/UIKit.h>
#import <stdio.h>
#import <mach-o/dyld.h>
#import <mach/vm_region.h>
#import <malloc/malloc.h>
#import <objc/runtime.h>
#import <mach/mach.h>
#include "string.h"
#include "imgui.h"
#include "imgui_impl_metal.h"
#import <sys/socket.h>
#undef PF_MAX
#import <Foundation/Foundation.h>
#import <mach/mach_traps.h>
#include <math.h>
#import "SDK.hpp"
#import <array>
#include "Tools.h"
#include <cstdint>
#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#include "json.hpp"
#include "UE4.h"
#include "mahoa.h"
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <mach-o/dyld.h>
#import <mach-o/arch.h>
#import <mach/vm_region.h>
#import <malloc/malloc.h>
#import <objc/runtime.h>
#include <string>
#import <mach/mach.h>
#include <thread>
#include <iostream>
#include <vector>
#include <array>
#include <array>
#import <Metal/Metal.h>
#import <MetalKit/MetalKit.h>
#import <AVFoundation/AVFoundation.h>
#include "imgui.h"
#include "imgui_impl_metal.h"
#import "FarsiType.h"
#import "PubgLoad.h"
#import "XorStr.hpp"

using namespace std;
using namespace SDK;

#define kWidth  [UIScreen mainScreen].bounds.size.width
#define kHeight [UIScreen mainScreen].bounds.size.height

// ==========================================
// ========== GLOBAL VARIABLES ==============
// ==========================================

bool MenDeal = false;
bool IsAimbot = false;
bool IsBone = false;
bool Is3Dbox = false;
bool isLineEsp = true;
bool isTextEsp = true;
bool isHpBarEsp = true;
bool Cheatbotlp = true;

int g_screenWidth = 0;
int g_screenHeight = 0;

UFont *Font = 0;
ASTExtraPlayerCharacter *localPlayer = 0;
ASTExtraPlayerController *localPlayerController = 0;

@interface metalbiew () <MTKViewDelegate>
@property (nonatomic, strong) IBOutlet MTKView *mtkView;
@property (nonatomic, strong) id <MTLDevice> device;
@property (nonatomic, strong) id <MTLCommandQueue> commandQueue;
@end

@interface JHCJDrawView()
@end

// ==========================================
// ========== METAL VIEW & MENU =============
// ==========================================

@implementation metalbiew

- (MTKView *)mtkView {
    return (MTKView *)self.view;
}

- (void)loadView {
    self.view = [[MTKView alloc] initWithFrame:CGRectMake(0, 0, kWidth, kHeight)];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.mtkView.device = self.device;
    self.mtkView.delegate = self;
    self.mtkView.clearColor = MTLClearColorMake(0, 0, 0, 0);
    self.mtkView.backgroundColor = [UIColor colorWithRed:0 green:0 blue:0 alpha:0];
    self.mtkView.clipsToBounds = YES;
}

- (instancetype)initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil {
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    
    _device = MTLCreateSystemDefaultDevice();
    _commandQueue = [_device newCommandQueue];
    if (!self.device) abort();
    
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    ImGui::StyleColorsDark();
    
    // Font setup (No Chinese, Clean English)
    NSString *fontPath = @"/System/Library/Fonts/CoreAddition/Verdana.ttf";
    io.Fonts->AddFontFromFileTTF(fontPath.UTF8String, 18.0f);
    
    ImGui_ImplMetal_Init(_device);
    return self;
}

- (void)drawInMTKView:(MTKView*)view {
    ImGuiIO& io = ImGui::GetIO();
    io.DisplaySize.x = view.bounds.size.width;
    io.DisplaySize.y = view.bounds.size.height;
    
    CGFloat framebufferScale = view.window.screen.nativeScale;
    io.DisplayFramebufferScale = ImVec2(framebufferScale, framebufferScale);
    io.DeltaTime = 1 / float(view.preferredFramesPerSecond ?: 65);
    
    id<MTLCommandBuffer> commandBuffer = [self.commandQueue commandBuffer];
    
    if (MenDeal) {
        [self.view setUserInteractionEnabled:YES];
    } else {
        [self.view setUserInteractionEnabled:NO];
    }
    
    MTLRenderPassDescriptor* renderPassDescriptor = view.currentRenderPassDescriptor;
    if (renderPassDescriptor != nil) {
        id <MTLRenderCommandEncoder> renderEncoder = [commandBuffer renderCommandEncoderWithDescriptor:renderPassDescriptor];
        [renderEncoder pushDebugGroup:@""];
        
        ImGui_ImplMetal_NewFrame(renderPassDescriptor);
        ImGui::NewFrame();
        
        // --- CLEAN MENU ---
        if (MenDeal == true) {
            ImGui::SetNextWindowSize(ImVec2(320, 320), ImGuiCond_FirstUseEver);
            ImGui::Begin("CheatBot Menu", &MenDeal, ImGuiWindowFlags_NoCollapse);
            
            ImGui::TextColored(ImVec4(1.0f, 0.0f, 0.0f, 1.0f), "PUBG iOS Internal");
            ImGui::Separator();
            
            ImGui::Checkbox("Line ESP", &isLineEsp);
            ImGui::Checkbox("Skeleton ESP", &IsBone);
            ImGui::Checkbox("Box ESP", &Is3Dbox);
            ImGui::Checkbox("Name ESP", &isTextEsp);
            ImGui::Checkbox("Health ESP", &isHpBarEsp);
            
            ImGui::Separator();
            if (ImGui::Button("CLOSE MENU", ImVec2(ImGui::GetWindowWidth() - 20, 30))) {
                MenDeal = false;
            }
            ImGui::End();
        }
        
        ImGui::Render();
        ImDrawData* draw_data = ImGui::GetDrawData();
        ImGui_ImplMetal_RenderDrawData(draw_data, commandBuffer, renderEncoder);
        
        [renderEncoder popDebugGroup];
        [renderEncoder endEncoding];
        [commandBuffer presentDrawable:view.currentDrawable];
    }
    [commandBuffer commit];
}

- (void)mtkView:(MTKView*)view drawableSizeWillChange:(CGSize)size {}

- (void)updateIOWithTouchEvent:(UIEvent *)event {
    UITouch *anyTouch = event.allTouches.anyObject;
    CGPoint touchLocation = [anyTouch locationInView:self.view];
    ImGuiIO &io = ImGui::GetIO();
    io.MousePos = ImVec2(touchLocation.x, touchLocation.y);
    
    BOOL hasActiveTouch = NO;
    for (UITouch *touch in event.allTouches) {
        if (touch.phase != UITouchPhaseEnded && touch.phase != UITouchPhaseCancelled) {
            hasActiveTouch = YES;
            break;
        }
    }
    io.MouseDown[0] = hasActiveTouch;
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [self updateIOWithTouchEvent:event];
    if (event.allTouches.count >= 3) { // 3 finger tap
        MenDeal = !MenDeal;
    }
}

- (void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event { [self updateIOWithTouchEvent:event]; }
- (void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event { [self updateIOWithTouchEvent:event]; }
- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event { [self updateIOWithTouchEvent:event]; }

@end

// ==========================================
// ========== CORE LOGIC & HELPERS ==========
// ==========================================

bool IsValidAddress(kaddr addr) {
    return addr > 0x100000000 && addr < 0x2000000000;
}

kaddr getRealOffset(kaddr offset) {
    return (unsigned long)_dyld_get_image_vmaddr_slide(0) + offset;
}

long CHEATBOTOWNER() {
    return getRealOffset(0x109ABC718);
}

TNameEntryArray *GetGNames() {
    return ((TNameEntryArray *(*)()) ((unsigned long)_dyld_get_image_vmaddr_slide(0) + 0x104734D98))();
}

UWorld *GetFullWorld() {
    auto gobjects = UObject::GUObjectArray->ObjObjects;
    for (int i = 0; i < gobjects.Num(); i++) {
        if (auto obj = gobjects.GetByIndex(i)) {
            if (obj->IsA(UEngine::StaticClass())) {
                auto GEngine = (UEngine *)obj;
                if (GEngine && GEngine->GameViewport) {
                    Font = GEngine->MediumFont;
                    return GEngine->GameViewport->World;
                }
            }
        }
    }
    return 0;
}

template <class T> void GetAllActors(std::vector<T *> &Actors) {
    UGameplayStatics* gGameplayStatics = (UGameplayStatics*)UGameplayStatics::StaticClass();
    auto GWorld = GetFullWorld();
    if (GWorld) {
        TArray<AActor *> Actors2;
        gGameplayStatics->GetAllActorsOfClass((UObject *)GWorld, T::StaticClass(), &Actors2);
        for (int i = 0; i < Actors2.Num(); i++) {
            Actors.push_back((T *)Actors2[i]);
        }
    }
}

void DrawFilledRectangle(UCanvas* Canvas, FVector2D Min, float Width, float Height, FLinearColor Color) {
    for (float i = 0.f; i < Height; i += 1.f) {
        Canvas->K2_DrawLine(Min + FVector2D(0.f, i), Min + FVector2D(Width, i), 1.f, Color);
    }
}

void DrawLine(UCanvas* Canvas, FVector2D from, FVector2D to, float thickness, FLinearColor color) {
    Canvas->K2_DrawLine(from, to, thickness, color);
}

void *LoadFont() {
    while (!Font) {
        Font = UObject::FindObject<UFont>(std::string("Font RobotoTiny.RobotoTiny"));
        sleep(1);
    }
    return 0;
}

// ==========================================
// ========== ESP RENDER ====================
// ==========================================

void LocalPlayer(UCanvas* Canvas) {
    if (!Canvas) return;
    auto GWorld = GetFullWorld();
    if (GWorld && GWorld->NetDriver && GWorld->NetDriver->ServerConnection) {
        localPlayerController = (ASTExtraPlayerController*)GWorld->NetDriver->ServerConnection->PlayerController;
        if (localPlayerController) {
            std::vector<ASTExtraPlayerCharacter*> PlayerActors;
            GetAllActors(PlayerActors);
            for (auto Player : PlayerActors) {
                if (!IsValidAddress((kaddr)Player) || !Player->RootComponent) continue;
                if (Player->PlayerKey == localPlayerController->PlayerKey) {
                    localPlayer = Player;
                    break;
                }
            }
        }
    }
}

void DrawPlayerESP(UCanvas* Canvas) {
    if (!localPlayer || !localPlayerController || !Canvas) return;
    auto GWorld = GetFullWorld();
    if (!GWorld) return;
    
    std::vector<ASTExtraPlayerCharacter*> Actors;
    GetAllActors(Actors);
    
    for (auto Player : Actors) {
        if (!IsValidAddress((kaddr)Player) || !Player->RootComponent) continue;
        if (Player->PlayerKey == localPlayerController->PlayerKey || Player->TeamID == localPlayerController->TeamID || Player->bDead || Player->bHidden) continue;
        
        float Distance = localPlayer->GetDistanceTo(Player) / 100.f;
        if (Distance > 500.f) continue;
        
        FVector HeadPos = Player->GetBonePos("Head", {0, 0, 0});
        FVector RootPos = Player->GetBonePos("Root", {0, 0, 0});
        FVector2D Head2D, Root2D;
        
        if (!UGameplayStatics::ProjectWorldToScreen(localPlayerController, HeadPos, true, &Head2D) || 
            !UGameplayStatics::ProjectWorldToScreen(localPlayerController, RootPos, true, &Root2D)) continue;
        
        bool IsVisible = localPlayerController->LineOfSightTo(Player, {0, 0, 0}, true); 
        FLinearColor color = IsVisible ? FLinearColor(0.f, 1.f, 0.f, 1.f) : FLinearColor(1.f, 0.f, 0.f, 1.f);
        
        if (Head2D.X < 0 || Head2D.Y < 0 || Head2D.X > g_screenWidth || Head2D.Y > g_screenHeight) continue;
        
        // Line
        if (isLineEsp) {
            DrawLine(Canvas, {g_screenWidth / 2.f, 0.f}, {Head2D.X, Head2D.Y}, 1.5f, color);
        }
        
        // Skeleton (Bone)
        if (IsBone) {
            FVector Pelvis = Player->GetBonePos("pelvis", {});
            FVector neck_01 = Player->GetBonePos("neck_01", {});
            FVector upper_l = Player->GetBonePos("upperarm_l", {});
            FVector upper_r = Player->GetBonePos("upperarm_r", {});
            FVector lowerarm_l = Player->GetBonePos("lowerarm_l", {});
            FVector lowerarm_r = Player->GetBonePos("lowerarm_r", {});
            FVector hand_l = Player->GetBonePos("hand_l", {});
            FVector hand_r = Player->GetBonePos("hand_r", {});
            FVector calf_l = Player->GetBonePos("calf_l", {});
            FVector calf_r = Player->GetBonePos("calf_r", {});
            FVector foot_l = Player->GetBonePos("foot_l", {});
            FVector foot_r = Player->GetBonePos("foot_r", {});

            FVector2D PelvisPos, neck_01Pos, upper_lPos, upper_rPos, lowerarm_lPos, lowerarm_rPos, hand_lPos, hand_rPos, calf_lPos, calf_rPos, foot_lPos, foot_rPos;
            if (UGameplayStatics::ProjectWorldToScreen(localPlayerController, Pelvis, false, &PelvisPos) && 
                UGameplayStatics::ProjectWorldToScreen(localPlayerController, neck_01, false, &neck_01Pos) && 
                UGameplayStatics::ProjectWorldToScreen(localPlayerController, upper_l, false, &upper_lPos) && 
                UGameplayStatics::ProjectWorldToScreen(localPlayerController, upper_r, false, &upper_rPos) && 
                UGameplayStatics::ProjectWorldToScreen(localPlayerController, lowerarm_l, false, &lowerarm_lPos) && 
                UGameplayStatics::ProjectWorldToScreen(localPlayerController, lowerarm_r, false, &lowerarm_rPos) && 
                UGameplayStatics::ProjectWorldToScreen(localPlayerController, hand_l, false, &hand_lPos) && 
                UGameplayStatics::ProjectWorldToScreen(localPlayerController, hand_r, false, &hand_rPos) && 
                UGameplayStatics::ProjectWorldToScreen(localPlayerController, calf_l, false, &calf_lPos) && 
                UGameplayStatics::ProjectWorldToScreen(localPlayerController, calf_r, false, &calf_rPos) && 
                UGameplayStatics::ProjectWorldToScreen(localPlayerController, foot_l, false, &foot_lPos) && 
                UGameplayStatics::ProjectWorldToScreen(localPlayerController, foot_r, false, &foot_rPos)) {
                Canvas->K2_DrawLine({hand_rPos.X, hand_rPos.Y}, {lowerarm_rPos.X, lowerarm_rPos.Y}, 1.0f, color);
                Canvas->K2_DrawLine({lowerarm_rPos.X, lowerarm_rPos.Y}, {upper_rPos.X, upper_rPos.Y}, 1.0f, color);
                Canvas->K2_DrawLine({upper_rPos.X, upper_rPos.Y}, {neck_01Pos.X, neck_01Pos.Y}, 1.0f, color);
                Canvas->K2_DrawLine({neck_01Pos.X, neck_01Pos.Y}, {upper_lPos.X, upper_lPos.Y}, 1.0f, color);
                Canvas->K2_DrawLine({upper_lPos.X, upper_lPos.Y}, {lowerarm_lPos.X, lowerarm_lPos.Y}, 1.0f, color);
                Canvas->K2_DrawLine({lowerarm_lPos.X, lowerarm_lPos.Y}, {hand_lPos.X, hand_lPos.Y}, 1.0f, color);
                Canvas->K2_DrawLine({foot_rPos.X, foot_rPos.Y}, {calf_rPos.X, calf_rPos.Y}, 1.0f, color);
                Canvas->K2_DrawLine({calf_rPos.X, calf_rPos.Y}, {PelvisPos.X, PelvisPos.Y}, 1.0f, color);
                Canvas->K2_DrawLine({PelvisPos.X, PelvisPos.Y}, {calf_lPos.X, calf_lPos.Y}, 1.0f, color);
                Canvas->K2_DrawLine({calf_lPos.X, calf_lPos.Y}, {foot_lPos.X, foot_lPos.Y}, 1.0f, color);
                Canvas->K2_DrawLine({PelvisPos.X, PelvisPos.Y}, {neck_01Pos.X, neck_01Pos.Y}, 1.0f, color);
            }
        }
        
        // Name
        if (isTextEsp) {
            Font->LegacyFontSize = 12;
            FString playerName = Player->bEnsure ? FString(L"Bot") : FString(Player->PlayerName);
            FVector2D NamePos = FVector2D(Root2D.X, Root2D.Y + 15.0f);
            FLinearColor nameColor = Player->bEnsure ? FLinearColor(0.0f, 0.75f, 1.0f, 1.0f) : FLinearColor(1.0f, 1.0f, 0.0f, 1.0f);
            Canvas->K2_DrawText(Font, playerName, NamePos, nameColor, 1.0f, {}, {}, true, false, true, FLinearColor(0,0,0,1));
        }

        // Distance
        if (isTextEsp) {
            Font->LegacyFontSize = 12;
            std::wstring distX = std::to_wstring((int)Distance) + L"m";
            FVector2D DistPos = FVector2D(Root2D.X, Root2D.Y + 30.0f);
            Canvas->K2_DrawText(Font, FString(distX), DistPos, FLinearColor(1,1,1,1), 1.0f, {}, {}, true, false, true, FLinearColor(0,0,0,1));
        }

        // Health
        if (isHpBarEsp) {
            float maxHealth = (float)Player->HealthMax;
            float curHealth = (float)Player->Health;
            if (maxHealth > 0.0f) {
                float CurHP = std::max(0.f, std::min(curHealth, maxHealth));
                FLinearColor ColorHP = (CurHP / maxHealth > 0.5f) ? FLinearColor(0,1,0,1) : ((CurHP / maxHealth > 0.2f) ? FLinearColor(1,1,0,1) : FLinearColor(1,0,0,1));
                
                FVector2D HealthPos = Head2D;
                HealthPos.X -= 15.0f;
                HealthPos.Y -= 12.0f;
                
                DrawFilledRectangle(Canvas, HealthPos, 30.0f, 4.0f, FLinearColor(0, 0, 0, 1));
                DrawFilledRectangle(Canvas, HealthPos, (CurHP * 30.0f) / maxHealth, 4.0f, ColorHP);
            }
        }
    }
}

void DrawMSG(UCanvas* Canvas) {
    if (!Canvas || !Font) return;
    Font->LegacyFontSize = 18;
    FString displayText(L"Bypass Loader"); 
    Canvas->K2_DrawText(Font, displayText, FVector2D(g_screenWidth - 220.0f, g_screenHeight - 100.0f), FLinearColor(1,0,0,1), 1.0f, FLinearColor(0,0,0,0), FVector2D(0,0), true, false, true, FLinearColor(0,0,0,1));
}

// ==========================================
// ========== HOOKING =======================
// ==========================================

void *(*oriCheatbot)(UGameViewportClient* ViewportClient, UCanvas* Canvas);
void *hookCheatbot(UGameViewportClient* ViewportClient, UCanvas* Canvas){
    if (!Canvas) return nullptr;
  
    g_screenWidth  = Canvas->SizeX;
    g_screenHeight = Canvas->SizeY;
    
    static bool loadFont = false;
    if (!loadFont) {
        LoadFont();
        loadFont = true;
    }
        
    if (!Font) return nullptr;
    
    DrawMSG(Canvas);
    LocalPlayer(Canvas);
    DrawPlayerESP(Canvas);
    
    return oriCheatbot(ViewportClient, Canvas);
}

void *botcheatxd(){
    if((Cheatbotlp)){
        static bool botxdxd = false;
        if(!botxdxd){
            auto CheatBotObj = (FUObjectArray *) (CHEATBOTOWNER());
            auto gobjects = CheatBotObj->ObjObjects;
            
            for (int i = 0; i < gobjects.Num(); i++)
                if (auto obj = gobjects.GetByIndex(i)) {
                    if(obj->IsA(UGameViewportClient::StaticClass())) {
                        auto View = (UGameViewportClient *) obj;
                        auto vTable = (void**)(View->VTable);
                        if (vTable && (vTable[134] != hookCheatbot)) {
                            oriCheatbot = decltype(oriCheatbot)(vTable[134]);
                            vTable[134] = (void *) hookCheatbot;
                        }
                    }
                }
            botxdxd = true;
        }
    }
    return 0;
}

@implementation JHCJDrawView

+ (void)load {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(10* NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        if(Cheatbotlp){
            botcheatxd();
        }
    });
      
    FName::GNames = GetGNames();
    while (!FName::GNames) {
        FName::GNames = GetGNames();
        sleep(1);
    }
    UObject::GUObjectArray = (FUObjectArray *) (CHEATBOTOWNER());
}

@end
