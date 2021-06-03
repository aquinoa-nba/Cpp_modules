#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
	private:
		Brain	_brain;
	public:
		std::string	identify();
		Brain&		getBrain();
		Human();
		~Human();
};

#endif
