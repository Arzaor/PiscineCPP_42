#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	// Initialisation d'un ClapTrap, d'un ScavTrap et d'un FragTrap qui hérite de la classe ClapTrap
	ClapTrap	clapTrap1("Jeremy");
	ClapTrap	clapTrap2("Hamza");
	ScavTrap	scavTrap1("Daniela");
	FragTrap	fragTrap1("Chris");

	// Démonstration de la fonction 'attack' envers le ClapTrap "Hamza" & démonstration de la fonction 'takeDamage'
	clapTrap1.attack("Hamza");
	clapTrap2.takeDamage(10);
	
	// Affichage des attributs de 'scavTrap1'
	std::cout << "Hit points : " << scavTrap1.getHitPoints() << std::endl;
	std::cout << "Energy points : " << scavTrap1.getEnergyPoints() << std::endl;
	std::cout << "Attack damage : " << scavTrap1.getAttackDamage() << std::endl;

	// Utilisation de la fonction spécifique à la classe 'ScavTrap'
	scavTrap1.guardGate();

	// Affichage des attributs de 'FragTrap1'
	std::cout << "Hit points : " << fragTrap1.getHitPoints() << std::endl;
	std::cout << "Energy points : " << fragTrap1.getEnergyPoints() << std::endl;
	std::cout << "Attack damage : " << fragTrap1.getAttackDamage() << std::endl;

	// Utilisation de la fonction spécifique à la classe 'FragTrap'
	fragTrap1.highFivesGuys();
	return 0;
}