project(tenone_ad_sdk)

file(GLOB
     tenone_src_ad_source
     *.cc
     *.h)

if(OSX OR IOS)
    file(GLOB
        tenone_src_ad_source_mm
        *.mm)
    list(APPEND tenone_src_ad_source ${tenone_src_ad_source_mm})
endif()

add_library(${PROJECT_NAME} STATIC ${tenone_src_ad_source})

target_precompile_headers(${PROJECT_NAME} PRIVATE pch.h)

set_target_properties(${PROJECT_NAME} PROPERTIES 
    XCODE_ATTRIBUTE_CLANG_ENABLE_OBJC_ARC "YES" #设置项目为arc
    FRAMEWORK TRUE 
    FRAMEWORK_VERSION A 
    MACOSX_FRAMEWORK_IDENTIFIER cn.bizconf.bizav 
    # MACOSX_FRAMEWORK_INFO_PLIST Info.plist # 
    "current version" in semantic format in Mach-O binary file VERSION 1.0.0  
    
    #SET(CMAKE_XCODE_ATTRIBUTE_DEBUG_INFORMATION_FORMAT "dwarf-with-dsym")

)
