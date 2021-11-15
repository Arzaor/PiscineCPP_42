/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:40:35 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/15 22:10:38 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_type): weapon_type(weapon_type), name(name)
{
	;
}

HumanA::~HumanA()
{
	;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon_type.getType() << std::endl;
}