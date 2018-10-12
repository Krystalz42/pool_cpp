//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <exception>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <map>
#include <stack>

template <typename T>
void	easyfind(T const &array, int const &find ) {
	if (std::find(array.begin(), array.end(), find) == array.end())
		throw std::exception();
}

int main() {

	int arr[] = { 21, 42, 84, 168};
	int n = sizeof(arr) / sizeof(arr[0]);
	std::vector<int> v(arr, arr + n);

	try {
		easyfind(v, 42);
		std::cout << "Find 42 !" << std::endl;
		easyfind(v, 1);
	} catch (std::exception &e) {
		std::cout << "Catch a throw !" << std::endl;
	}

	std::list<int> l;
	l.push_back(21);
	l.push_back(42);
	l.push_back(81);
	l.push_back(12);

	try {
		easyfind(l, 42);
		std::cout << "Find 42 !" << std::endl;
		easyfind(l, 1);
	} catch (std::exception &e) {
		std::cout << "Catch a throw !" << std::endl;
	}

	std::deque<int> s;
	s.push_back(21);
	s.push_back(42);
	s.push_back(84);

	try {
		easyfind(s, 42);
		std::cout << "Find 42 !" << std::endl;
		easyfind(s, 1);
	} catch (std::exception &e) {
		std::cout << "Catch a throw !" << std::endl;
	}
}