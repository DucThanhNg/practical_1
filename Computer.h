#ifndef COMPUTER
#define COMPUTER
#include <iostream>
#include "Player.h"
#include "Move.h"
#include "Rock.h"

class Computer: public Player{
    public:   
        Computer();
        Move* makeMove(); 
        std::string getName();
};
#endif

