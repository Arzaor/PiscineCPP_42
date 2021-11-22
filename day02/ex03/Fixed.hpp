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

		Fixed operator+(Fixed const & rhs);
		Fixed operator-(Fixed const & rhs);
		Fixed operator*(Fixed const & rhs);
		Fixed operator/(Fixed const & rhs);

		bool operator>(const Fixed & rhs);
		bool operator<(const Fixed & rhs);
		bool operator<=(const Fixed & rhs);
		bool operator>=(const Fixed & rhs);
		bool operator==(const Fixed & rhs);
		bool operator!=(const Fixed & rhs);

		Fixed&	operator++(void);
		Fixed	operator++(int);

		Fixed&	operator--(void);
		Fixed	operator--(int);

		int		toInt(void) const;
		float	toFloat(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		static Fixed	max(Fixed & lhs, Fixed & rhs);
		static Fixed	max(const Fixed & lhs, const Fixed & rhs);
		static Fixed	min(Fixed & lhs, Fixed & rhs);
		static Fixed	min(const Fixed & lhs, const Fixed & rhs);

	private:
		int	raw;
		static int const rawBits = 8;
};

std::ostream&	operator<<(std::ostream& ifs, Fixed const & rhs);

#endif