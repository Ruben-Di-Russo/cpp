/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:59:15 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/01/30 12:59:16 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    int status;
    int index;
    std::string command;
    PhoneBook book;


    status = 1;
    index = 0;
    while(status)
    {
        book.Banner();
        std::cout << "Please insert command ! : \n";
        std::cin >> command;

        if(command == "ADD")
        {
            book.addUser();
        }
        else if(command == "SEARCH")
        {
            book.getAllUser();
            std::cout << "Insert the index of the contact you want to see ! : \n";
            std::cin >> index;
            book.getUserinfo(index);

        }
        else if(command == "EXIT")
        {  
            return (0);
        }
        else {
            std::cout << "Uknown command" << std::endl;
            continue;
        }
    }

    return (0);
}