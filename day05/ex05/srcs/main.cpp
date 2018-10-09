

#include <Intern.hpp>
#include <OfficeBlock.hpp>
#include <iostream>
#include <CentralBureaucracy.hpp>

int main() {
	CentralBureaucracy cb;

	cb.feedSigner(Bureaucrat("Delores Carter", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Dora Maldonado", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Kristy Carpenter", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Taylor Curtis", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Curtis Russell", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Cynthia Gordon", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Russell Estrada", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Hugo Jensen", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Ramon Ruiz", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Milton Walsh", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Ronnie Hunt", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Rufus Schmidt", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Myron Reynolds", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Nicolas Ortiz", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Micheal Bowers", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Constance Stokes", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Darren Daniels", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Juan Rowe", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Stacey Hardy", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Jordan Klein", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Jose Vasquez", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Willie Gutierrez", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Pamela Erickson", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Colleen Collier", rand() % 149 + 1));
	cb.feedSigner(Bureaucrat("Elsie Vargas", rand() % 149 + 1));

	cb.feedExecutor(Bureaucrat("Mack Valder", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Dixie Richardson", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Kendra Vargas", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Jonathan Hale", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Mitchell Hardy", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Wendy Gardner", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Estelle Alvarez", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Billie Nichols", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Al Phelps", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Johanna Oliver", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Edwin Greer", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Alfredo Hunt", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Ernesto Shelton", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Jenna Wade", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Beth Adams", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Lindsey Burns", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Maryann Mann", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Jenny Lopez", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Marsha Walker", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Gilbert Delgado", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Jill Grant", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Elisa Francis", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Shawn Mathis", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Oliver Graves", rand() % 149 + 1));
	cb.feedExecutor(Bureaucrat("Clark Little", rand() % 149 + 1));

	cb.queueUp("Antoinette Perkins");
	cb.queueUp("Kristine Dunn");
	cb.queueUp("Rufus Silva");
	cb.queueUp("Wallace Ellis");
	cb.queueUp("Cornelius Bell");
	cb.queueUp("Gerald Lucas");
	cb.queueUp("Velma Wagner");
	cb.queueUp("Duane Mcguire");
	cb.queueUp("Earl Gutierrez");
	cb.queueUp("Leslie Osborne");
	cb.queueUp("Mary Price");
	cb.queueUp("Cecil Oliver");
	cb.queueUp("Roberto Fuller");
	cb.queueUp("Marcella Cummings");
	cb.queueUp("Jeremiah Herrera");
	cb.queueUp("Jon Owen");
	cb.queueUp("Greg Reese");
	cb.queueUp("Kirk Gray");
	cb.queueUp("Reginald Hanson");
	cb.queueUp("Franklin Payne");
	cb.queueUp("Henrietta Malone");
	cb.queueUp("Terry Barnes");
	cb.queueUp("Darlene Sherman");
	cb.queueUp("Monique Freeman");
	cb.queueUp("Camille Sharp");

	for (int idx = 0; idx < 22; idx++) {
		cb.doBureaucracy();
	}


	return 0;
}