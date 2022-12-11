project(TenoneSDK)

set(ALL_FEATURE_FRAMEWORK)

set(COMPILE_AD_FRAMEWORK 1)
set(AD_FRAMEWORK "tenone_ad_sdk")

file(GLOB
     tenone_src_source
     *.cc
     *.h)

if(OSX OR IOS)
    file(GLOB
        tenone_src_source_mm
        *.mm)
    list(APPEND tenone_src_source ${tenone_src_source_mm})
endif()

if(${COMPILE_AD_FRAMEWORK})
    list(APPEND ${ALL_FEATURE_FRAMEWORK} ${AD_FRAMEWORK})
endif()

include_directories(advert)

add_subdirectory(advert)

add_library(${PROJECT_NAME} STATIC ${tenone_src_source})

if(${CMAKE_VERSION} VERSION_GREATER "3.16.0")
    target_precompile_headers(${PROJECT_NAME} PRIVATE "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/pch.h>")
endif()

apple_framework_generate(${PROJECT_NAME} "cn.gzch.tenone.sdk")
set_target_folder_if_exist(tenone_ad_sdk TenoneSDK/ad_sdk)

#find_library(UIKIT_FRAMEWORK UIKit)
#find_library(FOUNDATION_FRAMEWORK Foundation)
#target_link_libraries(${PROJECT_NAME} ${UIKIT_FRAMEWORK} ${FOUNDATION_FRAMEWORK}) 
