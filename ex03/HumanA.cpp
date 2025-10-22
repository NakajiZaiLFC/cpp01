#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon)
	: m_name(name), m_weapon(weapon)
{
}

HumanA::HumanA(const HumanA &other)
	: m_name(other.m_name), m_weapon(other.m_weapon)
{
}

HumanA &HumanA::operator=(const HumanA &other)
{
	if (this != &other)
	{
		this->m_name = other.m_name;
	}
	return *this;
}

HumanA::~HumanA()
{
}

const std::string &HumanA::getName() const
{
	return m_name;
}

void HumanA::setName(const std::string &name)
{
	m_name = name;
}

void HumanA::attack() const
{
	std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}
