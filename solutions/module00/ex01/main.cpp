/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:58:53 by aboudoun          #+#    #+#             */
/*   Updated: 2022/10/12 15:51:26 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int main()
{
	PhoneBook	Contact;
	std::string	command;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "ADD")
			Contact.add_contact(Contact.get_contactNb());
		else if (command == "SEARCH")
			Contact.search_contact(Contact.get_contactNb());
		else if (command == "EXIT")
			Contact.exit_contact();
		else
			std::cout << "Invalid command" << std::endl;
	}
}
