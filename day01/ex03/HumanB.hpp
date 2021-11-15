/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:29:56 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/15 22:10:06 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _HUMAIN_B_
#define _HUMAIN_B_

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon* weapon_type;
		std::string name;

	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon& weapon_type);
		void	attack();
};

#endif