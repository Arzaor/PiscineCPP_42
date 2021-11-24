# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default Constructor" << std::endl;
	this->_attackDamage = FragTrap::getAttackDamage();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_hitPoints = ScavTrap::getHitPoints();
}

DiamondTrap::DiamondTrap( std::string name ) : ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap Parameter Constructor" << std::endl;
	this->setName(name);
	ClapTrap::setName(name + "_clap_name");
	this->_attackDamage = FragTrap::getAttackDamage();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_hitPoints = ScavTrap::getHitPoints();
}

DiamondTrap::DiamondTrap( DiamondTrap const & rhs )
{
	std::cout << "DiamondTrap Copy Constructor" << std::endl;
	*this = rhs;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::guardGate( void )
{
	ScavTrap::guardGate();
}


void	DiamondTrap::highFivesGuys( void )
{
	FragTrap::highFivesGuys();
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "Name " << this->getName() << " ClapTrap name " << ClapTrap::getName() << std::endl;
}

void		DiamondTrap::setName(std::string name) {
	this->_name = name;
}

std::string	DiamondTrap::getName() const {
	return (this->_name);
}

int		DiamondTrap::getHitPoints() const {
	return (this->_hitPoints);
}

int		DiamondTrap::getEnergyPoints() const {
	return (this->_energyPoints);
}

int		DiamondTrap::getAttackDamage() const {
	return (this->_attackDamage);
}

std::ostream&	operator<<(std::ostream& ofs, DiamondTrap const & rhs)
{
	std::cout << "Name " << rhs.DiamondTrap::getName() << ", hit points " << rhs.DiamondTrap::getHitPoints() <<  ", energy points " << rhs.DiamondTrap::getEnergyPoints() << " atack damage " << rhs.DiamondTrap::getAttackDamage();
	return (ofs);
}
