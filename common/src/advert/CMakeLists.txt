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

apple_framework_generate(${PROJECT_NAME} "com.gzch.tenone.ad.sdk")
add_subdirectory(advert_source/hy_bid)