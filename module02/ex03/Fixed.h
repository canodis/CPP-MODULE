#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <math.h>

class Fixed
{
private:
	int					fixedPointValue;
	static const int	bits = 8;

public:
// ---- Constructors ---- //
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &copy);
// ---- Destructors ---- //
	~Fixed();
// ---- Operators ---- //
	Fixed	&operator=(const Fixed &src);
	bool	operator<(Fixed src);
	bool	operator<=(Fixed src);
	bool	operator>(Fixed src);
	bool	operator>=(Fixed src);
	bool	operator==(Fixed src);
	bool	operator!=(Fixed src);
// ---- Arithmetic ---- //
	float	operator+(Fixed src);
	float	operator-(Fixed src);
	float	operator*(Fixed src);
	float	operator/(Fixed src);
	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);
// ---- Functions ---- //
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	static Fixed	max(Fixed a, Fixed b);
};
std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif