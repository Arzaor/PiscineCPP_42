#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _target("defaultTarget") {}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : _target(_target)
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & rhs)
{
    *this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
{
    return (*this);
}

