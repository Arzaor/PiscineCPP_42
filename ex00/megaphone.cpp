/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 00:33:40 by jbarette          #+#    #+#             */
/*   Updated: 2021/09/28 00:46:10 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char *argv[])
{
	int	i, k;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			k = 0;
			while (argv[i][k])
				printf("%c", toupper(argv[i][k++]));
			i++;
		}
	}
	else
		printf("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	return 0;
}
