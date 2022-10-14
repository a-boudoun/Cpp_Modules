/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:21:36 by aboudoun          #+#    #+#             */
/*   Updated: 2022/10/14 16:49:07 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}

int PhoneBook::get_index()
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

	i = this->get_index();
	str first_name;
	str last_name;
	str nickname;
	str phone_number;
	str darkest_secret;
	std::cout<<"please enter first name : ";
	getline(std::cin, first_name);
	std::cout<<"please enter last name : ";
	getline(std::cin, last_name);
	std::cout<<"please enter nickname : ";
	getline(std::cin, nickname);
	std::cout<<"please enter phone number : ";
	getline(std::cin, phone_number);
	std::cout<<"please enter darkest secret : ";
	getline(std::cin, darkest_secret);
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

	// count = 8 ? this->index > 8 : this->index;
	if (this->index < 8)
		count = this->index;
	else
		count = 8;
	for (int i = 0; i < count; i++)
	{
		std::cout<<i<<"|";
		std::cout<<this->contact[i].get_FirstName()<<"|";
		std::cout<<this->contact[i].get_LastName()<<"|";
		std::cout<<this->contact[i].get_NickName()<<"|";
		std::cout<<this->contact[i].get_PhoneNumber()<<"|";
		std::cout<<this->contact[i].get_DarkestSecret()<<"|";
		std::cout<<std::endl;
	}
}
