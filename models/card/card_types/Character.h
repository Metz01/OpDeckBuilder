#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include "../Attacker.h"
#include "../PlayableCard.h"
#include <QJsonObject>

class Character: public Attacker, public PlayableCard
{
private:
    int counter;
public:
    Character(std::string, std::string, std::string, std::string, Enums::Colors, int, int);
    Character(QJsonObject Json, std::string cardCode);
    ~Character();
    Utils::CardInfo info(Enums::InfoAttribute attribute, Utils::CardInfo onGetAttribute(Enums::InfoAttribute, QJsonObject)) const;
    Enums::CardType getCardType() const;
};

#endif