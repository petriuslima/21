#include "Card.hpp"

Card::Card(std::string value) {
    this->value = value;
}

std::string Card::getValue() {
    return this->value;
}
