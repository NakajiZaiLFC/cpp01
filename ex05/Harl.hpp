#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
public:
    Harl();
    Harl(const Harl& other);
    Harl& operator=(const Harl& other);
    ~Harl();
	void complain(std::string level);

private:
	std::string m_levelStrings[4];
	void (Harl::*m_functions[4])(void);//!?
	// Harl* functions[4];
    void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
