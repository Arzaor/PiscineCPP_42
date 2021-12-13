#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Jeremy")
{
	std::cout << "Bureaucrat : Default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(int grade)
{
	std::cout << "Bureaucrat : Parameter constructor called." << std::endl;
	try
	{
		if (grade < 1)
			throw std::string("Bureaucrat::GradeTooLowException");
		else if (grade > 150)
			throw std::string("Bureaucrat::GradeTooHighException");
		else
			this->grade = grade;
	}
	catch(std::string const & str)
	{
		std::cerr << str << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat & rhs)
{
	std::cout << "Bureaucrat : Copy constructor called." << std::endl;
	*this = rhs;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat : destructor called." << std::endl;
}

std::string			Bureaucrat::getName() const
{
	return this->name;
}

int					Bureaucrat::getGrade() const
{
	return this->grade;
}

void				Bureaucrat::incrementGrade()
{
	this->grade--;
}

void				Bureaucrat::decrementGrade()
{
	this->grade++;
}

std::ostream&	operator<<(std::ostream& ifs, Bureaucrat const & rhs)
{
	std::cout << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return ifs;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat & rhs)
{
	this->grade = rhs.grade;
	return (*this);
}