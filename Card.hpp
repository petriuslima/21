#pragma once

class Card {
    public:
        Card(std::string value);
        std::string getValue();

    protected:
        std::string value;
};
