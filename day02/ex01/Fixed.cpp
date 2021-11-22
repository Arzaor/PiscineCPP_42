#include "Fixed.hpp"

Fixed::Fixed(void) : raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw = n << this->rawBits;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw = roundf(n * (1 << this->rawBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	
	this->raw = rhs.getRawBits();

	return *this;
}

int	Fixed::getRawBits() const
{
	return this->raw;
}

void	Fixed::setRawBits(int const raw)
{
	this->raw = raw;
}

int		Fixed::toInt(void) const
{
	return (this->raw >> this->rawBits);
}

float	Fixed::toFloat(void) const
{
	return ((double)this->raw / (double)(1 << this->rawBits));
}

std::ostream&	operator<<(std::ostream& ifs, Fixed const & rhs)
{
	std::cout << rhs.toFloat();
	return (ifs);
}