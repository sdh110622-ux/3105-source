cmake_minimum_required(VERSION 3.20)
project(CheatbotEngine CXX OBJCXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(IOS_FRAMEWORKS
    "-framework Foundation"
    "-framework UIKit"
    "-framework Metal"
    "-framework MetalKit"
    "-framework QuartzCore"
    "-framework AVFoundation"
    "-framework CoreFoundation"
    "-framework WebKit"
    "-framework SystemConfiguration"
    "-framework AdSupport"
    "-framework IOKit"
    "-framework Security"
    "-framework MediaPlayer"
    "-framework Accelerate"
    "-lc++"
)

# Glob saari .cpp aur .mm files ko uthata hai
file(GLOB_RECURSE SDK_SRC "Engine_Cheatbot/CheatbotEngine/SDK/*.cpp")
file(GLOB_RECURSE IMGUI_SRC "Engine_Cheatbot/CheatbotEngine/imgui/*.cpp" "Engine_Cheatbot/CheatbotEngine/imgui/Metal/*.mm")
file(GLOB_RECURSE CORE_SRC "Engine_Cheatbot/CheatbotEngine/*.cpp" "Engine_Cheatbot/CheatbotEngine/*.mm")

set(ALL_SOURCES ${SDK_SRC} ${IMGUI_SRC} ${CORE_SRC})

add_library(cheatbotowner SHARED ${ALL_SOURCES})

target_include_directories(cheatbotowner PRIVATE
    Engine_Cheatbot/CheatbotEngine
    Engine_Cheatbot/CheatbotEngine/SDK
    Engine_Cheatbot/CheatbotEngine/imgui
    Engine_Cheatbot/CheatbotEngine/imgui/Metal
)

target_link_options(cheatbotowner PRIVATE ${IOS_FRAMEWORKS})

# JRMemory.framework ka path check kar lena
target_link_directories(cheatbotowner PRIVATE 
    ${CMAKE_SOURCE_DIR}/Engine_Cheatbot
)
target_link_libraries(cheatbotowner PRIVATE 
    "-framework JRMemory"
)

set_target_properties(cheatbotowner PROPERTIES 
    PREFIX ""
    SUFFIX ".dylib"
)