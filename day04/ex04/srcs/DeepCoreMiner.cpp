//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <iostream>
#include <DeepCoreMiner.hpp>

#include "DeepCoreMiner.hpp"

/** Static **/
/** Constructor **/

DeepCoreMiner::DeepCoreMiner() {

}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const &i) {
	*this = i;
}

/** Public **/

void DeepCoreMiner::mine(IAsteroid *asteroid) {
	std::cout << "* mining deep ... got RESULT ! *" << std::endl;
}

/** Private **/
/** Operator **/

DeepCoreMiner &DeepCoreMiner::operator=(DeepCoreMiner const &i) {
	return *this;
}

/** Destructor **/




DeepCoreMiner::~DeepCoreMiner() {

}


