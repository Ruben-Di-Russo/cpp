/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:59:11 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/02/01 18:14:59 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string.h>
#include <iostream>
class Contact
{
	private:
		int			index;
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	Number;
		std::string	Secret;
    public:
		Contact();
		~Contact();

		std::string	getIndex();
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getNumber();
		std::string	getSecret();
		
		void		setIndex(int index);
		void		setFirstName(std::string fn);
		void		setLastName(std::string ln);
		void		setNickName(std::string nm);
		void		setNumber(std::string num);
		void		setSecret(std::string sec);

		bool			saveContact(int id);
		void			getContactById(void);
		void			getAllContacts(void);
		void			getFullContactInfo(void);
		std::string		Resize(std::string st);
		int				StrLen(std::string st);


};

#endif