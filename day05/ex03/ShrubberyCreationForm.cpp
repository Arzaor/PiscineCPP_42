#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = "defaultTarget";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & rhs) : Form(rhs.getName(), rhs.getGradeSign(), rhs.getGradeExec())
{
	*this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
{
	this->_target = rhs._target;
	this->setSign(rhs.getSign());
	return (*this);
}

bool    ShrubberyCreationForm::execForm() const
{
	std::string		filename = this->_target;
	filename += "_shrubbery";
	std::ofstream	ofs(filename);
	if (!(ofs.is_open()))
	{
		std::cout << "Can't create file." << std::endl;
		return (false);
	}
	else
	{
		ofs << "                             # #### ####" <<			std::endl
        << "                           ### /#|### |/####" <<			std::endl
        << "                          ##'\'/#/ '\'||/##/_/##/_#" << 	std::endl
        << "                        ###  '\'/###|/ '\'/ # ###" <<		std::endl
        << "                      ##_'\'_#'\'_'\'## | #/###_/_####" <<	std::endl
        << "                     ## #### # '\' #| /  #### ##/##" <<		std::endl
        << "                      __#_--###`  |{,###---###-~" <<		std::endl
        << "                                '\' }{" << 					std::endl
        << "                                 }}{" <<					std::endl
        << "                                 }}{" <<					std::endl
        << "                                 {{}" <<					std::endl
        << "                           , -=-~{ .-^- _" <<				std::endl
        << "                                 `}" <<						std::endl
        << "                                  {"  <<					std::endl;
		return (true);
	}
}