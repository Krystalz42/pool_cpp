//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <MutantStack.hpp>
#include <iostream>
#include <sstream>




void printStack(MutantStack<int> &ms) {
	MutantStack<int>::iterator it = ms.begin();
	MutantStack<int>::iterator ite = ms.end();

	++it;
	--it;
	std::cout << "Print Stack Begin" << std::endl;
	for (; it != ite; ++it) {
		std::cout << "[" << *it << "] ";
	}
	std::cout << std::endl;

	std::cout << "Print Stack End" << std::endl;
}

int main() {

	srand(static_cast<unsigned int>(time(nullptr)));
	MutantStack<int> mstack;
	std::cout << "/** Initialization **/" << std::endl;
	/** Initialization **/

	std::cout << "Empty : " << (mstack.empty() ? "true" : "false") << std::endl;
	for (int index = 0; index < 10; index++) {
		mstack.push(rand() % 10);
		std::cout << "Add in stack : " << mstack.top() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "/** Print Stack **/" << std::endl;
	/** Print Stack **/

	printStack(mstack);
	std::cout << std::endl;

	std::cout << "/** Display Info **/" << std::endl;
	/** Display Info **/

	std::cout << "Current Top : " << mstack.top() << std::endl;
	std::cout << "Size : " << mstack.size() << std::endl;
	std::cout << "Empty : " << (mstack.empty() ? "true" : "false") << std::endl;


	std::cout << "/** Check copy **/" << std::endl;
	/** Check copy **/

	std::stack<int> s(mstack);
	std::cout << "Copy MutantStack<int> into std::stack<int>" << std::endl;
	std::cout << "Size : " << s.size() << std::endl;
	std::cout << "Empty : " << (s.empty() ? "true" : "false") << std::endl;
	std::cout << std::endl;

	std::cout << "/** Pop copy **/" << std::endl;
	/** Pop copy **/
	for (; s.size() != 0;) {
		std::cout << "Stack top : [" << s.top() << "]" << " Poop out ! :) "<< std::endl;
		s.pop();
	}

	std::cout << "Copy Info" << std::endl;
	std::cout << "Size : " << s.size() << std::endl;
	std::cout << "Empty : " << (s.empty() ? "true" : "false") << std::endl;
	std::cout << std::endl;


	std::cout << "/** Display Info MutantStack **/" << std::endl;
	/** Display Info **/

	std::cout << "Current Top : " << mstack.top() << std::endl;
	std::cout << "Size : " << mstack.size() << std::endl;
	std::cout << "Empty : " << (mstack.empty() ? "true" : "false") << std::endl;
	printStack(mstack);
	for (int index = mstack.size();index > 0; index--) {
		std::cout << "Stack top : [" << mstack.top() << "]" << " Poop out ! :) "<< std::endl;
		mstack.pop();
	}

	std::cout << "/** Display Info MutantStack **/" << std::endl;
	/** Display Info **/

	std::cout << "Size : " << mstack.size() << std::endl;
	std::cout << "Current Top : " << (mstack.size() != 0 ? mstack.top() : -1) << std::endl;
	std::cout << "Empty : " << (mstack.empty() ? "true" : "false") << std::endl;
	return 0;
}