#include <vector>

#include "card.h"

class Player {
public:
    Player()
    : total(0), hand(NULL)
    { }

    void calculateTotal();


private:
    int total;
    std::vector<Card> hand;
};