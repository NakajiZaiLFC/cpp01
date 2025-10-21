#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
public:
    HumanA(const std::string& name, Weapon& weapon);
    HumanA(const HumanA& other);
    HumanA& operator=(const HumanA& other);
    ~HumanA();
	const std::string& getName() const;
	void setName(const std::string& name);
	void attack() const;

private:
	HumanA();
	std::string m_name;
	Weapon& m_weapon;
    
};

#endif
