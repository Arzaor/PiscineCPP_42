#include "Fixed.hpp"

Fixed::Fixed(void) : raw(0) {}

Fixed::Fixed(Fixed const & rhs)
{
	*this = rhs;
}

Fixed::~Fixed() {}

Fixed::Fixed(int const n)
{
	this->raw = n << this->rawBits;
}

Fixed::Fixed(float const n)
{
	this->raw = roundf(n * (1 << this->rawBits));
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	this->raw = rhs.getRawBits();

	return *this;
}

Fixed	Fixed::operator+( Fixed const & rhs )
{
	Fixed temp(*this);

	temp.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (temp);
}

Fixed	Fixed::operator-( Fixed const & rhs )
{
	Fixed temp(*this);

	temp.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (temp);
}

Fixed	Fixed::operator*( Fixed const & rhs )
{
	Fixed	temp(*this);

	temp.setRawBits((this->getRawBits() >> temp.rawBits ) * rhs.getRawBits());

	return (temp);
}

Fixed	Fixed::operator/( Fixed const & rhs )
{
	Fixed	temp(*this);

	temp.setRawBits((this->getRawBits() << temp.rawBits) / rhs.getRawBits());
	return (temp);
}

bool	Fixed::operator>( const Fixed& rhs )
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<( const Fixed& rhs )
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator<=( const Fixed& rhs )
{
	return !(rhs.getRawBits() > this->getRawBits());
}

bool	Fixed::operator>=( const Fixed& rhs )
{
	return !(rhs.getRawBits() < this->getRawBits());
}

bool	Fixed::operator==( Fixed const & rhs )
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const & rhs )
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed&	Fixed::operator++( void )
{
	this->raw++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed temp(*this);

	operator++();
	return (temp);
}

Fixed&	Fixed::operator--( void )
{
	this->raw--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed temp(*this);

	operator--();
	return (temp);
}

int		Fixed::toInt(void) const
{
	return (this->raw >> this->rawBits);
}

float	Fixed::toFloat(void) const
{
	return ((double)this->raw / (double)(1 << this->rawBits));
}

int	Fixed::getRawBits() const
{
	return this->raw;
}

void	Fixed::setRawBits(int const raw)
{
	this->raw = raw;
}

Fixed	Fixed::max(Fixed & lhs, Fixed & rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	return (rhs);
}

Fixed	Fixed::max(const Fixed & lhs, const Fixed & rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	return (rhs);
}

Fixed	Fixed::min(Fixed & lhs, Fixed & rhs)
{
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	return (rhs);
}

Fixed	Fixed::min(const Fixed & lhs, const Fixed & rhs)
{
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	return (rhs);
}

std::ostream&	operator<<(std::ostream& ifs, Fixed const & rhs)
{
	std::cout << rhs.toFloat();
	return (ifs);
}
