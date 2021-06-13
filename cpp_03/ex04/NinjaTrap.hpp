#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	protected:
		NinjaTrap(void);
	public:
		NinjaTrap(std::string const &name);
		NinjaTrap(NinjaTrap const &other);
		~NinjaTrap(void);
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		ninjaShoebox(ClapTrap &clap);
		void		ninjaShoebox(FragTrap &frag);
		void		ninjaShoebox(ScavTrap &scav);
		void		ninjaShoebox(NinjaTrap &ninja);
		NinjaTrap&	operator = (NinjaTrap const &other);
};

#endif
