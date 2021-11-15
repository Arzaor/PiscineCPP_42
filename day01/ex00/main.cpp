/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 01:30:37 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/15 20:13:52 by jbarette         ###   ########.fr       */
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