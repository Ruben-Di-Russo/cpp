/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:17:48 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/01/30 14:27:54 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string.h>
#include <iostream>

class Zombie
{
	private:

	public:
	Zombie(std::string name);
	~Zombie();
	std::string name;
	void	announce (void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif