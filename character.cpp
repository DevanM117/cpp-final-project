#include "character.h"
#include <iostream>

Character::Character(std::string n, std::string a, std::string aff, std::vector<std::string> p, std::string level)
    : name(n), alias(a), affiliation(aff), powers(p), mutantLevel(level) {}

void Character::display() const {
    std::cout << "Alias: " << alias << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Affiliation: " << affiliation << "\n";
    std::cout << "Powers: ";
    for (const auto& power : powers) std::cout << power << ", ";
    std::cout << "\nMutant Level: " << mutantLevel << "\n\n";
}

std::string Character::getAlias() const {
    return alias;
}