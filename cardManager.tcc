#include "cardManager.h"

template<typename CardType>
CardType CardManager::createCard()
{
    unsigned cardId {CardManager::currentCardId++};
    CardType card {cardId};
    allCards.insert({cardId, card});
    return card;
}