#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
	m_levelStrings[0] = "DEBUG";
	m_levelStrings[1] = "INFO";
	m_levelStrings[2] = "WARNING";
	m_levelStrings[3] = "ERROR";
	m_functions[0] = &Harl::debug;
	m_functions[1] = &Harl::info;
	m_functions[2] = &Harl::warning;
	m_functions[3] = &Harl::error;
}

Harl::Harl(const Harl &other)
{
	*this = other;
}

Harl &Harl::operator=(const Harl &other)
{
	if (this != &other)
	{
	}
	return *this;
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level == m_levelStrings[i])
			(this->*m_functions[i])();
	}
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
