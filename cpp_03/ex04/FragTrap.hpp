#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &other);
		~FragTrap();
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		bool	vaulthunterDotExe(std::string const & target);
		FragTrap& operator = (FragTrap const &other);
};

#endif
