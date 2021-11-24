#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap ennemy1("Jeremy");
	ClapTrap ennemy2("Hamza");
	ennemy1.attack("Hamza");
	ennemy2.takeDamage(10);
	ennemy2.attack("Jeremy");
	ennemy1.takeDamage(10);
	ennemy2.beRepaired(10);
	return 0;
}