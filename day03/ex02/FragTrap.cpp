#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap parameter constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->getName() << " attack " << target << ", causing " << this->getHitPoints() << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->getName() << " take " << amount << " damage " << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap " << this->getName() << " is repaired " << amount << " energies points " << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::string cmd;

	std::cout << "FragTrap " << this->getName() << " ask a high fives" << std::endl;
	std::cout << "Yes/No : ";
	std::getline(std::cin, cmd);
	if (cmd == "yes" || cmd == "Yes" || cmd == "YES")
		std::cout << "FragTrap " << this->getName() << " High Fives !" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " Oh no :(" << std::endl;
}