/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:33:55 by aboudoun          #+#    #+#             */
/*   Updated: 2023/04/10 02:27:43 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <time.h>
#include <map>
#include <iterator>
class BitcoinExchange
{
	private:
		std::string						_file;
		std::map<std::string, double> _price;
	public:
		BitcoinExchange();
		BitcoinExchange(std::string file);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &rhs);

		void	setDatabse();
		void	getResult();
		void	checkData(const std::string& line);
};

double	toDouble(std::string str);
