#pragma once
#include <vector>
#include "Structures.h"
#include "../Panels/Panel.h"

namespace Greed {
    class Game {
    public:
        static PlayerInfo* Data();
    public:
        Game();
        bool Initialize();
        void Run();
        void Shutdown();
    private:
        void InitializePanels();
        void UpdatePanels();
    private:
        std::vector<Panel*> m_Panels;
    };
}