#include "Replace.hpp"

Replace::Replace(std::string fileName, std::string s1, std::string s2)
					: _fileName(fileName), _s1(s1), _s2(s2)
{
	_fileIn.open(_fileName);
	if (_fileIn.is_open() == false)
	{
		std::cout << B_RED "Error: file " B_WHITE "\"" << _fileName << "\"" B_RED " not open..." NO_COLOR << std::endl;
		_openFlag = false;
	}
	else
	{
		std::cout << "File \"" B_PURPLE << _fileName << NO_COLOR "\" is " GREEN "opend" << NO_COLOR << std::endl;
		_openFlag = true;
	}
}

bool	Replace::checker()
{
	if (_openFlag == true)
	{
		if (_fileName.empty() || _s1.empty() || _s2.empty())
		{
			std::cout << B_RED "Empy arg..." NO_COLOR << std::endl;
			return false;
		}
		_fileOut.open(_fileName + ".replace");
		if (_fileOut.is_open() == false)
		{
			std::cout << B_RED "Error: " NO_COLOR "file \"" << _fileName + ".replace\" not open..." << std::endl;
			return false;
		}
		std::cout << "Check was " GREEN "successful" << NO_COLOR << std::endl;
		return true;
	}
	else
		return false;
}

void	Replace::replacer()
{
	std::stringstream	file;
	std::string			str;
	size_t				i = 0;

	file << _fileIn.rdbuf();
	str = file.str();
	while ((i = str.find(_s1, i)) != std::string::npos)
	{
		str.replace(i, _s1.length(), _s2);
		i += _s2.length();
	}
	_fileOut << str;
	std::cout << "Strings are " GREEN "replaced" << NO_COLOR << std::endl;
}

Replace::~Replace()
{
	if (_openFlag == true)
	{
		_fileOut.close();
		_fileIn.close();
		std::cout << "Files are " GREEN " closed" << NO_COLOR << std::endl;
	}
}
