/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:17:20 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/15 22:03:38 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _WEAPON_H
#define _WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		void				setType(std::string type);
		std::string const &	getType();

	private:
		std::string type;
};

#endif