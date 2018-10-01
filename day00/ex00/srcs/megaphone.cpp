/*******************************************************************************
//																			   /
//																			   /
//																			   /
//	 ____  __.                       __         .__       _____ ________	   /
//	|    |/ _|______ ___.__. _______/  |______  |  |     /  |  |\_____  \	   /
//	|      < \_  __ <   |  |/  ___/\   __\__  \ |  |    /   |  |_/  ____/	   /
//	|    |  \ |  | \/\___  |\___ \  |  |  / __ \|  |__ /    ^   /       \	   /
//	|____|__ \|__|   / ____/____  > |__| (____  /____/ \____   |\_______ \	   /
//	        \/       \/         \/            \/            |__|        \/	   /
*******************************************************************************/

#include <iostream>

int main(int argc, char **argv) {
	char		c;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	} else {
		for (int index_array = 1; index_array  < argc; index_array++) {
			for (int index_string = 0; argv[index_array][index_string]; index_string++) {
				if (argv[index_array][index_string] >= 'a' && argv[index_array][index_string] <= 'z')
					c = (argv[index_array][index_string] - 32);
				else
					c = argv[index_array][index_string];
				std::cout << c;
			}
		}
	}
	std::cout << std::endl;
	return (0);
}