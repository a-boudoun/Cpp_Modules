/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:33:50 by aboudoun          #+#    #+#             */
/*   Updated: 2023/04/09 02:16:46 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
		_price = rhs._price;
	return (*this);
}

void	BitcoinExchange::setDatabse()
{
	std::ifstream file("database.txt");
	std::string line;
	if(file.is_open())
	{
		
	}
	else
		std::cerr << "Error: File not found" << std::endl;
}