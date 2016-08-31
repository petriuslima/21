#include "Card.hpp"
#pragma once

class Deck {
    public:
        std::string getCard();

    protected:
        virtual void create() = 0;
        virtual void randomize() = 0;
        std::vector<Card> cards;
};
