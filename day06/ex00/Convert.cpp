#include "Convert.hpp"

Convert::Convert(void)
{
    this->_parameter = '0';
}

Convert::Convert(std::string _parameter)
{
    this->_parameter = _parameter;
}

Convert::Convert(const Convert & rhs)
{
    this->_parameter = rhs.getParameter();
    *this = rhs;
}

Convert&    Convert::operator=(const Convert & rhs)
{
    this->_parameter = rhs.getParameter();
    return (*this);
}

std::string Convert::getParameter() const
{
    return this->_parameter;
}