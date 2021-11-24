#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout << "ScavTrap Default Constructor" << std::endl;
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name )
{
	std::cout << "ScavTrap Parameter Constructor" << std::endl;
	this->setName(name);
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
}

ScavTrap::ScavTrap( ScavTrap const & rhs )
{
	std::cout << "ScavTrap Copy Constructor" << std::endl;
	*this = rhs;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage( unsigned int amount )
{
	std::cout << "ScavTrap " << this->getName() << " take : " << amount << " damages !" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap " << this->getName() << " win : " << amount << " life points" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " has enterred in Gate Keeper mode." << std::endl;
}

std::string	ScavTrap::getName() const {
	return (this->_name);
}

int		ScavTrap::getHitPoints() const {
	return (this->_hitPoints);
}

int		ScavTrap::getEnergyPoints() const {
	return (this->_energyPoints);
}

int		ScavTrap::getAttackDamage() const {
	return (this->_attackDamage);
}