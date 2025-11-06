#include <algorithm>
#include <iostream>
#include <string>
#include "card.h"

Card::Card(unsigned id, const std::string& name, unsigned dmg, unsigned hp)
: id{id}, name{name}, damage{dmg}, health{hp}
{

}

const std::string& Card::getName() const
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

unsigned Card::getId() const
{
    return id;
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






