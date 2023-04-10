/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 21:20:30 by aboudoun          #+#    #+#             */
/*   Updated: 2023/04/10 21:22:41 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

double	toDouble(std::string str)
{
	std::stringstream ss(str);
	double d;
	ss >> d;
	return (d);
}

bool	checkDigit(const std::string&	str)
{
	size_t front = 0;
	size_t back = str.length() - 1;
	bool dot = false;
	
	while(str[front] && str[front] == ' ')
		front++;
	while (str[back] && str[back] == ' ')
		back--;
	if (str[front] == '-' || str[front] == '+')
		front++;
	for (size_t i = front; i < back; i++)
	{
		if (str[i] == '.')
		{
			if (dot == true)
				return (false);
			dot = true;
		}
		else if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

bool	checkValue(const std::string& value)
{
	double v;

	if (!checkDigit(value))
	{
		std::cout << "Error: bad input -> " << value << std::endl;
		return (false);
	}
	v = toDouble(value);
	if (v < 0)
	{
		std::cout << "Error not a positive number" << std::endl;
		return (false);
	}
	if (v > 1000)
	{
		std::cout << "Error: too large number -> " << value << std::endl;
		return (false);
	}
	return (true);
}

bool	checkLeap(size_t year, size_t month, size_t day)
{
	if (year % 4 == 0 && day >29)
	{
		std::cout << "Error: bad input -> " << year << "-" << month << "-" << day << std::endl;
		return (false);
	}
	else if (day > 28)
	{	
		std::cout << "Error: bad input -> " << year << "-" << month << "-" << day << std::endl;
		return (false);
	}
	return (true);
}

bool	checkDate(const std::string& date)
{
	size_t year, month, day;
	std::string y, m, d;
	std::stringstream ss(date);
	struct tm struc;

	getline(ss, y, '-');
	getline(ss, m, '-');
	getline(ss, d, '-');
	year = toDouble(y);
	month = toDouble(m);
	day = toDouble(d);
	
	if (checkDigit(y) == false || checkDigit(m) == false || checkDigit(d) == false ||
		strptime(date.c_str(), "%Y-%m-%d", &struc) == NULL)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (false);
	}
	if (month == 2)
		return(checkLeap(year, month, day));
	return (true);
}

void	BitcoinExchange::checkData(const std::string& line)
{
	std::string 							date;
	std::string 							value;
	size_t 									pos;
	std::map<std::string, double>::iterator it;
	double									result;

	pos = line.find("|");
	if (pos == std::string::npos)
		std::cout << "Error: bad input => " << line << std::endl;
	else
	{
		date = line.substr(0, pos);
		value = line.substr(pos + 1, line.length());
		if (checkDate(date) && checkValue(value))
		{
			it = this->_price.upper_bound(date);
			if (it == this->_price.begin())
			{
				std::cout << "Error: no bitcoin yet" << std::endl;
				return ;
			}
			else
				it--; 
			result = it->second * toDouble(value);
			std::cout
			<< date
			<< " => "
			<< value
			<< " = "
			<< result
			<< std::endl;
		}
	}
}