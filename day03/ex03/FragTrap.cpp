#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << "FragTrap Default Constructor" << std::endl;
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
}

FragTrap::FragTrap( std::string name )
{
	std::cout << "FragTrap Parameter Constructor" << std::endl;
	this->setName(name);
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
}

FragTrap::FragTrap( FragTrap const & rhs )
{
	std::cout << "FragTrap Copy Constructor" << std::endl;
	*this = rhs;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->getName() << " attacks " << target
			 << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage( unsigned int amount )
{
	std::cout << "FragTrap " << this->getName() << " take : " <<
		amount << " damages !" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap " << this->getName() << " win : " << amount << " life points" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::string cmd;

	std::cout << "FragTrap " << this->getName() << " want a high fives" << std::endl;
	std::cout << "Yes/No : ";
	std::getline(std::cin, cmd);
	if (cmd == "Yes" || cmd == "yes")
		std::cout << "FragTrap " << this->getName() << " High Fives !" << std::endl;
	else
		std::cout << "FlagTrap " << this->getName() << " : Oh No :(" << std::endl;
}

std::string	FragTrap::getName() const {
	return (this->_name);
}

int		FragTrap::getHitPoints() const {
	return (this->_hitPoints);
}

int		FragTrap::getEnergyPoints() const {
	return (this->_energyPoints);
}

int		FragTrap::getAttackDamage() const {
	return (this->_attackDamage);
}