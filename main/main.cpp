// this is the Linux entry point in particular,
// different main cpp files will be used for different platforms
#include "application.h"

int main(int argc, char* argv[]) {
    Application application;
    application.run();
    
    return 0;
}
