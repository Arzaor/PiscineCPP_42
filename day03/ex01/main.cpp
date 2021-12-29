#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scavTrap1;
	scavTrap1.setName("Jeremy");
	ScavTrap	scavTrap2("Daniela");

	scavTrap2.attack("Jeremy");
	scavTrap1.takeDamage(scavTrap2.getAttackDamage());
	scavTrap1.beRepaired(50);
	scavTrap1.guardGate();
	return 0;
}