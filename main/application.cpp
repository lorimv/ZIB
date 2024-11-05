#include <iostream>

#include "main/application.h"

Application::Application(){
    // constructor
}

Application::~Application() {
    // Destructor
}

bool Application::initialize() {
    // Initialize your engine components
    std::cout << "Engine initialized successfully!" << std::endl;
    return true;
}

void Application::mainLoop() {
    // Your game loop will go here
    std::cout << "Engine running..." << std::endl;
}

void Application::shutdown() {
    // Clean up resources
    std::cout << "Engine shutting down..." << std::endl;
}

void Application::run() {
    if (!initialize()) {
        return;
    }

    mainLoop();
    shutdown();
}
