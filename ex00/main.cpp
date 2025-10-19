#include "Zombie.hpp"

const int EXIT_OK = 0;
const int EXIT_CANNOT_ALLOCATE_HEAP_MEMORY = 1;

Zombie *newZombie(const std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombie *zombie = newZombie("heap");
	if (!zombie)
	{
		std::cout << "Cannot allocated memory..." << std::endl;
		return (EXIT_CANNOT_ALLOCATE_HEAP_MEMORY);
	}
	zombie->announce();
	randomChump("stack");
	delete zombie;
	return (EXIT_OK);
}