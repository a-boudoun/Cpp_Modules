/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:33:41 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/20 16:26:39 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(char **av, int ac)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert [value]" << std::endl;
		return (1);
	}

	Convert convert(av[1]);
	if (!convert.validInput())
	{
		std::cout << "Invalid input" << std::endl;
		return (1);
	}
	convert.toChar();
	convert.toInt();
	convert.toFloat();
	convert.toDouble();

	return (0);
}
