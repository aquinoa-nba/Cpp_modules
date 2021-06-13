#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const &other);
		~PlasmaRifle(void);
		void			attack(void) const;
		PlasmaRifle&	operator = (PlasmaRifle const &other);
};

#endif
