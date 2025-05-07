#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>

struct Character {
    std::string name;
    std::string alias;
    std::string affiliations;
    std::vector<std::string> powers;
    std::string mutantLevel;

    // Constructor
    Character(std::string n, std::string a, std::string aff, std::vector<std::string> p, std::string level);
    
    // Member functions
    void display() const;
    std::string getAlias() const;
};

#endif
    
