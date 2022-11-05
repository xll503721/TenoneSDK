cmake_minimum_required(VERSION 3.24)

project(TenOneCommon)

set(CMAKE_CXX_STANDARD 17)

if(IOS)
    set(PLATFORM iOS)
elseif(OSX)
    set(PLATFORM Mac)
elseif(ANDROID)
    set(PLATFORM Android)
endif()

SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/output/${PLATFORM})

add_subdirectory(src)

