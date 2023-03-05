#include <iostream>
#include <Player.h>

class Computer: public Player{
    private:   
        std::string name;
        char move;


    public:   
        Computer();
        char makeMove(); 
        std::string getName();
};

