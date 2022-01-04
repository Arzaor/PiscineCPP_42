#pragma once
#ifndef ROBOTOMY_REQUEST_FORM_H

#include <ostream>
#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm();
		RobotomyRequestForm(std::string _target);
        RobotomyRequestForm(const RobotomyRequestForm & rhs);
        virtual ~RobotomyRequestForm();

        RobotomyRequestForm &operator=(const RobotomyRequestForm & rhs);

        virtual bool            execForm() const;
    private:
        std::string _target;
};

#endif