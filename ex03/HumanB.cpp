#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name)
	 : m_name(name), m_weapon(NULL)
{
}

HumanB::HumanB(const HumanB& other)
	: m_name(other.m_name), m_weapon(other.m_weapon)
{
}

HumanB& HumanB::operator=(const HumanB& other) {
    if (this != &other) 
	{
		this->m_name = other.m_name;
		this->m_weapon = other.m_weapon;
    }
    return *this;
}

HumanB::~HumanB() {
    
}

const std::string &HumanB::getName() const
{
	return m_name;
}

void HumanB::setName(const std::string &name)
{
	m_name = name;
}

void HumanB::setWeapon(Weapon& weapon)
{
	m_weapon = &weapon;
}

void HumanB::attack() const
{
	if (m_weapon)
		std::cout << m_name << " attacks with their " << m_weapon->getType() << std::endl;
	else
		std::cout << m_name << " has no weapon to attack with" << std::endl;
}
