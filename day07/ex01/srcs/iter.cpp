//
// Created by Alexandre ROULIN on 09/10/2018.
//


#include <cstddef>
#include <iostream>

void printChar(char c){
	std::cout << c;
}

void printInt(int c){
	std::cout << c;
}

void printString( std::string const s){
	std::cout << s;
}

template<typename T>
void print (T val) {
	std::cout << val;
}

template <typename T>
void 	iter(T *addr, size_t len, void (*f)(T)) {
	for (size_t index = 0; index < len; index++) {
		f(addr[index]);
	}
}

int main () {

	char *c = new char[strlen("Bonjour les students")];
	c = const_cast<char *>("Bonjour les students");
	std::cout << "Test mapping on char" << std::endl;
	iter<char>(c, strlen(c), &(print<char>));
	std::cout <<  std::endl;
	std::cout << std::endl;
	std::cout << "Test mapping on int" << std::endl;
	int *i = new int[10];
	for (int index = 0; index < 10; ++index) {
		i[index] = index;
	}
	iter<int>(i, 10, &printInt);
	std::cout <<  std::endl;

	std::cout << std::endl;
	std::cout << "Test mapping on string" << std::endl;
	std::string s[10];

	s[0] = "Sammy Perkins";
	s[1] = "Heidi Osborne";
	s[2] = "Vivian Figueroa";
	s[3] = "Sherman Burton";
	s[4] = "Herbert Blair";
	s[5] = "Duane Edwards";
	s[6] = "Charles Little";
	s[7] = "Alison Clarke";
	s[8] = "Hilda Welch";
 	s[9] = "Sandy Fernandez";

	iter(s, 10, &printString);
}