#include <iostream>
#include <iomanip>
#include <vector>
#include "ConsoleWriter.hpp"
#include "ConsoleWriter.cpp"
#include "Deck21.hpp"
#include "Deck21.cpp"

int main() {
    using namespace std;

    char userInput[1];

    cin >> setw(2) >> userInput;

    ConsoleWriter consoleWriter;
    consoleWriter.printPrettify(userInput);
}
