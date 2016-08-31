#include <iostream>
#include <string>
#include "ConsoleWriter.hpp"

using namespace std;

ConsoleWriter::ConsoleWriter() { }

void ConsoleWriter::printPrettify(char card[1]) {
    string formatedOutput = "#####";

    formatedOutput += "\n# " + std::string(card) + " #";
    formatedOutput += "\n#####";

    this->print(formatedOutput);
}

void ConsoleWriter::print(std::string formatedOutput) {
    cout << formatedOutput;
}
