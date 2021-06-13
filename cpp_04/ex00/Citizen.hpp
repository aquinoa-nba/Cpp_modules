#ifndef CITIZEN_HPP
# define CITIZEN_HPP

# include "Victim.hpp"

class Citizen : public Victim
{
	private:
		Citizen(void);
	public:
		Citizen(std::string const &name);
		Citizen(Citizen const &other);
		~Citizen();
		void		getPolymorphed(void) const;
		Citizen&	operator = (Citizen const &other);
};

#endif
