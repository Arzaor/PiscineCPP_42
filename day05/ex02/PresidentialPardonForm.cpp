#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = "defaultTarget";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & rhs) : Form(rhs.getName(), rhs.getGradeSign(), rhs.getGradeExec())
{
	*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
{
	this->_target = rhs._target;
	this->setSign(rhs.getSign());
	return (*this);
}

bool    PresidentialPardonForm::execForm() const
{
	std::cout << this->_target << " has been given by Zafod Beeblebrox." << std::endl;
	return true;
}