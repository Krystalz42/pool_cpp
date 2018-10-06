//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef EX04_DEEPCOREMINER_HPP
#define EX04_DEEPCOREMINER_HPP

class DeepCoreMiner;

#include "IMiningLaser.hpp"

class DeepCoreMiner : IMiningLaser {
public:
	DeepCoreMiner();
	DeepCoreMiner(DeepCoreMiner const &i);
	DeepCoreMiner &operator=(DeepCoreMiner const &i);

	virtual ~DeepCoreMiner();
	void mine(IAsteroid *asteroid) ;
};

#endif //EX04_DEEPCOREMINER_HPP
