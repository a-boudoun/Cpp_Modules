/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:57:50 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/24 17:02:49 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	try
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
			sp2.addNumber(rand());
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;

		std::cout<<"\n/******************* 30 000 Test ************************/\n"<<std::endl;

		Span sp3 = Span(30000);
		for (int i = 0; i < 30000; i++)
			sp3.addNumber(rand());
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;

		std::cout<<"\n/******************* Range Test ************************/\n"<<std::endl;

		std::vector<int> v;
		for (int i = 0; i < 10000; i++)
			v.push_back(rand());
		Span sp4 = Span(10000);
		sp4.addRange(v.begin(), v.end());
		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
