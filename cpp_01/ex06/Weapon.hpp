#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

# define	GREEN		"\033[0;32m"
# define	B_GREEN		"\033[1;32m"
# define	B_RED		"\033[1;31m"
# define	PURPLE		"\033[0;35m"
# define	B_PURPLE	"\033[1;35m"
# define	WHITE		"\033[1;37m"
# define	YELLOW		"\033[0;33m"
# define	NO_COLOR	"\033[0m"

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string type);
		const std::string&	getType();
		void	setType(std::string type);
		~Weapon();
};

#endif
