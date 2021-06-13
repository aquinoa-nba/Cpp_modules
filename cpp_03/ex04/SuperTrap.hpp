#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	private:
		SuperTrap(void);
	public:
		SuperTrap(std::string const &name);
		SuperTrap(SuperTrap const &other);
		~SuperTrap(void);
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		SuperTrap&	operator = (SuperTrap const &other);
};

#endif
