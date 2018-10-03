#include <Fixed.hpp>

int main () {
	Fixed f1(42.0f);
	Fixed f2(42);
	std::cout << "F2    : " << f2.getRawBits() << std::endl;
	std::cout << "F2 << : " << f2 << std::endl;
	return (0);
}