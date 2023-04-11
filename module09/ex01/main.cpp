/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:23:20 by aboudoun          #+#    #+#             */
/*   Updated: 2023/04/11 21:33:00 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./RPN \"expression\"" << std::endl;
		return (1);
	}
	RPN rpn(av[1]);
	try{
		rpn.parsLine();
	}catch(const std::exception& e){
		std::cerr << "Error" << std::endl;
	}
	
}