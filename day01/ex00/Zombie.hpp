/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 01:27:50 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/15 20:11:46 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _ZOMBIE_H
#define _ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{  
	private:
		std::string name;

	public:
		void		annonce(void);
		Zombie(std::string name)
		{
			this->name = name;
		}
		~Zombie()
		{
			std::cout << "Zombie " << this->name << " is dead" << std::endl;
		}
};

#endif