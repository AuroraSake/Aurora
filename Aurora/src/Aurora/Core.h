#pragma once


#ifdef AU_PLATFORM_WINDOWS
    #ifdef AU_BUILD_DLL
        #define AURORA_API __declspec(dllexport)
    #else
        #define AURORA_API __declspec(dllimport)
    #endif
#else
    #error Aurora only works on Windows!
#endif