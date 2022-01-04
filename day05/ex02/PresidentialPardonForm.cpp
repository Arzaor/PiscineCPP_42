#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 145, 137)
{
	this->_target = "defaultTarget";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form("PresidentialPardonForm", 145, 137)
{
	this->_target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & rhs)
{
	*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
{
	this->_target = rhs._target;
	return (*this);
}

bool    PresidentialPardonForm::execForm() const
{
	std::cout << this->_target << " has been given by Zafod Beeblebrox." << std::endl;
	return true;
}