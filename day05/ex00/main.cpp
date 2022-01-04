#include "Bureaucrat.hpp"

int main(void)
{
    try
	{
        Bureaucrat bureaucrat1("Jeremy", 150);
        bureaucrat1.decrementGrade();
        std::cout << bureaucrat1 << std::endl;
    }
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}