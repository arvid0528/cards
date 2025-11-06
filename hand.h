#pragma once
#include "card.h"
#include <string>
#include <vector>

class Hand 
{
public:
    template<typename... Cards>
    Hand(Cards...);
    size_t getHandSize();
    std::string getHandAsString();
private:
    std::vector<Card> cards;
};

#include "hand.tcc"