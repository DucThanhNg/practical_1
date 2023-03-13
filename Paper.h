#ifndef PAPER
#define PAPER
#include <iostream>
#include "Move.h"

class Paper: public Move{
    public:
        Paper();
        bool isWinAgainst(std::string move);


};


#endif