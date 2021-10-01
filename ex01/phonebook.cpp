/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 22:13:56 by jbarette          #+#    #+#             */
/*   Updated: 2021/10/01 03:32:46 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void	Phonebook::add_contact()
{
	Contact	new_contact;
	std::string tmp;

	std::cout << "First name" << std::endl;
	std::getline (std::cin, tmp);
	new_contact.setFirstName(tmp);
	std::cout << "Last name" << std::endl;
	std::getline (std::cin, tmp);
	new_contact.setLastName(tmp);
	std::cout << "Nickname" << std::endl;
	std::getline (std::cin, tmp);
	new_contact.setNickanme(tmp);
	std::cout << "Phone number" << std::endl;
	std::getline (std::cin, tmp);
	new_contact.setPhoneNumber(tmp);
	std::cout << "Darkest secret" << std::endl;
	std::getline (std::cin, tmp);

	this->contact = contact;
}
