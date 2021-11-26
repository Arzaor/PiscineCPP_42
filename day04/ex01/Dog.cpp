#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog constructor called." << std::endl;
	this->setType("Dog");
	this->brain = new Brain();
}

Dog::Dog(const Dog & rhs)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = rhs;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->brain;
}

void		Dog::makeSound() const
{
	std::cout << "*WAOUF*" << std::endl;
}