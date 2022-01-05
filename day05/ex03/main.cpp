#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << "=== Intern Tests ===" << std::endl;
	Bureaucrat Micka("Micka", 1);

	Intern	Florent;
	Form*	rrf;

	rrf = Florent.makeForm("shrubbery creation", "maison");
	std::cout << *rrf << std::endl;
	rrf->beSigned(Micka);
	std::cout << *rrf << std::endl;
	Micka.executeForm(*rrf);

	delete rrf;
	return (0);
}