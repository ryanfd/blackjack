#include <string>

class Card {
public:
    Card(const std::string& faceVal, int val, const std::string& suit)
    : faceVal(faceVal), val(val), suit(suit)
    { }

    // getters
    std::string getFaceVal();
    int getVal();
    std::string getSuit();

    // setters
    void setFaceVal(const std::string& newVal);
    void setCardValue(int newVal);
    void setSuit(const std::string& newSuit);

private:
    std::string faceVal;
    int val;
    std::string suit;
};