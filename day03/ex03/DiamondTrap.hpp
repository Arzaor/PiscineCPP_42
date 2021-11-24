#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
			std::string		_name;
			unsigned int	_hitPoints;
			unsigned int	_energyPoints;
			unsigned int	_attackDamage;
	public:
			DiamondTrap( void );
			DiamondTrap( std::string name );
			DiamondTrap( DiamondTrap const & rhs );
			~DiamondTrap( void );

			void		setName(std::string name);
			std::string	getName() const;
			int			getHitPoints() const;
			int			getEnergyPoints() const;
			int			getAttackDamage() const;

			void	attack(std::string const & target);

			void	whoAmI( void );
			void	guardGate( void );
			void	highFivesGuys( void );
};

std::ostream&	operator<<(std::ostream& ofs, DiamondTrap const & rhs);

#endif
