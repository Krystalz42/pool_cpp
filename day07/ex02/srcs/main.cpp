//
// Created by Alexandre ROULIN on 10/10/2018.
//

#include <Array.hpp>
#include <iostream>

void incrementInt(int &e) {
	e++;
}

void incrementString(std::string &e) {
	e += " has been mapped";
}
int main() {
	Array<int> array_int = Array<int>(10);
	Array<int> array_int_copy = Array<int>(10);

	for (unsigned int index = 0; index < array_int.size(); index++) {
		(array_int)[index] = 42 + index;
	}
	array_int_copy = array_int;
	std::cout << "Print Array<Int>Copy " << std::endl;
	array_int_copy.print();
	std::cout << "Print Array<Int> " << std::endl;
	array_int.print();
	std::cout << "Map Array<Int> (*f)(int + 1) " << std::endl;
	array_int.map(&incrementInt);
	std::cout << "Print Array<Int> " << std::endl;
	array_int.print();
	std::cout << std::endl;
	Array<std::string> *array_string = new Array<std::string>(10);
	char const *names[10] = {"Sammy Perkins",
							 "Heidi Osborne",
							 "Vivian Figueroa",
							 "Sherman Burton",
							 "Herbert Blair",
							 "Duane Edwards",
							 "Charles Little",
							 "Alison Clarke",
							 "Hilda Welch",
							 "Sandy Fernandez"};

	for (unsigned int index = 0; index < array_string->size(); index++) {
		(*array_string)[index] = names[index];
	}


	std::cout << "Print Array<std::string> " << std::endl;
	array_string->print();
	std::cout << "Map Array<std::string> (*f)(string + \" has been mapped\") " << std::endl;
	array_string->map(&incrementString);
	std::cout << "Print Array<std::string> " << std::endl;
	array_string->print();
	std::cout << std::endl;
	try {
		std::cout << "Go throw the size !" << std::endl;
		(array_int)[array_int.size()  + 1] = 42;
		std::cout << "It's easy !" << std::endl;
	} catch (std::exception &e) {
		std::cout << "Catch " << e.what() << std::endl;
	}

}