#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>

template <class Type>

void	swap(Type &v1, Type &v2) {
	Type b = v1;
	v1 = v2;
	v2 = b;
}

template <class Type>
Type	min(Type v1, Type v2) {
	if (v1 < v2)
		return v1;
	return v2;
}

template <class Type>
Type	max(Type v1, Type v2) {
	if (v1 > v2)
		return v1;
	return v2;
}

#endif