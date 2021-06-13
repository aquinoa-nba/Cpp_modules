#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	private:
		Victim(void);
	protected:
		std::string	_name;
	public:
		Victim(std::string const &name);
		Victim(Victim const &other);
		virtual	~Victim(void);
		std::string		getName(void) const;
		virtual void	getPolymorphed(void) const;
		Victim&			operator = (Victim const &other);
};

std::ostream& operator << (std::ostream &out, Victim const &victim);

#endif
