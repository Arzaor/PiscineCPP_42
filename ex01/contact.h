/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacT.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 02:23:05 by jbarette          #+#    #+#             */
/*   Updated: 2021/10/01 03:10:22 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_CONTACT
#define DEF_CONTACT

#include <iostream>
#include <string>

class Contact
{
	public:

	void		setFirstName(std::string first_name);
	std::string	getFirstName();
	void		setLastName(std::string last_name);
	std::string	getLastName();
	void		setNickanme(std::string nickname);
	std::string	getNickname();
	void		setPhoneNumber(std::string phone_number);
	std::string	getPhoneNumber();
	void		setDarkestSecret(std::string darkest_secret);
	std::string	getDarkestSecret();

	private:

	std::string first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

#endif