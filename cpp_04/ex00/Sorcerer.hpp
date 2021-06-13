#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Peon.hpp"
# include "Citizen.hpp"

class Sorcerer
{
	private:
		std::string		_name;
		std::string		_title;
		Sorcerer(void);
	public:
		Sorcerer(std::string const &name, std::string const &title);
		Sorcerer(Sorcerer const &other);
		~Sorcerer(void);
		std::string	getName(void) const;
		std::string	getTitle(void) const;
		void		polymorph(Victim const &victim) const;
		Sorcerer&	operator = (Sorcerer const &other);
};

std::ostream& operator << (std::ostream &out, Sorcerer const &sorcerer);

			/*	COLORS	*/

# define	NO_COLOR	"\033[0m"

# define	BLACK		"\033[0;30m"
# define	RED			"\033[0;31m"
# define	GREEN		"\033[0;32m"
# define	YELLOW		"\033[0;33m"
# define	BLUE		"\033[0;34m"
# define	PURPLE		"\033[0;35m"
# define	CYAN		"\033[0;36m"

# define	B_GRAY		"\033[1;30m"
# define	B_RED		"\033[1;31m"
# define	B_GREEN		"\033[1;32m"
# define	B_YELLOW	"\033[1;33m"
# define	B_BLUE		"\033[1;34m"
# define	B_PURPLE	"\033[1;35m"
# define	B_CYAN		"\033[1;36m"
# define	B_WHITE		"\033[1;37m"

#endif
