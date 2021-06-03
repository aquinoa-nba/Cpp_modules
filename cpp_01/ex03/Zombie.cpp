#include "Zombie.hpp"

void	Zombie::SetName(std::string name)
{
	this->name = name;
}

void	Zombie::SetType(std::string type)
{
	this->type = type;
}

std::string	Zombie::GetName()
{
	return (this->name);
}

std::string	Zombie::GetType()
{
	return (this->type);
}

void	Zombie::announce()
{
	std::cout 	<< "<" << GREEN << this->name << NO_COLOR \
				<< " (" << this->type << ")" << ">" \
				<< PURPLE << "\tBraiiiiiiinnnssss..." << NO_COLOR << std::endl;
}

Zombie::~Zombie()
{
	std::cout 	<< "Zombie\t" \
				<< GREEN << this->name << NO_COLOR \
				<< "\tdestroyed!" << std::endl;
}
