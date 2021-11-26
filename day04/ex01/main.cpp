#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal	*animals[10];

	std::cout << "===Array of 5 Dogs & 5 Cats===" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "=== array[ " << i << " ] = Dog ===" << std::endl;
		animals[i] = new Dog();
	}
	for (int i = 5; i < 10; i++)
	{
		std::cout << "=== array[ " << i << " ] = Cat ===" << std::endl;
		animals[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << "=== destructor for i=" << i << " ===" << std::endl;
		delete animals[i];
	}
	std::cout << "=========================" << std::endl;
	std::cout << "==== Deep Copy Tests ====" << std::endl;
	Cat	*cat = new Cat();
	Cat	cpyCat(*cat);
	cpyCat.makeSound();
	delete cat;
	std::cout << "=========================" << std::endl;
}