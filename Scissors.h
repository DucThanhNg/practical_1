#ifndef SCISSORS
#define SCISSORS
#include <iostream>
#include "Move.h"

class Scissors: public Move{
    public:
        Scissors();
        bool isWinAgainst(std::string move);
};

#endif