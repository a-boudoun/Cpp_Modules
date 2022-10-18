/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:58:53 by aboudoun          #+#    #+#             */
/*   Updated: 2022/10/18 15:26:58 by aboudoun         ###   ########.fr       */
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
		std::cin>>command;
		if (!std::cin.good())
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
	return(0);
}
