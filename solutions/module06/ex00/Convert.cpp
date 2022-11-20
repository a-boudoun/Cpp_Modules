/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:33:35 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/20 18:57:42 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Convert.hpp"

Convert::Convert()
	:_input(""), _i(0), _f(0.0), _d(0.0), _c(0)
{
	std::cout<<"Default constructor called"<<std::endl;
}

Convert::Convert(std::string input)
	:_input(input), _i(0), _f(0.0), _d(0.0), _c(0)
{
	std::cout<<"Constructor called"<<std::endl;
}

Convert::Convert(Convert const & src)
	:_input(src._input)
{
	std::cout<<"Copy constructor called"<<std::endl;
}

Convert::~Convert()
{
	std::cout << "Destructor called" << std::endl;
}

Convert & Convert::operator=(Convert const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		_input = rhs._input;
	return (*this);
}
 /************************** Getters **********************************/

// std::string Convert::getInput() const
// {
// 	return (_input);
// }

// int Convert::getI() const
// {
// 	return (_i);
// }

// float Convert::getF() const
// {
// 	return (_f);
// }

// double Convert::getD() const
// {
// 	return (_d);
// }

// char Convert::getC() const
// {
// 	return (_c);
// }

/*********************** Check types *********************************/

bool Convert::isChar()
{
	if (_input.length() == 1 && isprint(_input[0]) && !isdigit(_input[0]))
	{
		this->_c = _input[0];
		return (true);
	}
	return (false);
}

bool Convert::isInt()
{
	if (_input.length() == 1 && isdigit(_input[0]))
	{
		this->_i = std::stoi(_input);
		return (true);
	}

	for (size_t i = 0; i < _input.length(); i++)
	{
		if (i == 0 && (_input[i] == '-' || _input[i] == '+'))
			continue;
		if (!isdigit(_input[i]))
			return (false);
	}
	this->_i = std::stoi(_input);
	return (true);
}

bool Convert::isDouble()
{
	bool dot = false;

	if (_input == "-inf" || _input == "+inf" || _input == "nan")
	{
		this->_d = std::stod(_input);
		return (true);
	}
	for (size_t i = 0; i < _input.length(); i++)
	{
		if (i == 0 && (_input[i] == '-' || _input[i] == '+'))
			continue;
		if (_input[i] == '.')
		{
			if (dot)
				return (false);
			dot = true;
			continue;
		}
		if (!isdigit(_input[i]))
			return (false);
	}
	if (dot)
	{
		this->_d = std::stod(_input);
		return (true);
	}
	return (false);
}

bool Convert::isFloat()
{
	bool f = false;

	if (_input == "-inff" || _input == "+inff" || _input == "nanf")
		return true;
	if (!isDouble())
		return (false);
	for (size_t i = 0; i < _input.length(); i++)
	{
		if (_input[i] == 'f')
		{
			if (f)
				return (false);
			f = true;
			continue;
		}
	}
	if (f)
	{
		this->_f = std::stof(_input);
		return (true);
	}
	return (false);
}

bool Convert::isNanInf()
{

		return true;
	return false;
}

bool Convert::validInput()
{
	if (isChar() || isInt() || isFloat() || isDouble())
		return (true);
	return (false);
}

/*********************** Convert types *********************************/

void	Convert::toChar() const
{
	if (isNanInf())
	{
		std::cout << "char: impossible" << std::endl;
		return;
	}
	if (isChar())
		std::cout << "char: '" << _c << "'" << std::endl;
	else if (isInt())
	{
		if (_i >= 0 && _i <= 127)
			std::cout << "char: '" << static_cast<char>(_i) << "'" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}
	else if (isFloat())
	{
		if (_f >= 0 && _f <= 127)
			std::cout << "char: '" << static_cast<char>(_f) << "'" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}
	else if (isDouble())
	{
		if (_d >= 0 && _d <= 127)
			std::cout << "char: '" << static_cast<char>(_d) << "'" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}
}
