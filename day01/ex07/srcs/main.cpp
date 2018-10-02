
#include <sed_pp.h>
#include <fstream>
#include <iostream>

void		replace(	std::ifstream & f,
						std::ofstream & fr,
					 	std::string		s1,
						std::string		s2) {
	std::string		buffer;
	std::string		replace_string;

	std::cout << "* output *" << std::endl;
	while (getline(f, buffer))
	{
		for (size_t pos = 0;; pos += s2.length())
		{
			// Locate the substring to replace
			pos = buffer.find(s1, pos);
			if (pos == std::string::npos)
				break;
			// Replace by erasing and inserting
			buffer.erase(pos, s1.length());
			buffer.insert(pos, s2);
		}
		fr << buffer << std::endl;
		std::cout << buffer << std::endl;
	}
	std::cout << "* end *" << std::endl;
}

int			main(int argc, char **argv) {

	if (argc == 4 ) {
		std::string  filename = argv[1];
		std::ifstream		file (filename);
		std::ofstream		file_replace (filename + ".REPLACE");
		if (file.is_open() && file_replace.is_open()) {
				std::cout
					<< "The "
					<< filename
					<< " file has been open and each \'"
					<< argv[2]
					<< "\' will be replace by \'"
					<< argv[3]
					<< "\' and store to "
					<< (filename + ".replace")
					<< "." << std::endl;
		
			replace(file, file_replace, argv[2], argv[3]);
			file.close();
			file_replace.close();
		}
	} else {
		std::cerr << "We need to have \'./replace\' \'filename\' \'substring_to_replace\' \'string_that_you_re_replacing\'" << std::endl;
	}
	return (0);
}