#include "Pony.hpp"

Pony::Pony()
{
	std::cout	<< "Pony was " GREEN "born" NO_COLOR << std::endl;
}

void	Pony::setName(std::string name)
{
	_name = name;
}

void	Pony::setColor(std::string color)
{
	_color = color;
}

void	Pony::setFavoriteMeal(std::string favoriteMeal)
{
	_favoriteMeal = favoriteMeal;
}

std::string	Pony::getName()
{
	return (_name);
}

std::string	Pony::getColor()
{
	return (_color);
}

std::string	Pony::getFavoriteMeal()
{
	return (_favoriteMeal);
}

void	Pony::eat()
{
	std::cout	<< "Pony " << _name << YELLOW " eating " NO_COLOR << _favoriteMeal << std::endl;
}

Pony::~Pony()
{
	std::cout	<< "Pony " << _name << RED " died" NO_COLOR << std::endl;
}
