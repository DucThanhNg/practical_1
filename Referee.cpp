#include <Referee.h>
#include <Player.h>

Referee::Referee(){
}

Player* Referee::refGame(Player* player1,Player* player2){
    char p1move = player1->makeMove();
    char p2move = player2->makeMove();

    if(p1move == 'R' && p2move == 'P'){
        return player2;
    } 
    else if(p1move == 'R' && p2move == 'S'){
        return player1;
    }
    else if(p1move == 'R' && p2move == 'R'){
        return nullptr;
    }

    else if(p1move == 'P' && p2move == 'R'){
        return player1;
    } 
    else if(p1move == 'P' && p2move == 'S'){
        return player2;
    }
    else if(p1move == 'P' && p2move == 'P'){
        return nullptr;
    }

    if(p1move == 'S' && p2move == 'P'){
        return player1;
    } 
    else if(p1move == 'S' && p2move == 'R'){
        return player2;
    }
    else if(p1move == 'S' && p2move == 'S'){
        return nullptr;
    }
    else{
        std::cout << "Invalid Moves" << std::endl;
    }

}



