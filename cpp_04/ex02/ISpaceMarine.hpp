#ifndef I_SPACE_MARINE_HPP
# define I_SPACE_MARINE_HPP

# include <iostream>

class ISpaceMarine
{
	private:
	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine*	clone() const = 0;
		virtual void			battleCry() const = 0;
		virtual void			rangedAttack() const = 0;
		virtual void			meleeAttack() const = 0;
};

#endif
