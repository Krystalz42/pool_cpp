//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef EX04_ASTEROKREOG_HPP
#define EX04_ASTEROKREOG_HPP

class AsteroKreog;

#include <IAsteroid.hpp>
#include <StripMiner.hpp>

class AsteroKreog: IAsteroid {
private:

public:
	AsteroKreog();
	AsteroKreog(AsteroKreog const &asteroKreog);
	~AsteroKreog();

	AsteroKreog	&operator=(AsteroKreog const &asteroKreog);
	std::string beMined(StripMiner *ak) const;
	std::string beMined(DeepCoreMiner *ak) const;
	std::string getName() const;
};

#endif //EX04_ASTEROKREOG_HPP
