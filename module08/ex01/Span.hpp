/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:57:55 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/24 16:59:25 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

class Span
{
	private:
		unsigned int	 _n;
		std::vector<int> _numbers;
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &src);
		~Span();
		Span &operator=(Span const &rhs);
		void addNumber(int n);
		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();

		class FullSpan : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class NoSpan : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
