#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const	WrongAnimal* wAni = new WrongAnimal();
	const	WrongAnimal* wCat = new WrongCat();

	wAni->makeSound();
	wCat->makeSound();

	delete wAni;
	delete wCat;

	delete meta;
	delete j;
	delete i;

	return (0);
}