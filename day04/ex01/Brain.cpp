#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(std::string idea)
{
	std::cout << "Parameter constructor called." << std::endl;
	this->ideas[0] = idea;
}

Brain::Brain(const Brain & rhs)
{
	std::cout << "Copy Brain constructor called." << std::endl;
	*this = rhs;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain&	Brain::operator=(Brain const & rhs)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}