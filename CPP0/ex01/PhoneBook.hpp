/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:59:24 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/01/30 12:59:27 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
    private:
    Contact users[8];
    
    public:
    PhoneBook();
    ~PhoneBook();
    int     counter;
    int     total;
    void    Banner(void);
    void    addUser(void);
    void    getUserById(int index);
	void	getAllUser(void);
    void    getUserinfo(int index);

};

#endif