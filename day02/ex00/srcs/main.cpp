#include <Fixed.hpp>

int main () {
	Fixed f1;
	Fixed f2(42);
	Fixed f3(f1);
	std::cout << "Init \'Fixed f4( f1 + f2 + f3 );\'" << std::endl;
	Fixed f4( f1 + f2 + f3 );

	std::cout << "F1    : " << f1.getRawBits() << std::endl;
	std::cout << "F1 << : " << f1 << std::endl;
	std::cout << "F2    : " << f2.getRawBits() << std::endl;
	std::cout << "F2 << : " << f2 << std::endl;
	std::cout << "F3    : " << f3.getRawBits() << std::endl;
	std::cout << "F3 << : " << f3 << std::endl;
	std::cout << "F4    : " << f4.getRawBits() << std::endl;
	std::cout << "F4 << : " << f4 << std::endl;
	

	return (0);
}