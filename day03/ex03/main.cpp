#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	DiamondTrap("Jeremy");

	DiamondTrap.attack("Daniela");
	std::cout << DiamondTrap << std::endl;
	DiamondTrap.guardGate();
	DiamondTrap.highFivesGuys();
	DiamondTrap.whoAmI();
}
