#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include "../Attacker.h"
#include "../PlayableCard.h"

class Character: public Attacker, public PlayableCard
{
private:
    int counter;
public:
    Character(std::string, std::string, std::string, std::string, int, int);
    ~Character();
};

#endif