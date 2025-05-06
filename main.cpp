#include <iostream>
#include <vector>
#include "Database.h"
#include "Character.h"

int main() {
    Database db;

    // Add characters
    db.addCharacter({"Charles Xavier", "Professor X", "X-Men", {"Telepathy", "Mind control", "Telekinesis"}, "Alpha"});
    db.addCharacter({"Wolverine", "Logan", "X-Men", {"Regenerative Healing Factor", "Enhanced senses", "Claws"}, "Beta"});
    db.addCharacter({"Storm", "Ororo Munroe", "X-Men", {"Weather manipulation", "Flight"}, "Omega"});
    db.addCharacter({"Magneto", "Erik Lehnsherr", "Brotherhood of Mutants", {"Magnetism manipulation", "Electromagnetic field control", "Enhanced Perception"}, "Omega"});
    db.addCharacter("Scott Summers", "Cyclops", "X-Men", std::vector<std::string>{"Optic blasts"}, "Alpha");
    db.addCharacter("Jean Grey", "Jean Grey", "X-Men", std::vector<std::string>{"Telepathy", "Telekinesis", "Phoenix Force"}, "Omega");
    db.addCharacter("Hank McCoy", "Beast", "X-Men", std::vector<std::string>{"Super strength", "Agility", "Genius intellect"}, "Beta");
    db.addCharacter("Warren Worthington III", "Angel", "X-Men", std::vector<std::string>{"Flight", "Healing (as Archangel)", "Feather projectiles"}, "Beta");
    db.addCharacter("Bobby Drake", "Iceman", "X-Men", std::vector<std::string>{"Cryokinesis", "Ice form"}, "Omega");
    db.addCharacter("Kurt Wagner", "Nightcrawler", "X-Men", std::vector<std::string>{"Teleportation", "Enhanced agility"}, "Beta");
    db.addCharacter("Piotr Rasputin", "Colossus", "X-Men", std::vector<std::string>{"Metal transformation", "Super strength"}, "Beta");
    db.addCharacter("Sean Cassidy", "Banshee", "X-Men", std::vector<std::string>{"Sonic scream", "Flight"}, "Beta");
    db.addCharacter("Shiro Yoshida", "Sunfire", "X-Men", std::vector<std::string>{"Plasma blasts", "Flight"}, "Beta");
    db.addCharacter("John Proudstar", "Thunderbird", "X-Men", std::vector<std::string>{"Super strength", "Enhanced senses"}, "Beta");
    db.addCharacter("Kitty Pryde", "Shadowcat", "X-Men", std::vector<std::string>{"Phasing", "Intangibility"}, "Beta");
    db.addCharacter("Anna Marie LeBeau", "Rogue", "X-Men", std::vector<std::string>{"Power absorption", "Flight", "Super strength"}, "Beta");
    db.addCharacter("Remy LeBeau", "Gambit", "X-Men", std::vector<std::string>{"Kinetic energy charge", "Enhanced agility"}, "Beta");
    db.addCharacter("Jubilation Lee", "Jubilee", "X-Men", std::vector<std::string>{"Plasmoid fireworks"}, "Beta");
    db.addCharacter("Betsy Braddock", "Psylocke", "X-Men", std::vector<std::string>{"Telepathy", "Psychic weapons"}, "Beta");
    db.addCharacter("Forge", "Forge", "X-Men", std::vector<std::string>{"Technopathy", "Inventor"}, "Omega");
    db.addCharacter("Lucas Bishop", "Bishop", "X-Men", std::vector<std::string>{"Energy absorption", "Time travel"}, "Beta");
    db.addCharacter("Nathan Summers", "Cable", "X-Men", std::vector<std::string>{"Telekinesis", "Telepathy", "Cyborg enhancements"}, "Beta");
    db.addCharacter("Sam Guthrie", "Cannonball", "X-Men", std::vector<std::string>{"Blast propulsion", "Invulnerability in motion"}, "Beta");
    db.addCharacter("Tabitha Smith", "Boom-Boom", "X-Men", std::vector<std::string>{"Explosive energy bombs"}, "Beta");
    db.addCharacter("James Proudstar", "Warpath", "X-Men", std::vector<std::string>{"Super strength", "Enhanced senses"}, "Beta");
    db.addCharacter("Roberto da Costa", "Sunspot", "X-Men", std::vector<std::string>{"Solar energy absorption", "Flight", "Super strength"}, "Beta");
    db.addCharacter("Rahne Sinclair", "Wolfsbane", "X-Men", std::vector<std::string>{"Werewolf transformation"}, "Beta");
    db.addCharacter("Illyana Rasputina", "Magik", "X-Men", std::vector<std::string>{"Teleportation", "Sorcery", "Soulsword"}, "Beta");
    db.addCharacter("Danielle Moonstar", "Mirage", "X-Men", std::vector<std::string>{"Illusion casting", "Telepathy"}, "Beta");
    db.addCharacter("Xi'an Coy Manh", "Karma", "X-Men", std::vector<std::string>{"Mind possession"}, "Beta");
    db.addCharacter("Amara Aquilla", "Magma", "X-Men", std::vector<std::string>{"Lava manipulation", "Earth control"}, "Beta");
    db.addCharacter("Douglas Ramsey", "Cypher", "X-Men", std::vector<std::string>{"Language comprehension", "Technopathy"}, "Beta");
    db.addCharacter("Warlock", "Warlock", "X-Men", std::vector<std::string>{"Technomorphing", "Shapeshifting"}, "Beta");
    db.addCharacter("Laura Kinney", "X-23", "X-Men", std::vector<std::string>{"Regeneration", "Claws", "Enhanced senses"}, "Beta");
    db.addCharacter("Hisako Ichiki", "Armor", "X-Men", std::vector<std::string>{"Psionic armor"}, "Beta");
    db.addCharacter("Megan Gwynn", "Pixie", "X-Men", std::vector<std::string>{"Teleportation", "Pixie dust hallucinations"}, "Beta");
    db.addCharacter("Julian Keller", "Hellion", "X-Men", std::vector<std::string>{"Telekinesis"}, "Beta");
    db.addCharacter("Noriko Ashida", "Surge", "X-Men", std::vector<std::string>{"Electrical energy", "Super speed"}, "Beta");
    db.addCharacter("Sooraya Qadir", "Dust", "X-Men", std::vector<std::string>{"Sand transformation"}, "Beta");
    db.addCharacter("Victor Borkowski", "Anole", "X-Men", std::vector<std::string>{"Regeneration", "Wall-crawling", "Camouflage"}, "Beta");
    db.addCharacter("Raven Darkhölme", "Mystique", "X-Men", std::vector<std::string>{"Shapeshifting"}, "Beta");
    db.addCharacter("Victor Creed", "Sabretooth", "X-Men", std::vector<std::string>{"Regeneration", "Super strength", "Enhanced senses"}, "Beta");
    db.addCharacter("Cain Marko", "Juggernaut", "X-Men", std::vector<std::string>{"Super strength", "Invulnerability"}, "Not a mutant");
    db.addCharacter("St. John Allerdyce", "Pyro", "X-Men", std::vector<std::string>{"Fire manipulation (not creation)"}, "Beta");
    db.addCharacter("Dominikos Petrakis", "Avalanche", "X-Men", std::vector<std::string>{"Seismic wave generation"}, "Beta");
    db.addCharacter("Frederick Dukes", "Blob", "X-Men", std::vector<std::string>{"Immovable", "Super strength"}, "Beta");
    db.addCharacter("Mortimer Toynbee", "Toad", "X-Men", std::vector<std::string>{"Enhanced agility", "Prehensile tongue"}, "Beta");
    db.addCharacter("Jason Wyngarde", "Mastermind", "X-Men", std::vector<std::string>{"Illusion casting"}, "Beta");
    db.addCharacter("Emma Frost", "Emma Frost", "X-Men", std::vector<std::string>{"Telepathy", "Diamond form"}, "Omega");
    db.addCharacter("Sebastian Shaw", "Sebastian Shaw", "X-Men", std::vector<std::string>{"Kinetic energy absorption"}, "Beta");
    db.addCharacter("Callisto", "Callisto", "X-Men", std::vector<std::string>{"Enhanced senses", "Agility"}, "Beta");
    db.addCharacter("En Sabah Nur", "Apocalypse", "X-Men", std::vector<std::string>{"Technopathy", "Super strength", "Molecular manipulation"}, "Omega");
    db.addCharacter("Lorna Dane", "Polaris", "X-Men", std::vector<std::string>{"Magnetism manipulation"}, "Beta");
    db.addCharacter("Alex Summers", "Havok", "X-Men", std::vector<std::string>{"Plasma blasts"}, "Beta");
    db.addCharacter("Jamie Madrox", "Multiple Man", "X-Men", std::vector<std::string>{"Self-duplication"}, "Beta");
    db.addCharacter("David Haller", "Legion", "X-Men", std::vector<std::string>{"Reality warping", "Multiple personalities with different powers"}, "Omega");
    db.addCharacter("Kevin MacTaggert", "Proteus", "X-Men", std::vector<std::string>{"Reality warping"}, "Omega");
    db.addCharacter("Layla Miller", "Layla Miller", "X-Men", std::vector<std::string>{"Knowledge of future events", "Resurrection"}, "Beta");
    db.addCharacter("Armando Muñoz", "Darwin", "X-Men", std::vector<std::string>{"Reactive evolution"}, "Beta");
    db.addCharacter("Gabriel Summers", "Vulcan", "X-Men", std::vector<std::string>{"Energy manipulation", "Flight", "Telepathy"}, "Omega");
    db.addCharacter("Hope Summers", "Hope Summers", "X-Men", std::vector<std::string>{"Power mimicry", "Omega potential"}, "Omega");
    db.addCharacter("Josh Foley", "Elixir", "X-Men", std::vector<std::string>{"Biological manipulation", "Healing", "Death touch"}, "Beta");
    db.addCharacter("Eva Bell", "Tempus", "X-Men", std::vector<std::string>{"Time manipulation"}, "Beta");

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
