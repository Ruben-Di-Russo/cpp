/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:59:06 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/01/30 13:06:39 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

std::string	Contact::getIndex()
{
	return (std::to_string(this->index));
}
std::string Contact::getFirstName()
{
	return (this->FirstName);
}

std::string Contact::getLastName()
{
	return (this->LastName);
}

std::string Contact::getNickName()
{
	return (this->NickName);
}

std::string Contact::getNumber()
{
	return (this->Number);
}

std::string Contact::getSecret()
{
	return (this->Secret);
}


bool	Contact::saveContact(int id)
{
	this->index = id;
	
	std::cout << "Please enter you first name" << std::endl;
	std::cin.ignore();
	std::getline(std::cin, this->FirstName);
	if(this->FirstName.empty())
		{
			std::cout << "No FirstName input detected ...restart" << std::endl;
			return(this->saveContact(id));
		}
	std::cout << "Please enter your last name" << std::endl;
	std::getline(std::cin, this->LastName);
	if(this->LastName.empty())
		{
			std::cout << "No LastName input detected ...restart" << std::endl;
			return(this->saveContact(id));
		}	

	std::cout << "Please enter your nickname" << std::endl;
	std::getline(std::cin, this->NickName);
	if(this->NickName.empty())
		{
			std::cout << "No NickName input detected ...restart" << std::endl;
			return(this->saveContact(id));
		}			
	std::cout << "Please enter your phone number" << std::endl;
	std::getline(std::cin, this->Number);
	if(this->Number.empty())
		{
			std::cout << "No Number input detected ...restart" << std::endl;
			return(this->saveContact(id));
		}			
	std::cout << "Please enter your darkest secret" << std::endl;
	std::getline(std::cin, this->Secret);
	if(this->Secret.empty())
		{
			std::cout << "No Secret input detected ...restart" << std::endl;
			return(this->saveContact(id));
		}		
	return (true);
}


int Contact::StrLen(std::string st)
{
	int i;
	i = 0;
	while(st[i]){
		i++;
	}
	return (i);
}
std::string	Contact::Resize(std::string st)
{
	int res;
	int len;
	std::string output;

	output = st;
	len = this->StrLen(st);
	if(len > 10)
	{
		output.erase(output.begin()+9, output.end());
		output += '.';
	}
	else
	{
		res = 10 - len;
		output = "";
		for(int i = 0; i < res; i++)
		{
			output += " ";
		}
		output += st;
	}
	return (output);
}

void	Contact::getAllContacts(void)
{
	std::cout << "|         "<<std::stoi(this->getIndex()) + 1<<"|"<< this->Resize(this->getFirstName()) <<"|"<< this->Resize(this->getLastName()) <<"|"<< this->Resize(this->getNickName()) <<"|" << std::endl;
}
void	Contact::getContactById(void)
{
	std::cout << "|   index  |First Name|Last Name | Nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|         "<<std::stoi(this->getIndex()) + 1<<"|"<< this->Resize(this->getFirstName()) <<"|"<< this->Resize(this->getLastName()) <<"|"<< this->Resize(this->getNickName()) <<"|" << std::endl;
}

void	Contact::getFullContactInfo(void)
{
std::cout << "First Name: " << this->getFirstName() << std::endl;
std::cout << "Last Name: " << this->getLastName() << std::endl;
std::cout << "Nickname: " << this->getNickName() << std::endl;
std::cout << "Phone Number: " << this->getNumber() << std::endl;
std::cout << "Darkest Secret: " << this->getSecret() << std::endl;
}