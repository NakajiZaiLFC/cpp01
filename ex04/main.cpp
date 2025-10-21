#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

static bool areArgumentsValid(int argc, const char *argv[])
{
	if (argc != 4)
		return false;

	const std::string searchPattern = argv[2];
	if (searchPattern.empty())
		return false;

	return true;
}

static bool readEntireFileIntoString(const std::string &inputFilePath, std::string &outFileContent)
{
	std::ifstream inputFile(inputFilePath.c_str());
	if (!inputFile)
	{
		std::cerr << "Cannont open file: " << inputFilePath << std::endl;
		return false;
	}

	std::ostringstream buffer;
	buffer << inputFile.rdbuf();
	outFileContent = buffer.str();
	return true;
}

static std::string replaceAllOccurrences(const std::string &text,
								  const std::string &s1, 
								  const std::string &s2)
{

}