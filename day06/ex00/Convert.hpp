#pragma once
#ifndef CONVERT_H

#include <iostream>
#include <string>

class Convert
{
    public:
        Convert(void);
        Convert(std::string _parameter);
        Convert(const Convert & rhs);
        ~Convert(void);

        Convert &operator=(const Convert & rhs);

        void        convertParameter(std::string _parameter);

        std::string getParameter() const;
    private:
        std::string _parameter;
};

#endif