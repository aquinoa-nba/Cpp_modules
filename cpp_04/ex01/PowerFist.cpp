#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	std::cout << NO_COLOR "Constructor for Power Fist called" << std::endl;
}

PowerFist::PowerFist(PowerFist const &other) : AWeapon("Power Fist", 50, 8)
{
	*this = other;
}

void	PowerFist::attack(void) const
{
	std::cout << NO_COLOR "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist(void)
{
	std::cout << NO_COLOR "Destructor for Power Fist called" << std::endl;
}

PowerFist& PowerFist::operator = (PowerFist const &other)
{
	if (this != &other)
	{
		_name = other._name;
		_damage = other._damage;
		_actionPoints = other._actionPoints;
	}
	return *this;
}
