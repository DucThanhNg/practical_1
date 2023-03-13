#include "Move.h"
#include "Scissors.h"

Scissors::Scissors(){
    name = "Scissors";
}

bool Scissors::isWinAgainst(std::string move){
    if (move == "Paper"){
        return true;
    }
    else if (move == "Rock"){
        return false;
    }
    else{
        std::cout << "Incompatible Move" << std::endl;
    }
    return 0;

}