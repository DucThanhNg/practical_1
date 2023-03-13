#ifndef ROCK
#define ROCK
#include <iostream>
#include "Move.h"

class Rock: public Move {
    public:
        Rock();
        bool isWinAgainst(std::string move);
        

};

#endif 