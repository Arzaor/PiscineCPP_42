#include "Span.hpp"

int	main()
{
	Span sp(5);

	sp.addNumber(5);

	try 
	{
		std::cout << "Shortest : " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : "<< e.what() << std::endl;
	}
	
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest  : " << sp.longestSpan() << std::endl;

	try 
	{
		sp.addNumber(0);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : "<< e.what() << std::endl;
	}

	std::cout << std::endl;
	try 
	{
		sp.fill(1000000);
		std::cout << "Shortest : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest  : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : "<< e.what() << std::endl;
	}
	
	return (0);
}