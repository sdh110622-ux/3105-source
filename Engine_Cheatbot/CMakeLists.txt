cmake_minimum_required(VERSION 3.20)
project(CheatbotEngine CXX OBJCXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Apple iOS Frameworks jo tumhare purane project mein the
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

# Saari source files ko automatically dhoondhne ke liye
file(GLOB_RECURSE SDK_SRC "CheatbotEngine/SDK/*.cpp")
file(GLOB_RECURSE IMGUI_SRC "CheatbotEngine/imgui/*.cpp" "CheatbotEngine/imgui/Metal/*.mm")
file(GLOB_RECURSE CORE_SRC "CheatbotEngine/*.cpp" "CheatbotEngine/*.mm")

set(ALL_SOURCES ${SDK_SRC} ${IMGUI_SRC} ${CORE_SRC})

add_library(cheatbotowner SHARED ${ALL_SOURCES})

# Header files ka path taaki #include kaam kare
target_include_directories(cheatbotowner PRIVATE
    CheatbotEngine
    CheatbotEngine/SDK
    CheatbotEngine/imgui
    CheatbotEngine/imgui/Metal
)

# Frameworks link karo
target_link_options(cheatbotowner PRIVATE ${IOS_FRAMEWORKS})

# JRMemory.framework ka path aur link (Same folder mein hai)
target_link_directories(cheatbotowner PRIVATE 
    ${CMAKE_SOURCE_DIR}
)
target_link_libraries(cheatbotowner PRIVATE 
    "-framework JRMemory"
)

# Output ek .dylib file ke roop mein
set_target_properties(cheatbotowner PROPERTIES 
    PREFIX ""
    SUFFIX ".dylib"
)
