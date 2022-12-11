project(tenone_ad_sdk)

file(GLOB
     tenone_src_ad_source
     *.cc
     *.h)

if(OSX OR IOS)
    file(GLOB
        tenone_src_ad_source_mm
        *.mm
        *.m)
    list(APPEND tenone_src_ad_source ${tenone_src_ad_source_mm})
endif()

add_library(${PROJECT_NAME} STATIC ${tenone_src_ad_source})
if(${CMAKE_VERSION} VERSION_GREATER "3.16.0")
    target_precompile_headers(${PROJECT_NAME} PRIVATE "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/pch.h>")
endif()

apple_framework_generate(${PROJECT_NAME} "cn.gzch.tenone.ad.sdk")
add_subdirectory(advert_source/hybid)
add_subdirectory(advert_source/sigmob)

include_directories(advert_source/sigmob)
include_directories(../)

set_target_folder_if_exist(sigmob_source TenoneSDK/ad_sdk/tenone_ad_sdk_source)
set_target_folder_if_exist(hybid_source TenoneSDK/ad_sdk/tenone_ad_sdk_source)