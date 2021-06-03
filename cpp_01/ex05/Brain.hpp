#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

# define	GREEN		"\033[0;32m"
# define	BOLD_GREEN	"\033[1;32m"
# define	BOLD_RED	"\033[1;31m"
# define	PURPLE		"\033[1;35m"
# define	WHITE		"\033[1;37m"
# define	NO_COLOR	"\033[0m"

class Brain
{
	public:
		std::string identify();
		Brain();
		~Brain();
};

#endif
