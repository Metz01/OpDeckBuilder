#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "Deck.h"
#include "./card/Card.h"
#include "./card/card_types/Leader.h"
#include "./card/card_types/Don.h"

class Player
{
private:
    Deck deck;
    std::vector<Card *> hand;
    std::vector<Card *> graveyard;
    std::vector<Card *> ground;
    std::vector<Don *> donList;
    int activeDon;
    int don;
    Leader *leader;
    std::string _name;
    int life;
public:
    Player(std::string path, std::string name);
    std::string getLeaderCodeFromDeck() const;
    Card *drawCard();
    void printDeck() const;
    std::vector<Don *> drawDon(int numberOfDon);
    void playCard(Card *selectedCard);
    bool hasCard(Card *card);
    bool hasOnHand(Card *card);
};

#endif // PLAYER_H