#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	int i = rand() % 3;

	switch (i)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}

	return (NULL);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	if (dynamic_cast<A*>(&p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(&p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(&p) != NULL)
		std::cout << "C" << std::endl;
}

int	main(void)
{
	std::srand(time(NULL));

	Base*	base;

	base = generate();
	identify(base);
	identify(*base);

	return (0);
}
