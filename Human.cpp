#include "Human.h"
#include "Player.h"

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
    std::cout << "Enter move: ";
    std::cin >> move;
    return 0;
}