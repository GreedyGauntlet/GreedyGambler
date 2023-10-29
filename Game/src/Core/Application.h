#pragma once
#include <vector>
#include "../Panels/Panel.h"

namespace Game {
    class Application {
    public:
        Application();
        bool Initialize();
        void Run();
        void Shutdown();
    private:
        std::vector<Panel*> m_Panels;
    };
}