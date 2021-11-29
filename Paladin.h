#pragma once

struct Paladin : Character
{
    Paladin( std::string name_, int hp, int armor_, int attackDamage_ = 10 ) :
        Character( hp, armor_, attackDamage_ ),
        name(name_)
    { }

    std::string getStats() override;
    const std::string& getName() override;

private:
    const std::string name;
};
