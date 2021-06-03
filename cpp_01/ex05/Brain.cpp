#include "Brain.hpp"

Brain::Brain()
{
	std::cout << std::endl << PURPLE "Brain " NO_COLOR "is created!" << std::endl;
}

std::string	Brain::identify()
{
	std::stringstream adds;

	adds << this;
	return(adds.str());
}

Brain::~Brain()
{
	std::cout << std::endl << PURPLE "Brain " NO_COLOR "is destroyed!" << std::endl << std::endl;
}
