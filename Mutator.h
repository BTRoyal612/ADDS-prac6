#ifndef MUTATOR
#define MUTATOR

#include "Individual.h"

#include <string>

class Mutator {
    public:
        virtual Individual* mutate(Individual* parent, int k)=0; 
};

#endif