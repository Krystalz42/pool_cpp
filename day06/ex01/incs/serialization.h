//
// Created by Alexandre ROULIN on 09/10/2018.
//

#ifndef EX01_SERIALIZATION_H
#define EX01_SERIALIZATION_H

#include <string>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

Data * deserialize( void * raw );
void * serialize( void );

#endif //EX01_SERIALIZATION_H
