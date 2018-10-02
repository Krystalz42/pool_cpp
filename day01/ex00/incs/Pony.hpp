#ifndef __PONY_HPP__
#define __PONY_HPP__

#include <string>

class Pony {
	public:
		Pony(std::string name, int age, std::string color);
		~Pony();
	private:
		std::string		_name;
		int				_age;
		std::string		_color;
};

#endif //__PONY_HPP__