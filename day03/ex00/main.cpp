#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ClapTrap1("Hamza");
	ClapTrap	ClapTrap2(ClapTrap1);
	ClapTrap	ClapTrap3("Daniela");
	ClapTrap	ClapTrap4;
	ClapTrap4.setName("ClapTrap4");

	ClapTrap1.attack("ClapTrap4");
	ClapTrap4.takeDamage(ClapTrap1.getAttackDamage());
	ClapTrap4.beRepaired(5);
	ClapTrap3.attack("Hamza");
}