#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <unistd.h>

# define	GREEN		"\033[0;32m"
# define	BOLD_GREEN	"\033[1;32m"
# define	BOLD_RED	"\033[1;31m"
# define	PURPLE		"\033[1;35m"
# define	WHITE		"\033[1;37m"
# define	NO_COLOR	"\033[0m"

class Zombie
{

private:

	std::string	name;
	std::string	type;

public:

	void		SetName(std::string name);
	void		SetType(std::string type);
	std::string	GetName();
	std::string	GetType();
	void		announce();
				~Zombie();
};

std::string	randomZombieName();
std::string	randomZombieType();

#endif
