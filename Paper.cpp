#include "Move.h"
#include "Paper.h"

Paper::Paper(){
    name = "Paper";
}

bool Paper::isWinAgainst(std::string move){
    if (move == "Rock"){
        return true;
    }
    else if (move == "Scissors"){
        return false;
    }
    else{
        std::cout << "Incompatible Move" << std::endl;
    }
    return 0;

}