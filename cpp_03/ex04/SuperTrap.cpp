#include "SuperTrap.hpp"
#include "FragTrap.hpp"

SuperTrap::SuperTrap(std::string const &name) : ClapTrap(name), FragTrap(), NinjaTrap()
{
	std::cout << "SUP3R-TP " << _name <<  B_WHITE " created" NO_COLOR << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &other)
{
	std::cout << B_WHITE "Copy constructor for SUP3R-TP called" NO_COLOR << std::endl;
	*this = other;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUP3R-TP " << _name << B_WHITE " destroyed" NO_COLOR << std::endl;
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

SuperTrap& SuperTrap::operator = (SuperTrap const &other)
{
	std::cout << "Assignation operator for SUP3R-TP called" << std::endl;
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
