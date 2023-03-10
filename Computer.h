#ifndef COMPUTER
#define COMPUTER
#include <iostream>
#include "Player.h"
#include "Move.h"

class Computer: public Player{
    private:   
        std::string name;
        char move;


    public:   
        Computer();
        Move* makeMove(); 
        std::string getName();
};
#endif

