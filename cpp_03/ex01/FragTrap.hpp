#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>
# include <unistd.h>

class FragTrap
{
	private:
		int				_hitPoints; // (100)
		unsigned int	_maxHitPoints; // (100)
		int				_energyPoints; // (100)
		unsigned int	_maxEnergyPoints; // (100)
		int				_level; // (1)
		std::string		_name; // (Parameter of constructor)
		unsigned int	_meleeAttackDamage; // (30)
		unsigned int	_rangedAttackDamage; // (20)
		unsigned int	_armorDamageReduction; // (5)
	public:
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &other);
		~FragTrap(void);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		bool			vaulthunterDotExe(std::string const & target);
		std::string		getName(void);
		unsigned int	getMeleeAttackDamage(void);
		unsigned int	getRangedAttackDamage(void);
		FragTrap& operator = (FragTrap const &other);
};

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
