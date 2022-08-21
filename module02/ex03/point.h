#ifndef POINT_H
# define POINT_H

#include "Fixed.h"

class Point
{
private:
	const Fixed	x;
	const Fixed	y;
public:
	Point();
	Point(Fixed x, Fixed y);
	Point(const Point &cpy);
	~Point();
	const Fixed	getX() const;
	const Fixed	getY() const;
	Point	&operator=(const Point &src);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);


#endif