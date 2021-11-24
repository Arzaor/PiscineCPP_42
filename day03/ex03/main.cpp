#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	// ClapTrap	ClapTrap1("Hamza");
	// ClapTrap	ClapTrap2(ClapTrap1);
	// ClapTrap	ClapTrap3("Daniela");
	// ClapTrap	ClapTrap4;
	// ClapTrap4.setName("ClapTrap4");

	// ClapTrap1.attack("ClapTrap4");
	// ClapTrap4.takeDamage(ClapTrap1.getAttackDamage());
	// ClapTrap4.beRepaired(5);
	// ClapTrap3.attack("Hamza");

	// ScavTrap	scavTrap1;
	// scavTrap1.setName("Jeremy");
	// ScavTrap	scavTrap2("Hamza");

	// scavTrap2.attack("Jeremy");
	// scavTrap1.takeDamage(scavTrap2.getAttackDamage());
	// scavTrap1.beRepaired(50);
	// scavTrap1.guardGate();

	// FragTrap	FragTrap1("Jeremy");
	// FragTrap	FragTrap2("Hamza");
	// FragTrap2.attack(FragTrap1.getName());
	// FragTrap1.takeDamage(FragTrap2.getAttackDamage());
	// FragTrap1.highFivesGuys();

	DiamondTrap	DiamondTrap("Jeremy");

	DiamondTrap.attack("Daniela");
	std::cout << DiamondTrap << std::endl;
	DiamondTrap.guardGate();
	DiamondTrap.highFivesGuys();
	DiamondTrap.whoAmI();
}
