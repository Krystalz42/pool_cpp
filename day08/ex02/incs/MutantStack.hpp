//
// Created by Alexandre ROULIN on 11/10/2018.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <iostream>
#include <unistd.h>

template<typename T>
class MutantStack : public std::stack<T> {
private:
	std::list<T> _stack;
public:
	MutantStack();

	MutantStack(MutantStack const &ms);

	virtual ~MutantStack();

	MutantStack &operator=(MutantStack const &ms);

	void pop();

	T top();

	void push(T element);

	bool empty();

	typedef typename std::list<T>::iterator iterator;

	typename std::list<T>::iterator begin();

	typename std::list<T>::iterator end();

	T size();

};

/** Static **/
/** Constructor **/

template<typename T>
MutantStack<T>::MutantStack() {

}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &ms) {
	*this = ms;
}

/** Public **/

template<typename T>
void MutantStack<T>::pop() {
	std::stack<T>::pop();
	_stack.pop_back();
}

template<typename T>
T MutantStack<T>::top() {
	return 	std::stack<T>::top();
}

template<typename T>
void MutantStack<T>::push(T element) {
	std::stack<T>::push(element);
	_stack.push_back(element);
}

template<typename T>
typename std::list<T>::iterator MutantStack<T>::begin() {
	return _stack.begin();
}

template<typename T>
typename std::list<T>::iterator MutantStack<T>::end() {
	return _stack.end();
}

template<typename T>
T MutantStack<T>::size() {
	return std::stack<T>::size();
}

template<typename T>
bool MutantStack<T>::empty() {
	return std::stack<T>::empty();
}

/** Private **/

/** Operator **/

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &ms) {
	MutantStack<T>::iterator it;
	MutantStack<T>::iterator ite = ms.end();

	for (it = ms.begin(); it != ite ; it++) {
		push(*it);
	}
	return *this;
}

/** Destructor **/




template<typename T>
MutantStack<T>::~MutantStack() {

}

#endif //EX02_MUTANTSTACK_HPP
