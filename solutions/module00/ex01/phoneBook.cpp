/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:21:36 by aboudoun          #+#    #+#             */
/*   Updated: 2022/10/16 12:38:03 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}

str	PhoneBook::requestInfo(str info)
{
	str input;

	std::cout<<"Please enter "<<info<<": ";
	if (!std::getline(std::cin, input))
	{
		std::cout<<"Invalid input"<<std::endl;
		std::exit(0);
	}
	return (input);
}

int PhoneBook::GetIndex()
{
	return (this->index % 8);
}

void	PhoneBook::exit()
{
	std::cout<<"Exit"<<std::endl;
	std::exit(0);
}

void	PhoneBook::add()
{
	int i;

	i = this->GetIndex();
	str first_name;
	str last_name;
	str nickname;
	str phone_number;
	str darkest_secret;
	first_name = requestInfo("first name");
	last_name = requestInfo("last name");
	nickname = requestInfo("nickname");
	phone_number = requestInfo("phone number");
	darkest_secret = requestInfo("darkest secret");
	this->contact[i].set_FirstName(first_name);
	this->contact[i].set_LastName(last_name);
	this->contact[i].set_NickName(nickname);
	this->contact[i].set_PhoneNumber(phone_number);
	this->contact[i].set_DarkestSecret(darkest_secret);
	std::cout<<"Contact added"<<std::endl;
	this->index++;
}

void	PhoneBook::search()
{
	int	count;

	count = this->index < 8 ? this->index : 8;
	
	for (int i = 0; i < count; i++)
	{
		std::cout<<i<<"|";
		std::cout<<this->contact[i].GetFirstName()<<"|";
		std::cout<<this->contact[i].GetLastName()<<"|";
		std::cout<<this->contact[i].GetNickName()<<"|";
		std::cout<<this->contact[i].GetPhoneNumber()<<"|";
		std::cout<<this->contact[i].GetDarkestSecret()<<"|";
		std::cout<<std::endl;
	}
}
