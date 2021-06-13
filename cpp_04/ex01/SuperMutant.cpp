#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << YELLOW "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &other) : Enemy(170, "Super Mutant")
{
	*this = other;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << YELLOW "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}

SuperMutant&	SuperMutant::operator = (SuperMutant const &other)
{
	if (this != &other)
	{
		_hp = other._hp;
		_type = other._type;
	}
	return *this;
}
