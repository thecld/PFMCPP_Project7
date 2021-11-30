#pragma once

#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer(const std::string name_, int hp_, int armor_ );

    void attack(Character& other) override;
    std::string getStats() override;
    const std::string& getName() override;
private:
    const std::string name;
    AttackItem* attackItem;
};
