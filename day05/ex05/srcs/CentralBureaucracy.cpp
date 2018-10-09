#include <utility>

//
// Created by Alexandre ROULIN on 08/10/2018.
//

#include <CentralBureaucracy.hpp>
#include <iostream>

#include "CentralBureaucracy.hpp"

/** Static **/
/** Constructor **/

CentralBureaucracy::CentralBureaucracy()  {
	for (int index = 0; index < 20 ; index++) {
		_ob[index].setIntern(i[index]);
	}

}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const &c) {
	*this = c;
}
/** Public **/

bool CentralBureaucracy::officeReady(OfficeBlock &block) {
	return block.getSigner() != 0 && block.getExecutor() != 0 && block.getIntern() != 0;
}

void CentralBureaucracy::doBureaucracy() {
	for (int index = 0; index < 20; index++ ) {
		if (officeReady(_ob[index])) {
			for (int idx = 0; idx < 20; idx++) {
				if (!_target[idx].empty()) {
					_ob[index].doBureaucracy(Intern::getRandomForm(), _target[idx]);
					_target[idx] = "";
					return;
				}
			}
		}
	}
	std::cout << "No more target !" << std::endl;

}

void CentralBureaucracy::queueUp(std::string target) {
	for (int index = 0; index < 20; index++) {
		if (_target[index].empty()) {
			_target[index] = target;
			std::cout << target << " has been store." << _target[index] << std::endl;
			return;
		}
	}
	std::cout << "Target queue is full !" << std::endl;
}

void CentralBureaucracy::feedSigner(Bureaucrat b) {
	for (int index = 0; index < 20; index++) {
		if (_ob[index].getSigner() == 0) {
			_ob[index].setSigner(b) ;
			std::cout << "Add signer at slot " << index  << std::endl;
			return;
		}
	}
	std::cout << "The signer's office is full !" << std::endl;
}

void CentralBureaucracy::feedExecutor(Bureaucrat b) {
	for (int index = 0; index < 20; index++) {
		if (_ob[index].getExecutor() == 0) {
			_ob[index].setExecutor(b);

			std::cout << "Add executor at slot " << index << std::endl;
			return;
		}
	}
	std::cout << "The executor's office is full !" << std::endl;

}

/** Private **/
/** Operator **/

CentralBureaucracy &CentralBureaucracy::operator=(CentralBureaucracy const &) {
	return *this;
}

/** Destructor **/

CentralBureaucracy::~CentralBureaucracy() {

}



