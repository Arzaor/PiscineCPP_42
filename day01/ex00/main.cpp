/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 01:30:37 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/29 13:07:55 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

int     main(void)
{
    Zombie Hamza("Hamza");
    Hamza.annonce();

    randomChump("Daniela");

    Zombie* Jeremy = newZombie("Jeremy");
    Jeremy->annonce();

    delete Jeremy;

    return (0);
}