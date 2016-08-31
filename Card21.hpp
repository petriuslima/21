#include "Card.hpp"
#include "Card.cpp"
#pragma once

class Card21: public Card {
    public:
        Card21(std::string value, int points);
        int getPoints();

    protected:
        int points;
};
