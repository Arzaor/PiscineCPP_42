#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = "defaultTarget";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & rhs) : Form(rhs.getName(), rhs.getGradeSign(), rhs.getGradeExec())
{
	*this = rhs;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
	this->_target = rhs._target;
	this->setSign(rhs.getSign());
	return (*this);
}

bool    RobotomyRequestForm::execForm() const
{
	int		random = rand() % 100 + 1;

	std::cout << "* BRRRRRRR *" << std::endl;
	if (random >= 50)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
	return true;
}