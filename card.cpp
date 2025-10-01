#include <algorithm>
#include <iostream>

#include "card.h"

Card::Card(const char* name, unsigned dmg, unsigned hp)
: name{name}, damage{dmg}, health{hp}
{
}

const char* Card::getName() const
{
    return name;
}

unsigned Card::getDamage() const
{
    return damage;
}

unsigned Card::getHealth() const
{
    return health;
}

void Card::takeDamage(int dmg)
{
    if (dmg > health)
    {
        health = 0;
        isAlive = false;
        return;
    }
    health -= dmg; 
}






