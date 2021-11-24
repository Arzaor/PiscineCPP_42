#pragma once
#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap&);
		~ClapTrap();

		ClapTrap &operator=(ClapTrap const & rhs);

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void		setName(std::string name);
		std::string	getName(void);
		void		setHitPoints(int hitPoints);
		int			getHitPoints(void);
		void		setEnergyPoints(int energyPoints);
		int			getEnergyPoints(void);
		void		setAttackDamage(int attackDamage);
		int			getAttackDamage(void);
	private:
		std::string	_name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
};

std::ostream&	operator<<(std::ostream& ofs, ClapTrap const & rhs);

#endif