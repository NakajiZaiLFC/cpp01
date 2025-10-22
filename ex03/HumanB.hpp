#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
public:
    explicit HumanB(const std::string& name);
    HumanB(const HumanB& other);
    HumanB& operator=(const HumanB& other);
    ~HumanB();
	const std::string &getName() const;
	void setName(const std::string &name);
	void attack() const;
	void setWeapon(Weapon& weapon);

private:
	HumanB();
	std::string m_name;
	Weapon* m_weapon;
};

#endif
