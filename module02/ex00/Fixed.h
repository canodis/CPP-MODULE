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
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator= (const Fixed &src);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif