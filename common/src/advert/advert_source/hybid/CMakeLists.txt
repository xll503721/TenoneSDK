project(hybid_source)

file(GLOB
     tenone_src_hy_bid_source
     *.m
     *.h)

add_library(${PROJECT_NAME} STATIC ${tenone_src_hy_bid_source})
if(${CMAKE_VERSION} VERSION_GREATER "3.16.0")
    target_precompile_headers(${PROJECT_NAME} PRIVATE "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/pch.h>")
endif()

apple_framework_generate(${PROJECT_NAME} "cn.gzch.tenone.ad.sdk.hybid")
