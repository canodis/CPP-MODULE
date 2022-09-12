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

int main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}