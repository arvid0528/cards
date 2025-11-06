#pragma once
#include "card.h"
#include <map>
#include <memory>
#include <functional>


class CardManager {
public:
    using Creator = std::function<std::unique_ptr<Card>(unsigned id)>;

    void registerFactory(const std::string& type, Creator creator);
    unsigned createAndStore(const std::string& type); // creates, stores in map, returns reference
    Card& getCardById(unsigned id);
    void cardToCardAttack(unsigned, unsigned);
private:
    unsigned currentCardId{0};
    std::map<unsigned, std::unique_ptr<Card>> allCards{};
    std::map<std::string, Creator> factories;
    std::vector<std::vector<unsigned>> board {};
};

#include "cardManager.tcc"