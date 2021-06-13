#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
	: _name(name), _actionPoints(apcost), _damage(damage)
{
	std::cout << NO_COLOR "Constructor for Weapon called" << std::endl;
}

AWeapon::AWeapon(AWeapon const &other)
{
	*this = other;
}

AWeapon::~AWeapon(void)
{
	std::cout << NO_COLOR "Destructor for Weapon called" << std::endl;
}

std::string	AWeapon::getName(void) const
{
	return _name;
}

int	AWeapon::getDamage(void) const
{
	return _damage;
}

int	AWeapon::getAPCost(void) const
{
	return _actionPoints;
}

AWeapon&	AWeapon::operator = (AWeapon const &other)
{
	if (this != &other)
	{
		_name = other._name;
		_damage = other._damage;
		_actionPoints = other._actionPoints;
	}
	return *this;
}
