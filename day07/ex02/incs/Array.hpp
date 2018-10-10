//
// Created by Alexandre ROULIN on 10/10/2018.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

#include <exception>
#include <iostream>

template<typename T>
class Array {
private:
	unsigned int _size;
	T *_array;
public:
	Array();

	Array(unsigned int size);

	Array(Array const &array);

	~Array();

	unsigned int size() const;

	void print() const;

	void map(void (*f)(T&));

	Array &operator=(Array const &array);

	T &operator[](unsigned int element);
};

/** Static **/

/** Constructor **/

template<typename T>
Array<T>::Array(): _size(0), _array(new T[_size]) {

}

template<typename T>
Array<T>::Array(unsigned int size): _size(size), _array(new T[_size]) {

}

template<typename T>
Array<T>::Array(Array const &array) :_size(array._size), _array(new T[_size]) {

}

/** Public **/

template<typename T>
unsigned int Array<T>::size() const {
	return _size;
}

template<typename T>
void Array<T>::print() const {
	for (unsigned int index = 0; index < _size; index++) {
		std::cout << _array[index] << std::endl;
	}
}


/** Private **/

/** Operator **/

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &array) {
	if (this != &array) {
		_size = array._size;
		for (unsigned int index =0; index < _size; index++) {
			_array[index] = array._array[index];
		}
	}
	return *this;
}

template<typename T>
T &Array<T>::operator[](unsigned int element) {
	if (element >= _size)
		throw std::exception();
	return _array[element];
}

/** Destructor **/

template<typename T>
Array<T>::~Array() {
	delete [] _array;
}

template<typename T>
void Array<T>::map(void (*f)(T&)) {
	for (unsigned int index = 0; index < _size; index++) {
		(*f)(_array[index]);
	}
}


#endif //EX02_ARRAY_HPP
