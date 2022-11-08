project(HyBidSource)

file(GLOB
     tenone_src_hy_bid_source
     *.m
     *.h)

include_directories(./third_party/KSAdSDK.xcframework/ios-arm64_armv7/KSAdSDK.framework/Headers)
add_library(${PROJECT_NAME} STATIC ${tenone_src_hy_bid_source})
if(${CMAKE_VERSION} VERSION_GREATER "3.16.0")
    target_precompile_headers(${PROJECT_NAME} PRIVATE "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/pch.h>")
endif()

apple_framework_generate(${PROJECT_NAME} "com.gzch.tenone.ad.sdk.hybid")
