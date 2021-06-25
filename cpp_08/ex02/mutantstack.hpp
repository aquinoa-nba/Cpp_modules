#ifndef	__MUTANT_STACK_H__
# define __MUTANT_STACK_H__

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {}
		~MutantStack(void) {}
		typedef	typename std::stack<T>::container_type::iterator iterator;
		iterator		begin(void) { return this->c.begin(); }
		iterator		end(void) { return this->c.end(); }
		typedef	typename std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator	cbegin(void) { return this->c.cbegin(); }
		const_iterator	cend(void) { return this->c.cend(); }
};

#endif /* __MUTANT_STACK_H__ */
