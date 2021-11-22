#pragma once
#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(Point const & rhs);
		~Point();

		Point(Fixed const x, Fixed const y);

		Point & operator=(Point const & rhs);
	private:
		Fixed const x;
		Fixed const y;
};

#endif