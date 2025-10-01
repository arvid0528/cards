#include <iostream> 
#include "card.h"
#include "utils.h"

int main() 
{
    Card cow("cow", 1, 4);
    Card sheep("sheep", 2, 3);

    std::cout << cow << std::endl;
    std::cout << sheep << std::endl;

    cardToCardAttack(sheep, cow); 
    
    std::cout << cow << std::endl;
    std::cout << sheep << std::endl;

    return 0;
}