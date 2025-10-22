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
		return false;

	std::ostringstream buffer;
	buffer << inputFile.rdbuf();
	outFileContent = buffer.str();
	return true;
}

static std::string replaceAllOccurrences(const std::string &text,
										 const std::string &patternToFind,
										 const std::string &replacementText)
{
	std::string result;
	result.reserve(text.size());

	std::string::size_type startPos = 0;
	const std::string::size_type patLen = patternToFind.size();

	while (1)
	{
		std::string::size_type foundPos = text.find(patternToFind, startPos);
		if (foundPos == std::string::npos)
		{
			result.append(text, startPos, std::string::npos);
			break;
		}

		result.append(text, startPos, foundPos - startPos);
		result.append(replacementText);
		startPos = foundPos + patLen;
	}
	return result;
}

static bool writeStringToFile(const std::string &outputFilePath, const std::string &content)
{
	std::ofstream ofs(outputFilePath.c_str());
	if (!ofs)
		return false;
	ofs << content;
	return ofs;
}

int main(int argc, const char *argv[])
{
	if (!areArgumentsValid(argc, argv))
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
		return EXIT_FAILURE;
	}

	const std::string inputPath = argv[1];
	const std::string s1 = argv[2];
	const std::string s2 = argv[3];

	std::string original;
	if (!readEntireFileIntoString(inputPath, original))
	{
		std::cerr << "Error: cannot open input file: " << inputPath << "\n";
		return EXIT_FAILURE;
	}

	const std::string replaced = replaceAllOccurrences(original, s1, s2);

	const std::string outputPath = inputPath + ".replace";
	if (!writeStringToFile(outputPath, replaced))
	{
		std::cerr << "Error: cannot open output file: " << outputPath << "\n";
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
