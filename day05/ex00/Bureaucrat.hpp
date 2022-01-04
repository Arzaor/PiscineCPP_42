#pragma once
#ifndef BUREAUCRAT_H

#include <iostream>
#include <string>

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(const std::string _name, int _grade);
        Bureaucrat(const Bureaucrat & rhs);
        ~Bureaucrat();

        Bureaucrat &operator=(const Bureaucrat & rhs);

        void        incrementGrade();
        void        decrementGrade();

        std::string getName()   const;
        int         getGrade()  const;

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
        int                 _grade;

};

std::ostream&	operator<<(std::ostream& ofs, Bureaucrat const & rhs);

#endif