#include <vector>

#include "card.h"

class Deck {
public:
    Deck() // initialize deck
    {
        for (int i=1; i<=13; i++) {
            for (int j=0; j<4; j++) { // for each suit
                char currFaceVal; // determine values
                int val;
                if (i == 1) {
                    currFaceVal = 'A';
                    val = 11;
                } else if (i == 11) {
                    currFaceVal = 'J';
                    val = 10;
                } else if (i == 12) {
                    currFaceVal = 'Q';
                    val = 10;
                } else if (i == 13) {
                    currFaceVal = 'K';
                    val = 10;
                } else {
                    currFaceVal = '0' + i;
                    val = i;
                }

                std::string currSuit; // determine suit
                if (j == 0) {
                    currSuit = "Diamonds";
                } else if (j == 1) {
                    currSuit = "Hearts";
                } else if (j == 2) {
                    currSuit = "Clubs";
                } else {
                    currSuit = "Spades";
                }

                *this->push_back(Card(currFaceVal, val, currSuit));
            }
        }
    }

    // getters
    Deck getDeck();
};