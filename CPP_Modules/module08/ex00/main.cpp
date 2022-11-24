/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:57:42 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/24 12:15:00 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
	try
	{
		std::vector<int> numbers;
		for (int i = 0; i < 10; i++) {
			numbers.push_back(i);
		}
		easyfind(numbers, 5);
		easyfind(numbers, 20);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
