/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:57:50 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/24 15:43:02 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	Span sp = Span(5);
	sp.addNumber(1);
	sp.addNumber(5);
	sp.addNumber(6);
	sp.addNumber(7);
	sp.addNumber(9);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout<<"\n/******************* 10 000 Test ************************/\n"<<std::endl;


	Span sp2 = Span(10000);
	srand(time(NULL));
	for (int i = 0; i < 10000; i++)
		sp2.addNumber(rand() % 10000);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	return 0;
}
