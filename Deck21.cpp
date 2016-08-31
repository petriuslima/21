#include <sstream>
#include "Deck21.hpp"
#include "Card21.hpp"
#include "Card21.cpp"

Deck21::Deck21() {
    this->create();
    this->randomize();
}

std::string Deck21::getCard() {
    return this->cards[0].getValue();
}

void Deck21::create() {
    string value = "";
    int i, j, points;

    for (i = 1; i <= 13; i++) {
        points = i;

        if (i == 1) {
            value = "A";
        } else if (i == 11) {
            value = "J";
            points = 10;
        } else if (i == 12) {
            value = "Q";
            points = 10;
        } else if (i == 13) {
            value = "K";
            points = 10;
        } else {
            ostringstream outputStringStream;
            outputStringStream << i;

            value = outputStringStream.str();
        }

        for (j = 0; j < 4; j++) {
            Card21 card(value, points);
            this->cards.push_back(card);
        }
    }
}

void Deck21::randomize() {

}
