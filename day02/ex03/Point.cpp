#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(Point const & rhs)
{
	*this = rhs;
}

Point::~Point() {}

Point::Point(Fixed const x, Fixed const y)
{
	this->x = x;
	this->y = y;
}

Point &	Point::operator=(Point const & rhs)
{
	this->raw = rhs.getRawBits();

	return *this;
}