/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:33:55 by aboudoun          #+#    #+#             */
/*   Updated: 2023/04/09 02:11:47 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <iterator>

class BitcoinExchange
{
	private:
		std::map<std::string, double> _price;
	public:
		BitcoinExchange();
		BitcoinExchange(std::string file);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &rhs);

		void	setDatabse();
};
