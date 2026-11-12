TARGET = iphone:clang:latest:14.0
ARCHS = arm64

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = cheatbotowner

cheatbotowner_FILES = $(shell find CheatbotEngine -name '*.cpp' -o -name '*.mm' -o -name '*.m')

cheatbotowner_CFLAGS = -fobjc-arc -w -Wno-error -std=c++17 \
                       -ICheatbotEngine \
                       -ICheatbotEngine/SDK \
                       -ICheatbotEngine/imgui \
                       -ICheatbotEngine/imgui/Metal

cheatbotowner_FRAMEWORKS = UIKit Foundation Metal MetalKit QuartzCore AVFoundation CoreFoundation WebKit SystemConfiguration AdSupport IOKit Security MediaPlayer Accelerate
cheatbotowner_LIBRARIES = c++
cheatbotowner_LDFLAGS = -F. -framework JRMemory

include $(THEOS_MAKE_PATH)/tweak.mk
