#include <iostream>
#include <vector>
#include "Database.h"
#include "Character.h"

int main() {
    Database db;

    // Add characters
    db.addCharacter({"Charles Xavier", "Professor X", "X-Men", {"Telepathy", "Mind control", "Telekinesis"}});
    db.addCharacter({"Wolverine", "Logan", "X-Men", {"Regenerative Healing Factor", "Enhanced senses", "Claws"}});
    db.addCharacter({"Storm", "Ororo Munroe", "X-Men", {"Weather manipulation", "Flight"}});

    int choice;
    do {
        std::cout << "1. List all characters\n";
        std::cout << "2. Search by alias\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            db.listCharacters();
            break;
        case 2:
            {
                std::string alias;
                std::cout << "Enter alias: ";
                std::cin >> alias;
                db.searchByAlias(alias);
            }
            break;
        case 3:
            std::cout << "Exiting program...\n";
            break;
        default:
            std::cout << "Invalid option. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
