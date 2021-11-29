#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal parameter constructor called." << std::endl;
	this->setType(type);
}

WrongAnimal::WrongAnimal(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = rhs;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal make a sound." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal & rhs)
{
	this->setType(rhs.getType());
	return (*this);
}