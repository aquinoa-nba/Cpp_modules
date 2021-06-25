#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <set>

# define	B_RED		"\033[1;31m"
# define	NO_COLOR	"\033[0m"

class Span
{
	private:
		size_t				_arrSize;
		std::multiset<int>	_arr;
		Span();
	public:
		Span(unsigned int const &);
		Span(Span const &);
		~Span();
		template<typename T>
		void	addNumber(T begin, T end)
		{
			if (std::distance(begin, end) + _arr.size() > _arrSize)
				throw NotEnoughtNbr();
			_arr.insert(begin, end);
		}
		void	addNumber(int);
		size_t	shortestSpan();
		size_t	longestSpan();
		Span&	operator = (Span const &);
		class	SpanIsFull : public std::exception
		{
			virtual const char* what() const throw() { return B_RED"Span is full"NO_COLOR; }
		};
		class	NotEnoughtNbr : public std::exception
		{
			virtual const char* what() const throw() { return B_RED"Not enought numbers in Span"NO_COLOR; }
		};
};

#endif
