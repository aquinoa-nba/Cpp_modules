#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <set>

# define	B_RED		"\033[1;31m"
# define	NO_COLOR	"\033[0m"

class ValueNotFound : public std::exception
{
	virtual const char* what() const throw() { return B_RED"Value was not found"NO_COLOR; }
};

template<typename T>
typename T::const_iterator	easyfind(T &cntnr, int val)
{
	typename T::const_iterator i;

	i = std::find(cntnr.begin(), cntnr.end(), val);
	if (i == cntnr.end())
		throw ValueNotFound();
	return i;
}

#endif
