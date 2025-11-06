#pragma once
#include "card.h"
#include <map>

class CardManager {
public:
    template<typename CardType>
    CardType createCard();
    Card& getCardById(unsigned);
private:
    unsigned currentCardId{0};
    std::map<unsigned, Card> allCards{};
};

#include "cardManager.tcc"