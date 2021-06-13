#include "Citizen.hpp"

Citizen::Citizen(std::string const &name) : Victim(name)
{
	std::cout << "BIG DICK IS BACK IN TOWN!" << std::endl;
}

Citizen::Citizen(Citizen const &other) : Victim(other._name)
{
	*this = other;
}

Citizen::~Citizen(void)
{
	std::cout << "HEY, COOL, I'M DEAD!" << std::endl;
}

void	Citizen::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a frog!" << std::endl;
}

Citizen& Citizen::operator = (Citizen const &other)
{
	if (this != &other)
		_name = other._name;
	return *this;
}
