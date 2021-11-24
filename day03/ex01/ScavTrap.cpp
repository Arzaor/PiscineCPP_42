#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap parameter constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->getName() << " attack " << target << ", causing " << this->getHitPoints() << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->getName() << " take " << amount << " damage " << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap " << this->getName() << " is repaired " << amount << " energies points " << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "Mode Gate keeper activated." << std::endl;
}