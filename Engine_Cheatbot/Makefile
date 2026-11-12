# Theos Makefile for CheatbotEngine
TARGET = iphone:clang:latest:14.0
ARCHS = arm64 arm64

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = cheatbotowner

# Saari .cpp, .mm, .m files ek saath dhoondhne ke liye
cheatbotowner_FILES = $(shell find CheatbotEngine -name '*.cpp' -o -name '*.mm' -o -name '*.m')

# Compiler flags: ARC, C++17, headers, aur PF_MAX clash fix
cheatbotowner_CFLAGS = -fobjc-arc -w -std=c++17 \
                       -ICheatbotEngine \
                       -ICheatbotEngine/SDK \
                       -ICheatbotEngine/imgui \
                       -ICheatbotEngine/imgui/Metal \
                       -DIGNORE_PF_MAX_DEFINE

# Apple Frameworks
cheatbotowner_FRAMEWORKS = UIKit Foundation Metal MetalKit QuartzCore AVFoundation CoreFoundation WebKit SystemConfiguration AdSupport IOKit Security MediaPlayer Accelerate

# Libraries aur JRMemory.framework
cheatbotowner_LIBRARIES = c++
cheatbotowner_LDFLAGS = -F. -framework JRMemory

include $(THEOS_MAKE_PATH)/tweak.mk
