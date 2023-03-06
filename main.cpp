#include <iostream>
#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"

int main(){
    Referee* referee = new Referee();
    Computer* computer = new Computer();
    Human* human = new Human("Vic");


    std::cout << referee->refGame(computer,human);

}