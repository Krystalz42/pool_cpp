//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef EX04_IASTEROID_HPP
#define EX04_IASTEROID_HPP

class IAsteroid;

#include <string>
#include <AsteroKreog.hpp>
#include <DeepCoreMiner.hpp>
#include <StripMiner.hpp>

class IAsteroid {
public:
	virtual ~IAsteroid() {}
	virtual std::string beMined(StripMiner *ak) const = 0;
	virtual std::string beMined(DeepCoreMiner *ak) const = 0;
	virtual std::string getName() const = 0;
};

#endif //EX04_IASTEROID_HPP
