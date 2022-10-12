/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:21:36 by aboudoun          #+#    #+#             */
/*   Updated: 2022/10/12 15:49:05 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}


void	PhoneBook::add_contact(Contact *contact)
{
	std::cout << "First name: ";
	std::cin >> contact[this->index%8].first_name;
	std::cout << "Last name: ";
	std::cin >> contact[this->index%8].last_name;
	std::cout << "Nickname: ";
	std::cin >> contact[this->index%8].nickname;
	std::cout << "Phone number: ";
	std::cin >> contact[this->index%8].phone_number;
	std::cout << "Darkest secret: ";
	std::cin >> contact[this->index%8].darkest_secret;
	this->index++;
}

void	PhoneBook::search_contact(Contact *contact)
{
	int i = 0;
	int index;

	while (i < 8 && i < this->index)
	{
		std::cout << i << " | ";
		if (contact[i].first_name.length() > 10)
			std::cout << contact[i].first_name.substr(0, 9) << ". | ";
		else
			std::cout << std::setw(10) << contact[i].first_name << " | ";
		if (contact[i].last_name.length() > 10)
			std::cout << contact[i].last_name.substr(0, 9) << ". | ";
		else
			std::cout << std::setw(10) << contact[i].last_name << " | ";
		if (contact[i].nickname.length() > 10)
			std::cout << contact[i].nickname.substr(0, 9) << ". | ";
		else
			std::cout << std::setw(10) << contact[i].nickname << " | ";
		std::cout << std::endl;
		i++;
	}
	std::cout << "Enter the index of the contact you want to see: ";
	std::cin >> index;
	if (index >= 0 && index < this->index)
	{
		std::cout << "First name: " << contact[index].first_name << std::endl;
		std::cout << "Last name: " << contact[index].last_name << std::endl;
		std::cout << "Nickname: " << contact[index].nickname << std::endl;
		std::cout << "Phone number: " << contact[index].phone_number << std::endl;
		std::cout << "Darkest secret: " << contact[index].darkest_secret << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}

void	PhoneBook::exit_contact()
{
	std::cout << "exit" << std::endl;
	exit(EXIT_SUCCESS);
}
