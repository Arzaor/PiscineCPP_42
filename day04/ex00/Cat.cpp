#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat constructor called." << std::endl;
	this->setType("Cat");
}

Cat::Cat(std::string type)
{
	std::cout << "Cat parameter constructor called." << std::endl;
	this->setType(type);
}

Cat::Cat(const Cat & rhs)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = rhs;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

void		Cat::makeSound() const
{
	std::cout << "*MEOW*" << std::endl;
}

Cat&	Cat::operator=(const Cat & rhs)
{
	this->setType(rhs.getType());
	return (*this);
}