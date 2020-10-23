#include <vector>
#include <iostream>

#include "card.h"

class Player {
public:
    Player()
    : total(0)
    { }

    void calculateTotal();
    void playerTurn(std::vector<Card> deck);

    // getters
    int getTotal();
    std::vector<Card> getHand();


private:
    int total;
    std::vector<Card> hand;
};