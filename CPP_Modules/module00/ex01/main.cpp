/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:58:53 by aboudoun          #+#    #+#             */
/*   Updated: 2022/10/22 15:27:27 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

int main()
{
	PhoneBook	Phonebook;
	std::string	command;

	while (1)
	{
		std::cout<<"please enter ADD SEARCH or EXIT : ";
		std::cin>>command;
		std::cin.ignore(1000, '\n');
		if (!std::cin.good())
		{
			std::cout<<"Invalid input"<<std::endl;
			exit(0);
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
	return(0);
}
