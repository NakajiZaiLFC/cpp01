#include "Zombie.hpp"
#include "new"

Zombie *newZombie(const std::string name)
{
	try
	{
		return (new Zombie(name));
	}
	catch (const std::bad_alloc &)
	{
		return (NULL);
	}
}
