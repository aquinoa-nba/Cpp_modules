#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	private:
	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &other);
		~AssaultTerminator();
		ISpaceMarine*		clone() const;
		void				battleCry() const;
		void				rangedAttack() const;
		void				meleeAttack() const;
		AssaultTerminator&	operator = (AssaultTerminator const &other);
};

#endif
