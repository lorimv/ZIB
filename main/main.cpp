// this is the Linux entry point in particular,
// different main cpp files will be used for different platforms
// or i'll use preprocessor stuff, not sure yet
//
// TODO figure out exactly how outside apps will use this engine
#include <iostream>
#include "application.h"

#if defined(_WIN32)
    #define PLATFORM_WINDOWS
    #include <windows.h>
#elif defined(__APPLE__)
    #define PLATFORM_MAC
#elif defined(__linux__)
    #define PLATFORM_LINUX
#else
    #error Unsupported platform
#endif
    

#ifdef PLATFORM_WINDOWS
    std::cout << "windows not supported" << std::endl;
    int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                       LPSTR lpCmdLine, int nCmdShow) // tbh idk what this means yet
#else
    int main(int argc, char* argv[])
#endif
{
    #ifdef PLATFORM_LINUX
        std::cout << "starting linux" << std::endl;
        // Linux code
    #endif

    Application application;
    application.run();
    
    return 0;
}
