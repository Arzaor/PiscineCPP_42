#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class FragTrap : public virtual ClapTrap
{
	private:
			unsigned int	_hitPoints;
			unsigned int	_energyPoints;
			unsigned int	_attackDamage;
	public:
			FragTrap( void );
			FragTrap( std::string name );
			FragTrap( FragTrap const & rhs);
			~FragTrap( void );

			std::string	getName() const;
			int			getHitPoints() const;
			int			getEnergyPoints() const;
			int			getAttackDamage() const;

			void	attack( std::string const & target );
			void	takeDamage( unsigned int amount );
			void	beRepaired( unsigned int amount );

			void	highFivesGuys( void );
};

#endif
