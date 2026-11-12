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

file(GLOB_RECURSE SDK_SRC "CheatbotEngine/SDK/*.cpp")
file(GLOB_RECURSE IMGUI_SRC "CheatbotEngine/imgui/*.cpp" "CheatbotEngine/imgui/Metal/*.mm")
file(GLOB_RECURSE CORE_SRC "CheatbotEngine/*.cpp" "CheatbotEngine/*.mm")

set(ALL_SOURCES ${SDK_SRC} ${IMGUI_SRC} ${CORE_SRC})

add_library(cheatbotowner SHARED ${ALL_SOURCES})

# C++ warnings ignore karne ke liye
target_compile_options(cheatbotowner PRIVATE 
    $<$<COMPILE_LANGUAGE:CXX>:-Wno-everything -Wno-error>
)

# Objective-C++ (.mm) files ke liye ARC enable karna zaroori hai
target_compile_options(cheatbotowner PRIVATE 
    $<$<COMPILE_LANGUAGE:OBJCXX>:-fobjc-arc -Wno-everything -Wno-error>
)

target_include_directories(cheatbotowner PRIVATE
    CheatbotEngine
    CheatbotEngine/SDK
    CheatbotEngine/imgui
    CheatbotEngine/imgui/Metal
)

target_link_options(cheatbotowner PRIVATE ${IOS_FRAMEWORKS})

target_link_directories(cheatbotowner PRIVATE 
    ${CMAKE_SOURCE_DIR}
)
target_link_libraries(cheatbotowner PRIVATE 
    "-framework JRMemory"
)

set_target_properties(cheatbotowner PROPERTIES 
    PREFIX ""
    SUFFIX ".dylib"
    XCODE_ATTRIBUTE_CLANG_ENABLE_OBJC_ARC "YES"
    XCODE_ATTRIBUTE_CLANG_ENABLE_OBJC_WEAK "YES"
)
