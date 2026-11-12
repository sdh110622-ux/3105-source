cmake_minimum_required(VERSION 3.20)
project(CheatbotEngine CXX OBJCXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Apple iOS Frameworks
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

# Automatically saari files dhoondhne ke liye
file(GLOB_RECURSE SDK_SRC "CheatbotEngine/SDK/*.cpp")
file(GLOB_RECURSE IMGUI_SRC "CheatbotEngine/imgui/*.cpp" "CheatbotEngine/imgui/Metal/*.mm")
file(GLOB_RECURSE CORE_SRC "CheatbotEngine/*.cpp" "CheatbotEngine/*.mm")

set(ALL_SOURCES ${SDK_SRC} ${IMGUI_SRC} ${CORE_SRC})

add_library(cheatbotowner SHARED ${ALL_SOURCES})

# Naye Xcode compiler ke warnings ko ignore karne ke liye (jo error ban rahe the)
target_compile_options(cheatbotowner PRIVATE 
    -Wno-everything 
    -Wno-error 
)

# Include paths taaki saari .h aur .hpp files mil sakein
target_include_directories(cheatbotowner PRIVATE
    CheatbotEngine
    CheatbotEngine/SDK
    CheatbotEngine/imgui
    CheatbotEngine/imgui/Metal
)

# Frameworks link karo
target_link_options(cheatbotowner PRIVATE ${IOS_FRAMEWORKS})

# JRMemory.framework ka link (jo same folder mein hai)
target_link_directories(cheatbotowner PRIVATE 
    ${CMAKE_SOURCE_DIR}
)
target_link_libraries(cheatbotowner PRIVATE 
    "-framework JRMemory"
)

# Output ek .dylib file
set_target_properties(cheatbotowner PROPERTIES 
    PREFIX ""
    SUFFIX ".dylib"
)
