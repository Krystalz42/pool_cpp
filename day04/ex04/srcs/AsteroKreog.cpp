//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include "AsteroKreog.hpp"

/** Static **/
/** Constructor **/
AsteroKreog::AsteroKreog() {}

AsteroKreog::AsteroKreog(AsteroKreog const &asteroKreog) {
	*this = asteroKreog;
}

/** Public **/

std::string AsteroKreog::getName() const {
	return "AsteroKreog";
}


std::string AsteroKreog::beMined(StripMiner *) const {
	return "Flavium";
}

std::string AsteroKreog::beMined(DeepCoreMiner *) const {
	return "Flavium";
}

AsteroKreog &AsteroKreog::operator=(AsteroKreog const &asteroKreog) {
	if (this != &asteroKreog) {

	}
	return *this;
}

/** Private **/
/** Operator **/
/** Destructor **/

AsteroKreog::~AsteroKreog() {


}






