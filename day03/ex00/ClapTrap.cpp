#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap parameter constructor called." << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & rhs )
{
	std::cout << "ClapTrap Copy constructor : " << rhs._name << std::endl;
	*this = rhs;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called." << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs._name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->hitPoints << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " take " << amount << " damage " << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " is repaired " << amount << " energies points " << std::endl;
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

std::string	ClapTrap::getName(void)
{
	return _name;
}

void	ClapTrap::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

int		ClapTrap::getHitPoints(void)
{
	return hitPoints;
}

void	ClapTrap::setEnergyPoints(int energyPoints)
{
	this->energyPoints = energyPoints;
}

int		ClapTrap::getEnergyPoints(void)
{
	return energyPoints;
}

void	ClapTrap::setAttackDamage(int attackDamage)
{
	this->attackDamage = attackDamage;
}

int		ClapTrap::getAttackDamage(void)
{
	return attackDamage;
}

std::ostream&	operator<<(std::ostream& ofs, ClapTrap const & rhs)
{
	std::cout << rhs.getName();
	return (ofs);
}