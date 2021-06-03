#include "Pony.hpp"

void	Pony::SetName(std::string str)
{
	name = str;
}

void	Pony::SetColor(std::string str)
{
	color = str;
}

void	Pony::SetFavoriteMeal(std::string str)
{
	favorite_meal = str;
}

std::string	Pony::GetName()
{
	return (name);
}

std::string	Pony::GetColor()
{
	return (color);
}

std::string	Pony::GetFavoriteMeal()
{
	return (favorite_meal);
}

void	Pony::eat()
{
	std::cout << "Pony " << name << YELLOW << " eating " << NO_COLOR << favorite_meal << std::endl;
}

Pony::Pony()
{
	std::cout << "Pony was "<< GREEN << "born" << NO_COLOR << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony " << name << RED << " died" << NO_COLOR << std::endl;
}
