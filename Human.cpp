#include "Human.h"

Human::Human(std::string Name){
    name = Name;

}
Human::Human(){
    name = "Human";

}

std::string Human::getName(){
    return name;
}

char Human::makeMove(){
    std::cout << "Enter move: ";
    std::cin >> move;
}