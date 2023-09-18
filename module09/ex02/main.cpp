/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:41:17 by aboudoun          #+#    #+#             */
/*   Updated: 2023/09/18 14:46:46 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	std::vector<int> _vec;
	if (ac == 1)
	{
		std::cout << "Error: no arguments" << std::endl;
		return (1);
	}
	else {
		for (int i = 1; i < ac; i++)
		{
			try{
				parseArguments(av[i], _vec);	
			}catch(const std::exception& e){
				std::cerr << e.what() << std::endl;
				return (1);
			}
		}
		sortUnorderedMap(_vec);
	}
}