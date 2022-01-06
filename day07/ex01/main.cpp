#include "iter.hpp"

template< typename T >
void print( T const & x )
{
	std::cout << x << std::endl;
	return; 
}

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- J'ai jamais compris pourquoi on peut pas ecrire int[] tab. Ca aurait plus de sens vous trouvez pas ?

	iter(tab, 5, print);

	return 0;
}