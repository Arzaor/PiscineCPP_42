/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 01:27:50 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/15 01:53:53 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{  
	public:
		void		setName(std::string name);
		std::string	getName();
		void		annonce(void);
		Zombie*		newZombie(std::string name);
		void		randomChump(std::string name);
		~Zombie(void);

	private:
		std::string name;
};

#endif