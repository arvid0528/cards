#include "cardManager.h"
#include <stdexcept>

void CardManager::registerFactory(const std::string& type, Creator creator)
{
    factories[type] = std::move(creator);
}

unsigned CardManager::createAndStore(const std::string& type)
{
    auto it = factories.find(type);
    if (it == factories.end()) throw std::runtime_error("Unknown card type");
    unsigned id = currentCardId++;
    std::unique_ptr<Card> ptr = it->second(id);       
    Card& ref = *ptr;
    allCards.emplace(id, std::move(ptr));              
    return id;                               
}

Card& CardManager::getCardById(unsigned id)
{
    auto it = allCards.find(id);
    if (it == allCards.end()) throw std::out_of_range("Card ID not found");
    return *it->second;
}

void CardManager::cardToCardAttack(unsigned attackerId, unsigned victimId)
{
    auto ait = allCards.find(attackerId);
    auto vit = allCards.find(victimId);
    if (ait == allCards.end() || vit == allCards.end()) {
        throw std::out_of_range("attacker or victim id not found");
    }
    if (!ait->second || !vit->second) {
        throw std::runtime_error("card pointer is null");
    }
    vit->second->takeDamage( ait->second->getDamage() );
}