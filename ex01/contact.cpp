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

void	Contact::setFirstName(std::string first_name)
{
	this->first_name = first_name;
}

std::string	Contact::getFirstName()
{
	return	first_name;
}

void	Contact::setLastName(std::string last_name)
{
	this->last_name = last_name;
}

std::string	Contact::getLastName()
{
	return	last_name;
}

void	Contact::setNickanme(std::string nickname)
{
	this->nickname = nickname;
}

std::string	Contact::getNickname()
{
	return	nickname;
}

void	Contact::setPhoneNumber(std::string phone_number)
{
	this->phone_number = phone_number;
}

std::string	Contact::getPhoneNumber()
{
	return	phone_number;
}

void	Contact::setDarkestSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

std::string	Contact::getDarkestSecret()
{
	return	darkest_secret;
}