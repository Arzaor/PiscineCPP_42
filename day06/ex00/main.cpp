#include "Convert.hpp"

int		main(int ac, char **av)
{
	double	to_convert;
	if (ac == 2)
	{
		std::string str = av[1];
		if (av[1][0] && !(av[1][1]) && (av[1][0] < '0' || av[1][0] > '9'))
			to_convert = static_cast<double>(av[1][0]);
		else
		{
			try 
			{
				to_convert = ::atof(str.c_str());
			}
			catch (std::exception & e)
			{
				std::cerr << e.what() << std::endl;
				return (0);
			}
		}
		std::cout << "char: ";
		convert_char(to_convert);
		std::cout << "int: ";
		convert_int(to_convert);
		std::cout << "float: ";
		convert_float(to_convert);
		std::cout << "double: ";
		convert_double(to_convert);
	}
	else
		std::cout << "Error: Number of arguments invalid." << std::endl;
	return (0);
}
