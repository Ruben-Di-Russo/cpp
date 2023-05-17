/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:58:27 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/03/28 16:33:14 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// ldapsearch uid=enoviell

int main(int ac, char **av)
{
    int i;
    int x;

    i = 1;
    if(ac > 1)
    {
        while (av[i])
        {
            x = 0;
            while(av[i][x])
            {
                if(av[i][x] >=97 && av[i][x] <=122)
                {
                    av[i][x] -= 32;
                }
                std::cout << av[i][x];
                x++;
            }
            i++;
            std::cout << ' ';
        }
        std::cout << std::endl;  
    }
    else
    {
         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return(0);
}