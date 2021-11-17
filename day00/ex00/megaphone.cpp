/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 00:33:40 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/17 22:19:18 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
        int i = 0;
		int	j = 0;
        while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] = toupper(argv[i][j]);
				j++;
			}
            i++;
		}
		j = 1;
		while (argv[j])
		{
			std::cout << argv[j];
			j++;
		}
		std::cout << std::endl;
	}
}
