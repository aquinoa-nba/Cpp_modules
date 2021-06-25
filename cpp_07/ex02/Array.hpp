#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

# define	B_RED		"\033[1;31m"
# define	NO_COLOR	"\033[0m"

template <typename T>
class Array
{
	private:
		unsigned int _arrSize;
		T			*_arr;
	public:
		Array() : _arrSize(0), _arr(nullptr) {}
		Array(unsigned int n)
		{
			if (static_cast<int>(n) < 0)
				throw Array<T>::outOfLimits();
			_arrSize = n;
			_arr = new T[_arrSize]();
		}
		Array(Array const &other) { *this = other; }
		~Array()
		{
			if (_arrSize)
				delete [] _arr;
		}
		unsigned int	size() const { return _arrSize; }
		Array&			operator = (Array<T> const &other)
		{
			if (this != &other)
			{
				if (_arrSize)
					delete [] _arr;
				_arrSize = other._arrSize;
				_arr = new T[_arrSize];
				for (unsigned int i = 0; i < _arrSize; i++)
					_arr[i] = other._arr[i];
			}
			return *this;
		}
		T&				operator [] (int n)
		{
			if (n >= 0 && n < static_cast<int>(_arrSize))
				return _arr[n];
			else
				throw Array<T>::outOfLimits();
		}
		class	outOfLimits : public std::exception
		{
			virtual const char* what() const throw() { return B_RED"Out of the limit"NO_COLOR; }
		};
};

# endif
