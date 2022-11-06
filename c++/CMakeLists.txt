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

macro(target_exclude_from_all_if_exist targets)
  foreach(target ${targets})
    if(TARGET ${target})
      set_target_properties(${target} PROPERTIES EXCLUDE_FROM_ALL TRUE EXCLUDE_FROM_DEFAULT_BUILD TRUE)
    endif()
  endforeach()
endmacro()

macro(apple_framework_generate 
      project_name 
      bundle_id)
  if(IOS OR OSX)
    set_target_properties(${project_name} PROPERTIES 
      XCODE_ATTRIBUTE_CLANG_ENABLE_OBJC_ARC "YES"
      XCODE_ATTRIBUTE_FRAMEWORK_SEARCH_PATHS ""
      XCODE_ATTRIBUTE_LIBRARY_SEARCH_PATHS "" 
      XCODE_ATTRIBUTE_LIBRARY_SEARCH_PATHS ""
      XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER ${bundle_id}
      FRAMEWORK TRUE 
      FRAMEWORK_VERSION A 
      MACOSX_FRAMEWORK_IDENTIFIER com.gzch.tenone.sdk 
      # MACOSX_FRAMEWORK_INFO_PLIST Info.plist # 
      "current version" in semantic format in Mach-O binary file VERSION 1.0.0  
    
      #SET(CMAKE_XCODE_ATTRIBUTE_DEBUG_INFORMATION_FORMAT "dwarf-with-dsym")
    )
  endif()
endmacro()

SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/output/${PLATFORM})

add_subdirectory(src)

