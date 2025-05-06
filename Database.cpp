// Database.cpp
#include "Database.h"
#include <iostream>

void Database::addCharacter(const Character& character) {
    characters.push_back(character);
}

void Database::listCharacters() const {
    for (const auto& character : characters) {
        std::cout << "Alias: " << character.alias << "\n"
                  << "Name: " << character.name << "\n"
                  << "Affiliations: " << character.affiliations << "\n"
                  << "Powers: ";
        for (const auto& power : character.powers) {
            std::cout << power << ", ";
        }
        std::cout << "\n\n";
    }
}

void Database::searchByAlias(const std::string& alias) const {
    for (const auto& character : characters) {
        if (character.alias == alias) {
            std::cout << "Found Character: " << "\n"
                      << "Alias: " << character.alias << "\n"
                      << "Name: " << character.name << "\n"
                      << "Affiliations: " << character.affiliations << "\n"
                      << "Powers: ";
            for (const auto& power : character.powers) {
                std::cout << power << ", ";
            }
            std::cout << "\n\n";
            return;
        }
    }
    std::cout << "Character with alias " << alias << " not found.\n";
}