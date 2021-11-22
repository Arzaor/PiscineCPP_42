#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap ennemy1("Jeremy");
	ClapTrap *ennemy2 = new ClapTrap("Hamza");
	ennemy1.attack("Test");
	return 0;
}