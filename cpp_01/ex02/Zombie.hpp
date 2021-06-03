#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define	GREEN		"\033[0;32m"
# define	BOLD_GREEN	"\033[1;32m"
# define	BOLD_RED	"\033[1;31m"
# define	PURPLE		"\033[1;35m"
# define	WHITE		"\033[1;37m"
# define	NO_COLOR	"\033[0m"
# define	YES			1
# define	NO			0

class Zombie
{
	private:
		std::string	_name;
		std::string	_type;
	public:
		void	announce();
		Zombie(std::string name, std::string type);
		~Zombie();
};

std::string	randomZombieName();
std::string	randomZombieType();

#endif
