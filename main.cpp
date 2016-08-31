#include <iostream>
#include <iomanip>
#include <vector>
#include "ConsoleWriter.hpp"
#include "ConsoleWriter.cpp"
#include "Deck21.hpp"
#include "Deck21.cpp"

int main() {
    using namespace std;

    Deck21 deck;
    cout << deck.getCard();
}
