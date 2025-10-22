#include "Harl.hpp"
#include <iostream>

int main(int argc, const char *argv[])
{
	Harl harl;
	if (argc != 2)
	{
		std::cerr << "Invalid argment" << std::endl;
		return EXIT_FAILURE;
	}
	harl.complain(argv[1]);
	return EXIT_SUCCESS;
}
