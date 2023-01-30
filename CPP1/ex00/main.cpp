/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:17:36 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/01/30 14:31:18 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main( void )
{
    std::string name;

    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
    Zombie zombi1(name);
    zombi1.announce();
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;

    Zombie *zombi2 = newZombie(name);
    zombi2->announce();
    delete zombi2;

    std::cout << "randomChump" << std::endl;    
    randomChump("random");
    return 0;
}