//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef EX04_STRIPMINER_HPP
#define EX04_STRIPMINER_HPP

class StripMiner;

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class StripMiner : IMiningLaser {

private:

public:
	StripMiner();
	StripMiner(StripMiner const &sm);
	~StripMiner();

	void mine(IAsteroid *asteroid) ;
	StripMiner		&operator=(StripMiner const & sm);
};

#endif //EX04_STRIPMINER_HPP
