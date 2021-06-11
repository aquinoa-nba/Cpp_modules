#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;

	std::cout << "NINJ4-TP " << _name <<  B_WHITE " created" NO_COLOR << std::endl;
}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name)
{
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;

	std::cout << "NINJ4-TP " << _name <<  B_WHITE " created" NO_COLOR << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other) : ClapTrap(other._name)
{
	std::cout << B_WHITE "Copy constructor for NINJ4-TP called" NO_COLOR << std::endl;
	*this = other;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NINJ4-TP " << _name << B_WHITE " destroyed" NO_COLOR << std::endl;
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " B_YELLOW << _name << NO_COLOR " attacks " B_PURPLE << target \
				<< NO_COLOR " at range, causing " B_RED << _rangedAttackDamage \
				<< NO_COLOR " points of damage!" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " B_YELLOW << _name << NO_COLOR " attacks " B_PURPLE << target \
				<< NO_COLOR " at mellee, causing " B_RED << _meleeAttackDamage \
				<< NO_COLOR " points of damage!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
	if (_energyPoints >= 30)
	{
		std::cout << "NINJ4-TP " B_YELLOW << _name << NO_COLOR " laugh at " B_PURPLE << clap.getName() << NO_COLOR << std::endl;
		_energyPoints -= 30;
	}
	else
		std::cout << std::endl << "NINJ4-TP " B_YELLOW << _name << NO_COLOR " : Not enought energy..." << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	if (_energyPoints >= 30)
	{
		std::cout << "NINJ4-TP " B_YELLOW << _name << NO_COLOR " kicks " B_PURPLE << frag.getName() << NO_COLOR << std::endl;
		_energyPoints -= 30;
	}
	else
		std::cout << std::endl << "NINJ4-TP " B_YELLOW << _name << NO_COLOR " : Not enought energy..." << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
	if (_energyPoints >= 30)
	{
		std::cout << "NINJ4-TP " B_YELLOW << _name << NO_COLOR " looking for " B_PURPLE << scav.getName() << NO_COLOR << std::endl;
		_energyPoints -= 30;
	}
	else
		std::cout << std::endl << "NINJ4-TP " B_YELLOW << _name << NO_COLOR " : Not enought energy..." << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
	if (_energyPoints >= 30)
	{
		std::cout << "NINJ4-TP " B_YELLOW << _name << NO_COLOR " hits " B_PURPLE << ninja.getName() << NO_COLOR << std::endl;
		_energyPoints -= 30;
	}
	else
		std::cout << std::endl << "NINJ4-TP " B_YELLOW << _name << NO_COLOR " : Not enought energy..." << std::endl;
}

NinjaTrap& NinjaTrap::operator = (NinjaTrap const &other)
{
	std::cout << "Assignation operator for NINJ4-TP called" << std::endl;
	if (this != &other)
	{
		_hitPoints = other._hitPoints;
		_maxHitPoints = other._maxHitPoints;
		_energyPoints = other._energyPoints;
		_maxEnergyPoints = other._maxEnergyPoints;
		_level = other._level;
		_meleeAttackDamage = other._meleeAttackDamage;
		_rangedAttackDamage = other._rangedAttackDamage;
		_armorDamageReduction = other._armorDamageReduction;
	}
	return *this;
}
