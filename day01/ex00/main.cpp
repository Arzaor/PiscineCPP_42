/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 01:30:37 by jbarette          #+#    #+#             */
/*   Updated: 2021/12/17 17:03:32 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

int     main(void)
{
    Zombie zombie1("Zombie1");
    zombie1.annonce();

    randomChump("Zombie2");

    Zombie* zombie3 = newZombie("Zombie3");
    zombie3->annonce();

    delete zombie3;

    return (0);
}