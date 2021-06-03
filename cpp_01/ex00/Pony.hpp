#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

# define GREEN		"\033[0;32m"
# define RED		"\033[0;31m"
# define YELLOW		"\033[0;33m"
# define NO_COLOR	"\033[0m"

class	Pony
{
	private:
		std::string	_name;
		std::string	_color;
		std::string	_favoriteMeal;
	public:
		void		setName(std::string name);
		void		setColor(std::string color);
		void		setFavoriteMeal(std::string favoriteMeal);
		std::string	getName();
		std::string	getColor();
		std::string	getFavoriteMeal();
		void		eat();
		Pony();
		~Pony();
};

#endif
