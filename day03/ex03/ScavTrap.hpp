#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	private:
			unsigned int	_hitPoints;
			unsigned int	_energyPoints;
			unsigned int	_attackDamage;
	public:
			ScavTrap( void );
			ScavTrap( std::string name );
			ScavTrap( ScavTrap const & rhs);
			~ScavTrap( void );

			std::string	getName() const;
			int			getHitPoints() const;
			int			getEnergyPoints() const;
			int			getAttackDamage() const;

			void	attack(std::string const & target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);

			void	guardGate();
};

#endif