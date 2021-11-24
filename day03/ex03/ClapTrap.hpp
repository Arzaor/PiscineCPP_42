#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
			std::string		_name;
			unsigned int	_hitPoints;
			unsigned int	_energyPoints;
			unsigned int	_attackDamage;
	public:
			ClapTrap( void );
			ClapTrap( std::string name );
			ClapTrap( ClapTrap const & rhs);
			~ClapTrap( void );

			ClapTrap&	operator=( ClapTrap const & rhs);

			void	attack(std::string const & target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);

			std::string		getName( void ) const;
			void			setName(std::string name);
			unsigned int	getAttackDamage( void ) const ;
			void			setAttackDamage( unsigned int damage );
			unsigned int	getHitPoints( void ) const ;
			void			setHitPoints( unsigned int hitPoins );
			unsigned int	getEnergyPoints( void ) const ;
			void			setEnergyPoints( unsigned int energyPoints );
};

std::ostream&	operator<<(std::ostream& ofs, ClapTrap const & rhs);

#endif