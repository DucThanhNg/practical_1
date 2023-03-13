#include "Computer.h"
#include "Player.h"
#include "Rock.h"

Computer::Computer(){
    name = "Computer";
    move = new Rock();
}

Move* Computer::makeMove(){
    return move;

}

std::string Computer::getName(){
    return name;
}