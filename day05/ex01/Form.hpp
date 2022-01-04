#pragma once
#ifndef FORM_H

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
    public:
        Form(const std::string _name, const int _gradeSign, const int _gradeExec);
        Form(const Form & rhs);
        ~Form();

        Form &operator=(const Form & rhs);

        Form&       beSigned(Bureaucrat & rhs);

        std::string getName() const;
        bool        getSign() const;
        int         getGradeSign() const;
        int         getGradeExec() const;

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Level is too low.");
                }
        };
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Level is too high.");
                }
        };
    private:
        const std::string   _name;
        bool                _sign;
        const int           _gradeSign;
        const int           _gradeExec;
};

std::ostream&	operator<<(std::ostream& ofs, Form const & rhs);

#endif