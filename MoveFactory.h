#ifndef MOVEFACTORY
#define MOVEFACTORY
#include <iostream>
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
class MoveFactory{
    public:
        Move* generateMove(std::string strMove);

};

#endif