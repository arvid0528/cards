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
    Sheep sheep = cm.createCard<Sheep>();
    Sheep sheep2 = cm.createCard<Sheep>();

    std::cout << cm.getCardById(0);

    return 0;
}