#ifndef FIXED_H
# define FIXED_H

#include <iostream>

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
	Fixed &operator = (const Fixed &src);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif