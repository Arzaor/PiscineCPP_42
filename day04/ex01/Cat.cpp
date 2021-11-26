#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat constructor called." << std::endl;
	this->setType("Cat");
	this->brain = new Brain();
}

Cat::Cat(const Cat & rhs)
{
	std::cout << "Cat copy constructor called." << std::endl;
	type = rhs.type;
	brain = new Brain();
	*brain = *(rhs.brain);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called." << std::endl;
}

void		Cat::makeSound() const
{
	std::cout << "*MEOW*" << std::endl;
}