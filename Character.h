#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>

class Character {
    private:
        std::string name;
        std::string alias;
        std::string affiliation;
        std::vector<std::string> powers;
        std::string mutantLevel;
    
    public:
        Character(std::string n, std::string a, std::string aff, std::vector<std::string> p, std::string level);
        void display() const;
        std::string getAlias() const;
    };
    
    #endif
    
