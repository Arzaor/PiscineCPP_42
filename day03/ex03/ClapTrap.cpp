#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "ClapTrap Default constructor" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->setAttackDamage(0);
	return ;
}

ClapTrap::ClapTrap( std::string name )
{
	std::cout << "ClapTrap Parameter constructor : " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->setAttackDamage(0);
}

ClapTrap::ClapTrap( ClapTrap const & rhs )
{
	std::cout << "ClapTrap Copy constructor : " << rhs._name << std::endl;
	*this = rhs;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::setName(std::string name) {
	std::cout << "setName = " << name << std::endl;
	this->_name = name;
}

std::string	ClapTrap::getName( void ) const {
	return (this->_name);
}

unsigned int	ClapTrap::getAttackDamage( void ) const {
	return (this->_attackDamage);
}

void		ClapTrap::setAttackDamage( unsigned int damage ) {
	this->_attackDamage = damage;
}

unsigned int	ClapTrap::getHitPoints( void ) const {
	return (this->_hitPoints);
}

void			ClapTrap::setHitPoints( unsigned int hitPoins ) {
	this->_hitPoints = hitPoins;
}

unsigned int	ClapTrap::getEnergyPoints( void ) const {
	return (this->_energyPoints);
}

void			ClapTrap::setEnergyPoints( unsigned int energyPoints ) {
	this->_energyPoints = energyPoints;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->getName() << " take : " << amount << " damages !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << " win : " << amount << " life points" << std::endl;
}

ClapTrap&	ClapTrap::operator=( ClapTrap const & rhs)
{
	this->setName(rhs.getName());
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

std::ostream&	operator<<(std::ostream& ofs, ClapTrap const & rhs)
{
	std::cout << rhs.getName();
	return (ofs);
}
