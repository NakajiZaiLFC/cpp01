#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
public:
    explicit Weapon(const std::string& type);
    Weapon(const Weapon& other);
    Weapon& operator=(const Weapon& other);
    ~Weapon();
	const std::string& getType() const;
	void setType(const std::string& type);

private:
    std::string m_type;
};

#endif
