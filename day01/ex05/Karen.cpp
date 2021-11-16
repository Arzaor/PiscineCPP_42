/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 01:43:58 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/16 02:34:42 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

Karen::Karen()
{
	this->indexMessage[0] = "DEBUG";
	this->indexMessage[1] = "INFO";
	this->indexMessage[2] = "WARNING";
	this->indexMessage[3] = "ERROR";

	this->message[0] = &Karen::debug;
	this->message[1] = &Karen::info;
	this->message[2] = &Karen::warning;
	this->message[3] = &Karen::error;
}

void	Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	int	i = 0;
	while (i <= 3)
	{
		if (level == this->indexMessage[i])
			(this->*message[i])();
		i++;
	}
}

