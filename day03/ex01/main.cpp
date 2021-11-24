#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	// Initialisation d'un ClapTrap et d'un ScavTrap qui hérite de la classe ClapTrap
	ClapTrap	clapTrap1("Jeremy");
	ClapTrap	clapTrap2("Hamza");
	ScavTrap	scavTrap1("Daniela");

	// Démonstration de la fonction 'attack' envers le ClapTrap "Hamza" & démonstration de la fonction 'takeDamage'
	clapTrap1.attack("Hamza");
	clapTrap2.takeDamage(10);
	
	// Affichage les attributs de 'scavTrap1'
	std::cout << "Hit points : " << scavTrap1.getHitPoints() << std::endl;
	std::cout << "Energy points : " << scavTrap1.getEnergyPoints() << std::endl;
	std::cout << "Attack damage : " << scavTrap1.getAttackDamage() << std::endl;
	// 'scavTrap1' peut aussi utiliser les fonctions de la classe 'ClapTrap'
	scavTrap1.attack("Jeremy");
	return 0;
}