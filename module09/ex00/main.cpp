/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:59:48 by aboudoun          #+#    #+#             */
/*   Updated: 2023/04/09 21:22:50 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout
		<< "Error: Invalid number of arguments\n"
		<< "Usage: ./btc <database.csv>\n";
		return (1);
	}
	BitcoinExchange exchange(av[1]);
	exchange.setDatabse();
	exchange.getResult();
	return (0);
}