#include "Referee.h"
#include "Player.h"
#include "Move.h"

Referee::Referee(){
}

Player* Referee::refGame(Player* player1,Player* player2){
    Move* p1move = player1->makeMove();
    Move* p2move = player2->makeMove();

    if (p1move->isWinAgainst(p2move->getName())){
        return player1;
    }
    else if (p2move->isWinAgainst(p2move->getName())){
        return player2;
    }
    else if (p1move == p2move){
        std::cout << "Tie";
        return nullptr;
    }
    
    return 0;
}



