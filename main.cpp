#include <iostream>
#include <vector>
#include "Database.h"
#include "Character.h"

int main() {
    Database db;
    // Add characters
    db.addCharacter({"Charles Xavier", "Professor X", "X-Men, Horsemen of the Apocolypse", {"Telepathy", "Mind control", "Telekinesis"}, "Alpha"});
    db.addCharacter({"Logan, James Howlett", "Wolverine", "X-Men, Avengers, Hydra", {"Regenerative Healing Factor", "Enhanced senses", "Claws"}, "Beta"});
    db.addCharacter({"Ororo Munroe", "Storm", "X-Men, Horsemen of the Apocolypse, Avengers", {"Weather manipulation", "Flight"}, "Omega"});
    db.addCharacter({"Erik Lehnsherr, Max Eisenhardt, Magnus", "Magneto", "Brotherhood of Mutants, X-Men, Marauders, Horsemen of the Apocolypse", {"Magnetism manipulation", "Electromagnetic field control", "Enhanced Perception"}, "Omega"});
    db.addCharacter({"Scott Summers", "Cyclops", "X-Men", {"Optic blasts"}, "Alpha"});
    db.addCharacter({"Jean Grey", "Jean Grey", "X-Men",{"Telepathy", "Telekinesis", "Phoenix Force"}, "Omega"});
    db.addCharacter({"Hank McCoy", "Beast", "X-Men", {"Super strength", "Agility", "Genius intellect"}, "Beta"});
    db.addCharacter({"Warren Worthington III", "Angel", "X-Men,", {"Flight", "Healing (as Archangel)", "Feather projectiles"}, "Beta"});
    db.addCharacter({"Bobby Drake", "Iceman", "X-Men, Horsemen of the Apocolypse", {"Cryokinesis", "Ice form"}, "Omega"});
    db.addCharacter({"Kurt Wagner", "Nightcrawler", "X-Men", {"Teleportation", "Enhanced agility"}, "Beta"});
    db.addCharacter({"Piotr Rasputin", "Colossus", "X-Men, Horsemen of the Apocolypse", {"Metal transformation", "Super strength"}, "Beta"});
    db.addCharacter({"Sean Cassidy", "Banshee", "X-Men, Horsemen of the Apocolypse", {"Sonic scream", "Flight"}, "Beta"});
    db.addCharacter({"Shiro Yoshida", "Sunfire", "X-Men, Horsemen of the Apocolypse", {"Plasma blasts", "Flight"}, "Beta"});
    db.addCharacter({"John Proudstar", "Thunderbird", "X-Men", {"Super strength", "Enhanced senses"}, "Beta"});
    db.addCharacter({"Kitty Pryde", "Shadowcat", "X-Men", {"Phasing", "Intangibility"}, "Beta"});
    db.addCharacter({"Anna Marie LeBeau", "Rogue", "X-Men, Brotherhood of Mutants", {"Power absorption", "Flight", "Super strength"}, "Beta"});
    db.addCharacter({"Remy LeBeau", "Gambit", "X-Men, Horsemen of the Apocolypse", {"Kinetic energy charge", "Enhanced agility"}, "Beta"});
    db.addCharacter({"Jubilation Lee", "Jubilee", "X-Men", {"Plasmoid fireworks"}, "Beta"});
    db.addCharacter({"Betsy Braddock", "Psylocke", "X-Men, Horsemen of the Apocolypse", {"Telepathy", "Psychic weapons"}, "Beta"});
    db.addCharacter({"Forge", "Forge", "X-Men", {"Technopathy", "Inventor"}, "Omega"});
    db.addCharacter({"Lucas Bishop", "Bishop", "X-Men", {"Energy absorption", "Time travel"}, "Beta"});
    db.addCharacter({"Nathan Summers", "Cable", "X-Men, Horsemen of the Apocolypse", {"Telekinesis", "Telepathy", "Cyborg enhancements"}, "Beta"});
    db.addCharacter({"Sam Guthrie", "Cannonball", "X-Men", {"Blast propulsion", "Invulnerability in motion"}, "Beta"});
    db.addCharacter({"Tabitha Smith", "Boom-Boom", "X-Men", {"Explosive energy bombs"}, "Beta"});
    db.addCharacter({"James Proudstar", "Warpath", "X-Men", {"Super strength", "Enhanced senses"}, "Beta"});
    db.addCharacter({"Roberto da Costa", "Sunspot", "X-Men, Avengers", {"Solar energy absorption", "Flight", "Super strength"}, "Beta"});
    db.addCharacter({"Rahne Sinclair", "Wolfsbane", "X-Men", {"Werewolf transformation"}, "Beta"});
    db.addCharacter({"Illyana Rasputina", "Magik", "X-Men", {"Teleportation", "Sorcery", "Soulsword"}, "Beta"});
    db.addCharacter({"Danielle Moonstar", "Mirage", "X-Men", {"Illusion casting", "Telepathy"}, "Beta"});
    db.addCharacter({"Xi'an Coy Manh", "Karma", "X-Men", {"Mind possession"}, "Beta"});
    db.addCharacter({"Amara Aquilla", "Magma", "X-Men", {"Lava manipulation", "Earth control"}, "Beta"});
    db.addCharacter({"Douglas Ramsey", "Cypher", "X-Men", {"Language comprehension", "Technopathy"}, "Beta"});
    db.addCharacter({"Warlock", "Warlock", "X-Men", {"Technomorphing", "Shapeshifting"}, "Beta"});
    db.addCharacter({"Laura Kinney", "X-23", "X-Men", {"Regeneration", "Claws", "Enhanced senses"}, "Beta"});
    db.addCharacter({"Hisako Ichiki", "Armor", "X-Men", {"Psionic armor"}, "Beta"});
    db.addCharacter({"Megan Gwynn", "Pixie", "X-Men", {"Teleportation", "Pixie dust hallucinations"}, "Beta"});
    db.addCharacter({"Julian Keller", "Hellion", "X-Men", {"Telekinesis"}, "Beta"});
    db.addCharacter({"Noriko Ashida", "Surge", "X-Men", {"Electrical energy", "Super speed"}, "Beta"});
    db.addCharacter({"Sooraya Qadir", "Dust", "X-Men", {"Sand transformation"}, "Beta"});
    db.addCharacter({"Victor Borkowski", "Anole", "X-Men", {"Regeneration", "Wall-crawling", "Camouflage"}, "Beta"});
    db.addCharacter({"Raven Darkhölme", "Mystique", "Brotherhood of Mutants, X-Men", {"Shapeshifting"}, "Beta"});
    db.addCharacter({"Victor Creed", "Sabretooth", "Brotherhood of Mutans, Avengers", {"Regeneration", "Super strength", "Enhanced senses"}, "Beta"});
    db.addCharacter({"Cain Marko", "Juggernaut", "Brotherhood of Mutants, X-Men", {"Super strength", "Invulnerability"}, "Not a mutant"});
    db.addCharacter({"St. John Allerdyce", "Pyro", "Brotherhood of Mutants, X-Men", {"Fire manipulation (not creation)"}, "Beta"});
    db.addCharacter({"Dominikos Petrakis", "Avalanche", "Brotherhood of Mutants, X-Men", {"Seismic wave generation"}, "Beta"});
    db.addCharacter({"Frederick Dukes", "Blob", "X-Men, Brotherhood of Mutants", {"Immovable", "Super strength"}, "Beta"});
    db.addCharacter({"Mortimer Toynbee", "Toad", "Brotherhood of Mutants, X-Men", {"Enhanced agility", "Prehensile tongue"}, "Beta"});
    db.addCharacter({"Jason Wyngarde", "Mastermind", "X-Men", {"Illusion casting"}, "Beta"});
    db.addCharacter({"Emma Frost", "Emma Frost", "X-Men, Brotherhood of Mutants, Hellfire Club", {"Telepathy", "Diamond form"}, "Omega"});
    db.addCharacter({"Sebastian Shaw", "Sebastian Shaw", "Hellfire Club", {"Kinetic energy absorption"}, "Beta"});
    db.addCharacter({"Callisto", "Callisto", "X-Men", {"Enhanced senses", "Agility"}, "Beta"});
    db.addCharacter({"En Sabah Nur", "Apocalypse", "X-Men", {"Technopathy", "Super strength", "Molecular manipulation"}, "Omega"});
    db.addCharacter({"Lorna Dane", "Polaris", "X-Men", {"Magnetism manipulation"}, "Beta"});
    db.addCharacter({"Alex Summers", "Havok", "X-Men", {"Plasma blasts"}, "Beta"});
    db.addCharacter({"Jamie Madrox", "Multiple Man", "X-Men", {"Self-duplication"}, "Beta"});
    db.addCharacter({"David Haller", "Legion", "X-Men", {"Reality warping", "Multiple personalities with different powers"}, "Omega"});
    db.addCharacter({"Kevin MacTaggert", "Proteus", "X-Men", {"Reality warping"}, "Omega"});
    db.addCharacter({"Layla Miller", "Layla Miller", "X-Men", {"Knowledge of future events", "Resurrection"}, "Beta"});
    db.addCharacter({"Armando Muñoz", "Darwin", "X-Men", {"Reactive evolution"}, "Beta"});
    db.addCharacter({"Gabriel Summers", "Vulcan", "X-Men", {"Energy manipulation", "Flight", "Telepathy"}, "Omega"});
    db.addCharacter({"Hope Summers", "Hope Summers", "X-Men", {"Power mimicry", "Omega potential"}, "Omega"});
    db.addCharacter({"Josh Foley", "Elixir", "X-Men", {"Biological manipulation", "Healing", "Death touch"}, "Beta"});
    db.addCharacter({"Eva Bell", "Tempus", "X-Men", {"Time manipulation"}, "Beta"});
    db.addCharacter({"Wade Wilson", "Deadpool", "X-men, Avengers, Brotherhood of Mutants, Deadpool Inc.", {"Advanced Healing factor, Immortality, Superhuman strength, Superhuman ability, Superhuman speed"}, "Not a Mutant"});
    db.addCharacter({"Wanda Maximoff", "Scarlet Witch", "Avengers, Brotherhood of Mutants", {"Chaos Magic"}, "Pre 2015: Omega Post: Not a mutant"});
    db.addCharacter({"Pietro Maximoff", "Quicksilver", "Avengers, X-Men, Brotherhood of Mutants"{"Super Speed, Enhanced durability"}, "Pre 2015: Alpha Post: Not a mutant"});
    db.addCharacter({"Franklin Richards", "Avatar, Ego-Spawn, Powerhouse, etc."{"Reality manipulation, Telekinesis, Telepathy"}, "Pre 2020: Omega Post: Not a mutant"});
    db.addCharacter({"Cassandra Nova Xavier", "Cassandra Nova", "X-Men", {"Telepathy", "Possession", "Mummudrai powers", "Genetic manipulation"}, "Omega"});
    db.addCharacter({"Nathaniel Essex", "Mister Sinister", "Hellfire Club, Marauders", {"Telepathy", "Regeneration", "Shapeshifting", "Genetic manipulation", "Super strength"}, "Alpha"});
    db.addCharacter({"Philippa Sontag", "Arclight", "Marauders", {"Shockwave generation", "Super strength"}, "Beta"});
    db.addCharacter({"Lorna Dane", "Polaris", "X-Men, X-Factor", {"Magnetism manipulation", "Magnetic field control", "Flight"}, "Alpha"});

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
 