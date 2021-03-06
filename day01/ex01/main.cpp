/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 01:30:37 by jbarette          #+#    #+#             */
/*   Updated: 2021/12/17 17:04:38 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name);

int     main(void)
{
    int n = 5;
    Zombie* zombies = zombieHorde(n, "Zombie1");
    while (n >= 0)
		zombies[n--].annonce();
    delete [] zombies;
    return (0);
}