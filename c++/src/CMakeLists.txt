project(TenoneSDK)

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

add_library(${PROJECT_NAME} STATIC ${tenone_src_source})

set_target_properties(${PROJECT_NAME} PROPERTIES 
    XCODE_ATTRIBUTE_CLANG_ENABLE_OBJC_ARC "YES" #设置项目为arc
    XCODE_ATTRIBUTE_FRAMEWORK_SEARCH_PATHS ""
    XCODE_ATTRIBUTE_LIBRARY_SEARCH_PATHS "" 
    XCODE_ATTRIBUTE_LIBRARY_SEARCH_PATHS ""  
    FRAMEWORK TRUE 
    FRAMEWORK_VERSION A 
    MACOSX_FRAMEWORK_IDENTIFIER cn.bizconf.bizav 
    # MACOSX_FRAMEWORK_INFO_PLIST Info.plist # 
    "current version" in semantic format in Mach-O binary file VERSION 1.0.0  
    
    #SET(CMAKE_XCODE_ATTRIBUTE_DEBUG_INFORMATION_FORMAT "dwarf-with-dsym")

)

#find_library(UIKIT_FRAMEWORK UIKit)
#find_library(FOUNDATION_FRAMEWORK Foundation)
#target_link_libraries(${PROJECT_NAME} ${UIKIT_FRAMEWORK} ${FOUNDATION_FRAMEWORK}) 
