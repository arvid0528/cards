#include "utils.h"

std::ostream& operator<<(std::ostream& os, const Card& card)
{
    os << "id#" << card.getId() << "-" << card.getName() << "-dmg#" << card.getDamage() << "-hp#" << card.getHealth() << std::endl;
    return os;
}

Card& cardToCardAttack(const Card& attackerCard, Card& victimCard)
{
    victimCard.takeDamage(attackerCard.getDamage());
    return victimCard;
}