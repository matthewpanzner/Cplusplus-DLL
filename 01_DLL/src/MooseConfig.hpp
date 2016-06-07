#ifndef MOOSE_HPP
#define MOOSE_HPP

//For visual studio.

#ifdef MOOSE_EXPORTS
  #define MOOSE_API __declspec(dllexport) 
#else
  #define MOOSE_API __declspec(dllimport) 
#endif

#include "MooseRNG.hpp"

#endif