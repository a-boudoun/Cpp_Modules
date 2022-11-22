/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:32:47 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/22 13:32:48 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"

void printInt(int &i)
{
	std::cout<< i <<std::endl;
}

void printStr(std::string const &s)
{
	std::cout<< s <<std::endl;
}

int main()
{
	int i[6] = {1, 2, 3, 4, 5, 6};
	::iter(i, 6, printInt);

	std::string str[4] = {
		"one",
		"two",
		"three",
		"four"
	};
	::iter(str, 4, printStr);

}
