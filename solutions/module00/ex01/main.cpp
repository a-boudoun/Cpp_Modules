/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:58:53 by aboudoun          #+#    #+#             */
/*   Updated: 2022/10/16 13:50:00 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	Phonebook;
	std::string	command;

	while (1)
	{
		std::cout<<"please enter ADD SEARCH or EXIT : ";
		if (!std::getline(std::cin, command))
		{
			std::cout<<"Invalid input"<<std::endl;
			std::exit(0);
		}
		else if (command == "EXIT")
			Phonebook.exit();
		else if (command == "ADD")
			Phonebook.add();
		else if (command == "SEARCH")
			Phonebook.search();
		else
			std::cout<<"Invalid command"<<std::endl;
	}
}
