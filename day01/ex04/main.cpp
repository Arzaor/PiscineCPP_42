/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:24:49 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/16 00:58:37 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char *argv[])
{
	std::string s;
	if (argc < 4)
		std::cout << "Vous devez indiquer 3 paramètres." << std::endl;
	std::ifstream	ifs(argv[1]);
	if (!(ifs.is_open()))
		std::cout << "Impossible d'ouvrir le fichier." << std::endl;
	else
	{
		std::string filename = argv[1];
		filename += ".replace";
		std::string	haystack = argv[2];
		std::ofstream	ofs(filename);
		if (!(ofs.is_open()))
			std::cout << "Impossible de créer le fichier de remplacement." << std::endl;
		else
		{
			while (getline(ifs, s))
			{
				std::size_t	pos = s.find(haystack);
				while (pos != std::string::npos)
				{
					s.erase(pos, haystack.length());
					s.insert(pos, argv[3]);
					pos = s.find(haystack);
				}
				ofs << s << std::endl;
			}
		}
		ofs.close();
	}
	ifs.close();
	return 0;
}