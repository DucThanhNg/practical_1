#include "Computer.h"
#include "Player.h"

Computer::Computer(){
    name = "Computer";
    move = 'R';
}

char Computer::makeMove(){
    return move;

}

std::string Computer::getName(){
    return name;
}