#include "BurningBlade.hpp"

BurningBlade::BurningBlade(void) : AWeapon("Burning Blade", 8, 40)
{
	std::cout << NO_COLOR "Constructor for Burning Blade called" << std::endl;
}

BurningBlade::BurningBlade(BurningBlade const &other) : AWeapon("Burning Blade", 8, 40)
{
	*this = other;
}

void	BurningBlade::attack(void) const
{
	std::cout << NO_COLOR "* vzhuh vzhuh *" << std::endl;
}

BurningBlade::~BurningBlade(void)
{
	std::cout << NO_COLOR "Destructor for Burning Blade called" << std::endl;
}

BurningBlade& BurningBlade::operator = (BurningBlade const &other)
{
	if (this != &other)
	{
		_name = other._name;
		_damage = other._damage;
		_actionPoints = other._actionPoints;
	}
	return *this;
}
