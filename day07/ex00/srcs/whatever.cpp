//
// Created by Alexandre ROULIN on 09/10/2018.
//

#include <iostream>

/** PRINT (bonus) **/
template<typename T>
void	print(T a, T b) {
	std::cout << "First  element : " << a << std::endl;
	std::cout << "Second element : " << b << std::endl;
}

/** SWAP **/

template<typename  T>
void 	swap(T &a, T &b) {
	T c;

	c = a;
	a = b;
	b = c;
}

/** MAX **/

template<typename T>
T const	&max(T const &a, T const &b) {
	return (b >= a ? b : a);
}

template<typename T>
T const	&min(T const &a, T const &b) {
	return (b <= a ? b : a);
}

int main () {
	int		a = 42;
	int		b = 21;



	std::cout << "On <int> :" << std::endl;
	print<int>(a, b);
	std::cout << "<Swap>" << std::endl;
	swap<int>(a, b);
	print<int>(a, b);
	std::cout << "Max : " << max<int>(a, b) << std::endl;
	std::cout << "Min : " << min<int>(a, b) << std::endl;
	std::cout << std::endl;


	std::string s1 = "2.Greater";
	std::string s2 = "1.Smaller";

	std::cout << "On <string> :" << std::endl;
	::print(s1, s2);
	std::cout << "<Swap>" << std::endl;
	::swap(s1, s2);
	::print(s1, s2);
	std::cout << "Max : " << ::max(s1, s2) << std::endl;
	std::cout << "Min : " << ::min(s1, s2) << std::endl;
}