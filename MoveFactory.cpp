#include "Move.h"
#include "MoveFactory.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"

Move* MoveFactory::generateMove(std::string strMove){
    if (strMove == "Rock"){
        Move* move = new Rock();
        return move;
    }
    else if (strMove == "Paper"){
        Move* move = new Paper();
        return move;
    }
    else if (strMove == "Scissors"){
        Move* move = new Scissors();
        return move; 
    }
    else{
        std::cout << "Invalid Move" << std::endl;
    }

}