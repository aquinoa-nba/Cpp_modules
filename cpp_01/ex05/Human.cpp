#include "Human.hpp"

Human::Human()
{
	std::cout << std::endl << "Human was " BOLD_GREEN "born " NO_COLOR "=)" << std::endl << std::endl;
}

std::string	Human::identify()
{
	return (_brain.identify());
}

Brain&	Human::getBrain()
{
	return (_brain);
}

Human::~Human()
{
	std::cout << std::endl << "Human " BOLD_RED "died " NO_COLOR "=(" << std::endl;
}
