#pragma once
#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat & rhs);
		virtual ~Cat();

		Cat &operator=(const Cat & rhs);

		virtual void	makeSound() const;
};

#endif