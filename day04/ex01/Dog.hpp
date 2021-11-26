#pragma once
#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog & rhs);
		virtual ~Dog();

		virtual void	makeSound() const;
	private:
		Brain* brain;
};

#endif