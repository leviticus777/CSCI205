// Author: LDT
// Date: 09APR2019
// Title: Deck.cpp
// Description:

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstdlib>
#include <time.h>
#include "Deck.h"
#include "Card.h"
using namespace std;

int Deck::deckSize(){
    return mydeck.size();
}

void Deck::newDeck() {
    mydeck.clear();
    // Create array for suits, numbers
    string names[] = {"Ace",
                      "Two",
                      "Three",
                      "Four",
                      "Five",
                      "Six",
                      "Seven",
                      "Eight",
                      "Nine",
                      "Ten",
                      "Jack",
                      "Queen",
                      "King"};
    string suits[] = {"Hearts",
                      "Spades",
                      "Diamonds",
                      "Clubs"};

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            Card newCard;
            newCard.setSuit(suits[i]);
            newCard.setName(names[j]);
            if(newCard.getName() == "Ace"){
                newCard.setValue(11);
            }
            else if(newCard.getName() == "Two"){
                newCard.setValue(2);
            }
            else if(newCard.getName() == "Three"){
                newCard.setValue(3);
            }
            else if(newCard.getName() == "Four"){
                newCard.setValue(4);
            }
            else if(newCard.getName() == "Five"){
                newCard.setValue(5);
            }
            else if(newCard.getName() == "Six"){
                newCard.setValue(6);
            }
            else if(newCard.getName() == "Seven"){
                newCard.setValue(7);
            }
            else if(newCard.getName() == "Eight"){
                newCard.setValue(8);
            }
            else if(newCard.getName() == "Nine"){
                newCard.setValue(9);
            }
            else if(newCard.getName() == "Ten"){
                newCard.setValue(10);
            }
            else if(newCard.getName() == "Jack"){
                newCard.setValue(10);
            }
            else if(newCard.getName() == "Queen"){
                newCard.setValue(10);
            }
            else if(newCard.getName() == "King"){
                newCard.setValue(10);
            }
            mydeck.push_back(newCard);
        }
    }
}

Card Deck::dealCard(){
    //TODO: Pick random int, swap that index in vector with back, pop the back
    srand(time(NULL));
    int rando = rand() % mydeck.size();
    Card playerCard(mydeck.at(rando).getName(), mydeck.at(rando).getSuit(), mydeck.at(rando).getValue());
    std::swap(mydeck.at(rando), mydeck.back());
    mydeck.pop_back();
    return playerCard;
}