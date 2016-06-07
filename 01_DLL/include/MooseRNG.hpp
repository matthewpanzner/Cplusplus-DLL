#ifndef MOOSE_API_RANDNUMGEN_HPP
#define MOOSE_API_RANDNUMGEN_HPP


/*
   RandNumGen.hpp

   This is a random number generator with it you can:

   1) generator a random number set between a lower and upperbound (inclusive)
   2) you can put in a random number generator modifier to multiply (might be useful for larger mods)

*/

namespace moose{


class RandNumGen
{
  public:
    RandNumGen();

	RandNumGen(int lowerBound, int upperBound);
	//initialize with lower and upperbound values

	void SetBounds(int lowerBound, int upperBound);
	//Set boundaries for random number

	int randNum();
	//Returns a random number

	int randNumMod();
	//Returns a modified random number (multiplies two randoms)

	int randNumMod(int randNum);
	//Returns a modified random number (multiplies rand() and randNum)

  private:
	 int randModifier;  //Random number made at the start to shift the random
	                    // via multiplication

	 int upperBound;  //Boundaries for the random number
	 int lowerBound;
};

}
#endif