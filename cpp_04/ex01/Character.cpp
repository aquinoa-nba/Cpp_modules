#include "Character.hpp"

Character::Character(std::string const & name)
	: _name(name), _actionPoints(40), _weapon(NULL)
{
	std::cout << GREEN "Constructor for Character called" << std::endl;
}

Character::Character(Character const &other)
{
	*this = other;
}

Character::~Character(void)
{
	std::cout << GREEN "Destructor for Character called" << std::endl;
}

void	Character::recoverAP(void)
{
	std::cout << GREEN "Character " << _name << " recover AP " << std::endl;
	_actionPoints += 10;
	if (_actionPoints > 40)
		_actionPoints = 40;
}

void	Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
	std::cout << NO_COLOR "Character " << _name << " equiped " << _weapon->getName() << std::endl;
}

void	Character::attack(Enemy *enemy)
{
	if (enemy->getHP() > 0)
	{
		if (_weapon != NULL)
		{
			if (_actionPoints >= _weapon->getAPCost())
			{
				std::cout << GREEN << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
				_weapon->attack();
				enemy->takeDamage(_weapon->getDamage());
				_actionPoints -= _weapon->getAPCost();
				if (_actionPoints < 0)
					_actionPoints = 0;
				if (enemy->getHP() <= 0)
				{
					std::cout << NO_COLOR "Enemy " << enemy->getType() << " died" << std::endl;
					delete enemy;
				}
			}
			else
				std::cout << GREEN "Not enought AP" << std::endl;
		}
		else
			std::cout << "Character " << _name << " is unarmed" << std::endl;
	}
	else
		std::cout << "Enemy " << enemy->getType() << " is already dead" << std::endl;
}

std::string	Character::getName(void) const
{
	return _name;
}

int	Character::getAPCost(void) const
{
	return _actionPoints;
}

AWeapon*	Character::getWeapon(void) const
{
	return _weapon;
}

Character&	Character::operator = (Character const &other)
{
	if (this != &other)
	{
		_name = other._name;
		_actionPoints = other._actionPoints;
		_weapon = other._weapon;
	}
	return *this;
}

std::ostream&	operator << (std::ostream &out, Character const &character)
{
	if (character.getWeapon() != NULL)
		out << NO_COLOR << character.getName() << " has " << character.getAPCost() << " AP and wields a " << character.getWeapon()->getName() << std::endl;
	else
		out << NO_COLOR << character.getName() << " has " << character.getAPCost() << " AP and is unarmed" << std::endl;
	return out;
}
