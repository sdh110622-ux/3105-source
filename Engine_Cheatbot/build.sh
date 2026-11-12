
#!/bin/bash
set -e

# CMake ko Xcode generator ke saath chalao (Apple iOS build ke liye)
cmake -B build -G Xcode \
      -DCMAKE_SYSTEM_NAME=iOS \
      -DCMAKE_OSX_ARCHITECTURES=arm64 \
      -DCMAKE_OSX_DEPLOYMENT_TARGET=14.0 \
      -DCMAKE_XCODE_ATTRIBUTE_CODE_SIGNING_REQUIRED=NO \
      -DCMAKE_XCODE_ATTRIBUTE_CODE_SIGNING_ALLOWED=NO

# Project build karo
cmake --build build --config Release

echo "Build Complete! Output: build/Release-iphoneos/cheatbotowner.dylib"
