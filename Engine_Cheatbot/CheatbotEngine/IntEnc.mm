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

using namespace SDK;
#define kWidth  [UIScreen mainScreen].bounds.size.width
#define kHeight [UIScreen mainScreen].bounds.size.height




@interface metalbiew () <MTKViewDelegate>
@property (nonatomic, strong) IBOutlet MTKView *mtkView;
@property (nonatomic, strong) id <MTLDevice> device;
@property (nonatomic, strong) id <MTLCommandQueue> commandQueue;

@end

bool IsAimbot = false;
bool IsBone =false;
bool Is3Dbox =false;
bool qwcifqvs86y8fify = false;
bool MenDeal = false;

static bool isclean = false;
static bool isplay = true;
static bool isBoxEsp = false;
static bool isBoneEsp = false;
static bool isHpBarEsp = false;
static bool isTextEsp = false;
static bool isShowPropsEarlyWarning = false;
static bool isBulletTrack = false;
static bool isLineEsp = false;
static bool isautofire = false;
static bool killmsj = false;
static bool isradar = false;

static bool isFlash1 = false;

static bool isFlash2 = false;
static bool isFlash3 = false;

static bool pes = true;
static bool ces = false;
static bool ites = false;
static bool dees = false;

static bool ass = false;
static bool aai = false;
static bool aff = false;

static int card = 0;
static int itemd = 0;
static int fonts = 14;
static int aimd = 0;
static int autofd = 0;
static int autoft = 3;


static int xsuit = 0;
static int skinm4 = 0;
static int skinakm = 0;
static int skinscar = 0;
static int skinM762 = 0;
static int skinace32 = 0;
static int skinm16a4 = 0;

bool fallNotAim;
int bullettrackMode;
int bullettrackParts;
float bullettrackRadius;
bool showBullettrackRadius;
float distance;
bool smoke;

bool ClothsSkin;
bool WeaponSkins;
bool KillMsg;
bool VehicleSkins;
bool EffectMod;
bool DeadBox;
bool MagicCar;


NSString *resultx;
@implementation metalbiew
bool MenDeal;







- (MTKView *)mtkView
{
    return (MTKView *)self.view;
}


- (void)loadView
{
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


- (instancetype)initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil
{
    
    
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    
    _device = MTLCreateSystemDefaultDevice();
    _commandQueue = [_device newCommandQueue];
    if (!self.device) abort();
    
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    ImGui::StyleColorsLight();
    ImFontConfig config;
    
    config.FontDataOwnedByAtlas = false;
    NSString *fontPath = @"/System/Library/Fonts/CoreAddition/Verdana.ttf";
   
    io.Fonts->AddFontFromFileTTF(fontPath.UTF8String, 16.0f,NULL,io.Fonts->GetGlyphRangesChineseSimplifiedCommon());
    
    
    ImGui_ImplMetal_Init(_device);
    
    return self;
}








#pragma mark - MTKViewDelegate
namespace Variables {
    int ActiveTab = 1;
}
- (void)drawInMTKView:(MTKView*)view
{
    card = 300;
    itemd = 300;
    aimd = 300;
    autofd = 200;
    autoft = 3;
    
    ImGuiIO& io = ImGui::GetIO();
    io.DisplaySize.x = view.bounds.size.width;
    io.DisplaySize.y = view.bounds.size.height;
    
    
    
#if TARGET_OS_OSX
    CGFloat framebufferScale = view.window.screen.backingScaleFactor ?: NSScreen.mainScreen.backingScaleFactor;
#else
    CGFloat framebufferScale = view.window.screen.nativeScale;
#endif
    io.DisplayFramebufferScale = ImVec2(framebufferScale, framebufferScale);
    io.DeltaTime = 1 / float(view.preferredFramesPerSecond ?: 65);
    
    
    id<MTLCommandBuffer> commandBuffer = [self.commandQueue commandBuffer];
    
    
    
    
    
    
    
    if (MenDeal == true) {
        [self.view setUserInteractionEnabled:YES];
    } else if (MenDeal == false) {
        [self.view setUserInteractionEnabled:NO];
    }
    
    MTLRenderPassDescriptor* renderPassDescriptor = view.currentRenderPassDescriptor;
    if (renderPassDescriptor != nil)
    {
        id <MTLRenderCommandEncoder> renderEncoder = [commandBuffer renderCommandEncoderWithDescriptor:renderPassDescriptor];
        [renderEncoder pushDebugGroup:@""];
        
        ImGui_ImplMetal_NewFrame(renderPassDescriptor);
        ImGui::NewFrame();
        
        ImFont* font = ImGui::GetFont();
        font->Scale = 16.f / font->FontSize;
        
        CGFloat x = (([UIApplication sharedApplication].windows[0].rootViewController.view.frame.size.width) - 360) / 2;
        CGFloat y = (([UIApplication sharedApplication].windows[0].rootViewController.view.frame.size.height) - 360) /2;
        
        ImGui::SetNextWindowPos(ImVec2(x, y), ImGuiCond_FirstUseEver);
        ImGui::SetNextWindowSize(ImVec2(360, 320), ImGuiCond_FirstUseEver);
        
        
        
        
        if (MenDeal == true)
        {
            
               ImGui::Begin([NSSENCRYPT("iCheatBot Engine X") UTF8String] , &MenDeal, ImGuiWindowFlags_NoCollapse);
               if (ImGui::BeginTabBar("éé¡¹å¡", ImGuiTabBarFlags_NoTooltip))
                   
               {
                 if (ImGui::BeginTabItem("Menu"))
                   {
                       
                       ImGui::Checkbox("Box", &Is3Dbox);
                       ImGui::SameLine();
                       ImGui::Columns(3);
                       ImGui::NextColumn();
                       ImGui::Checkbox("Line", &isLineEsp);
                       ImGui::NextColumn();
                       ImGui::Checkbox("Skeleton", &IsBone);
                       ImGui::Columns(1);
                       ImGui::Separator();
                       
                       ImGui::Separator();
                       
                       
                        ImGui::Separator();
                   
                       
                       ImGui::Text("%s", [NSSENCRYPT(" IOS Cheat By @CheatBot_Owner") UTF8String]);
                      
                       ImGui::EndTabItem();
                   }
                   
                   
                   
                   
                   
                   
                   if (ImGui::BeginTabItem("Info"))
                   {
                     
                       
                       
                       if (ImGui::Button("CONTACT ADMIN")) {
                           const char* url = [NSSENCRYPT("https://t.me/cheatbot_owner") UTF8String];
                           NSString* nsUrl = [NSString stringWithUTF8String:url];
                               NSURL* link = [NSURL URLWithString:nsUrl];
                               
                               if ([[UIApplication sharedApplication] canOpenURL:link]) {
                                   [[UIApplication sharedApplication] openURL:link];
                               }
                           }
                       
                       
                       
                       
                       
                       ImGui::Separator();
                       ImGui::EndTabItem();//ç»æ
                   }
                   
                   
                 
                   
                   
                   
                   
                   
               
                           
                           ImGui::EndTabBar();//ç»æ
                           
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





- (void)mtkView:(MTKView*)view drawableSizeWillChange:(CGSize)size
{
    
}



#pragma mark - Interaction

- (void)updateIOWithTouchEvent:(UIEvent *)event
{
    UITouch *anyTouch = event.allTouches.anyObject;
    CGPoint touchLocation = [anyTouch locationInView:self.view];
    ImGuiIO &io = ImGui::GetIO();
    io.MousePos = ImVec2(touchLocation.x, touchLocation.y);
    
    BOOL hasActiveTouch = NO;
    for (UITouch *touch in event.allTouches)
    {
        if (touch.phase != UITouchPhaseEnded && touch.phase != UITouchPhaseCancelled)
        {
            hasActiveTouch = YES;
            break;
        }
    }
    io.MouseDown[0] = hasActiveTouch;
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self updateIOWithTouchEvent:event];
}

- (void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self updateIOWithTouchEvent:event];
}

- (void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self updateIOWithTouchEvent:event];
}

- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self updateIOWithTouchEvent:event];
}



@end





bool bonn =true;
bool IsLine =false;
bool HitX__ =false;
using json = nlohmann::ordered_json;
std::map<std::string, u_long> Config;
std::map<int, bool> itemConfig;
float CenterX=0.0f;
float CenterY=0.0f;
json itemData;
bool IsAutofire = false;
bool IsNorecoil = false;

bool IsNotesst = false;

bool INTAHIT =false;
bool IsNOcameras = false;
bool ipadview= false;
bool Igronebot =false;
bool IsbulletTrack=true;
bool TrackingCar=false;
bool  AIMHEAD1 = false;
bool  AIMNeck1 = false;
bool  AIMcheat1 = false;
bool iSPLAYERDIS =false;
bool IsShoot =false;
bool IsSCope = false;
bool IsBothaim =false;
bool IsAny=true;

using namespace SDK;
bool HIDEESP = false;

bool IsAimbotNew = false;

std::unordered_map < int, std::wstring > itemsName;
std::unordered_map < int, std::string > itemsColor;
bool IsAimbotnewww = false;

bool IsAimbotFov = false;
bool IsAimbotDis = false;
bool IsAimHead =false;
bool IsAimNeck =false;
bool IsAimRoot =false;
bool IsGRWAR =false;
FRotator g_aimRotation;
FVector Tarloc;
FVector headp;
FVector myloc;
bool IsFastBullet = false;


bool smokkkno ;
bool ipadvieww;

FRotator g_cartrack;
FVector g_trackaim ;

bool ABCD = false;
bool IsBone2 =false;
bool IsJump =false;
bool IsPlayerWEP = false;
bool IsFastshoot = false;
bool IsFastDrop = false;
bool IsLootBox = false;
bool IsLootBoxdid = true;

bool IsNocamerashake = false;
bool IsVehcleEsp = false;
bool IsWarring = false;

bool IsPLayerName = false;
bool IsPlayerHP =false;
bool IsPlayerHPNew =false;

bool armorrrr=true;


bool IsFastKnock = false;
bool IsFastswim = false;
bool IsVehcle = true;
bool IsboxVechle =false;
bool IsCarHP = false;
bool IsCarFuel =false;
bool IsPostil =false;
bool IsSniper = false;
//bool IsSniper = false;

bool IsWeapon =false;
bool IsAmmo =false;
bool IsFov =true;
bool IsHitXPL =false;
bool IsPlayerSP= false;
bool isAimvisual =true;
//
bool IsCrossHair = false;
bool IsSMG =false;
bool IsAR =true;
bool IsShotgun = false;
bool TeleportCar = false;
bool IsSilentAIM= false;
bool GODVIEWUUP= false;
bool GODVIEWFRONT= false;
bool GODVIEWLEFT= false;
bool AUOTJUMPAN= false;



bool AIMMMBOTE= false;



 bool Cheatbotlp =true;
bool Triedaobjektu61 = true ;


float g_disstance;


#include <assert.h>
#define IM_ASSERT(_EXPR)assert(_EXPR)
#define kLogOpen 1
#define kWidth  [UIScreen mainScreen].bounds.size.width
#define kHeight [UIScreen mainScreen].bounds.size.height


bool isAimKnocked = false;

bool IsValidAddress(kaddr addr) {
return addr > 0x100000000 && addr < 0x2000000000;
}
uintptr_t UE4;
kaddr module= (unsigned long)_dyld_get_image_vmaddr_slide(0);
namespace Options
{
int boxtype = 1;
int healthbartype = 0;
int Nationtype = 2;
int DirectionLineSize = 70;
int VehicleDirectionLineSize = 100;
int offscreen_range = 40;
int max_distance_offscreen = 400;
int playersdistancessize = 600;
bool esp_Outline = true;
int distance_Radar = 150;
}


uintptr_t ProcessEvent_Offset,AimBullet_Offset,AimBullet_Offset2,SetControlRotation_Offset;
#define SLEEP_TIME 1000LL / 120LL
#define TORAD(x) ((x) * (M_PI / 180.f))

int g_screenWidth ;
int g_screenHeight ;
int screenWidth ;
int screenHeight ;
int screenDensity = 0;
int getEspFramerate;
int SCOLOR;
int scc;

char extra[30];
float density = -1;
float gDistance;
int localFiring{0};


using namespace std;
BOOL kaiguan1 = NO;
BOOL kaiguan2 = NO;
BOOL kaiguan3 = NO;
BOOL kaiguan4 = NO;

#define PI 3.14159265358979323846
#define SLEEP_TIME 1000LL / 120LL
#define __fastcall
bool ARWP = false;
bool SMGWP =false;
bool SNPWP = false;
bool otherWP =false;
bool AmmoWP =false;
bool LIGHTMW = false;
bool SHOTGUNWP = false;
bool scopewp = false;
bool POSTOLWP = false;
bool ARMORWP =false;



FRotator aimRotation;
UCharacterWeaponManagerComponent * WeaponManagerComponent;
UShootWeaponEntity *ShootWeaponEntityComp =0;
ASTExtraShootWeapon * CurrentWeaponReplicated = 0;
UFont *defaultFont =0 ;
UFont *itemfont =0 ;
ASTExtraPlayerCharacter *localPlayer = 0;
ASTExtraPlayerController *localPlayerController = 0;
FFatalDamageParameter *FatalDamageParameter = 0;
ASTExtraPlayerCharacter  * Player =0;
FCameraCacheEntry  CameraCache = FCameraCacheEntry();
float BulletFireSpeed = 0;
kaddr plc;

class FPSCounter {
protected:
unsigned int m_fps;
unsigned int m_fpscount;
long m_fpsinterval;

public:
FPSCounter() : m_fps(0), m_fpscount(0), m_fpsinterval(0) {
}

void update() {
m_fpscount++;

if (m_fpsinterval < time(0)) {
m_fps = m_fpscount;

m_fpscount = 0;
m_fpsinterval = time(0) + 1;
}
}

unsigned int get() const {
return m_fps;
}
};

FPSCounter fps;
@interface JHCJDrawView()
@property (nonatomic,  weak) NSTimer *timer;
@property (nonatomic,  assign) NSInteger aimcir;
@property (nonatomic,  assign) NSInteger rpr;



@end

BOOL BULLETIBOTNO =true;
BOOL BUlletvisabuilty =false;
UIWindow *mainwin;

@implementation JHCJDrawView


static JHCJDrawView *extraInfo;

+ (instancetype)cjDrawView
{

return [[JHCJDrawView alloc] initWithFrame:[UIScreen mainScreen].bounds];
}

- (instancetype)initWithFrame:(CGRect)frame
{
self = [super initWithFrame:frame];
if (self) {
self.userInteractionEnabled = NO;


_aimcir= 50;
_rpr= 50;
[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(rectChange:) name:@"AimRadiusNoti" object:nil];
[
 [NSNotificationCenter defaultCenter] addObserverForName: @"AimRadiusNoti"
 object: nil
 queue: nil
 usingBlock: ^ (NSNotification * note) {



}
 ];
}
return self;
}

- (void)rectChange:(NSNotification *)noti
{
NSInteger val = [noti.object integerValue];
_aimcir = val;
_rpr = (int) val;
_rpr = val;

}



struct sRegion {
kaddr start, end;
};


std::vector<sRegion> trapRegions;


bool isObjectPlayer(UObject *Object) {

if (!Tools::IsPtrValid(Object)) {
return false;
}
for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
if (super == ASTExtraPlayerCharacter::StaticClass()) {
return true;
}
}
return false;
}
string encryptDecrypt(string toEncrypt) {
    char key[3] = {'K', 'C', 'Q'};
    string output = toEncrypt;
    
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key[i % (sizeof(key) / sizeof(char))];
    
    return output;
}
bool isObjectController(UObject *Object) {
if (!Tools::IsPtrValid(Object)) {
return false;
}
for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
if (super == ASTExtraPlayerController::StaticClass()) {
return true;
}
}
return false;
}
bool isObjectInvalid(UObject *obj) {
if (!Tools::IsPtrValid(obj)) {
return true;
}

if (!Tools::IsPtrValid(obj->ClassPrivate)) {
return true;
}

if (obj->InternalIndex <= 0) {
return true;
}

if (obj->NamePrivate.ComparisonIndex <= 0) {
return true;
}

if ((kaddr)(obj) % sizeof(kaddr) != 0x0 && (kaddr)(obj) % sizeof(kaddr) != 0x4) {
return true;
}

if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((kaddr) obj) >= region.start && ((kaddr) obj) <= region.end; }) ||
std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((kaddr) obj->ClassPrivate) >= region.start && ((kaddr) obj->ClassPrivate) <= region.end; })) {
return true;
}

return false;
}
kaddr getRealOffset(kaddr offset){
  return (unsigned long)_dyld_get_image_vmaddr_slide(0)+offset;
}

long CHEATBOTOWNER() {


    return getRealOffset(0x109ABC718);
    
};


bool offscreen (FVector2D point , FVector2D scren)
{
    if (point.X <= 0 || point.Y <= 0 || point.X >= scren.X || point.Y >= scren.Y)
    {
        return true;
        
    }
    
    return false;
}


UWorld *GEWorld;
int GWorldNum = 0;
TUObjectArray gobjects;

void ConvHexToFLinearColor(const char *Hex, FLinearColor& Color)
{
    int A = 0, R = 0, G = 0, B = 0;
    std::sscanf(Hex, "%02x%02x%02x%02x", &A, &R, &G, &B);
    Color = FLinearColor(R / 255.f, G / 255.f, B / 255.f, A / 255.f);
}
UWorld *GetFullWorld()
{
if(GWorldNum == 0) {
    gobjects = UObject::GUObjectArray->ObjObjects;
    for (int i=0; i< gobjects.Num(); i++)
    if (auto obj = gobjects.GetByIndex(i)) {
        if(obj->IsA(UEngine::StaticClass())) {
            auto GEngine = (UEngine *) obj;
            if(GEngine) {
                Font = GEngine->MediumFont;
                Font = GEngine->MediumFont;

                auto ViewPort = GEngine->GameViewport;
                if (ViewPort)
                    {
                        GEWorld = ViewPort->World;
                        GWorldNum = i;
                        return ViewPort->World;
                    }
                }
            }
       }
 }else {
    auto GEngine = (UEngine *) (gobjects.GetByIndex(GWorldNum));
    if(GEngine) {
        Font = GEngine->MediumFont;
        Font = GEngine->MediumFont;
        auto ViewPort = GEngine->GameViewport;
        if(ViewPort) {
            GEWorld = ViewPort->World;
            return ViewPort->World;
        }
    }
}
 return 0;
}


TNameEntryArray *GetGNames() {
    return ((TNameEntryArray *(*)()) ((unsigned long)_dyld_get_image_vmaddr_slide(0) +0x104734D98)
)();
}

string getObjectPath(UObject *Object) {
string s;
for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
if (!s.empty())
s += ".";
s += super->GetName();
}
return s;
}

template <class T> void GetAllActors(std::vector<T*>& Actors) {
UGameplayStatics* gGameplayStatics = (UGameplayStatics*)gGameplayStatics->StaticClass();
   auto GWorld = GetFullWorld();
if (GWorld) {
TArray<AActor*> Actors2;
gGameplayStatics->GetAllActorsOfClass((UObject*)GWorld, T::StaticClass(), &Actors2);
for (int i = 0; i < Actors2.Num(); i++) {
Actors.push_back((T*)Actors2[i]);
}
}
}



FVector GetBoneLocationByName(ASTExtraPlayerCharacter *Actor, const char *BoneName) {
return Actor->GetBonePos(BoneName, FVector());
}

bool WriteAddr(void *addr, void *buffer, size_t length) {
unsigned long page_size = sysconf(_SC_PAGESIZE);
unsigned long size = page_size * sizeof(kaddr);
return mprotect((void *) ((kaddr) addr - ((kaddr) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}

template<typename T>
void Write(kaddr addr, T value) {
WriteAddr((void *) addr, &value, sizeof(T));
}

bool isObjectGrenade(UObject *Object) {
if (!Tools::IsPtrValid(Object)) {
return false;
}
for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
if (super == ASTExtraGrenadeBase::StaticClass()) {
return true;
}
}
return false;
}

bool isObjectVehicle(UObject *Object) {
if (!Tools::IsPtrValid(Object)) {
return false;
}
for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
if (super == ASTExtraVehicleBase::StaticClass()) {
return true;
}
}
return false;
}

bool isObjectLoot(UObject *Object) {
if (!Tools::IsPtrValid(Object)) {
return false;
}
for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
if (super == APickUpWrapperActor::StaticClass()) {
return true;
}
}
return false;
}

bool isObjectLootBox(UObject *Object) {
if (!Tools::IsPtrValid(Object)) {
return false;
}
for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
if (super == APickUpListWrapperActor::StaticClass()) {
return true;
}
}
return false;
}
struct FLinearColor visCol;
ASTExtraPlayerCharacter *g_LocalPlayer;
SDK::ASTExtraPlayerController *g_PlayerController;
#define COLOR_BLACK FLinearColor(0, 0, 0, 1.f)
#define COLOR_WHITE FLinearColor(1.f, 1.f, 1.f, 1.f)
#define COLOR_RED   FLinearColor(1.f, 0, 0, 1.f)
#define COLOR_LIME  FLinearColor(0, 1.f, 0, 1.f)
#define COLOR_BLUE  FLinearColor(0, 0, 1.f, 1.f)
#define COLOR_YELLOW  FLinearColor(1, 1, 0.f, 1.f)
#define COLOR_AMMO  FLinearColor(2, 1, 2.f, 2.f)
#define COLOR_ar FLinearColor(1, 2, 1.f, 1.f)
#define COLOR_sn FLinearColor(1, 1, 2.f,2.f)
#define COLOR_sh FLinearColor(2, 2, 1.f,1.f)
#define COLOR_sm FLinearColor(0, 0, 1.f,1.f)
#define COLOR_oth FLinearColor(2, 2, 0.f,0.f)
#define COLOR_item FLinearColor(2, 0, 2.f,0.f)
#define COLOR_armor FLinearColor(1.5, 2.5, 2.f,0.f)
#define COLOR_sc FLinearColor(2.5, 3.5, 1.f,0.f)

#define COLOR_CAR   FLinearColor(1.f, 0.5f, 1.f, 1.f)
#define Whiteg  FLinearColor(247.f, 248.f, 248.f)
float RadianToDegree(float radian)
{
return radian * (180 / M_PI);
}

float DegreeToRadian(float degree)
{
return degree * (M_PI / 180);

}

FVector RadianToDegree(FVector radians)
{
FVector degrees;
degrees.X = radians.X * (180 / M_PI);
degrees.Y = radians.Y * (180 / M_PI);
degrees.Z = radians.Z * (180 / M_PI);
return degrees;
}

FVector DegreeToRadian(FVector degrees)
{
FVector radians;
radians.X = degrees.X * (M_PI / 180);
radians.Y = degrees.Y * (M_PI / 180);
radians.Z = degrees.Z * (M_PI / 180);
return radians;
}
void VectorAnglesRadar(FVector& forward, FVector& angles)
{
if (forward.X == 0.f && forward.Y == 0.f)
{
angles.X = forward.Z > 0.f ? -90.f : 90.f;
angles.Y = 0.f;
}
else
{
angles.X = RAD2DEG(atan2(-forward.Z, forward.Size()));
angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
}
angles.Z = 0.f;
}

bool _read(kaddr addr, void *buffer, int len)
{
if (!IsValidAddress(addr)) return false;
vm_size_t size = 0;
kern_return_t error = vm_read_overwrite(mach_task_self(), (vm_address_t)addr, len, (vm_address_t)buffer, &size);
if(error != KERN_SUCCESS || size != len)
{
return false;
}
return true;
}
FVector2D FindScreenEdge ( FVector WLocation ,FVector MYLOC,float YAW, float PosX, float PosY , FVector Size , float ZOME )
{

FVector2D Coord;
FVector2D Return;

double num = (double)YAW ;
double num2 = num * 0.017453292519943295;

float cY = cos(num2 );
float sY = sin(num2) ;

float dX = WLocation.X - MYLOC.X;
float dY = WLocation.Y - MYLOC.Y;


Coord.X = ( dY * cY - dX * sY ) /  ZOME;
Coord.Y = ( dX * cY + dY * sY ) /  ZOME;

Return.X =  Coord.X + PosX + (Size.X / 2.0f);
Return.Y = -Coord.Y + PosY + (Size.Y / 2.0f);

if(Return.X > (PosX + Size.X) )
Return.X = (PosX + Size.X);
else if(Return.X < (PosX) )
Return.X = PosX;

if(Return.Y > (PosY + Size.Y) )
Return.Y = (PosY + Size.Y);
else if(Return.Y < (PosY) )
Return.Y = PosY;

return Return;
}
bool _write(kaddr addr, void *buffer, int len)
{
if (!IsValidAddress(addr)) return false;
kern_return_t error = vm_write(mach_task_self(), (vm_address_t)addr, (vm_offset_t)buffer, (mach_msg_type_number_t)len);
if(error != KERN_SUCCESS)
{
return false;
}
return true;
}

kaddr GetRealOffset(kaddr offset) {
if (module == 0) {
return 0;
}
return (module + offset);
}

template<typename T> T Read(kaddr addr) {
T data;
_read(addr, reinterpret_cast<void *>(&data), sizeof(T));
return data;
}

FRotator ToRotator(FVector local, FVector &target) {
FVector rotation;
//    auto MathLibrary = (UKismetMathLibrary *) UKismetMathLibrary::StaticClass();

//FVector rotation = UKismetMathLibrary::Subtract_VectorVector(local, target);

rotation.X = local.X - target.X;
rotation.Y = local.Y - target.Y;
rotation.Z = local.Z - target.Z;

FRotator newViewAngle = {0};

float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);

newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) PI);
newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) PI);
newViewAngle.Roll = (float) 0.f;

if (rotation.X >= 0.f)
newViewAngle.Yaw += 180.0f;

return newViewAngle;
}
static UFont* Font = 0;





void DrawRectangle3(UCanvas* Canvas, FVector2D Pos, float Width, float Height, float Thickness, FLinearColor Color)
{
    
    
    
    
    float HalfThickness = Thickness / 2.0f;
    Canvas->K2_DrawLine(FVector2D(Pos.X, Pos.Y), FVector2D(Pos.X, Pos.Y + Height), Thickness, Color);
    Canvas->K2_DrawLine(FVector2D(Pos.X, Pos.Y), FVector2D(Pos.X + Width, Pos.Y), Thickness, Color);
    Canvas->K2_DrawLine(FVector2D(Pos.X + Width, Pos.Y), FVector2D(Pos.X + Width, Pos.Y + Height), Thickness, Color);
    Canvas->K2_DrawLine(FVector2D(Pos.X, Pos.Y + Height), FVector2D(Pos.X + Width, Pos.Y + Height), Thickness, Color);
}



void RotateTriangle(std::array < FVector2D, 39 > &points, float rotation)
{
    const auto points_center = (points.at(0) + points.at(1) + points.at(2) + points.at(3) + points.at(4) + points.at(5) + points.at(6)
                                + points.at(7) + points.at(8) + points.at(9) + points.at(10) + points.at(11) + points.at(12) + points.at(13)
                                + points.at(14) + points.at(15) + points.at(16) + points.at(17) + points.at(18) + points.at(19) + points.at(20)
                                + points.at(21) + points.at(22) + points.at(23) + points.at(24) + points.at(25) + points.at(26) + points.at(27)
                                + points.at(28) + points.at(29) + points.at(30) + points.at(31) + points.at(32) + points.at(33) + points.at(34)
                                + points.at(35) + points.at(36) + points.at(37) + points.at(38)) / 39;
    for (auto & point:points) {
        point = point - points_center;
        
        const auto temp_x = point.X;
        const auto temp_y = point.Y;
        
        const auto theta = DEG2RAD(rotation);
        const auto c = cosf(theta);
        const auto s = sinf(theta);
        
        point.X = temp_x * c - temp_y * s;
        point.Y = temp_x * s + temp_y * c;
        
        point = point + points_center;
    }
}

const char *GetVehicleName(ASTExtraVehicleBase * Vehicle)
{
    wstring its ;
    
    switch (Vehicle->VehicleShapeType)
    {
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
            its  = L"Motorbike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
            its  = L"Dacia";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
            its  = L"Mini Bus";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
            its  = L"Pick Up";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
            its  = L"Buggy";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
            its  = L"UAZ";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
            its  = L"PG117";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
            its  = L"Aquarail";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
            its  = L"Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
            its  = L"Rony";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
            its  = L"Scooter";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
            its  = L"Snow Mobile";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
            its  = L"Tuk Tuk";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
            its  = L"Snow Bike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
            its  = L"Surf Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
            its  = L"Snow Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
            its  = L"Amphibious";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
            its  = L"Lada Niva";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
            its  = L"UAV";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
            its  = L"Mega Drop";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
            its  = L"Lamborghini";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
            its  = L"Gold Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
            its  = L"Big Foot";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UH60:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
            its  = L"UH60";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LootTruck:
            its  = L"Loot Truck";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_ATGMotorCycle:
            its  = L"ATG MotorCycle";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_ModelY:
            its  = L"Tesla Model Y";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TrackVehicle:
            its  = L"Track Vehicle";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorglider:
            its  = L"Motor Glider";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_CoupeRB:
            its  = L"Coupe RB";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_CatapultMachine:
            its  = L"Catapult Machine";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UTV:
            its  = L"UTV";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Bike:
            its  = L"Bike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_WingMan:
            its  = L"Wing Man";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PreparedVeh1:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PreparedVeh2:
            its  = L"Prepared Vehicle";
            break;
        default:
            its  = L"Vehicle";
            break;
    }
    its  = L"Vehicle";
    return "";
}

void FixTriangle(float & XPos, float & YPos, int screenDist)
{
   
    if (XPos > (g_screenWidth - 100))
    {                            // Right
        XPos = g_screenWidth;
        XPos -= screenDist;
    }
    if (XPos < 120)
    {                            // Left
        XPos = 70;
        XPos += 45;
    }
    if (YPos > (g_screenHeight - 83))
    {                            // Down
        YPos = g_screenHeight;
        YPos -= screenDist - 23;
    }
    if (YPos < 120)
    {                            // Up
        YPos = 50;
        YPos += screenDist - 40;
    }
}
#define TSL_FONT_DEFAULT_SIZE 20
static UFont *tslFont = 0, *robotoTinyFont = 0 ;
void DrawOutlinedText(UCanvas *Canvas, FString Text, FVector2D Pos, FLinearColor Color, FLinearColor OutlineColor, bool isCenter = false) {


Canvas->K2_DrawText(tslFont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, true, OutlineColor);
tslFont->LegacyFontSize = 10;
}

void DrawTextNotCentered(UCanvas *Canvas,FString Text, FVector2D Pos, FLinearColor Color,FLinearColor OutlineColor){
    Canvas->K2_DrawText(Font, Text, Pos, Color, 0.4f, {}, {}, true, true, true, OutlineColor);
}

void DrawText(UCanvas *Canvas,FString Text, FVector2D Pos, FLinearColor Color){
    Canvas->K2_DrawText(Font, Text, Pos, Color, 0.3f, {}, {}, true, true, false, {});
}

void DrawLine(UCanvas *Canvas,FVector2D from, FVector2D to, float thickness, FLinearColor color) {
    Canvas->K2_DrawLine(from, to, thickness, color);
}
void DrawTextcan(UCanvas *Canvas, FString Text, FVector2D Pos, FLinearColor Color, FLinearColor OutlineColor, bool isCenter = true) {
Canvas->K2_DrawText(robotoTinyFont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, true, OutlineColor);
}


void DrawBox4Line(UCanvas *Canvas,float x, float y, float w, float h, float thickness, FLinearColor color) {
    int iw = w / 4;
    int ih = h / 4;
    Canvas->K2_DrawLine({x, y}, {x + iw, y}, thickness, color);
    Canvas->K2_DrawLine({x + w - iw, y}, {x + w, y}, thickness, color);
    Canvas->K2_DrawLine({x, y}, {x, y + ih}, thickness, color);
    Canvas->K2_DrawLine({x + w - 1, y}, {x + w - 1, y + ih}, thickness, color);
    Canvas->K2_DrawLine({x, y + h}, {x + iw, y + h}, thickness, color);
    Canvas->K2_DrawLine({x + w - iw, y + h}, {x + w, y + h}, thickness, color);
    Canvas->K2_DrawLine({x, y + h - ih}, {x, y + h}, thickness, color);
    Canvas->K2_DrawLine({x + w - 1, y + h - ih}, {x + w - 1, y + h}, thickness, color);
}

void DrawCircle(UCanvas *Canvas,int x, int y, int radius, int numsides, FLinearColor OutlineColor, float thickness) {
    float Step = M_PI * 2 / numsides;
    int Count = 0;
    FVector2D V[128];
    for (float a = (float) 0; a < M_PI * (float) 2; a += Step) {
        float X1 = radius * cos(a) + x;
        float Y1 = radius * sin(a) + y;
        float X2 = radius * cos(a + Step) + x;
        float Y2 = radius * sin(a + Step) + y;
        V[Count].X = X1;
        V[Count].Y = Y1;
        V[Count + 1].X = X2;
        V[Count + 1].Y = Y2;
        DrawLine(Canvas,V[Count], FVector2D(X2, Y2), thickness, OutlineColor);
    }
}

void DrawArrows(UCanvas *Canvas,std::array < FVector2D, 39 > Loc, float thickness, FLinearColor color) {
    for (int i = 10; i < 25; i++) {
        DrawLine(Canvas,Loc.at(i), Loc.at(7), thickness, color);
    }
    for (int i = 26; i < 38; i++) {
        DrawLine(Canvas,Loc.at(i), Loc.at(7), thickness + 1.5, color);
        DrawLine(Canvas,Loc.at(i), Loc.at(8), thickness+ 1.5f, color);
        DrawLine(Canvas,Loc.at(i), Loc.at(9), thickness + 1.5f, color);
    }
    
    DrawLine(Canvas,Loc.at(0), Loc.at(1), thickness * 0.5f, FLinearColor(0.f, 0.f, 0.f, 1.f));
    DrawLine(Canvas,Loc.at(1), Loc.at(2), thickness * 0.5f, FLinearColor(0.f, 0.f, 0.f, 1.f));
    DrawLine(Canvas,Loc.at(2), Loc.at(6), thickness * 0.5f, FLinearColor(0.f, 0.f, 0.f, 1.f));
    DrawLine(Canvas,Loc.at(6), Loc.at(5), thickness * 0.5f, FLinearColor(0.f, 0.f, 0.f, 1.f));
    DrawLine(Canvas,Loc.at(5), Loc.at(4), thickness * 0.5f, FLinearColor(0.f, 0.f, 0.f, 1.f));
    DrawLine(Canvas,Loc.at(4), Loc.at(3), thickness * 0.5f, FLinearColor(0.f, 0.f, 0.f, 1.f));
    DrawLine(Canvas,Loc.at(3), Loc.at(0), thickness * 0.5f, FLinearColor(0.f, 0.f, 0.f, 1.f));
}

void DrawFilledRectangle(UCanvas* Canvas, FVector2D Min, float Width, float Height, FLinearColor Color)
{
    // Ensure the coordinates are sorted correctly (Min should be top-left)
    FVector2D TopLeft = Min;
    FVector2D BottomRight = Min + FVector2D(Width, Height);

    // Draw the filled rectangle using lines
    for (float i = 0.f; i < Height; i += 1.f)
    {
        FVector2D Start = TopLeft + FVector2D(0.f, i);
        FVector2D End = TopLeft + FVector2D(Width, i);
        Canvas->K2_DrawLine(Start, End, 1.f, Color);
    }
}


void RotateTriangle(std::array < FVector2D, 4 > &points, float rotation)
{
    const auto points_center = (points.at(0) + points.at(1) + points.at(2) + points.at(3)) / 4;
    for (auto & point:points) {
        point = point - points_center;
        
        const auto temp_x = point.X;
        const auto temp_y = point.Y;
        
        const auto theta = DEG2RAD(rotation);
        const auto c = cosf(theta);
        const auto s = sinf(theta);
        
        point.X = temp_x * c - temp_y * s;
        point.Y = temp_x * s + temp_y * c;
        
        point = point + points_center;
    }
}
std::wstring stringToWstring(const std::string& str) {
    // Create a codecvt facet for converting between char and wchar_t
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    return converter.from_bytes(str);
}

void FillTriangle(UCanvas *Canvas ,float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float Thickness, FLinearColor Color) {
    DrawLine(Canvas,FVector2D(x1, y1), FVector2D(x2, y2), Thickness, Color);
    DrawLine(Canvas,FVector2D(x2, y2), FVector2D(x4, y4), Thickness, Color);
    DrawLine(Canvas,FVector2D(x4, y4), FVector2D(x3, y3), Thickness, Color);
    DrawLine(Canvas,FVector2D(x3, y3), FVector2D(x1, y1), Thickness, Color);
}

void DrawRectangle(UCanvas *Canvas ,FVector2D Pos, float Width, float Height, float Thickness, FLinearColor Color) {
    DrawLine(Canvas,FVector2D(Pos.X, Pos.Y), FVector2D(Pos.X + Width, Pos.Y), Thickness, Color);
    DrawLine(Canvas,FVector2D(Pos.X, Pos.Y), FVector2D(Pos.X, Pos.Y + Height), Thickness, Color);
    DrawLine(Canvas,FVector2D(Pos.X + Width, Pos.Y), FVector2D(Pos.X + Width, Pos.Y + Height), Thickness, Color);
    DrawLine(Canvas,FVector2D(Pos.X, Pos.Y + Height), FVector2D(Pos.X + Width, Pos.Y + Height), Thickness, Color);
}




FVector RotateCorner(FVector origin, FVector corner, float theta)
{
    float x = corner.X - origin.X;
    float y = corner.Y - origin.Y;
    return {origin.X + (x * cos(theta) - y * sin(theta)), origin.Y + (x * sin(theta) + y * cos(theta)), corner.Z};
}

void DrawBox3D(UCanvas *Canvas, AActor* actor, FLinearColor Color, FVector origin, FVector extent) {
    auto MathLibrary = (UKismetMathLibrary *) UKismetMathLibrary::StaticClass();
    auto GameplayStatics = (UGameplayStatics *) UGameplayStatics::StaticClass();
    FRotator rotation = actor->K2_GetActorRotation();
    float yaw = MathLibrary->DegreesToRadians((int)(rotation.Yaw + 450.0f) % 360);
    FVector2D ts1, ts2, ts3, ts4, bs1, bs2, bs3, bs4;
    FVector t1, t2, t3, t4, b1, b2, b3, b4;
    t1 = t2 = t3 = t4 = b1 = b2 = b3 = b4 = origin;
    t1.X -= extent.X;
    t1.Y -= extent.Y;
    t1.Z -= extent.Z;
    t2.X += extent.X;
    t2.Y -= extent.Y;
    t2.Z -= extent.Z;
    t3.X += extent.X;
    t3.Y += extent.Y;
    t3.Z -= extent.Z;
    t4.X -= extent.X;
    t4.Y += extent.Y;
    t4.Z -= extent.Z;
    
    t1 = RotateCorner(origin, t1, yaw);
    t2 = RotateCorner(origin, t2, yaw);
    t3 = RotateCorner(origin, t3, yaw);
    t4 = RotateCorner(origin, t4, yaw);
    
    b1.X -= extent.X;
    b1.Y -= extent.Y;
    b1.Z += extent.Z;
    b2.X += extent.X;
    b2.Y -= extent.Y;
    b2.Z += extent.Z;
    b3.X += extent.X;
    b3.Y += extent.Y;
    b3.Z += extent.Z;
    b4.X -= extent.X;
    b4.Y += extent.Y;
    b4.Z += extent.Z;
    
    b1 = RotateCorner(origin, b1, yaw);
    b2 = RotateCorner(origin, b2, yaw);
    b3 = RotateCorner(origin, b3, yaw);
    b4 = RotateCorner(origin, b4, yaw);
    if (GameplayStatics->ProjectWorldToScreen(g_PlayerController, b1, false, &bs1) && GameplayStatics->ProjectWorldToScreen(g_PlayerController, b2, false, &bs2)&& GameplayStatics->ProjectWorldToScreen(g_PlayerController, b3, false, &bs3)&& GameplayStatics->ProjectWorldToScreen(g_PlayerController, b4, false, &bs4)&& GameplayStatics->ProjectWorldToScreen(g_PlayerController, t1, false, &ts1)&& GameplayStatics->ProjectWorldToScreen(g_PlayerController, t2, false, &ts2)&& GameplayStatics->ProjectWorldToScreen(g_PlayerController, t3, false, &ts3)&& GameplayStatics->ProjectWorldToScreen(g_PlayerController, t4, false, &ts4)) {
        Canvas->K2_DrawLine( ts1, ts2, 2.f,Color );
        Canvas->K2_DrawLine( ts2, ts3, 2.f, Color);
        Canvas->K2_DrawLine( ts3, ts4, 2.f, Color);
        Canvas->K2_DrawLine( ts4, ts1, 2.f, Color);
        Canvas->K2_DrawLine( bs1, bs2, 2.f, Color);
        Canvas->K2_DrawLine( bs2, bs3, 2.f, Color);
        Canvas->K2_DrawLine( bs3, bs4, 2.f, Color);
        Canvas->K2_DrawLine( bs4, bs1, 2.f, Color);
        Canvas->K2_DrawLine( ts1, bs1, 2.f, Color);
        Canvas->K2_DrawLine( ts2, bs2, 2.f, Color);
        Canvas->K2_DrawLine( ts3, bs3, 2.f, Color);
        Canvas->K2_DrawLine( ts4, bs4, 2.f, Color);
    }
}

void VericalHEALTHBAR(AHUD *HUD ,float x ,float y , float health,FLinearColor color  ){
HUD->   DrawRect(color, x, y + 30, 5, 10);
for (size_t i = 0; i < 20; i++)
HUD->  DrawRect(color, x, y + (i * 5), 5, 1);

}
void VericalHEALTHBAR(AHUD *HUD, float x, float y, float Health,FLinearColor color ,bool vertical)
{



if (Health>0)
{

if (vertical)
{
HUD->   DrawRect(color, x - 1, y - 1, 7, 102);

if ( Health > 1)
HUD-> DrawRect(color, x, y, 5, 10);

if ( Health > 10)
HUD->DrawRect(color, x, y + 10, 5, 10);

if ( Health > 20)
HUD-> DrawRect(color, x, y + 20, 5, 10);

if ( Health > 30)
HUD->   DrawRect(color, x, y + 30, 5, 10);

if ( Health > 40)
HUD->   DrawRect(color, x, y + 40, 5, 10);

if ( Health > 50)
HUD->   DrawRect(color, x, y + 50, 5, 10);

if ( Health > 60)
HUD->   DrawRect( color, x, y + 60, 5, 10);

if ( Health > 70)
HUD->   DrawRect(color, x, y + 70, 5, 10);

if ( Health > 80)
HUD->   DrawRect(color, x, y + 80, 5, 10);

if ( Health > 100)
HUD->  DrawRect( color, x, y + 90, 5, 10);

for (size_t i = 0; i < 20; i++)
HUD->  DrawRect(color, x, y + (i * 5), 5, 1);
}
}
}




std::wstring wstring_from_bytes(std::string const& str)
{
    size_t requiredSize = 0;
    std::wstring answer;
    wchar_t *pWTempString = NULL;

    /*
    * Call the conversion function without the output buffer to get the required size
    *  - Add one to leave room for the NULL terminator
    */
    requiredSize = mbstowcs(NULL, str.c_str(), 0) + 1;

    /* Allocate the output string (Add one to leave room for the NULL terminator) */
    pWTempString = (wchar_t *)malloc( requiredSize * sizeof( wchar_t ));
    if (pWTempString == NULL)
    {
        printf("Memory allocation failure.\n");
    }
    else
    {
        // Call the conversion function with the output buffer
        size_t size = mbstowcs( pWTempString, str.c_str(), requiredSize);
        if (size == (size_t) (-1))
        {
            printf("Couldn't convert string\n");
        }
        else
        {
            answer = pWTempString;
        }
    }


    if (pWTempString != NULL)
    {
        delete[] pWTempString;
    }

    return answer;
}

bool isEqual(FString s1, const char* check) {
FString s2(check);
return 0;
}
void *LoadFont() {
while (!Font  ) {

//Font = UObject::FindObject<UFont>(XorEnc("Font TSLFont.TSLFont"));
    Font = UObject::FindObject<UFont>(XorEnc("Font RobotoTiny.RobotoTiny"));






sleep(1);
}
return 0;
}








FVector2D WorldToRadar(float Yaw, FVector Origin, FVector LocalOrigin, float PosX, float PosY,
                       FVector Size, bool & outbuff)
{
    bool flag = false;
    double num = (double)Yaw;
    double num2 = num * 0.017453292519943295;
    float num3 = (float)std::cos(num2);
    float num4 = (float)std::sin(num2);
    float num5 = Origin.X - LocalOrigin.X;
    float num6 = Origin.Y - LocalOrigin.Y;
    FVector2D vector;
    vector.X = (num6 * num3 - num5 * num4) / 150.f;
    vector.Y = (num5 * num3 + num6 * num4) / 150.f;
    FVector2D vector2;
    vector2.X = vector.X + PosX + Size.X / 2.f;
    vector2.Y = -vector.Y + PosY + Size.Y / 2.f;
    bool flag2 = vector2.X > PosX + Size.X;
    if (flag2)
    {
        vector2.X = PosX + Size.X;
    }
    else
    {
        bool flag3 = vector2.X < PosX;
        if (flag3)
        {
            vector2.X = PosX;
        }
    }
    bool flag4 = vector2.Y > PosY + Size.Y;
    if (flag4)
    {
        vector2.Y = PosY + Size.Y;
    }
    else
    {
        bool flag5 = vector2.Y < PosY;
        if (flag5)
        {
            vector2.Y = PosY;
        }
    }
    bool flag6 = vector2.Y == PosY || vector2.X == PosX;
    if (flag6)
    {
        flag = true;
    }
    outbuff = flag;
    return vector2;
}

const char *GetLootName(APickUpListWrapperActor *Loot) {
switch (Loot->BoxType) {
case EPickUpBoxType::EPickUpBoxType__EPickUpBoxType_LootBox:

return "LootBox";
case EPickUpBoxType::EPickUpBoxType__EPickUpBoxType_TombBox:
return "TomBOX";
default:
return "LootBox";

}
}



bool isEqual(string s1, string s2) {
return (s1 == s2);
}
FString getplayerflag(FString nation) {
if (isEqual(nation, "G1") ) {
return "ð";
}
if (isEqual(nation, "IQ") ) {
return "ð®ð¶";
}
if (isEqual(nation, "SA") ) {
return "ð¸ð¦";
}
if (isEqual(nation, "BH") ) {
return "ð§ð­";
}
if (isEqual(nation, "SY") ) {
return "ð¸ð¾";
}
if (isEqual(nation, "CA") ) {
return "ð¨ð¦";
}
if (isEqual(nation, "PK") ) {
return "ðµð°";
}
if (isEqual(nation, "AF") ) {
return "ð¦ð«";
}
if (isEqual(nation, "AL") ) {
return "ð¦ð±";
}
if (isEqual(nation, "DZ") ) {
return "ð©ð¿";
}
if (isEqual(nation, "AS") ) {
return "ð¦ð¸";
}
if (isEqual(nation, "AD") ) {
return "ð¦ð©";
}
if (isEqual(nation, "AO") ) {
return "ð¦ð´";
}
if (isEqual(nation, "AI") ) {
return "ð¦ð®";
}
return "";}
ASTExtraVehicleBase *GetTargetVehicle() {
    ASTExtraPlayerCharacter *localPlayer = 0;
    ASTExtraPlayerController *localPlayerController = 0;
 UGameplayStatics *GameplayStatics = (UGameplayStatics *) UGameplayStatics::StaticClass();
 float max = std::numeric_limits < float >::infinity();
    ASTExtraVehicleBase *result = 0;
    std::vector<ASTExtraVehicleBase*> VehicleBase;

 GetAllActors(VehicleBase);
    for (auto actor = VehicleBase.begin(); actor != VehicleBase.end(); actor++) {
        auto Vehicle = *actor;
        if(!Vehicle)
            continue;
            
        if(!Vehicle->RootComponent)
            continue;
            
        if(!Vehicle->Mesh)
            continue;
        
  auto Driver = Vehicle->GetDriver();
  auto CurrentVeh = localPlayer->CurrentVehicle;
        if(Driver && !CurrentVeh) {
   if(Driver->TeamID == localPlayer->TeamID)
    continue;
    
   float dist = Vehicle->GetDistanceTo(localPlayer);
   if (dist < max) {
    max = dist;
    result = Vehicle;
   }
  }
 }
    return result;
 VehicleBase.clear();
}





FVector2D rotateAngleView(FVector selfCoord, FVector targetCoord) {
    
    float osx = targetCoord.X - selfCoord.X;
    float osy = targetCoord.Y - selfCoord.Y;
    float osz = targetCoord.Z - selfCoord.Z;
    
    return {(float) (atan2(osy, osx) * 180 / M_PI), (float) (atan2(osz, sqrt(osx * osx + osy * osy)) * 180 / M_PI)};
}

float Cheatbot(float cheatbot_owner) {
    if (cheatbot_owner < 0) {
        return abs(cheatbot_owner);
    } else if (cheatbot_owner > 0) {
        return cheatbot_owner - cheatbot_owner * 2;
    }
    return cheatbot_owner;
}

float Cheatbotx(float cheatbot1, float cheatbot2) {
    float cheatbotx = fmod(cheatbot2 - cheatbot1 + 180, 360) - 180;
    return cheatbotx < -180 ? cheatbotx + 360 : cheatbotx;
}




void RenderESP(UGameViewportClient * GmaeViewPort, SDK::UCanvas* Canvas) {
    ASTExtraPlayerCharacter *localPlayer = 0;
    ASTExtraPlayerController *localPlayerController = 0;
    
    auto screenWidth = Canvas->SizeX;
    auto screenHeight = Canvas->SizeY;
    
    g_screenWidth = screenWidth;
    g_screenHeight = screenHeight;
   
    
    FVector LocalPos{0, 0, 0}, ViewPos{0, 0, 0};
    
    if (localPlayer) {
        LocalPos = GetBoneLocationByName(localPlayer, "Root");
        ViewPos = GetBoneLocationByName(localPlayer, "Head");
        ViewPos.Z += 15.f;
    }
    
    
    g_screenWidth = screenWidth;
    g_screenHeight = screenHeight;
    if (Canvas) {
        static bool loadFont = false;
        if (!loadFont) {
            LoadFont();
            loadFont = true;
        }
        
        if (!Font || !Font )
            return;
        {
            
            std::wstring wstr =XorEnc(L"Testing");
            Font->LegacyFontSize = 30;
            DrawTextNotCentered(Canvas,FString(wstr), {static_cast<float>(screenWidth/2), 100}, FLinearColor(1.f, 1.f, 1.f, 1.f),COLOR_BLACK);
            
            Font->LegacyFontSize = 30;
            
        }
        UGameplayStatics* gGameplayStatics = (UGameplayStatics*)UGameplayStatics::StaticClass();
#define W2S(w, s) gGameplayStatics->ProjectWorldToScreen(localPlayerController, w, true, s)
        UKismetMathLibrary* UMC = (UKismetMathLibrary*)UKismetMathLibrary::StaticClass();
        UKismetSystemLibrary*USl = (UKismetSystemLibrary*)UKismetSystemLibrary::StaticClass();
        auto GWorld = GetFullWorld();
        if (GWorld) {
            UNetDriver *NetDriver = GWorld->NetDriver;
            if (NetDriver) {
                UNetConnection *ServerConnection = NetDriver->ServerConnection;
                if (ServerConnection) {
                    localPlayerController = (ASTExtraPlayerController *) ServerConnection->PlayerController;
                }
            }
            
            
            if (localPlayerController) {
                std::vector<ASTExtraPlayerCharacter*> PlayerCharacter;
                GetAllActors(PlayerCharacter);
                for (auto actor = PlayerCharacter.begin(); actor != PlayerCharacter.end(); actor++) {
                    auto Actor = *actor;
                    
                    if (Actor->PlayerKey == ((ASTExtraPlayerController *) localPlayerController)->PlayerKey) {
                        localPlayer = Actor;
                        break;
                    }
                }
                localPlayerController->AntiCheatManagerComp = 0;
                auto CheatManger = localPlayerController->CheatManager;
                if(CheatManger){
                    CheatManger->FlushLog();
                }
                {
                    if (localPlayer) {
                        
                       
                        float Distance =0;
                        
                        int totalEnemies = 0;
                        std::vector<ASTExtraPlayerCharacter*> PlayerCharacter2;
                        GetAllActors(PlayerCharacter2);
                        
                        
                        
                        for (auto actor = PlayerCharacter2.begin(); actor != PlayerCharacter2.end(); actor++) {
                            auto Player = *actor;
                            
                            if (Player->PlayerKey == localPlayer->PlayerKey)
                                continue;
                            
                            if (Player->TeamID == localPlayer->TeamID)
                                continue;
                            
                            if (Player->bDead)
                                continue;
                            
                            if (Player->bHidden )
                                continue;
                            
                            if (!Player->Mesh)
                                continue;
                            
                            if (!Player->RootComponent)
                                continue;
                            
                            
                            if (Player->bEnsure)
                                totalEnemies++;
                            else totalEnemies++;
                            
                            FVector   Head = GetBoneLocationByName(Player, "Head");
                            Head.Z += 12.5f;
                            
                            FVector Root = GetBoneLocationByName(Player, "Root");
                            headp = GetBoneLocationByName(Player, "Head");
                            
                            Distance = Player->GetDistanceTo(localPlayer) / 100.f;
                            
                            if (Distance < 500.f) {
                                bool IsVisible = localPlayerController->LineOfSightTo(Player, {0,0,0}, true);
                                if(IsVisible) {
                                    visCol.R = 0.f;
                                    visCol.G = 1.f;
                                    visCol.B = 0.f;
                                    visCol.A = 1.f;
                                }else {
                                    visCol.R = 1.f;
                                    visCol.G = 0.f;
                                    visCol.B = 0.f;
                                    visCol.A = 1.f;
                                }
                                FVector2D HeadSc, RootSc;
                                if(isLineEsp){
                                    if (gGameplayStatics->ProjectWorldToScreen(localPlayerController, Head, false, &HeadSc)) {
                                        if (IsVisible){
                                            DrawLine(Canvas, {static_cast<float>(screenWidth / 2), 0}, HeadSc, 1.5f, visCol);
                                        }  else{
                                            DrawLine(Canvas, {static_cast<float>(screenWidth / 2), 0}, HeadSc, 1.5f, visCol);
                                            
                                            
                                        }
                                        
                                    }
                                }
                                
                                
                                
                                
                                if(IsBone)
                                {
                                    // ESP SKELETON
                                    static vector<string> right_arm{"neck_01", "clavicle_r", "upperarm_r", "lowerarm_r", "hand_r", "item_r"};
                                    static vector<string> left_arm{"neck_01", "clavicle_l", "upperarm_l", "lowerarm_l", "hand_l", "item_l"};
                                    static vector<string> spine{"Head", "neck_01", "spine_03", "spine_02", "spine_01", "Pelvis"};
                                    static vector<string> lower_right{"Pelvis", "thigh_r", "calf_r", "foot_r"};
                                    static vector<string> lower_left{"Pelvis", "thigh_l", "calf_l", "foot_l"};
                                    static vector<vector<string>> skeleton{right_arm, left_arm, spine, lower_right, lower_left};
                                    bool IsVisible = localPlayerController->LineOfSightTo(Player, { 0, 0, 0 }, true);
                                    FLinearColor visCol(1.f, 1.f, 1.f, 1.f);
                                    if(IsVisible) {
                                        visCol.R = 0.f;
                                        visCol.G = 1.f;
                                        visCol.B = 0.f;
                                        visCol.A = 1.f;
                                    }else {
                                        visCol.R = 1.f;
                                        visCol.G = 0.f;
                                        visCol.B = 0.f;
                                        visCol.A = 1.f;
                                    }
                                    
                                    if(Player->bEnsure){
                                        
                                        if(IsVisible) {
                                            
                                            visCol.R = 1.f;
                                            visCol.G = 1.f;
                                            visCol.B = 1.f;
                                            visCol.A = 1.f;
                                            
                                        }else {
                                            
                                            visCol.R = 0.33f;
                                            visCol.G = 0.38f;
                                            visCol.B = 0.44f;
                                            visCol.A = 1.00f;
                                            
                                            
                                        }
                                        
                                    }
                                    if (Player->Health == 0){
                                        if(IsVisible) {
                                            
                                            visCol.R = 0.98f;
                                            visCol.G = 0.83f;
                                            visCol.B = 0.14f;
                                            visCol.A = 1.00f;
                                        }else{
                                            
                                            visCol.R = 0.83f;
                                            visCol.G = 0.51f;
                                            visCol.B = 0.07f;
                                            visCol.A = 1.00f;
                                        }
                                        
                                        
                                        
                                    }
                                    
                                    
                                    
                                    
                                    
                                    if (Player->IsInvincible)
                                    {
                                        visCol.R = 1.f;
                                        visCol.G = 1.f;
                                        visCol.B = 0.f;
                                        visCol.A = 1.f;
                                    }
                                    
                                    
                                    
                                    
                                    
                                    
                                    for (auto &boneStructure : skeleton) {
                                        string lastBone;
                                        for (string &currentBone : boneStructure) {
                                            if (!lastBone.empty()) {
                                                FVector wBoneFrom = GetBoneLocationByName(Player, lastBone.c_str());
                                                FVector wBoneTo = GetBoneLocationByName(Player, currentBone.c_str());
                                                FVector2D boneFrom, boneTo;
                                                if (gGameplayStatics->ProjectWorldToScreen(localPlayerController, wBoneFrom, false, &boneFrom) && gGameplayStatics->ProjectWorldToScreen(localPlayerController, wBoneTo, false, &boneTo)) {
                                                    if (IsVisible)
                                                        Canvas->K2_DrawLine(boneFrom, boneTo, 2.5f, visCol);
                                                    else
                                                        Canvas->K2_DrawLine(boneFrom, boneTo, 2.5f, visCol);
                                                    
                                                }
                                            }
                                            lastBone = currentBone;
                                        }
                                    }
                                }
                                
                                
   
                               
                                
                                
                                   
                                
                        
                            }
                            
                            
                           
                            /*+++++++++++++++++++++++++++++++++++++++WEAPON PLAYER ESP+++++++++++++++++++++++++*/
                          
                          
                            if(!localPlayer->IsUsingGrenade()) {
                                
                                auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                                if (WeaponManagerComponent) {
                                    auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                                    if ((int) propSlot.GetValue() >= 1 &&
                                        (int) propSlot.GetValue() <= 3) {
                                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                                        if (CurrentWeaponReplicated) {
                                            auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                                            auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                                            auto ID = CurrentWeaponReplicated->GetWeaponID();
                                            if(ID != 108004 && ID != 108003 && ID != 108002 && ID != 108001 && ID != 108000 && ID != 108005 && ID != 108006 && ID != 108007)
                                                
                                                if (ShootWeaponEntityComp && ShootWeaponEffectComp){
                                                    if(IsCrossHair){
                                                        memset(&ShootWeaponEntityComp->DeviationInfo, 0, sizeof(FSDeviation));
                                                        
                                                        ShootWeaponEntityComp->ShotGunCenterPerc = 0.0f;
                                                        ShootWeaponEntityComp->ShotGunVerticalSpread = 0.0f;
                                                        ShootWeaponEntityComp->ShotGunHorizontalSpread = 0.0f;
                                                        
                                                        ShootWeaponEntityComp->GameDeviationFactor = 0.0f;
                                                        ShootWeaponEntityComp->GameDeviationAccuracy = 0.0f;
                                                        
                                                        ShootWeaponEntityComp->CrossHairInitialSize = 0.0f;
                                                        ShootWeaponEntityComp->CrossHairBurstSpeed = 0.0f;
                                                        ShootWeaponEntityComp->CrossHairBurstIncreaseSpeed = 0.0f;
                                                        ShootWeaponEntityComp->VehicleWeaponDeviationAngle = 0.0f;
                                                    }
                                                    if(IsHitXPL){
                                                        
                                                        ShootWeaponEntityComp->ExtraHitPerformScale = 100;
                                                        
                                                        
                                                        ShootWeaponEntityComp->  HUDAlphaDecreaseSpeedScale = 1.f;
                                                    }
                                                    
                                                    if(IsNocamerashake) {
                                                        ShootWeaponEffectComp->CameraShakeInnerRadius = 0.0f;
                                                        ShootWeaponEffectComp->CameraShakeOuterRadius = 0.0f;
                                                        ShootWeaponEffectComp->CameraShakFalloff = 0.0f;
                                                    }
                                                    
                                                    if(IsNorecoil){
                                                        
                                                        ShootWeaponEntityComp->AccessoriesVRecoilFactor = 0.0f;
                                                        ShootWeaponEntityComp->AccessoriesHRecoilFactor = 0.0f;
                                                        ShootWeaponEntityComp->AccessoriesRecoveryFactor = 0.0f;
                                                        
                                                        
                                                        
                                                        
                                                    }
                                                    
                                                    if(IsNotesst){
                                                        
                                                     
                                                        
                                                    }
                                                    
                                                    
                                                    
                                                    if(IsFastshoot){
                                                        ShootWeaponEntityComp->ShootInterval =0.060606f;
                                                    }
                                                    if(IsFastBullet) {
                                                        ShootWeaponEntityComp->BulletFireSpeed = 80000.f;
                                                    }
                                                }
                                            
                                        }
                                    }
                                }
                            }
                            
                            if (Is3Dbox) {
                                // if(Distance <120){
                                bool IsVisible = localPlayerController->LineOfSightTo(Player, { 0, 0, 0 }, true);
                                FLinearColor visCol(1.f, 1.f, 1.f, 1.f);
                                if(IsVisible) {
                                    visCol.R = 0.f;
                                    visCol.G = 1.f;
                                    visCol.B = 0.f;
                                    visCol.A = 1.f;
                                }else {
                                    visCol.R = 1.f;
                                    visCol.G = 0.f;
                                    visCol.B = 0.f;
                                    visCol.A = 1.f;
                                }
                                
                                if(Player->bEnsure){
                                    
                                    if(IsVisible) {
                                        
                                        visCol.R = 1.f;
                                        visCol.G = 1.f;
                                        visCol.B = 1.f;
                                        visCol.A = 1.f;
                                        
                                    }else {
                                        
                                        visCol.R = 0.33f;
                                        visCol.G = 0.38f;
                                        visCol.B = 0.44f;
                                        visCol.A = 1.00f;
                                        
                                        
                                    }
                                    
                                }
                                
                                if (Player->Health == 0){
                                    if(IsVisible) {
                                        
                                        visCol.R = 0.98f;
                                        visCol.G = 0.83f;
                                        visCol.B = 0.14f;
                                        visCol.A = 1.00f;
                                    }else{
                                        
                                        visCol.R = 0.83f;
                                        visCol.G = 0.51f;
                                        visCol.B = 0.07f;
                                        visCol.A = 1.00f;
                                    }
                                }
                                
                                
                                
                                
                                
                                if (Player->IsInvincible)
                                {
                                    visCol.R = 1.f;
                                    visCol.G = 1.f;
                                    visCol.B = 0.f;
                                    visCol.A = 1.f;
                                }
                                
                                
                                
                                auto BoxBounds = Player->Mesh->CachedLocalBounds;
                                FVector Chest = Player->K2_GetActorLocation();
                                DrawBox3D(Canvas,Player, visCol, Chest, BoxBounds.BoxExtent);
                                
                                //                                }
                            }
                            /*+++++++++++++++++++++++++++++++++++++++HEALTH ESP+++++++++++++++++++++++++*/
   
                          
                            
                            
                            
                            
                            
                            
                        }PlayerCharacter2.clear();
                        
                        {
                            FVector2D opp;
                            FVector ii;
                            if(gGameplayStatics->ProjectWorldToScreen(localPlayerController, ii, false, &opp)){
                            }else{
                                
                                
                                
                                if(totalEnemies>0){
                                    std::wstring fpd ;
                                    
                                        fpd=XorEnc(L"Players:");
                         
                                    fpd +=std::to_wstring((int)totalEnemies);
                                    
                                    Font->LegacyFontSize = 30;
                                    
                                    
                                    DrawTextNotCentered(Canvas, fpd, FVector2D(screenWidth / 2, 150), visCol,COLOR_BLACK);
                                    Font->LegacyFontSize = 30;
                                    
                                }
                            }
                        }
                        
                    }}}
 
            
           
            
           
            auto MathLibrary = (UKismetMathLibrary *) UKismetMathLibrary::StaticClass();
            
          
            
            
        
            
          
            
            
            
            
        }
        
        
        if (IsGRWAR)
        {
            std::vector < ASTExtraGrenadeBase * >GrenadeBase;
            GetAllActors(GrenadeBase);
            for (auto actor = GrenadeBase.begin();
                 actor != GrenadeBase.end(); actor++)
            {
                auto Grenade = *actor;
                if(Grenade) {
                    if(Grenade->ItemDefineID.TypeSpecificID ==602002)
                        continue;
                    if(Grenade->ItemDefineID.TypeSpecificID == 602004);
                    auto RootComponent = Grenade->RootComponent;
                    if (RootComponent) {
                        float gDistance =
                        Grenade->GetDistanceTo(localPlayer) /100.f;
                        if (gDistance <= 200.f)
                        {
                            Font->LegacyFontSize =
                            max(6, 15 - (int)(gDistance / 100.f));
                            
                            float txtWidth, txtHeight;
                            std::wstring grenadetext = (L"Here is Grenade");
                            
                            auto txtSize = Canvas->K2_TextSize(Font, FString(grenadetext), {1, 1});
                            
                            
                            FVector2D Location;
                            if (W2S
                                (RootComponent->RelativeLocation, &Location))
                            {
                                
 DrawTextNotCentered(Canvas,FString(grenadetext),FVector2D(Location.X,Location.Y + 34),COLOR_RED,COLOR_BLACK);
                            }
                            
                            Font->LegacyFontSize = 20;
                            
                            if (gDistance < 13)
                            {
                                std::wstring gwarn;
                                
                                
                                
                                gwarn = std::wstring(L"MOVE, MOVE, MOVE!");
                                
                                
                                Font->LegacyFontSize = 112;
                                
                                
                                DrawTextNotCentered(Canvas, FString(gwarn),
                                                    FVector2D(screenWidth / 2,
                                                              screenHeight / 2),
                                                    COLOR_RED,COLOR_BLACK);
                                Font->LegacyFontSize =20
                                ;
                            }
                            
                            {
                                FVector bbOrigin =
                                RootComponent->RelativeLocation;
                                FVector bbExtends(10, 10, 10);
                                FVector bbOrigin2;
                                bbOrigin -= bbExtends / 2;
                                
                                
                                // bottom plane
                                
                                FVector one = bbOrigin;
                                FVector two = bbOrigin;
                                two.X += bbExtends.X;
                                FVector three = bbOrigin;
                                three.X += bbExtends.X;
                                three.Y += bbExtends.Y;
                                FVector four = bbOrigin;
                                four.Y += bbExtends.Y;
                                FVector five = one;
                                five.Z += bbExtends.Z;
                                FVector six = two;
                                six.Z += bbExtends.Z;
                                FVector seven = three;
                                seven.Z += bbExtends.Z;
                                FVector eight = four;
                                eight.Z += bbExtends.Z;
                                
                                FVector2D s1, s2, s3, s4, s5, s6, s7, s8;
                                
                                if (W2S(one, &s1) && W2S(two, &s2)
                                    && W2S(three, &s3) && W2S(four, &s4)
                                    && W2S(five, &s5) && W2S(six, &s6)
                                    && W2S(seven, &s7) && W2S(eight, &s8))
                                {
                                    
                                    
                                    
                                    DrawLine(Canvas, s1, s2, 1.3f, COLOR_RED);
                                    DrawLine(Canvas, s2, s3,1.3f, COLOR_RED);
                                    DrawLine(Canvas, s3, s4, 1.3f, COLOR_RED);
                                    DrawLine(Canvas, s4, s1, 1.3f, COLOR_RED);
                                    
                                    DrawLine(Canvas, s5, s6, 1.3f, COLOR_RED);
                                    DrawLine(Canvas, s6, s7, 1.3f, COLOR_RED);
                                    DrawLine(Canvas, s7, s8,1.3f, COLOR_RED);
                                    DrawLine(Canvas, s8, s5, 1.3f, COLOR_RED);
                                    
                                    DrawLine(Canvas, s1, s5, 1.3f, COLOR_RED);
                                    DrawLine(Canvas, s2, s6, 1.3f, COLOR_RED);
                                    DrawLine(Canvas, s3, s7, 1.3f, COLOR_RED);
                                    DrawLine(Canvas, s4, s8, 1.3f, COLOR_RED);
                                    
                                    
                                    
                                }
                            }
                        }
                    }
                }
                
                
                GrenadeBase.clear();
            }
        }
    }
g_LocalPlayer = localPlayer;
g_PlayerController = localPlayerController;

}









static JHCJDrawView *instance = nil;

+ (JHCJDrawView *)getInstance
{
static dispatch_once_t onceToken;
dispatch_once(&onceToken, ^{
instance = [[self alloc] init];
});

return instance;
}

void *(*oriCheatbot)(UGameViewportClient * GmaeViewPort, SDK::UCanvas* pCanvas);
void *hookCheatbot(UGameViewportClient * GmaeViewPort, SDK::UCanvas* pCanvas){
    RenderESP(GmaeViewPort, pCanvas);
    pCanvas->SizeX = g_screenWidth;
    pCanvas->SizeY = g_screenHeight;
    
    return oriCheatbot(GmaeViewPort, pCanvas);
}

void *botcheatxd(){
    if((Cheatbotlp)){
        static bool botxdxd = false;
        if(!botxdxd){
            auto CheatBotObj = (SDK::FUObjectArray *) (CHEATBOTOWNER());
            
            auto gobjects = CheatBotObj->ObjObjects;
            
            for (int i = 0; i < gobjects.Num(); i++)
                if (auto obj = gobjects.GetByIndex(i)) {
                    
                    if(obj->IsA(SDK::UGameViewportClient::StaticClass())) {
                        auto View = (SDK::UGameViewportClient *) obj;
                        
                        auto CheatBotTele = View->VTable;
                        auto vTable = (void**)(CheatBotTele);
                        
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
#define hook botxdxd



void LoadItemData()
{
    itemData = json::parse("[\n"
                           "  {\n"
                           "    \"itemCategory\": \"Rifle\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 101001,\n"
                           "    \"itemName\": \"AKM\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 101002,\n"
                           "    \"itemName\": \"M16A4\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 101003,\n"
                           "    \"itemName\": \"SCAR-L\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 101004,\n"
                           "    \"itemName\": \"M416\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 101005,\n"
                           "    \"itemName\": \"Groza\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 101006,\n"
                           "    \"itemName\": \"AUG A3\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 101007,\n"
                           "    \"itemName\": \"QBZ\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 101008,\n"
                           "    \"itemName\": \"M762\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 101009,\n"
                           "    \"itemName\": \"Mk47 Mutant\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 101010,\n"
                           "    \"itemName\": \"G36C\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 101100,\n"
                           "    \"itemName\": \"FAMAS\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 105001,\n"
                           "    \"itemName\": \"M249\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 105002,\n"
                           "    \"itemName\": \"DP-28\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 105010,\n"
                           "    \"itemName\": \"MG3\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemCategory\": \"Sub-MachineGun\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 102001,\n"
                           "    \"itemName\": \"UZI\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 102002,\n"
                           "    \"itemName\": \"UMP45\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 102003,\n"
                           "    \"itemName\": \"Vector\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 102105,\n"
                           "    \"itemName\": \"P90\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 102004,\n"
                           "    \"itemName\": \"Tompson SMG\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 102005,\n"
                           "    \"itemName\": \"PP-19 Bizon\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 102007,\n"
                           "    \"itemName\": \"Skorpion\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemCategory\": \"Sniper\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 103001,\n"
                           "    \"itemName\": \"Kar98K\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 103002,\n"
                           "    \"itemName\": \"M24\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 103003,\n"
                           "    \"itemName\": \"AWM\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 103012,\n"
                           "    \"itemName\": \"AMR\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 103004,\n"
                           "    \"itemName\": \"SKS\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 103005,\n"
                           "    \"itemName\": \"VSS\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 103006,\n"
                           "    \"itemName\": \"Mini14\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 103007,\n"
                           "    \"itemName\": \"Mk14\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 103008,\n"
                           "    \"itemName\": \"Win94\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 103009,\n"
                           "    \"itemName\": \"SLR\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 103010,\n"
                           "    \"itemName\": \"QBU\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 103011,\n"
                           "    \"itemName\": \"Mosin Nagant Sniper Rifle\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 103100,\n"
                           "    \"itemName\": \"Mk12\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemCategory\": \"ShotGun\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 104001,\n"
                           "    \"itemName\": \"S686\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 104002,\n"
                           "    \"itemName\": \"S1897\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 104003,\n"
                           "    \"itemName\": \"S12K\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 104004,\n"
                           "    \"itemName\": \"DP12\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 104101,\n"
                           "    \"itemName\": \"M1014 Shotgun\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 106006,\n"
                           "    \"itemName\": \"Sawed-off\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemCategory\": \"Pistol\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 106001,\n"
                           "    \"itemName\": \"P92\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 106002,\n"
                           "    \"itemName\": \"P1911\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 106003,\n"
                           "    \"itemName\": \"R1895\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 106004,\n"
                           "    \"itemName\": \"P18C\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 106005,\n"
                           "    \"itemName\": \"R45\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 106008,\n"
                           "    \"itemName\": \"Vz61\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 106010,\n"
                           "    \"itemName\": \"Desert Eagle\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemCategory\": \"Other\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 107001,\n"
                           "    \"itemName\": \"Crossbow\",\n"
                           "    \"itemTextColor\": \"FF7A0ACF\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 603001,\n"
                           "    \"itemName\": \"Fuel Battery Pack\",\n"
                           "    \"itemTextColor\": \"FF7A0ACF\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemCategory\": \"Melee\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 108001,\n"
                           "    \"itemName\": \"Machete\",\n"
                           "    \"itemTextColor\": \"FF7A0ACF\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 108002,\n"
                           "    \"itemName\": \"Crowbar\",\n"
                           "    \"itemTextColor\": \"FF7A0ACF\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 108003,\n"
                           "    \"itemName\": \"Sickle\",\n"
                           "    \"itemTextColor\": \"FF7A0ACF\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 108004,\n"
                           "    \"itemName\": \"Pan\",\n"
                           "    \"itemTextColor\": \"FF7A0ACF\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemCategory\": \"Attachment\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 201001,\n"
                           "    \"itemName\": \"Choke\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 201002,\n"
                           "    \"itemName\": \"Compensator (SMG)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 201003,\n"
                           "    \"itemName\": \"Compensator (Snipers)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 201004,\n"
                           "    \"itemName\": \"Flash Hider (SMG)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 201005,\n"
                           "    \"itemName\": \"Flash Hider (Snipers)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 201006,\n"
                           "    \"itemName\": \"Suppressor (SMG)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 201007,\n"
                           "    \"itemName\": \"Suppressor (Snipers)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 201009,\n"
                           "    \"itemName\": \"Compensator (AR)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 201010,\n"
                           "    \"itemName\": \"Flash Hider (AR)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 201011,\n"
                           "    \"itemName\": \"Suppressor (AR)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 201012,\n"
                           "    \"itemName\": \"Duckbill (Shotguns)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 202001,\n"
                           "    \"itemName\": \"Angled Foregrip\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 202002,\n"
                           "    \"itemName\": \"Vertical Foregrip\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 202004,\n"
                           "    \"itemName\": \"Light Grip\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 202005,\n"
                           "    \"itemName\": \"Half Grip\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 202006,\n"
                           "    \"itemName\": \"Thumb Grip\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 202007,\n"
                           "    \"itemName\": \"Laser Sight\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 203001,\n"
                           "    \"itemName\": \"Red Dot Sight\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 203002,\n"
                           "    \"itemName\": \"Holographic Sight\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 203003,\n"
                           "    \"itemName\": \"2x Scope\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 203004,\n"
                           "    \"itemName\": \"4x Scope\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 203005,\n"
                           "    \"itemName\": \"8x Scope\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 203014,\n"
                           "    \"itemName\": \"3x Scope\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 203015,\n"
                           "    \"itemName\": \"6x Scope\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 203018,\n"
                           "    \"itemName\": \"Canted Sight\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 204014,\n"
                           "    \"itemName\": \"Bullet Loop (Shotguns, Sniper Rifles)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 205001,\n"
                           "    \"itemName\": \"Stock (Micro UZI)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 205002,\n"
                           "    \"itemName\": \"Tactical Stock (Rifles, SMG)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 205003,\n"
                           "    \"itemName\": \"Cheek Pad (Snipers)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 205004,\n"
                           "    \"itemName\": \"Quiver (Crossbow)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemCategory\": \"Mag\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 204004,\n"
                           "    \"itemName\": \"Extended Mag (SMG, Pistols)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 204005,\n"
                           "    \"itemName\": \"Quickdraw Mag (SMG, Pistols)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 204006,\n"
                           "    \"itemName\": \"Extended Quickdraw Mag (SMG, Pistols)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 204007,\n"
                           "    \"itemName\": \"Extended Mag (Snipers)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 204008,\n"
                           "    \"itemName\": \"Quickdraw Mag (Snipers)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 204009,\n"
                           "    \"itemName\": \"Extended Quickdraw Mag (Snipers)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 204011,\n"
                           "    \"itemName\": \"Extended Mag (AR)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 204012,\n"
                           "    \"itemName\": \"Quickdraw Mag (AR)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 204013,\n"
                           "    \"itemName\": \"Extended Quickdraw Mag (AR)\",\n"
                           "    \"itemTextColor\": \"FF9CB9CC\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemCategory\": \"Ammo\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 301001,\n"
                           "    \"itemName\": \"9mm\",\n"
                           "    \"itemTextColor\": \"FFF0340E\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 302001,\n"
                           "    \"itemName\": \"7.62mm\",\n"
                           "    \"itemTextColor\": \"FFF0C30E\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 303001,\n"
                           "    \"itemName\": \"5.56mm\",\n"
                           "    \"itemTextColor\": \"FF1AE310\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 304001,\n"
                           "    \"itemName\": \"12 Gauge\",\n"
                           "    \"itemTextColor\": \"FFD60F26\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 305001,\n"
                           "    \"itemName\": \".45 ACP\",\n"
                           "    \"itemTextColor\": \"FF089DD4\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 306001,\n"
                           "    \"itemName\": \".300 Magnum\",\n"
                           "    \"itemTextColor\": \"FF016B15\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 307001,\n"
                           "    \"itemName\": \"Bolt\",\n"
                           "    \"itemTextColor\": \"FFBF1722\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemCategory\": \"Bag\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 501001,\n"
                           "    \"itemName\": \"Backpack (Lv. 1)\",\n"
                           "    \"itemTextColor\": \"FF4B6B01\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 501002,\n"
                           "    \"itemName\": \"Backpack (Lv. 2)\",\n"
                           "    \"itemTextColor\": \"FF4B6B01\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 501006,\n"
                           "    \"itemName\": \"Backpack (Lv. 3)\",\n"
                           "    \"itemTextColor\": \"FF4B6B01\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemCategory\": \"Helmet\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 502001,\n"
                           "    \"itemName\": \"Motorcycle Helmet (Lv. 1)\",\n"
                           "    \"itemTextColor\": \"FF394224\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 502002,\n"
                           "    \"itemName\": \"Military Helmet (Lv. 2)\",\n"
                           "    \"itemTextColor\": \"FF394224\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 502003,\n"
                           "    \"itemName\": \"Spetsnaz Helmet (Lv. 3)\",\n"
                           "    \"itemTextColor\": \"FF394224\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemCategory\": \"Armor\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 503001,\n"
                           "    \"itemName\": \"Police Vest (Lv. 1)\",\n"
                           "    \"itemTextColor\": \"FF73592F\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 503002,\n"
                           "    \"itemName\": \"Police Vest (Lv. 2)\",\n"
                           "    \"itemTextColor\": \"FF73592F\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 503003,\n"
                           "    \"itemName\": \"Military Vest (Lv. 3)\",\n"
                           "    \"itemTextColor\": \"FF73592F\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemCategory\": \"Medic\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 601001,\n"
                           "    \"itemName\": \"Energy Drink\",\n"
                           "    \"itemTextColor\": \"FF1D8C21\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 601002,\n"
                           "    \"itemName\": \"Adrenaline Syringe\",\n"
                           "    \"itemTextColor\": \"FF1D8C21\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 601003,\n"
                           "    \"itemName\": \"Painkiller\",\n"
                           "    \"itemTextColor\": \"FF1D8C21\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 601004,\n"
                           "    \"itemName\": \"Bandage\",\n"
                           "    \"itemTextColor\": \"FF1D8C21\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 601005,\n"
                           "    \"itemName\": \"First Aid Kit\",\n"
                           "    \"itemTextColor\": \"FF1D8C21\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 601006,\n"
                           "    \"itemName\": \"Med Kit\",\n"
                           "    \"itemTextColor\": \"FF1D8C21\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemCategory\": \"Grenades\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 602004,\n"
                           "    \"itemName\": \"Grenade\",\n"
                           "    \"itemTextColor\": \"FF870144\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 602002,\n"
                           "    \"itemName\": \"Smoke\",\n"
                           "    \"itemTextColor\": \"FF870144\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 602003,\n"
                           "    \"itemName\": \"Cocktail Molotov\",\n"
                           "    \"itemTextColor\": \"FF870144\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 602005,\n"
                           "    \"itemName\": \"Apple\",\n"
                           "    \"itemTextColor\": \"FF870144\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemCategory\": \"Suits\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 403045,\n"
                           "    \"itemName\": \"Ghillie Suit (Grass)\",\n"
                           "    \"itemTextColor\": \"FF04B341\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 403989,\n"
                           "    \"itemName\": \"Ghillie Suit (Snow)\",\n"
                           "    \"itemTextColor\": \"FF04B341\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 403990,\n"
                           "    \"itemName\": \"Ghillie Suit (Dark Brown)\",\n"
                           "    \"itemTextColor\": \"FF04B341\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 403187,\n"
                           "    \"itemName\": \"Ghillie Suit (Unknown)\",\n"
                           "    \"itemTextColor\": \"FF04B341\"\n"
                           "  },\n"
                           "  {\n"
                           "    \"itemId\": 403188,\n"
                           "    \"itemName\": \"Ghillie Suit (Unknown)\",\n"
                           "    \"itemTextColor\": \"FF04B341\"\n"
                           "  }\n"
                           "]");
    
    for (auto &e : itemData) {
        try {
            itemsName[e[XorEnc("itemId")]] = stringToWstring(e[XorEnc("itemName")].get<std::string>());      itemsColor[e[XorEnc("itemId")]] = e[XorEnc("itemTextColor")].get<std::string>();
        } catch (json::exception &e) {}
    }
}




 + (void)load
 {
     

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(10* NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        
        
        if((Cheatbotlp)){
            LoadItemData();

            botcheatxd();
            }         });
          
      
     
 FName::GNames = GetGNames();
 while (!FName::GNames) {
 FName::GNames = GetGNames();
 sleep(1);

 }
 UObject::GUObjectArray = (FUObjectArray *) (CHEATBOTOWNER());
 
     dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(25 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
     });
     
     dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(28 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
     });

 }


@end
