#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat::WrongCat(std::string type)
{
	std::cout << "WrongCat parameter constructor called." << std::endl;
	this->setType(type);
}

WrongCat::WrongCat(WrongCat const & rhs)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = rhs;
}

void	WrongCat::setType(std::string type)
{
	this->type = type;
}

std::string	WrongCat::getType() const
{
	return this->type;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat make a sound." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat & rhs)
{
	this->setType(this->getType());
	return (*this);
}