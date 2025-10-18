#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP'

#include <iostream>

class Zombie {
public:
    Zombie(std::string name);
    Zombie(const Zombie& other);
    Zombie& operator=(const Zombie& other);
    ~Zombie();
	void announce(void) const;
	// static Zombie* newZombie(std::string name);
	// static void randomChump(std::string name);
	void setName(std::string name);
	std::string getName(void) const;

private:
    std::string m_name;

};

#endif
