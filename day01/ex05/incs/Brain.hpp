#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <Brain.hpp>
#include <iostream>
#include <string>
#include <sstream>

class Brain {
	private:
		std::stringstream addr;
	public:
		Brain();
		~Brain();
		std::string identify();
};

#endif //__BRAIN_HPP__