#include <vector>
#include <iostream>

#include "card.h"

class Player { 
public:
    Player()
    : total(0)
    { 
        hand = std::vector<Card>();
        // hand.push_back(Card("A",11, "hearts"));
    }

    void calculateTotal();
    void playerTurn(std::vector<Card> deck);
    void displayHand();

    // getters
    int getTotal();
    std::vector<Card> getHand();


private:
    int total;
    std::vector<Card> hand;

    // helpers
    void chooseStay()
    {
        std::cout << "You like your hand." << std::endl;
    }

    void chooseHit(std::vector<Card> deck)
    {
        Card tempCard = deck[deck.size()-1];
        deck.pop_back();
        hand.push_back(tempCard);
        std::cout << "You received: " << tempCard.getFaceVal() << "[" << tempCard.getSuit() << "]" << std::endl;
    }
};