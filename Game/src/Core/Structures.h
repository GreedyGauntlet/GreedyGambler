#pragma once
#include <vector>
#include <string>

namespace Greed {
    enum class BankMembership {
        PAPER = 0,
        PLASTIC = 1,
        WOOD = 2,
        BRONZE = 3,
        SILVER = 4,
        GOLD = 5,
        PLATINUM = 6,
        DIAMOND = 7,
        BLACK = 8,
    };

    struct BankInfo {
        BankMembership Membership = BankMembership::PAPER;
        double Balance = 100.0;
        double Debt = 0.0;
    };

    struct PlayerInfo {
        BankInfo Bank;
    };
}
