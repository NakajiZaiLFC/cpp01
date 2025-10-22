#include "Zombie.hpp"

static bool isNonPositive(int N)
{
	return N <= 0;
}

Zombie *zombieHorde(int N, std::string name)
{
	if (isNonPositive(N))
		return NULL;
	Zombie *horde = NULL;
	try
	{
		horde = new Zombie[N];
	}
	catch (const std::bad_alloc &)
	{
		return NULL;
	}
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return horde;
}
