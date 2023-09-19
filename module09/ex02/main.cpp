/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:41:17 by aboudoun          #+#    #+#             */
/*   Updated: 2023/09/19 15:37:52 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	std::vector<int> _inputVec;
	std::list<int> _inputLis;
	std::clock_t start;
	std::clock_t end;
	
	
	if (ac == 1)
	{
		std::cout << "Error: no arguments" << std::endl;
		return (1);
	}
	for (int i = 1; i < ac; i++)
	{
		try{
			parseArguments(av[i], _inputVec, _inputLis);
		}catch(const std::exception& e){
			std::cout << e.what() << std::endl;
			return (1);
		}
	}
	
	beforeAfterVec(_inputVec, "before");
	start = std::clock();
	_inputVec = sortVector(_inputVec);
	end = std::clock();
	beforeAfterVec(_inputVec, "after std::vector");
	std::cout << "Time to process a range of " << _inputVec.size() << " elements with std::vector : " << std::fixed << std::setprecision(20) << calculDuration(start, end) << "ms" << std::endl;
	
	beforeAfterLis(_inputLis, "before");
	start = std::clock();
	_inputLis = sortList(_inputLis);
	end = std::clock();
	beforeAfterLis(_inputLis, "after std::list");
	std::cout << "Time to process a range of " << _inputLis.size() << " elements with std::list : " << std::fixed << std::setprecision(20) << calculDuration(start, end) << "ms" << std::endl;
}