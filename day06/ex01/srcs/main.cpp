//
// Created by Alexandre ROULIN on 09/10/2018.
//

#include <serialization.h>
#include <iostream>

void print(std::string &s1, int i1, std::string s2) {
	std::cout
		<< "First string : "
		<< s1 << std::endl
		<< "Integer : "
		<< i1 << std::endl
		<< "Second string : "
		<< s2 << std::endl << std::endl;

}

void randomString(char *data) {
	static const char alphanum[] =
			"0123456789"
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			"abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 20; ++i) {
		data[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
	}
}

Data * deserialize( void * raw ) {
	Data *d = new Data;
	char * deserialized = reinterpret_cast<char *>(raw);

	int index = 0;
	for (; index < 8; index++)
		d->s1 += deserialized[index];
	for (; index < 12; index++) {
		d->n += deserialized[index];
		d->n <<= 4;
	}
	for (; index < 20; index++)
		d->s2 += deserialized[index];

	std::cout << "In deserialize::print() :"<< std::endl;
	print(d->s1, d->n, d->s2);

	return d;
}
void * serialize( void ) {
	char *data = new char[20];

	std::string s1;
	std::string s2;
	int	i1 = 0;

	randomString(data);

	int index = 0;
	for (; index < 8; index++)
		s1 += data[index];
	for (; index < 12; index++) {
		i1 += data[index];
		i1 <<= 4;
	}
	for (; index < 20; index++)
		s2 += data[index];
	std::cout << "In serialize::print() :" << std::endl;
	print(s1, i1, s2);

	return reinterpret_cast<void *>(data);
}


int main () {
	srand(static_cast<unsigned int>(time(nullptr)));
	void * v = serialize();
	Data * data = deserialize(v);
	std::cout << "In main::print() :" << std::endl;
	print(data->s1, data->n, data->s2);
}