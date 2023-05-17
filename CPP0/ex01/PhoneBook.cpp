/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:59:21 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/03/30 15:25:46 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->counter = 0;
    this->total = 0;
}
PhoneBook::~PhoneBook(void)
{
    return;
}

void PhoneBook::Banner(void)
{
std::cout << std::endl << "--------------USAGE---------------" << std::endl;
std::cout << "ADD	: To add a contact." << std::endl;
std::cout << "SEARCH	: To search for a contact." << std::endl;
std::cout << "EXIT	: to quite the PhoneBook." << std::endl;
std::cout << "----------------------------------" << std::endl;
}

void PhoneBook::addUser(void){
    if(this->users[this->counter].saveContact(this->counter))
    {
        std::cout << "Contact has been added !" << std::endl;
        if(this->total < 7)
            this->total++;
    }
    this->counter++;
    this->counter = this->counter % 8;

    
}

void PhoneBook::getUserById(int index){
    if(index > this->counter)
    {
        std::cout << "Wrong index !" << std::endl;
    }
    else
    {
        
        this->users[index].getContactById();
    }
}

void PhoneBook::getAllUser(void)
{
    std::cout << "|   index  |First Name|Last Name | Nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    for(int i = 0; i < this->total ; i++ )
    {
        this->users[i].getAllContacts();
    }
}

void    PhoneBook::getUserinfo(int index)
{
    this->users[index - 1].getFullContactInfo();
}

