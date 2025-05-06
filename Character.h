#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>

struct Character {
    std::string name;
    std::string alias;
    std::string affiliations;
    std::vector<std::string> powers;
    std::string mutantLevel; // e.g., "Omega", "Alpha", etc.
};

#endif // CHARACTER_H
