#include <iostream> 
#include <string> 
#include "utils.h"
#include "cow.h"
#include "sheep.h"

int main() 
{    
    Sheep sheep{};
    std::cout << sheep << std::endl;

    Cow cow{};
    std::cout << cow << std::endl;

    cardToCardAttack(sheep, cow); 
    
    std::cout << cow << std::endl;
    std::cout << sheep << std::endl;

    return 0;
}