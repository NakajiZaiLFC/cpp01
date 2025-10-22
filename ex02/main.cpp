#include <iostream>
#include <iomanip>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << std::left << std::setw(25) << "Address of str: " << &str << std::endl;
	std::cout << std::left << std::setw(25) << "Address held by PTR: " << stringPTR << std::endl;
	std::cout << std::left << std::setw(25) << "Address referred by REF: " << &stringREF << std::endl;

	std::cout << std::left << std::setw(25) << "Value of str: " << str << std::endl;
	std::cout << std::left << std::setw(25) << "Value held by PTR: " << *stringPTR << std::endl;
	std::cout << std::left << std::setw(25) << "Value referred by REF: "<< stringREF << std::endl;
}
