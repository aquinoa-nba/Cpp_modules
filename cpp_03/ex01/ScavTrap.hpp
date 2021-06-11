#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "FragTrap.hpp"

class  ScavTrap
{
	private:
		int				_hitPoints;
		unsigned int	_maxHitPoints;
		int				_energyPoints;
		unsigned int	_maxEnergyPoints;
		int				_level;
		std::string		_name;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;
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
