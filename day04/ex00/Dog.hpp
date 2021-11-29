#pragma once
#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog & rhs);
		virtual ~Dog();

		Dog	&operator=(const Dog & rhs);

		virtual void	makeSound() const;
};

#endif