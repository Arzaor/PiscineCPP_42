#pragma once
#ifndef WRONGCAT_H
#define WRONGCAT_H

#include <iostream>
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		WrongCat(std::string type);
		WrongCat(WrongCat const & rhs);
		~WrongCat();

		void		setType(std::string type);
		std::string	getType(void) const;

		void	makeSound() const;

		WrongCat&	operator=(WrongCat const & rhs);
};

#endif