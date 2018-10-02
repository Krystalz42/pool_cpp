
#include <Pony.hpp>
#include <iostream>

void ponyOnTheHeap() {

	std::cout << "The pony is on the heap" << std::endl;

	Pony *	p = new Pony("Panther", 666, "Black");
	delete p;
	return ;
}

void ponyOnTheStack() {

	std::cout << "The pony is on the stack" << std::endl;

	Pony	p("Peguin", 42, "White");

	return ;
}

int main () {
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}