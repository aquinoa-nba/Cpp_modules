#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	_name = name;
	_type = type;
	std::cout << std::endl 	<< "Zombie " GREEN << _name << NO_COLOR \
								" rise from the dead!" << std::endl;
}

void	Zombie::announce()
{
	std::cout << std::endl << "<" GREEN << _name << NO_COLOR " (" << _type << ")> " \
								PURPLE "Braiiiiiiinnnssss..." NO_COLOR << std::endl;
}

Zombie::~Zombie()
{
	std::cout << std::endl << "Zombie " GREEN << _name << NO_COLOR \
								" destroyed!" << std::endl << std::endl;
}
