#include "point.h"

#pragma region Constructors

Point::Point(): x(0), y(0) {
}

Point::Point(Fixed _x, Fixed _y): x(_x), y(_y) {
}

Point::~Point() {
}

Point::Point(const Point &cpy): x(cpy.getX()), y(cpy.getY()) {
	//*this = cpy;
}

Point	&Point::operator=(const Point &src)
{
	return (*this);
}

#pragma endregion

Fixed	const Point::getX() const {
	return (this->x);
}

Fixed	const Point::getY() const {
	return (this->y);
}
