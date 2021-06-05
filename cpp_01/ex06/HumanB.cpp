#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	std::cout << "Human " B_PURPLE << _name << GREEN " came!" NO_COLOR << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << B_PURPLE << _name << NO_COLOR " attacks with his " YELLOW << _weapon->getType() << NO_COLOR << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Human " B_PURPLE << _name << B_RED " is gone!" NO_COLOR << std::endl;
}
