#include "Fixed.hpp"

const int Fixed::_floatingPart = 8;

Fixed::Fixed(void) : _value(0)
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
	this->_value = n << this->_floatingPart;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(n * (1 << this->_floatingPart));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	
	this->_value = rhs.getRawBits();

	return *this;
}

int	Fixed::getRawBits() const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int		Fixed::toInt(void) const
{
	return (this->_value >> this->_floatingPart);
}

float	Fixed::toFloat(void) const
{
	return ((double)this->_value / (double)(1 << this->_floatingPart));
}

std::ostream&	operator<<(std::ostream& ifs, Fixed const & rhs)
{
	std::cout << rhs.toFloat();
	return (ifs);
}