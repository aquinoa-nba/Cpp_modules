#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	std::cout << std::endl << "Zombie " << GREEN << this->name << NO_COLOR << " returned from the dead!" << std::endl;
}

void	Zombie::announce()
{
	std::cout << std::endl << "<" << GREEN << this->name << NO_COLOR << " (" << this->type << ")" << "> " << PURPLE << "Braiiiiiiinnnssss..." << NO_COLOR << std::endl;
}

Zombie::~Zombie()
{
	std::cout << std::endl << "Zombie " << GREEN << this->name << NO_COLOR << " destroyed!" << std::endl << std::endl;
}
