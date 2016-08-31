#include "IWriter.hpp"
#pragma once

class ConsoleWriter: public IWriter {
    public:
        ConsoleWriter();
        void printPrettify(char card[1]);
        void print(std::string formatedOutput);
};
