#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::Zombie(const Zombie &other) : m_name(other.m_name)
{
	*this = other;
}

Zombie &Zombie::operator=(const Zombie &other)
{
	if (this != &other)
	{
		m_name = other.m_name;
	}
	return *this;
}

Zombie::~Zombie()
{
	std::cout << m_name << " has been destroyed" << std::endl;
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
	return m_name;
}

void Zombie::announce(void) const
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
