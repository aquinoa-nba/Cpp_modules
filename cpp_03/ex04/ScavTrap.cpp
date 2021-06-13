#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;

	std::cout << "SC4V-TP " << _name <<  B_WHITE " created" NO_COLOR << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other._name)
{
	std::cout << B_WHITE "Copy constructor for SC4V-TP called" NO_COLOR << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SC4V-TP " << _name << B_WHITE " destroyed" NO_COLOR << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " B_YELLOW << _name << NO_COLOR " attacks " B_PURPLE << target \
				<< NO_COLOR " at range, causing " B_RED << _rangedAttackDamage \
				<< NO_COLOR " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " B_YELLOW << _name << NO_COLOR " attacks " B_PURPLE << target \
				<< NO_COLOR " at mellee, causing " B_RED << _meleeAttackDamage \
				<< NO_COLOR " points of damage!" << std::endl;
}

bool	ScavTrap::challengeNewcomer(void)
{
	std::string	actionArr[5] = {"opens the door", "closes the door", \
	"repairs the door", "charging", "challenging people"};

	if (_energyPoints >= 15)
	{
		srand(time(NULL));
		std::cout << "SC4V-TP " B_YELLOW << _name << NO_COLOR " : " B_BLUE << actionArr[rand() % 5] << NO_COLOR << std::endl;
		_energyPoints -= 15;
		sleep(1);
		return true;
	}
	else
	{
		std::cout << "SC4V-TP " B_YELLOW << _name << NO_COLOR " : Not enought energy..." << std::endl;
		return false;
	}
}

ScavTrap& ScavTrap::operator = (ScavTrap const &other)
{
	std::cout << "Assignation operator for SC4V-TP called" << std::endl;
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
