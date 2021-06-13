#include "Peon.hpp"

Peon::Peon(std::string const &name) : Victim(name)
{
	std::cout <<  "Zog zog." << std::endl;
}

Peon::Peon(Peon const &other) : Victim(other._name)
{
	*this = other;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

Peon& Peon::operator = (Peon const &other)
{
	if (this != &other)
		_name = other._name;
	return *this;
}
