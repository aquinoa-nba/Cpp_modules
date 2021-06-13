#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
	private:
		std::string	_name;
		int			_actionPoints;
		AWeapon		*_weapon;
		Character(void);
	public:
		Character(std::string const & name);
		Character(Character const &other);
		~Character(void);
		void		recoverAP(void);
		void		equip(AWeapon *weapon);
		void		attack(Enemy *enemy);
		std::string	getName(void) const;
		AWeapon*	getWeapon(void) const;
		int			getAPCost(void) const;
		Character&	operator = (Character const &other);
};

std::ostream&	operator << (std::ostream &out, Character const &character);

#endif
