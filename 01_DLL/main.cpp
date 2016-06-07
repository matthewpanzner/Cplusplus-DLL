#include "MooseRNG.hpp"
#include <iostream>

int main(){
    moose::RandNumGen* rng = new moose::RandNumGen();
    std::cout << rng->randNum() << std::endl;
    return 0;
}