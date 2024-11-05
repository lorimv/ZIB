#pragma once

namespace Zib {

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

    // defined in the game made by the user
    Application* CreateApplication();

}
