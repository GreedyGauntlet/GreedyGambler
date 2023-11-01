#include "BankPanel.h"
#include "../Core/Game.h"
#include <imgui.h>
#include <cmath>

namespace Greed {
    void BankPanel::Update() {
        ImGui::Begin("Bank");

        ImGui::Text(("Balance: $" + std::to_string(Game::Data()->Bank.Balance)).c_str());
        ImGui::Text(("Debt: $" + std::to_string(Game::Data()->Bank.Debt)).c_str());
        ImGui::Text(("You are a " + MembershipString(Game::Data()->Bank) + " member").c_str());
        ImGui::Text(("The bank will allow you to loan up to $" + std::to_string(MaximumLoan(Game::Data()->Bank))).c_str());
        ImGui::Text(("With your membership you will accrue %" + std::to_string(InterestRate(Game::Data()->Bank)) + " interest").c_str());
        
        ImGui::Button("TAKE LOAN");
        ImGui::Button("PAY LOAN");
        ImGui::Button("UPGRADE");

        // sub panels: Loan panel, transaction history, 
        
        ImGui::End();
    }

    std::string BankPanel::MembershipString(BankInfo info) {
        #define STR(name) case BankMembership::name: return #name;
        switch (info.Membership) {
            STR(PAPER)
            STR(PLASTIC)
            STR(WOOD)
            STR(BRONZE)
            STR(SILVER)
            STR(GOLD)
            STR(PLATINUM)
            STR(DIAMOND)
            STR(BLACK)
            default:
                return "";
        }
        #undef STR
    }

    double BankPanel::MaximumLoan(BankInfo info) {
        if (info.Membership == BankMembership::BLACK) return -1.0;
        return pow(10.0, (double)(int)info.Membership);
    }

    double BankPanel::InterestRate(BankInfo info) {
        if (info.Membership == BankMembership::BLACK) return 20.0;
        return 10.0 - (double)(int)info.Membership;
    }
}