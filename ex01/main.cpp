#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void)
{
	const int N = 10;

	Zombie *horde = zombieHorde(N, "test");
	if (!horde){
		std::cout << "Cannot allocate horde..." << std::endl;
		return EXIT_CANNOT_ALLOCATE_HEAP_MEMORY;
	}
	for (int i = 0; i < N; ++i)
		horde[i].announce();
	delete[] horde;
	return EXIT_OK;
}

