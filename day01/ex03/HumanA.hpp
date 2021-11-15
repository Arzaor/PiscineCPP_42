/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:29:12 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/15 22:10:02 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _HUMAIN_A_
#define _HUMAIN_A_

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon& weapon_type;
		std::string name;

	public:
		HumanA(std::string name, Weapon& weapon_type);
		~HumanA();
		void	attack();
};

#endif