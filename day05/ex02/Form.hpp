#pragma once
#ifndef FORM_H

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
    public:
        Form(void);
        Form(const std::string _name, const int _gradeSign, const int _gradeExec);
        Form(const Form & rhs);
        virtual ~Form();

        Form &operator=(const Form & rhs);

       	void			beSigned(Bureaucrat & rhs);
        void    		execute(Bureaucrat const & executor) const;
		virtual bool	execForm() const = 0;

        std::string getName() const;
		void		setSign(bool sign);
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
        class IsNotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("This form is not signed.");
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