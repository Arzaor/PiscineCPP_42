#pragma once
#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const & rhs);
		~Fixed();

		Fixed(const int n);
		Fixed(const float n);

		Fixed &	operator=(Fixed const & rhs);

		int		toInt(void) const;
		float	toFloat(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int	raw;
		static int const rawBits = 8;
};

std::ostream&	operator<<(std::ostream& ifs, Fixed const & rhs);

#endif