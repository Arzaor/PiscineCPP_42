#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
			std::string type;
	public:
			Animal( void );
			Animal( std::string type );
			Animal( Animal const & rhs );
			virtual ~Animal( void );

			void		setType(std::string type);
			std::string	getType()const;

			virtual void	makeSound() const = 0;

			Animal&		operator=(Animal const & rhs);
};

#endif
