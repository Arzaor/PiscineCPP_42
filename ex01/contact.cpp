/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 02:03:04 by jbarette          #+#    #+#             */
/*   Updated: 2021/10/01 03:14:45 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.h"

void	Contact::setId(int	id)
{
	this->id = id;
}

int		Contact::getId()
{
	return id;
}

void	Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

std::string	Contact::getFirstName()
{
	return	firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

std::string	Contact::getLastName()
{
	return	lastName;
}

void	Contact::setNickanme(std::string nickname)
{
	this->nickname = nickname;
}

std::string	Contact::getNickname()
{
	return	nickname;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

std::string	Contact::getPhoneNumber()
{
	return	phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string	Contact::getDarkestSecret()
{
	return	darkestSecret;
}