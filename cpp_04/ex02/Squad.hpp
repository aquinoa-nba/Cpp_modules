#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		int				_count;
		ISpaceMarine	**_marineArr;
	public:
		Squad();
		Squad(Squad const &other);
		~Squad();
		int				getCount() const;
		ISpaceMarine*	getUnit(int) const;
		int				push(ISpaceMarine*);
		Squad&			operator = (Squad const &other);
};

#endif
