#include "player.h"

void Player::calculateTotal()
{
    int newTotal = 0;
    for (int i=0; i<hand.size(); i++) {
        newTotal += hand[i].getVal();
    }
    total = newTotal;
}

void Player::playerTurn(std::vector<Card> deck)
{
    // display hand
    std::cout << "Cards: ";
    for (int i=0; i<hand.size(); i++) {
        std::cout << hand[i].getfaceVal() << "[" << hand[i].getSuit() << "]\t";
    }
    std::cout << std::endl;

    // player choice
    std::string input;
    std::string decision = "";
    std::cout << "Hit or stay?" << std::endl;
    std::cin >> input;
    for (int i=0; i<input.length(); i++) { // convert answer to all lowercase
        decision += std::tolower(input[i]);
    }

    while (decision != "hit" || decision != "stay") {
        std::cout << "Response invalid, please choose to 'hit' or stay'."  << std::endl;
    }

    if (decision == "hit") {

    } else if (decision == "stay") {

    } else {
        std::cout << "ERROR: INVALID ENTRY" << std::endl;
    }
}

// getters
int Player::getTotal() { return total; }
std::vector<Card> Player::getHand() { return hand; }