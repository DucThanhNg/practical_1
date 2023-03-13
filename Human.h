#ifndef HUMAN
#define HUMAN
#include <iostream>
#include "Player.h"
#include "Move.h"
#include "MoveFactory.h"

class Human: public Player{
    private:
        std::string name;

    public:
        Human(std::string name);
        Human();
        Move* makeMove();
        std::string getName();




};
#endif