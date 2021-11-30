#pragma once

#include "Item.h"

struct AttackItem : public Item
{
    AttackItem() : Item("attackItem", 10) { }

    void use(Character*) override;
};
