#pragma once
#include "../Core/Structures.h"
#include "Panel.h"
#include <string>

namespace Greed {
    class BankPanel : public Panel {
    public:
        BankPanel() = default;
        virtual void Initialize() override {};
        virtual void Update() override;
    public:
        static std::string MembershipString(BankInfo info);
        static double MaximumLoan(BankInfo info);
        static double InterestRate(BankInfo info);
    };
}
