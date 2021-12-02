#pragma once

#include "Item.h"

struct AttackItem : Item
{
    AttackItem() : Item("attackItem", 10) { }

    void use(Character*) override;
};
