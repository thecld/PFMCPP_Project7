#include <iostream>
#include "Dwarf.h"

Dwarf::Dwarf(std::string name_, int hp_, int armor_ ) : Character(hp_, armor_, 4), name(name_)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(5);
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
