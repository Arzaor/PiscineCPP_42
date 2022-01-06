#include "Base.hpp"

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate(void)
{
	Base* base = new Base();
	srand(time(NULL));
	int i = rand() % 3 + 1;
	printf("%d", i);
	switch (i)
	{
		case 0:
			new A();
		case 1:
			new B();
		case 2:
			new C();
	}
	return (base);
}

int	main(void)
{
	Base*	base = generate();
	(void)base;
}