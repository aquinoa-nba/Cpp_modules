#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name) : _hitPoints(100), _maxHitPoints(100), _level(1), _name(name)
{
	std::cout << "CL4P-TP " << _name <<  B_WHITE " created" NO_COLOR << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << B_WHITE "Copy constructor called" NO_COLOR << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP " << _name << B_WHITE " destroyed" NO_COLOR << std::endl;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << B_YELLOW << _name << NO_COLOR " attacks " B_PURPLE << target \
				<< NO_COLOR " at range, causing " B_RED << _rangedAttackDamage \
				<< NO_COLOR " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << B_YELLOW << _name << NO_COLOR " attacks " B_PURPLE << target \
				<< NO_COLOR " at mellee, causing " B_RED << _meleeAttackDamage \
				<< NO_COLOR " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (static_cast<int>(amount) > 0)
	{
		amount	-= _armorDamageReduction;
		if (amount < 0)
			amount = 0;
		if (_hitPoints - static_cast<int>(amount) < 0)
		{
			amount = _hitPoints;
			_hitPoints = 0;
		}
		else
			_hitPoints -= amount;
	}
	else
		amount = 0;
	std::cout << B_YELLOW << _name << NO_COLOR " take " B_RED << amount \
				<< NO_COLOR " point of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints + amount > _maxHitPoints)
	{
		amount = _maxHitPoints - _hitPoints;
		_hitPoints = _maxHitPoints;
	}
	else
	{
		_hitPoints += amount;
	}
	std::cout << B_YELLOW << _name << NO_COLOR " repaired " B_GREEN << amount \
				<< NO_COLOR " hit points!" << std::endl;
}

std::string	ClapTrap::getName(void)
{
	return _name;
}

unsigned int ClapTrap::getMeleeAttackDamage(void)
{
	return _meleeAttackDamage;
}
unsigned int ClapTrap::getRangedAttackDamage(void)
{
	return _rangedAttackDamage;
}

ClapTrap& ClapTrap::operator = (ClapTrap const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
	{
		_hitPoints = other._hitPoints;
		_maxHitPoints = other._maxHitPoints;
		_energyPoints = other._energyPoints;
		_maxEnergyPoints = other._maxEnergyPoints;
		_level = other._level;
		_name = other._name;
		_meleeAttackDamage = other._meleeAttackDamage;
		_rangedAttackDamage = other._rangedAttackDamage;
		_armorDamageReduction = other._armorDamageReduction;
	}
	return *this;
}
