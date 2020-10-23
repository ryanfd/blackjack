
#include <algorithm>

#include "player.h"

void initDeck(std::vector<Card>& myDeck);
void printDeck(std::vector<Card> deck);

int main()
{
    std::vector<Card> deck;
    initDeck(deck);

    std::cout << "Deck Size: " << deck.size() << std::endl << std::endl;
    printDeck(deck);

    // shuffle deck
    std::random_shuffle(deck.begin(), deck.end());

    std::cout << "Deck Size: " << deck.size() << std::endl << std::endl;
    printDeck(deck);
}

void printDeck(std::vector<Card> deck)
{
    int count = 0;
    for (int i=0; i<deck.size(); i++) {
        std::cout << i+1 << ": [ Face: " << deck[i].getfaceVal() << " | Value: " << deck[i].getVal() << " | Suit: " << deck[i].getSuit() << " ]" << std::endl;
        count++;
        if (count == 4)  {
            std::cout << std::endl;
            count = 0;
        }
    }
}

void initDeck(std::vector<Card>& myDeck)
{
    for (int i=1; i<=13; i++) {
        for (int j=0; j<4; j++) { // for each suit
            std::string currFaceVal; // determine values
            int val;
            if (i == 1) {
                currFaceVal = "A";
                val = 11;
            } else if (i == 10) {
                currFaceVal = "10";
                val = 10;
            } else if (i == 11) {
                currFaceVal = "J";
                val = 10;
            } else if (i == 12) {
                currFaceVal = "Q";
                val = 10;
            } else if (i == 13) {
                currFaceVal = "K";
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

            myDeck.push_back(Card(currFaceVal, val, currSuit));
        }
    }
}