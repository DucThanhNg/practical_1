#include "Computer.h"
#include "Player.h"

Computer::Computer(){
    name = "Computer";
    move = 'R';
}

Move* Computer::makeMove(){
    return 0;

}

std::string Computer::getName(){
    return name;
}