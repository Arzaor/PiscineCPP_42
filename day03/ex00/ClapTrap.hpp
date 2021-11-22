#pragma once
#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string	name;
		int			hitpoints = 10;
		int			energyPoints = 10;
		int			attackDamage = 0;
};

#endif