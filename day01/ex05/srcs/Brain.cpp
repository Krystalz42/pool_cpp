#include <Brain.hpp>
#include <string>
#include <iostream>


/** Constructor **/

Brain::Brain() {
	addr << this;
}

/** Private **/

/** Public **/

std::string Brain::identify() {
    return addr.str();
}

/** Private **/

/** Destructor **/
Brain::~Brain() {

}