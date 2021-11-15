/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 01:27:40 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/15 01:53:58 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string name)
{
	this->name = name;
}

std::string	Zombie::getName()
{
	return name;
}

void    Zombie::annonce()
{
	std::cout << "<" << getName() << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie* zombie1 = new Zombie();
	zombie1->setName(name);
	return (zombie1);
}

void	Zombie::randomChump(std::string name)
{
	newZombie(name)->annonce();
}

Zombie::~Zombie()
{
	std::cout << getName() << std::endl;
}