//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <iostream>
#include <IAsteroid.hpp>
#include <AsteroKreog.hpp>
#include <StripMiner.hpp>

#include "StripMiner.hpp"

StripMiner::StripMiner() {

}

StripMiner::StripMiner(StripMiner const &sm) {
	*this = sm;
}

void StripMiner::mine(IAsteroid *asteroid) {
	std::cout << "* strip mining ... got " << asteroid->beMined(this) << " ! *" << std::endl;
}


StripMiner &StripMiner::operator=(StripMiner const &sm) {
	return *this;
}

StripMiner::~StripMiner() {

}

