#pragma once
#include <vector>
#include <memory>
#include "Item.h"

struct AttackItem : public Item
{
    AttackItem() : Item("attackItem", 10) { }

    void use(Character*) override;

    void reset() { }
};
