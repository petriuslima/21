#include "Deck.hpp"
#pragma once

class Deck21: public Deck {
    public:
        Deck21();
        string getCard();

    protected:
        virtual void create();
        virtual void randomize();
};
