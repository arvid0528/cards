#pragma once
#include "card.h"
#include <string>
#include <vector>

class Hand 
{
public:
    template<typename... Cards>
    Hand(Cards&...);
    size_t getHandSize();
    std::string getHandAsString();
    std::vector<Card>& getHandAsVector();
private:
    std::vector<unsigned> cardIds;
};

#include "hand.tcc"