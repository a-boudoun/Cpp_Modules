/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:40:31 by aboudoun          #+#    #+#             */
/*   Updated: 2023/09/18 14:47:36 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void parseArguments(char *av, std::vector<int> &_vec)
{
	std::stringstream ss(av);
	int tmp;

	while (!ss.eof()){
		ss >> tmp;
		if (ss.fail() || tmp < 0)
			throw std::invalid_argument("Error: invalid argument");
		_vec.push_back(tmp);
	}
}

void sortUnorderedMap(std::vector<int> &_vec)
{
	std::cout << "sortUnorderedMap" << std::endl;
	for (size_t i = 0; i < _vec.size(); i++)
		std::cout << _vec[i] << std::endl;
}