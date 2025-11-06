#include "cardManager.h"
#include "card.h"
#include <stdexcept>

Card& CardManager::getCardById(unsigned id)
{
    auto it = allCards.find(id);
    if (it != allCards.end()) {
        return it->second;
    }
    throw std::out_of_range("Card ID not found");
}