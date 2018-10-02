#ifndef __HUMAN_HPP__
#define __HUMAN_HPP__

#include <Brain.hpp>

class Human {
	public:
		Human();
		~Human();
		Brain& getBrain();
		std::string  const identify();
		
	private:
		Brain _b;
};

#endif //__HUMAN_HPP__