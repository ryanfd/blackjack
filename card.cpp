#include "card.h"

// getters
std::string Card::getFaceVal() { return faceVal; }
int Card::getVal() { return val; }
std::string Card::getSuit() { return suit; }

// setters
void Card::setFaceVal(const std::string& newVal)
{
    faceVal = newVal;
}

void Card::setCardValue(int newVal)
{
    val = newVal;
}

void Card::setSuit(const std::string& newSuit)
{
    suit = newSuit;
}