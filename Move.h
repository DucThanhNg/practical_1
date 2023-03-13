#ifndef MOVE
#define MOVE
#include <iostream>

class Move{
    protected:
        std::string name;
    public: 
        virtual std::string getName();
        virtual bool isWinAgainst(std::string move) = 0;


};

#endif 