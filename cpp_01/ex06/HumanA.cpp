#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	_name = name;
	std::cout << "Human " B_PURPLE << _name << GREEN " came " NO_COLOR "with " YELLOW << _weapon.getType() << NO_COLOR << std::endl;
}

void	HumanA::attack()
{
	std::cout << B_PURPLE << _name << NO_COLOR " attacks with his " YELLOW << _weapon.getType() << NO_COLOR << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Human " B_PURPLE << _name << B_RED " is gone!" NO_COLOR << std::endl;
}
