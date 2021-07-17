#include "human.h"
#include <iostream>

Human::Human(){}

Human::~Human(){}

void Human::toLive(){
    std::cout<< "respira"<<std::endl;
}

void Human::eat(){
    std::cout<<"es Omnivoro"<<std::endl;
}
