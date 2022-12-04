project(sigmob_source)

file(GLOB
     tenone_src_sigmob_source
     *.m
     *.h)

add_library(${PROJECT_NAME} STATIC ${tenone_src_sigmob_source})
if(${CMAKE_VERSION} VERSION_GREATER "3.16.0")
    target_precompile_headers(${PROJECT_NAME} PRIVATE "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/pch.h>")
endif()

include_directories(WindFoundation.framework/Headers)
include_directories(WindSDK.framework/Headers)
include_directories(advert/advert_source/sigmob)

apple_framework_generate(${PROJECT_NAME} "cn.gzch.tenone.ad.sdk.sigmob")
