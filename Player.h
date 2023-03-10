#ifndef PLAYER
#define PLAYER
#include <iostream>
#include "Move.h"

class Player{
    protected:
        std::string name;
        Move* move;

    public:
        virtual Move* makeMove() = 0;
        virtual std::string getName() = 0;


};
#endif