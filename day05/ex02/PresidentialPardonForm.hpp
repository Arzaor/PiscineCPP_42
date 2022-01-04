#pragma once
#ifndef PRESIDENTIAL_PARDON_FORM_H

#include <ostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm();
		PresidentialPardonForm(std::string _target);
        PresidentialPardonForm(const PresidentialPardonForm & rhs);
        virtual ~PresidentialPardonForm();

        PresidentialPardonForm &operator=(const PresidentialPardonForm & rhs);

        virtual bool            execForm() const;
    private:
        std::string _target;
};

#endif