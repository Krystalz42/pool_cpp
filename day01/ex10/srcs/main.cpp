
#include <iostream>
#include <string>
#include <fstream>

void 	read() {
	std::string		buffer;

	while (std::getline(std::cin, buffer)) {
	
		std::cout << buffer;
		if (std::cin.eof())
			return;
		std::cout << std::endl;
	}
}

void	readFile(int argc, char **argv) {
	std::ifstream		ifs;
	std::string			buffer;
	std::string			file;

	for (int index = 0; index < argc; index++) {
		file = argv[index];
		if (file == "-") {
			read();
		} else {
			ifs.open(file);
			if (ifs.is_open()) {
				while (std::getline(ifs, buffer)) {
					std::cout << buffer;
					if (ifs.eof())
						break;
					std::cout << std::endl;
				}
				ifs.close();
			}
		}
	}
}

int		main (int argc, char **argv) {
	if (argc == 1)
		read();
	else
		readFile(argc -1, argv + 1);
}