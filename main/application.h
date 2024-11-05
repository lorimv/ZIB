#pragma once

class Application {
    public:
        Application();
        ~Application();

        void run();

    private:
        bool initialize();
        void mainLoop();
        void shutdown();
};
