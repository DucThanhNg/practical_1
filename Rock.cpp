#include "Move.h"
#include "Rock.h"

Rock::Rock(){
    name = "Rock";
}

bool Rock::isWinAgainst(std::string move){
    if (move == "Scissors"){
        return true;
    }
    else if (move == "Paper"){
        return false;
    }
    else{
        std::cout << "Incompatible Move" << std::endl;
    }
    return 0;

}

