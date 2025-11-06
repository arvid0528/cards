#include "hand.h"
#include <string>

template<typename... Cards>
Hand::Hand(Cards... cards)
    : cards{cards...}
{}

std::string Hand::getHandAsString()
{
    std::string retStr{};
    for(int i{0}; i < cards.size(); i++)
    {   
        if (i > 0)
        {
            retStr += " - ";
        }
        retStr = retStr + cards[i].getName();
    }
    return retStr;
}