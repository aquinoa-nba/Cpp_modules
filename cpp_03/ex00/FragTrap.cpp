#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name) : _hitPoints(100), _maxHitPoints(100), \
	_energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name), \
	_meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "FR4G-TP " << _name <<  B_WHITE " created" NO_COLOR << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
{
	std::cout << B_WHITE "Copy constructor for FR4G-TP called" NO_COLOR << std::endl;
	*this = other;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP " << _name << B_WHITE " destroyed" NO_COLOR << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " B_YELLOW << _name << NO_COLOR " attacks " B_PURPLE << target \
				<< NO_COLOR " at range, causing " B_RED << _rangedAttackDamage \
				<< NO_COLOR " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " B_YELLOW << _name << NO_COLOR " attacks " B_PURPLE << target \
				<< NO_COLOR " at mellee, causing " B_RED << _meleeAttackDamage \
				<< NO_COLOR " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
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

bool	FragTrap::vaulthunterDotExe(std::string const & target)
{
	std::string	attackArr[5] = {"Rotating Chainsaw", "Lightsaber", "Grenade", "Laser" , "Homing Rocket"};

	if (_energyPoints >= 25)
	{
		srand(time(NULL));
		std::cout << "FR4G-TP " B_YELLOW << _name << NO_COLOR " attacks " B_PURPLE << target \
				<< NO_COLOR " with a " B_BLUE << attackArr[rand() % 5] << NO_COLOR << std::endl;
		_energyPoints -= 25;
		sleep(1);
		return true;
	}
	else
	{
		std::cout << "FR4G-TP " B_YELLOW << _name << NO_COLOR " : Not enought energy..." << std::endl;
		return false;
	}
}

std::string	FragTrap::getName(void)
{
	return _name;
}

unsigned int FragTrap::getMeleeAttackDamage(void)
{
	return _meleeAttackDamage;
}
unsigned int FragTrap::getRangedAttackDamage(void)
{
	return _rangedAttackDamage;
}

FragTrap& FragTrap::operator = (FragTrap const &other)
{
	std::cout << "Assignation operator for FR4G-TP called" << std::endl;
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
