#include <iostream> 
#include <string> 
#include "utils.h"
#include "cow.h"
#include "sheep.h"
#include "hand.h"
#include "cardManager.h"

int main() 
{    

    CardManager cm{};

    cm.registerFactory("Cow", [](unsigned id){ return std::make_unique<Cow>(id); });
    cm.registerFactory("Sheep", [](unsigned id){ return std::make_unique<Sheep>(id); });

    std::vector<unsigned> hand1 
    {
        cm.createAndStore("Cow"),
        cm.createAndStore("Cow"),
        cm.createAndStore("Cow")
    };

    std::vector<unsigned> hand2
    {
        cm.createAndStore("Sheep"),
        cm.createAndStore("Sheep"),
        cm.createAndStore("Sheep")
    };

    
    while (true) 
    {
        for (auto cardId : hand1)
        {
            std::cout << cm.getCardById(cardId);
        }
        std::cout << std::endl;
        for (auto cardId : hand2)
        {
            std::cout << cm.getCardById(cardId);
        }
        std::cout << std::endl;

        int id;
        std::cout << "id: "; 
        std::cin >> id; 

        cm.cardToCardAttack(0, id);

    }
    


    return 0;
}