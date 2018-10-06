//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef _IMININGLASER_HPP
#define _IMININGLASER_HPP

class IAsteroid;

#include <IAsteroid.hpp>

class IMiningLaser
{
public:
	virtual ~IMiningLaser() {}
	virtual void mine(IAsteroid*) = 0;
};

#endif //EX04_IMININGLASER_HPP
