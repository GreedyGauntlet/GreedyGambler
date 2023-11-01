#include "Game.h"

#include "../Panels/BankPanel.h"

namespace Greed {
    
    static PlayerInfo s_PlayerInfo;

    PlayerInfo* Game::Data() {
        return &s_PlayerInfo;
    }

    Game::Game() {
        m_Panels = {
            new BankPanel(),
        };
    }

    bool Game::Initialize() {
        InitializePanels();
        return true;
    }

    void Game::Run() {
        UpdatePanels();
    }

    void Game::Shutdown() {

    }

    void Game::InitializePanels() {
        // initialize panels
        for (auto panel : m_Panels) {
            panel->Initialize();
        }
    }

    void Game::UpdatePanels() {
        // update panels
        for (auto panel : m_Panels) {
            panel->Update();
        }
    }

}