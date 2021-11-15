/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:44:51 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/15 22:10:57 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): weapon_type(NULL), name(name)
{
	;
}

HumanB::~HumanB()
{
	;
}

void	HumanB::setWeapon(Weapon& weapon_type)
{
	this->weapon_type = &weapon_type;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon_type->getType() << std::endl;
}