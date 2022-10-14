/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:58:53 by aboudoun          #+#    #+#             */
/*   Updated: 2022/10/14 16:56:00 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	Phonebook;
	std::string	command;

	while (1)
	{
		std::cout<<"please enter a command : ADD SEARCH or EXIT : ";
		getline(std::cin, command);
		if (command.empty())
			command = " ";
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
