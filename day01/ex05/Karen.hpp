/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 01:43:56 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/16 02:31:20 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _KAREN_H
#define _KAREN_H

#include <iostream>
#include <string>

class Karen
{
	public:
		Karen();
		std::string	indexMessage[4];
		void	(Karen::*message[4])(void);
		void	complain(std::string level);
	
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif