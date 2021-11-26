#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal & rhs);
		virtual ~Animal();

		virtual void	makeSound() const;

		void		setType(std::string type);
		std::string	getType(void) const;
	protected:
		std::string type;
};

#endif