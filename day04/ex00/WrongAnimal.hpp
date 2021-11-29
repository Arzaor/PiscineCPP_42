#pragma once
#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const & rhs);
		~WrongAnimal(void);

		void		setType(std::string type);
		std::string	getType(void) const;

		void	makeSound() const;

		WrongAnimal&	operator=(WrongAnimal const & rhs);
	protected:
		std::string type;
};

#endif