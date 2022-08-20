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
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &copy);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed	&operator=(const Fixed &src);
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif