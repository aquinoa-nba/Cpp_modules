#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name)
	: ClapTrap(name)
{
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;

	std::cout << "SC4V-TP " << _name <<  B_WHITE " created" NO_COLOR << std::endl;
}

bool	ScavTrap::challengeNewcomer(void)
{
	std::string	actionArr[5] = {"opens the door", "closes the door", \
	"repairs the door", "charging", "challenging people"};

	if (_energyPoints >= 15)
	{
		srand(time(NULL));
		std::cout << B_YELLOW << _name << NO_COLOR " : " B_BLUE << actionArr[rand() % 5] << NO_COLOR << std::endl;
		_energyPoints -= 15;
		sleep(1);
		return true;
	}
	else
	{
		std::cout << B_YELLOW << _name << NO_COLOR " : Not enought energy..." << std::endl << std::endl;
		return false;
	}
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << _name << B_WHITE " destroyed" NO_COLOR << std::endl;
}
