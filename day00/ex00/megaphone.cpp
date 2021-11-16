/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 00:33:40 by jbarette          #+#    #+#             */
/*   Updated: 2021/10/01 03:35:37 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::string s;
    if(argc < 2)
            std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    for(int i = 1; argv[i];i++)
    {
        s = argv[i];
        std::transform(s.begin(), s.end(),s.begin(),::toupper);
        std::cout << s << std::endl;
    }
}
