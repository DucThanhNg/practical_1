#include "Human.h"
#include "Player.h"
#include "MoveFactory.h"

Human::Human(std::string Name){
    name = Name;

}
Human::Human(){
    name = "Human";

}

std::string Human::getName(){
    return name;
}

Move* Human::makeMove(){
    std::string strMove;
    MoveFactory moveFactory;
    std::cout << "Enter move: ";
    std::cin >> strMove;
    move = moveFactory.generateMove(strMove);
    return move;

}