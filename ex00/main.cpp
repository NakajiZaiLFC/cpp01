#include "Zombie.hpp"

Zombie *newZombie(const std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombie *zombie = newZombie("heap");
	if (!zombie)
	{
		std::cout << "Cannot allocate memory..." << std::endl;
		return EXIT_CANNOT_ALLOCATE_HEAP_MEMORY;
	}
	zombie->announce();
	randomChump("stack");
	delete zombie;
	return EXIT_OK;
}
