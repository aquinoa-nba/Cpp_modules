#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) : _hitPoints(100), _maxHitPoints(100), \
	_energyPoints(50), _maxEnergyPoints(50), _level(1), _name(name), \
	_meleeAttackDamage(20), _rangedAttackDamage(10), _armorDamageReduction(3)
{
	std::cout << _name <<  B_WHITE " created" NO_COLOR << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	std::cout << B_WHITE "Copy constructor called" NO_COLOR << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << B_WHITE " destroyed" NO_COLOR << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " B_YELLOW << _name << NO_COLOR " attacks " B_PURPLE << target \
				<< NO_COLOR " at range, causing " B_RED << _rangedAttackDamage \
				<< NO_COLOR " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " B_YELLOW << _name << NO_COLOR " attacks " B_PURPLE << target \
				<< NO_COLOR " at mellee, causing " B_RED << _meleeAttackDamage \
				<< NO_COLOR " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
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
	std::cout << "FR4G-TP " B_YELLOW << _name << NO_COLOR " take " B_RED << amount \
				<< NO_COLOR " point of damage!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
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
	std::cout << "FR4G-TP " B_YELLOW << _name << NO_COLOR " repaired " B_GREEN << amount \
				<< NO_COLOR " hit points!" << std::endl;
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

std::string	ScavTrap::getName(void)
{
	return _name;
}

unsigned int ScavTrap::getMeleeAttackDamage(void)
{
	return _meleeAttackDamage;
}
unsigned int ScavTrap::getRangedAttackDamage(void)
{
	return _rangedAttackDamage;
}

ScavTrap& ScavTrap::operator = (ScavTrap const &other)
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
