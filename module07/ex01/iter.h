#ifndef ITER_H
# define ITER_h

#include <iostream>

template<typename Type>
void	iter(Type *array, size_t len, void(*f)(Type const &value))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

void	print(const int &n)
{
	std::cout << n << " ";
}

void	print2(const std::string &s)
{
	std::cout << s + " ";
}

#endif