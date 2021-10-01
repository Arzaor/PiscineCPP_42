/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 22:11:09 by jbarette          #+#    #+#             */
/*   Updated: 2021/10/01 02:12:16 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	main()
{
	std::string	cmd;
	Phonebook	phonebook1;
	while (1)
	{
		std::cout << "Tapez la commande :" << std::endl;
		std::getline (std::cin, cmd);
		if (cmd == "EXIT")
		{
			break ;
			return 0;
		}
		else if (cmd == "ADD")
			phonebook1.add_contact();			
	}
	return 0;
}