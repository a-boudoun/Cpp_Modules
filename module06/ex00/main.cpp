/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:33:41 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/21 14:57:18 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
class B;
class D : public B;
B* pb; => what (D*)pb?

with static_cast:
Assume that the B* points to a B that is part of a D object; don't bother
performing a check. Adjust the address of the pointer if necessary so that
it will point to the D object.
*/

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
	try{

		if (!convert.validInput())
		{
			std::cout << "Invalid input" << std::endl;
			return (1);
		}
		convert.cast();
		convert.display();
	}catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
