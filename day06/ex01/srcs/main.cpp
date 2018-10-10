//
// Created by Alexandre ROULIN on 09/10/2018.
//

#include <serialization.h>
#include <iostream>
template <typename T>
void print(T s1, int i1, T s2) {
	(void)s1;
	(void)s2;
	std::cout
		<< "First string : "
		<< s1 << std::endl
		<< "Integer : "
		<< i1 << std::endl
		<< "Second string : "
		<< s2 << std::endl
		<< std::endl;

}

void randomString(unsigned char *data) {
	static const unsigned char alphanum[] =
			"0123456789"
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			"abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 8; ++i) {
		data[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
	}
}

Data * deserialize( void * raw ) {
	Data *d = new Data;
	unsigned char * deserialized = reinterpret_cast<unsigned char *>(raw);

	int index = 0;
	int index_nu = 3;
	for (; index < 8; index++)
		d->s1 += deserialized[index];

	for (; index < 12; index++) {
		d->n += (deserialized[index] * (1 << (8 * index_nu)));
		index_nu--;

	}
	for (; index < 20; index++)
		d->s2 += deserialized[index];

	std::cout << "In deserialize::print() :"<< std::endl;
	print(d->s1.c_str(), d->n, d->s2.c_str());

	return d;
}

void * serialize( void ) {
	unsigned char *data = new unsigned char[20];

	unsigned char *		s1 = new unsigned char[8];
	unsigned char *		s2 = new unsigned char[8];
	int			n1 = rand();

	randomString(s1);
	randomString(s2);

	int main_index = 0;

	for(int index = 0; index < 8 ; index++) {
		data[main_index] = s1[index];
		main_index++;
	}

	for(int index = 3; index >= 0; index--) {
		data[main_index] = ((n1 >> (8 * index)) & 0xFF);
		main_index++;
	}
	for(int index = 0; index < 8 ; index++) {
		data[main_index] = s2[index];
		main_index++;
	}
	std::cout << "In serialize::print() :" << std::endl;
	print(s1, n1, s2);

	return reinterpret_cast<void *>(data);
}


int main () {
	srand(static_cast<unsigned int>(time(nullptr)));
	void * v = serialize();
	Data * data = deserialize(v);
	std::cout << "In main::print() :" << std::endl;
	print(data->s1, data->n, data->s2);
}