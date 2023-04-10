/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:33:50 by aboudoun          #+#    #+#             */
/*   Updated: 2023/04/10 21:05:34 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _file(""), _price()
{
	// std::cout << "BitcoinExchange created" << std::endl;
}

BitcoinExchange::BitcoinExchange(std::string file) : _file(file), _price()
{
	// std::cout << "BitcoinExchange created" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
	{
		_file = rhs._file;
		_price = rhs._price;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
	// std::cout << "BitcoinExchange destroyed" << std::endl;
}

void	BitcoinExchange::setDatabse()
{
	std::string		line;
	std::string 	date;
	std::string 	price;
	std::ifstream	file("data.csv");

	if (file.is_open())
	{
		getline(file, line);
		while(getline(file, line))
		{
			date = line.substr(0, line.find(","));
			price = line.substr(line.find(",") + 1, line.length());
			_price[date] = toDouble(price);
		}
	}
	else
	{
		std::cout << "Unable to open the database" << std::endl;
		std::exit(1);
	}
}

void	BitcoinExchange::getResult()
{
	std::string		line;
	
	std::ifstream	input(this->_file);
	if (input.is_open())
	{
		while(getline(input, line))
		{
			if (line.empty() || line == "date | value")
				continue;
			else
				checkData(line);
		}
	}
	else
		std::cout << "Unable to open the file" << std::endl;
}