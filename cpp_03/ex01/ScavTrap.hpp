#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "FragTrap.hpp"

class  ScavTrap
{
	private:
		int				_hitPoints; // (100)
		unsigned int	_maxHitPoints; // (100)
		int				_energyPoints; // (50)
		unsigned int	_maxEnergyPoints; // (50)
		int				_level; // (1)
		std::string		_name; // (Parameter of constructor)
		unsigned int	_meleeAttackDamage; // (20)
		unsigned int	_rangedAttackDamage; // (15)
		unsigned int	_armorDamageReduction; // (3)
	public:
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &other);
		~ScavTrap(void);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		bool			challengeNewcomer(void);
		std::string		getName(void);
		unsigned int	getMeleeAttackDamage(void);
		unsigned int	getRangedAttackDamage(void);
		ScavTrap& operator = (ScavTrap const &other);
};

#endif
