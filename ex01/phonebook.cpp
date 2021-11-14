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

Contact	Phonebook::addContact(int id)
{
	Contact	contact;
	std::string tmp;

	contact.setId(id);
	std::cout << "First name" << std::endl;
	std::getline (std::cin, tmp);
	contact.setFirstName(tmp);
	std::cout << "Last name" << std::endl;
	std::getline (std::cin, tmp);
	contact.setLastName(tmp);
	std::cout << "Nickname" << std::endl;
	std::getline (std::cin, tmp);
	contact.setNickanme(tmp);
	std::cout << "Phone number" << std::endl;
	std::getline (std::cin, tmp);
	contact.setPhoneNumber(tmp);
	std::cout << "Darkest secret" << std::endl;
	std::getline (std::cin, tmp);
	contact.setDarkestSecret(tmp);
	return contact;
}

void		Phonebook::setContact(Contact contact, int id)
{
	this->contactBook[id] = contact;
}

Contact		Phonebook::getContact(int id)
{
	return this->contactBook[id];
}