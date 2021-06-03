#include <iostream>

int		main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	strPtr = &str;
	std::string&	strRef = str;

	std::cout <<	"str\t"		<< str << std::endl;
	std::cout <<	"strPtr\t"	<< *strPtr << std::endl;
	std::cout <<	"strRef\t"	<< strRef << std::endl;
}
