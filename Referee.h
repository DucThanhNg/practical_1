#ifndef REFEREE
#define REFEREE
#include <iostream>
#include "Player.h"

class Referee{
    public:
        Referee();
        Player* refGame(Player* player1, Player* player2);
        
        
};
#endif