#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	FragTrap1("Jeremy");
	FragTrap	FragTrap2("Hamza");
	FragTrap2.attack(FragTrap1.getName());
	FragTrap1.takeDamage(FragTrap2.getAttackDamage());
	FragTrap1.highFivesGuys();
}