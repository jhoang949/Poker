//
// Created by Joseph Hoang on 8/31/23.
//

#ifndef POKER_DECK_H
#define POKER_DECK_H

#include <iostream>
#include <vector>
#include "Cards.h"
#include "string"
using namespace std;

class Deck {
private:
    vector<Card> cardStack;
public:
    Deck(char deckType);
    void createLowADeck();
    void createBjDeck();
    void createHighADeck();
    vector<Card> getStack();

};


#endif //POKER_DECK_H
