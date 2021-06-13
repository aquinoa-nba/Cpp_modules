#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
	std::cout << NO_COLOR "Constructor for Plasma Rifle called" << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &other) : AWeapon("Plasma Rifle", 21, 5)
{
	*this = other;
}

void	PlasmaRifle::attack(void) const
{
	std::cout << NO_COLOR "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle(void)
{
	std::cout << NO_COLOR "Destructor for Plasma Rifle called" << std::endl;
}

PlasmaRifle& PlasmaRifle::operator = (PlasmaRifle const &other)
{
	if (this != &other)
	{
		_name = other._name;
		_damage = other._damage;
		_actionPoints = other._actionPoints;
	}
	return *this;
}
