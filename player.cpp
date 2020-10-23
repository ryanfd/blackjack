#include "player.h"

void Player::calculateTotal()
{
    int newTotal = 0;
    for (int i=0; i<hand.size(); i++) {
        newTotal += hand[i].getVal();
    }
    total = newTotal;

    // if over 21 and have an Ace, change Ace value to 1
    int index = 0;
    while (total > 21 && index < hand.size()) {
        if (hand[index].getFaceVal() == "A") {
            hand[index].setCardValue(1);
            total -= 10;
        }
        index++;
    }
}

void Player::playerTurn(std::vector<Card> deck)
{
    // display hand
    displayHand();

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
        chooseHit(deck);
    } else if (decision == "stay") {
        chooseStay();
    } else {
        std::cout << "ERROR: INVALID ENTRY" << std::endl;
    }
}

void Player::displayHand()
{
    std::cout << "Cards: ";
    for (int i=0; i<hand.size(); i++) {
        std::cout << hand[i].getFaceVal() << "[" << hand[i].getSuit() << "]\t";
    }
    std::cout << std::endl;
}

// getters
int Player::getTotal() { return total; }
std::vector<Card> Player::getHand() { return hand; }