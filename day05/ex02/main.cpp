#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
	{
        Bureaucrat  bureaucrat1("Jeremy", 126);
        Form        form1("Admission", 125, 52);

        form1.beSigned(bureaucrat1);  
    }
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}