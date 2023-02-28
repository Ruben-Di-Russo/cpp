/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:59:06 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/02/01 18:21:03 by rdi-russ         ###   ########.fr       */
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

void		Contact::setFirstName(std::string fn)
{
	this->FirstName = fn;
	
}
void		Contact::setIndex(int index)
{
	this->index = index;
}

void	Contact::setLastName(std::string ln)
{
	this->LastName = ln;
}

void		Contact::setNickName(std::string nm)
{
	this->NickName = nm;
}

void		Contact::setNumber(std::string num)
{
	this->Number = num;
}

void		Contact::setSecret(std::string sec)
{
	this->Secret = sec;
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
	//this->index = id;
	this->setIndex(id);
	std::string fn;
	std::string ln;
	std::string nm;
	std::string num;
	std::string sec;
	std::cout << "Please enter you first name" << std::endl;
	std::cin.ignore();
	std::getline(std::cin, fn);
	if(fn.empty())
		{
			std::cout << "No FirstName input detected ...restart" << std::endl;
			return(this->saveContact(id));
		}
	this->setFirstName(fn);
	std::cout << "Please enter your last name" << std::endl;
	std::getline(std::cin, ln);
	if(ln.empty())
		{
			std::cout << "No LastName input detected ...restart" << std::endl;
			return(this->saveContact(id));
		}	
	this->setLastName(ln);
	std::cout << "Please enter your nickname" << std::endl;
	std::getline(std::cin, nm);
	if(nm.empty())
		{
			std::cout << "No NickName input detected ...restart" << std::endl;
			return(this->saveContact(id));
		}
	this->setNickName(nm);		
	std::cout << "Please enter your phone number" << std::endl;
	std::getline(std::cin, num);
	if(num.empty())
		{
			std::cout << "No Number input detected ...restart" << std::endl;
			return(this->saveContact(id));
		}		
	this->setNumber(num);		
	std::cout << "Please enter your darkest secret" << std::endl;
	std::getline(std::cin, sec);
	if(sec.empty())
		{
			std::cout << "No Secret input detected ...restart" << std::endl;
			return(this->saveContact(id));
		}
	this->setSecret(sec);			
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