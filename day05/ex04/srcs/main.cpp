

#include <Intern.hpp>
#include <OfficeBlock.hpp>
#include <iostream>

int main() {
	Intern	idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad Signer", 10);
	Bureaucrat bob = Bureaucrat("Bobby Bobson Executor", 37);

	OfficeBlock ob;
	ob.setIntern(idiotOne);
	ob.setSigner(hermes);
	ob.setExecutor(bob);
	try {
		ob.doBureaucracy(Intern::ROBOTOMY_REQUEST_FORM, "Pigley");
	}
	catch (OfficeBlock::MissingEmployee &e) {
		std::cout << e.what() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}