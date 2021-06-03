#include "Zombie.hpp"

void	Zombie::setName(std::string name)
{
	_name = name;
}

void	Zombie::setType(std::string type)
{
	_type = type;
}

std::string	Zombie::getName()
{
	return (_name);
}

std::string	Zombie::getType()
{
	return (_type);
}

void	Zombie::announce()
{
	std::cout 	<< "<" GREEN << _name << NO_COLOR " (" << _type << ")>" \
					PURPLE "\tBraiiiiiiinnnssss..." NO_COLOR << std::endl;
}

Zombie::~Zombie()
{
	std::cout 	<< "Zombie\t" GREEN << _name << NO_COLOR "\tdestroyed!" << std::endl;
}
