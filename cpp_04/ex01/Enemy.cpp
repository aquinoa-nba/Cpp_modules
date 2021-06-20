#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
	std::cout << NO_COLOR "Constructor for Enemy called" << std::endl;
}

Enemy::Enemy(Enemy const &other) { *this = other; }

Enemy::~Enemy(void)
{
	std::cout << NO_COLOR "Destructor for Enemy called" << std::endl;
}

int	Enemy::getHP(void) const { return _hp; }

std::string	Enemy::getType(void) const { return _type; }

void	Enemy::takeDamage(int damage)
{
	if (damage > 0)
		_hp -= damage;
	if (_hp < 0)
		_hp = 0;

}

Enemy& Enemy::operator = (Enemy const &other)
{
	if (this != &other)
	{
		_hp = other._hp;
		_type = other._type;
	}
	return *this;
}

std::ostream&	operator << (std::ostream &out, Enemy const &enemy)
{
	out << NO_COLOR << enemy.getType() << " has " << enemy.getHP() << " HP" << std::endl;
	return out;
}
