//Database.h
// Database.h
#ifndef DATABASE_H
#define DATABASE_H

#include "Character.h"
#include <vector>

class Database {
private:
    std::vector<Character> characters;

public:
    void addCharacter(const Character& character);
    void listCharacters() const;
    void searchByAlias(const std::string& alias) const;
};

#endif // DATABASE_H


