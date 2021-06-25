#include "span.hpp"

Span::Span(unsigned int const &size) : _arrSize(size) {}

Span::~Span() {}

Span::Span(Span const &other) { *this = other; }

void	Span::addNumber(int val)
{
	if (_arrSize != _arr.size())
		_arr.insert(val);
	else
		throw Span::SpanIsFull();
}

size_t	Span::shortestSpan()
{
	if (_arr.size() > 1)
	{
		std::multiset<int>::const_iterator prev = _arr.begin();
		std::multiset<int>::const_iterator next = ++_arr.begin();
		int	min = *next - *prev;
		for (; next != _arr.end(); prev++, next++)
		{
			if (*next - *prev < min)
				min = *next - *prev;
		}
		return static_cast<size_t>(min);
	}
	else
		throw Span::NotEnoughtNbr();
}

size_t	Span::longestSpan()
{
	if (_arr.size() > 1)
	{
		std::multiset<int>::const_iterator min = _arr.begin();
		std::multiset<int>::const_iterator max = --_arr.end();
		return *max - *min;
	}
	else
		throw Span::NotEnoughtNbr();
}

Span&	Span::operator = (Span const &other)
{
	if (this != &other)
	{
		_arrSize = other._arrSize;
		_arr = other._arr;
	}
	return *this;
}
