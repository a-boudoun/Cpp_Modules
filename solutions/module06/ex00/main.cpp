/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:33:41 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/20 22:53:00 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert [value]" << std::endl;
		return (1);
	}

	Convert convert(av[1]);
	if (convert.isNanInf())
		return (0);
	if (!convert.validInput())
	{
		std::cout << "Invalid input" << std::endl;
		return (1);
	}
	convert.cast();
	convert.display();

	return (0);
}
