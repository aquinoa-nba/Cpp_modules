#ifndef POWER_FIST_HPP
# define POWER_FIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	private:
	public:
		PowerFist(void);
		PowerFist(PowerFist const &other);
		~PowerFist(void);
		void		attack(void) const;
		PowerFist&	operator = (PowerFist const &other);
};

#endif
