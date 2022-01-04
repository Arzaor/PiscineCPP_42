#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	std::srand(time(NULL));
    try
	{
		Bureaucrat	Micka("Micka", 1);

		RobotomyRequestForm		robo("Kevin");
		std::cout << robo << std::endl;
		robo.beSigned(Micka);
		std::cout << robo << std::endl;
		robo.execute(Micka);

        PresidentialPardonForm	presidpardon("Kevin");
		std::cout << presidpardon << std::endl;
		presidpardon.beSigned(Micka);
		std::cout << presidpardon << std::endl;
		presidpardon.execute(Micka);
    }
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}