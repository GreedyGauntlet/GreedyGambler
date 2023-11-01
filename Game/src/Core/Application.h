#pragma once
#include <vector>
#include "Game.h"

namespace Greed {
    class Application {
    public:
        Application();
        bool Initialize();
        void Run();
        void Shutdown();
    private:
        Game m_Game;
    };
}
