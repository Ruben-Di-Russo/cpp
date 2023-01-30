/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:17:36 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/01/25 17:12:01 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main( void )
{
    std::string name;
    int n;

    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
 
    std::cout << "Zombie number: " << std::flush;
    std::cin >> n;

    Zombie *zombi2 = zombieHorde(n, name);
    for (int i = 0; i < n; i++)
    {
        zombi2[i].announce(name);
    }
    delete [] zombi2;
    return 0;
}