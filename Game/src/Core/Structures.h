#pragma once
#include <vector>
#include <string>

namespace Game {
    struct ClientNode {
        std::vector<ClientNode*> Subclients;
        std::string Name;
        ClientNode(std::string name) { Name = name; }
    };
}
