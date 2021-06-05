#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
	std::cout << "Weapon " YELLOW << _type << GREEN " was created!" NO_COLOR << std::endl;
}

const std::string& Weapon::getType()
{
	return _type;
}

void	Weapon::setType(std::string type)
{
	_type = type;
	std::cout << "Set weapon " YELLOW << _type << NO_COLOR << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon " YELLOW << _type << B_RED " destroyed!" NO_COLOR << std::endl;
}
