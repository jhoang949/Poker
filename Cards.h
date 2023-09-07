//
// Created by Joseph Hoang on 8/24/23.
//

#ifndef POKER_CARDS_H
#define POKER_CARDS_H
#include "string"
using namespace std;

class Card{
private:
    unsigned value;
    string rank;
    char suit;
    Card* next;

public:
    // constructor
    Card(unsigned val, char sut);

    // methods
    Card createDeck();

    // getters
    unsigned getValue();
    string getRank();
    char getSuit();
};



#endif //POKER_CARDS_H
