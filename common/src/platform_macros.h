#pragma once

#if defined(TARGET_OS_OSX) && TARGET_OS_OSX
    #define OS_MACOSX 1
#endif
#if defined(TARGET_OS_IPHONE) && TARGET_OS_IPHONE
    #define OS_IOS 1
#endif
