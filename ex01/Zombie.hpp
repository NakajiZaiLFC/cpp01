#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <new>

const int EXIT_OK = 0;
const int EXIT_CANNOT_ALLOCATE_HEAP_MEMORY = 1;

class Zombie
{
	public:
		Zombie();
		explicit Zombie(std::string name);
		Zombie(const Zombie &other);
		Zombie &operator=(const Zombie &other);
		~Zombie();
		void announce(void) const;
		void setName(std::string name);
		std::string getName(void) const;

	private:
		std::string m_name;
};

#endif
