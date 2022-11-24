/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:57:53 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/24 15:30:11 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _n(6) {}

Span::Span(unsigned int n): _n(n) {}

Span::Span(Span const &src)
{
	*this = src;
}

Span::~Span() {}

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_n = rhs._n;
		this->_numbers = rhs._numbers;
	}
	return (*this);
}

const char* Span::FullSpan::what() const throw()
{
	return ("The span is full");
}

const char* Span::NoSpan::what() const throw()
{
	return ("No span can be found");
}

void Span::addNumber(int n)
{
	if (this->_numbers.size() < this->_n)
		this->_numbers.push_back(n);
	else
		throw Span::FullSpan();
}

int Span::shortestSpan()
{
	if (_numbers.size() < 2)
		throw Span::NoSpan();
	std::sort(_numbers.begin(), _numbers.end());
	int shortest = _numbers[1] - _numbers[0];
	for (unsigned int i = 1; i < _numbers.size() - 1; i++)
	{
		if (_numbers[i + 1] - _numbers[i] < shortest)
			shortest = _numbers[i + 1] - _numbers[i];
	}
	return (shortest);
}

int Span::longestSpan()
{
	if (_numbers.size() < 2)
		throw Span::NoSpan();
	std::sort(_numbers.begin(), _numbers.end());
	int longest = _numbers[_numbers.size() - 1] - _numbers[0];
	return (longest);
}
