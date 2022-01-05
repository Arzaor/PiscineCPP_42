#pragma once
#ifndef SHRUBBERY_CREATION_FORM_H

#include <ostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm();
		ShrubberyCreationForm(std::string _target);
        ShrubberyCreationForm(const ShrubberyCreationForm & rhs);
        virtual ~ShrubberyCreationForm();

        ShrubberyCreationForm &operator=(const ShrubberyCreationForm & rhs);

        virtual bool            execForm() const;
    private:
        std::string _target;
};

#endif