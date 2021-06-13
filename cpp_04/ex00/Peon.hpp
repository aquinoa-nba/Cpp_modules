#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	private:
		Peon(void);
	public:
		Peon(std::string const &name);
		Peon(Peon const &other);
		~Peon(void);
		void	getPolymorphed(void) const;
		Peon&	operator = (Peon const &other);
};

#endif
