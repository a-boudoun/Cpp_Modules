/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 23:34:17 by aboudoun          #+#    #+#             */
/*   Updated: 2023/09/20 19:34:55 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : _stack(), _str(), _oper(), _first(0), _second(0), _result(0)
{}

RPN::RPN(RPN const &rhs) 
{
	*this = rhs;
}

RPN::RPN(std::string const &str) : _stack(), _str(str), _oper(), _first(0), _second(0), _result(0)
{}

RPN &RPN::operator=(RPN const &rhs)
{
	if (this != &rhs)
	{
		this -> _stack = rhs._stack;
		this -> _str = rhs._str;
		this -> _oper = rhs._oper;
		this -> _first = rhs._first;
		this -> _second = rhs._second;
		this -> _result = rhs._result;
	}
	return (*this);
}

RPN::~RPN()
{}

bool	checkDigit(const std::string&	str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}


static int toInt(std::string const &str)
{
	int result;
	std::stringstream ss(str);

	if (!checkDigit(str))
		throw std::exception();
	ss >> result;
	return (result);
}

void	RPN::calculResult()
{
	this->_second = this->_stack.top();
	this->_stack.pop();
	this->_first = this->_stack.top();
	this->_stack.pop();
	if (this->_oper == "+")
		this->_result = this->_first + this->_second;
	else if (this->_oper == "-")
		this->_result = this->_first - this->_second;
	else if (this->_oper == "*")
		this->_result = this->_first * this->_second;
	else if (this->_second == 0)
		throw std::exception();
	else
		this->_result = this->_first / this->_second;
	this->_stack.push(this->_result);
}

void	RPN::parsLine()
{
	std::stringstream	ss(this->_str);
	std::string			tmp;
	
	if (ss.str().size() < 3)
		throw std::exception();
	while (ss >> tmp)
	{
		if (tmp == "+" || tmp == "*" || tmp == "-" || tmp == "/")
		{
			if (this->_stack.size() < 2)
				throw std::exception();
			this->_oper = tmp;
			this->calculResult();
		}
		else if (toInt(tmp) >= 0 && toInt(tmp) <= 9)
			this->_stack.push(toInt(tmp));
		else
			throw std::exception();
	}
	if (this->_stack.size() != 1)
		throw std::exception();
	std::cout << this->_result << std::endl;
}
