//
// Created by Alexandre ROULIN on 09/10/2018.
//

#include <iostream>
#include <sys/time.h>
#include <Base.hpp>
#include <A.hpp>
#include <B.hpp>
#include <C.hpp>

void identify_from_pointer(Base *p) {
	if (dynamic_cast<A *>(p) != nullptr) {
		std::cout << "Random create       'A'" << std::endl;
	} else if (dynamic_cast<B *>(p) != nullptr) {
		std::cout << "Random create       'B'" << std::endl;
	} else if (dynamic_cast<C *>(p) != nullptr) {
		std::cout << "Random create       'C'" << std::endl;
	}
	delete p;
}

void identify_from_reference(Base &p) {
	Base b;
	try{
		b = dynamic_cast<A&>(p);
		std::cout << "Random created      'A'" << std::endl;
	}catch (std::exception &e) {}
	try{
		b = dynamic_cast<B&>(p);
		std::cout << "Random created      'B'" << std::endl;
	}catch (std::exception &e) {}
	try{
		b = dynamic_cast<C&>(p);
		std::cout << "Random created      'C'" << std::endl;
	}catch (std::exception &e) {
	}
}

Base *randomBase() {
	int rand_base = rand() % 3;
	if (rand_base == 0) {
		std::cout << "Random create class 'A'" << std::endl;
		return new A();
	}
	if (rand_base == 1) {
		std::cout << "Random create class 'B'" << std::endl;
		return new B();
	}
	if (rand_base == 2) {
		std::cout << "Random create class 'C'" << std::endl;
		return new C();
	}
	return nullptr;
}

int main() {
	srand(static_cast<unsigned int>(time(nullptr)));
	std::cout << "Test identify_from_pointer" << std::endl;
	for (int index = 0 ; index < 10 ; index++) {
		identify_from_pointer(randomBase());
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Test identify_from_reference" << std::endl;
	for (int index = 0 ; index < 10 ; index++) {
		identify_from_reference(*randomBase());
		std::cout << std::endl;
	}
	return 0;
}