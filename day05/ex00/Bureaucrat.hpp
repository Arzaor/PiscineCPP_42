#pragma once
#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(int grade);
		Bureaucrat(const Bureaucrat & rhs);
		~Bureaucrat(void);

		std::string 		getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();

		Bureaucrat	&operator=(const Bureaucrat & rhs);
	private:
		std::string const	name;
		int					grade;
};

std::ostream&	operator<<(std::ostream& ifs, Bureaucrat const & rhs);

#endif