#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

# define GREEN		"\033[0;32m"
# define RED		"\033[0;31m"
# define YELLOW		"\033[0;33m"
# define NO_COLOR	"\033[0m"

class	Pony
{

private:

	std::string	name;
	std::string	color;
	std::string	favorite_meal;

public:

	void		SetName(std::string str);
	void		SetColor(std::string str);
	void		SetFavoriteMeal(std::string str);
	std::string	GetName();
	std::string	GetColor();
	std::string	GetFavoriteMeal();
	void		eat();
	Pony();
	~Pony();

};

#endif
