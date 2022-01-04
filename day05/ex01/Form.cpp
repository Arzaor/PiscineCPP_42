#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string _name, const int _gradeSign, const int _gradeExec) : _name("defaultForm"), _gradeSign(5), _gradeExec(7)
{
    this->_sign = false;
}

Form::Form(const std::string _name, const int _gradeSign, const int _gradeExec) : _name(_name), _gradeSign(_gradeSign), _gradeExec(_gradeExec)
{
    if (_gradeSign < 1 || _gradeExec < 1)
        throw GradeTooLowException();
    else if (_gradeSign > 150 || _gradeExec > 150)
        throw GradeTooHighException();
    else
    {
        this->_sign = false;
    }
}

Form::Form(const Form & rhs) : _name(getName()), _gradeSign(getGradeSign()), _gradeExec(getGradeExec())
{
	*this = rhs;
}

Form::~Form() {}

Form& Form::operator=(const Form & rhs)
{
	this->_sign = rhs.getSign();
	return (*this);
}

Form&       Form::beSigned(Bureaucrat & rhs)
{
    if (rhs.getGrade() > this->getGradeSign())
    {
        rhs.signForm(*this);
        throw GradeTooLowException();
    }
    else
    {
        this->_sign = true;
        rhs.signForm(*this);
    }
    return (*this);
}

std::string Form::getName() const
{
    return this->_name;
}

bool        Form::getSign() const
{
    return this->_sign;
}

int         Form::getGradeSign() const
{
    return this->_gradeSign;
}

int         Form::getGradeExec() const
{
    return this->_gradeExec;
}

std::ostream&	operator<<(std::ostream& ofs, Form const & rhs)
{
	std::cout << "Form " << rhs.getName() << ", signed : " << rhs.getSign() << ", grade required for sign " << rhs.getGradeSign() << ", grade required for execute " << rhs.getGradeExec() << ".";
	return (ofs);
}