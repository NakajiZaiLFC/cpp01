#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = Zombie::newZombie("foo");
	zombie->announce();
	Zombie::randomChump("bar");
	delete zombie;
	return 0;
}