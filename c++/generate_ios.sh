mkdir cmake_project
cd cmake_project
cmake .. -G Xcode -DCMAKE_TOOLCHAIN_FILE=../ios/cmake/ios.toolchain.cmake -DPLATFORM=OS64COMBINED