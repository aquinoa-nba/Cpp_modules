#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <sstream>

template <typename T>
void	iter(T *arr, size_t const arrLen, void (*func)(T const &))
{
	for (size_t i = 0; i < arrLen; i++)
		func(arr[i]);
}

#endif
