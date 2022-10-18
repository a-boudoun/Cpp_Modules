/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:21:36 by aboudoun          #+#    #+#             */
/*   Updated: 2022/10/18 17:25:30 by aboudoun         ###   ########.fr       */
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
	std::cin>>input;
	if (!std::cin.good())
	{
		std::cout<<"Invalid input"<<std::endl;
		std::exit(0);
	}
	if (input.empty())
		requestInfo(info);
	return (input);
}

int PhoneBook::GetIndex()
{
	return (this->index % 8);
}

str	PhoneBook::truncate(str s)
{
	if (s.length() > 10)
		return (s.substr(0, 9) + ".");
	return (s);
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
	int	index = 0;

	count = this->index < 8 ? this->index : 8;

	if (count == 0)
	{
		std::cout<<"No contacts to search"<<std::endl;
		return ;
	}
	std::cout<<std::setw(10)<<"Index"<<" | ";
	std::cout<<std::setw(10)<<"First Name"<<" | ";
	std::cout<<std::setw(10)<<"Last Name"<<" | ";
	std::cout<<std::setw(10)<<"Nickname"<<std::endl;
	for (int i = 0; i < count; i++)
	{
		std::cout<<std::setw(10)<<i<<" | ";
		std::cout<<std::setw(10)<<truncate(this->contact[i].GetFirstName())<<" | ";
		std::cout<<std::setw(10)<<truncate(this->contact[i].GetLastName())<<" | ";
		std::cout<<std::setw(10)<<truncate(this->contact[i].GetNickName())<<std::endl;
		std::cout<<std::endl;
	}

	std::cout<<"Please enter the index of the contact you want to see: ";
	std::cin>>index;
	if (std::cin.good())
	{
		std::cout<<"invalid input"<<std::endl;
		std::exit(0);
	}

	if (index <= count - 1 && index >= 0)
	{
		std::cout<<"First Name: "<<this->contact[index].GetFirstName()<<std::endl;
		std::cout<<"Last Name: "<<this->contact[index].GetLastName()<<std::endl;
		std::cout<<"Nickname: "<<this->contact[index].GetNickName()<<std::endl;
		std::cout<<"Phone Number: "<<this->contact[index].GetPhoneNumber()<<std::endl;
		std::cout<<"Darkest Secret: "<<this->contact[index].GetDarkestSecret()<<std::endl;
	}
	else
		std::cout<<"No cntact with this index"<<std::endl;
}

void	PhoneBook::exit()
{
	std::cout<<"Exit"<<std::endl;
	std::exit(0);
}
