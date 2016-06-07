#include "MooseRNG.hpp"

#include <time.h>    //for seeding
#include <cstdlib>   //for srand
#include <stdexcept> //to allow std namespace in math

namespace moose{

  RandNumGen::RandNumGen()
  {
	lowerBound = 0;
	upperBound = 9;

    unsigned int seed = time(NULL);
    std::srand(seed); // Seed 

	randModifier = rand();
  }

  RandNumGen::RandNumGen(int lowerBound, int upperBound)
  {
    this->lowerBound = lowerBound;
	this->upperBound = upperBound;

    unsigned int seed = time(NULL);
    std::srand(seed); // Seed 

	randModifier = rand();
  }

  void RandNumGen::SetBounds(int lowerBound, int upperBound)
  {
    RandNumGen(lowerBound, upperBound);
  }

  int RandNumGen::randNum() 
  {
    return (rand() % (upperBound - lowerBound + 1) + lowerBound);
   //Adjusts to the appropriate bound 
  }

  int RandNumGen::randNumMod() 
  {
    return ((rand() * randModifier) % (upperBound - lowerBound + 1) + lowerBound);
    //Adjusts to the appropriate bound  
  }

  int RandNumGen::randNumMod(int randNum) 
  {
    return ((rand() * randNum) % (upperBound - lowerBound + 1) + lowerBound);
    //Adjusts to the appropriate bound  
  }
}