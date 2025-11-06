#pragma once
#include <string>

class Card 
{
public:
    Card(unsigned, const std::string&, unsigned, unsigned);

    const std::string& getName() const;
    unsigned getDamage() const;
    unsigned getHealth() const;
    unsigned getId() const;
    void takeDamage(int);

protected:
    std::string name;
    unsigned damage;
    unsigned health;
    unsigned id;
    bool isAlive;
};