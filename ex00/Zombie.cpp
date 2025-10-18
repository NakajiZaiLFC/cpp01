#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	Zombie::setName(name);
}

Zombie::Zombie(const Zombie& other) {
    *this = other;
}

Zombie& Zombie::operator=(const Zombie& other) {
    if (this != &other) {
    }
    return *this;
}

Zombie::~Zombie() {
    
}

/**
 * ===== setter / getter =====
 */

// ===== name =====

void Zombie::setName(std::string name)
{
	m_name = name;
}

std::string Zombie::getName(void) const
{
	return (m_name);
}

void Zombie::announce(void) const
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
