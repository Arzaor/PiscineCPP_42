#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called." << std::endl;
	this->setType("Animal");
}

Animal::Animal(std::string type)
{
	std::cout << "Animal parameter constructor called." << std::endl;
	this->setType(type);
}

Animal::Animal(const Animal & rhs)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = rhs;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal& Animal::operator=(const Animal & rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

void		Animal::makeSound() const
{
	std::cout << "*ANIMAL*" << std::endl;
}

void		Animal::setType(std::string type)
{
	this->type = type;
}

std::string	Animal::getType() const
{
	return type;
}