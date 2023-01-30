/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:17:46 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/01/24 20:08:08 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << ":   * the zombie is getting destroyed *" << std::endl;
}

void	Zombie::announce (std::string name)
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
//  scemo chi legge
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}