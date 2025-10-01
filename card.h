#ifndef CARD_H
#define CARD_H

class Card 
{
public:
    Card(const char*, unsigned, unsigned);

    const char* getName() const;
    unsigned getDamage() const;
    unsigned getHealth() const;
    void takeDamage(int);

private:
    const char* name;
    unsigned damage;
    unsigned health;
    bool isAlive;
};

#endif
