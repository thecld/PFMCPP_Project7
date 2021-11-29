#pragma once

struct DragonSlayer : Character
{
    DragonSlayer( std::string name_, int hp, int armor_, int attackDamage_ = 4 ) :
        Character( hp, armor_, attackDamage_ ),
        name(name_)
    { }

    void attack(Character& other) override;
    std::string getStats() override;
    const std::string& getName() override;
private:
    const std::string name;
};
