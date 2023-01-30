/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:17:41 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/01/24 18:46:41 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n,  std::string name ) 
{
    Zombie *zombieh = new Zombie[n];
    for (int i = 0; i < n; ++i)
    {
        zombieh[i].setName(name);
    }
    return (zombieh);
}