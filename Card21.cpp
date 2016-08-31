#include "Card21.hpp"

Card21::Card21(std::string value, int points): Card(value) {
    this->points = points;
}

int Card21::getPoints() {
    return this->points;
}
