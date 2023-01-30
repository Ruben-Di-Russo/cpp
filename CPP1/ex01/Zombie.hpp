/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:17:48 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/01/24 18:41:07 by rdi-russ         ###   ########.fr       */
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
	Zombie(void);
	~Zombie();
	std::string name;
	void	announce (std::string name);
	void	setName(std::string name);
};

Zombie* zombieHorde(int n, std::string name );

#endif