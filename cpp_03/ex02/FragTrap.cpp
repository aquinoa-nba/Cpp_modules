#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name)
	: ClapTrap(name)
{
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;

	std::cout << "FR4G-TP " << _name <<  B_WHITE " created" NO_COLOR << std::endl;
}

bool	FragTrap::vaulthunterDotExe(std::string const & target)
{
	std::string	attackArr[5] = {"Rotating Chainsaw", "Lightsaber", "Grenade", "Laser" , "Homing Rocket"};

	if (_energyPoints >= 25)
	{
		srand(time(NULL));
		std::cout << std::endl << B_YELLOW << _name << NO_COLOR " attacks " B_PURPLE << target \
				<< NO_COLOR " with a " B_BLUE << attackArr[rand() % 5] << NO_COLOR << std::endl;
		_energyPoints -= 25;
		sleep(1);
		return true;
	}
	else
	{
		std::cout << std::endl << B_YELLOW << _name << NO_COLOR " : Not enought energy..." << std::endl << std::endl;
		return false;
	}
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << _name << B_WHITE " destroyed" NO_COLOR << std::endl;
}
