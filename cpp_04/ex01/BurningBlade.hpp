#ifndef BURNING_BLADE_HPP
# define BURNING_BLADE_HPP

# include "AWeapon.hpp"

class BurningBlade : public AWeapon
{
	private:
	public:
		BurningBlade(void);
		BurningBlade(BurningBlade const &other);
		~BurningBlade(void);
		void			attack(void) const;
		BurningBlade&	operator = (BurningBlade const &other);
};

#endif
