#pragma once
#include <string>

class Card 
{
public:
    Card(const std::string&, unsigned, unsigned);

    const std::string& getName() const;
    unsigned getDamage() const;
    unsigned getHealth() const;
    void takeDamage(int);

protected:
    std::string name;
    unsigned damage;
    unsigned health;
    bool isAlive;
};