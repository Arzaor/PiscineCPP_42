#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("defaultBureaucrat") {}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : _name(_name)
{
	if (_grade < 1)
		throw GradeTooLowException();
	else if (_grade > 150)
		throw GradeTooHighException();
	else
		this->_grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & rhs)
{
	*this = rhs;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat & rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}

void		Bureaucrat::incrementGrade()
{
	try
	{
		if (this->getGrade() > 1)
		{
			std::cout << "You've decrement your grade." << std::endl;
			this->_grade--;
		}
		else
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void		Bureaucrat::decrementGrade()
{
	try
	{
		if (this->getGrade() < 150)
		{
			std::cout << "You've decrement your grade." << std::endl;
			this->_grade++;
		}
		else
			throw GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void		Bureaucrat::signForm(Form & rhs)
{
	if (rhs.getSign() == false)
		std::cout << this->getName() << " cannot sign because " << this->getGrade() << " is too low." << std::endl;
	else
		std::cout << this->getName() << " signs " << rhs.getName() << std::endl; 
}

std::string Bureaucrat::getName() const
{
	return _name;
}

int         Bureaucrat::getGrade() const
{
	return _grade;
}

std::ostream&	operator<<(std::ostream& ofs, Bureaucrat const & rhs)
{
	std::cout << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (ofs);
}