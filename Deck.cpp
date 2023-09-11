//
// Created by Joseph Hoang on 8/31/23.
//

#include "Deck.h"
using namespace std;

Deck::Deck(char s){
    switch (s){
        case 'L':
            createLowADeck();
            break;
        case 'B':
            createBjDeck();
            break;
        case 'H':
            createHighADeck();
            break;
    }
}

// creates a standard 52 card deck
void Deck::createLowADeck() {
    vector<Card> deck;
    Card card=Card(0,'S');
    char suit;
    for(int i=1; i < 14; i++){
        for(int j=1; j<5; j++){
            switch (j){
                case (1):
                    suit = 'S';
                    break;
                case (2):
                    suit = 'C';
                    break;
                case (3):
                    suit = 'D';
                    break;
                case (4):
                    suit = 'H';
                    break;
            }
            card = Card(i, suit);
            deck.push_back(card);
        }
    }
    cardStack = deck;
}

void Deck::createBjDeck() {
    vector<Card> deck;
    Card card=Card(0,'S');
    char suit;
    for(int k = 0; k < 3; k++)
        for(int i=1; i < 14; i++){
            for(int j=1; j<5; j++){
                switch (j){
                    case 1:
                        suit = 'S';
                    case 2:
                        suit = 'C';
                    case 3:
                        suit = 'D';
                    case 4:
                        suit = 'H';
                }
                card = Card(i, suit);
                deck.push_back(card);
            }
        }
    cardStack = deck;
}

void Deck::createHighADeck() {
    vector<Card> deck;
    Card card=Card(0,'S');
    char suit;
    for(int i=2; i < 15; i++){
        for(int j=1; j<5; j++){
            switch (j){
                case (1):
                    suit = 'S';
                    break;
                case (2):
                    suit = 'C';
                    break;
                case (3):
                    suit = 'D';
                    break;
                case (4):
                    suit = 'H';
                    break;
            }
            card = Card(i, suit);
            deck.push_back(card);
        }
    }
    cardStack = deck;
}

vector<Card> Deck::getStack() {
    return cardStack;
}

