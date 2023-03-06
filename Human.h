#ifndef HUMAN
#define HUMAN
#include <iostream>
#include "Player.h"

class Human: public Player{
    private:
        std::string name;
        char move;  

    public:
        Human(std::string name);
        Human();
        char makeMove();
        std::string getName();




};
#endif