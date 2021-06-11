#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class  ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &other);
		~ScavTrap();
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		bool	challengeNewcomer(void);
		ScavTrap& operator = (ScavTrap const &other);
};

#endif
