#ifndef HUMAN
#define HUMAN
#include <iostream>
#include "Player.h"
#include "Move.h"

class Human: public Player{
    private:
        std::string name;
        char move;  

    public:
        Human(std::string name);
        Human();
        Move* makeMove();
        std::string getName();




};
#endif